#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Node
{
public:
    string key;
    int val;
    Node *next;
    // Constructor
    Node(string key, int val)
    {
        this->key = key;
        this->val = val;
        next = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};
class HashTable
{

    int totSize;
    int currSize;
    Node **table;

    int hashFucntion(string key)
    {
        int idx = 0;

        for (int i = 0; i < key.size(); i++)
        {
            idx = (idx + (key[i] * key[i])) % totSize; // We are preventing overflow here.
        }
        return idx % totSize;
    }
    void rehash() // O(n)
    {
        Node **oldTable = table;
        int oldsize = totSize;
        totSize = 2 * totSize;
        currSize = 0;
        table = new Node *[totSize];

        for (int i = 0; i < totSize; i++)
        {
            table[i] = NULL;
        }
        // Copy old values.
        for (int i = 0; i < oldsize; i++)
        {
            Node *temp = oldTable[i];
            while (temp != NULL)
            {
                insert(temp->key, temp->val);
                temp = temp->next;
            }
            if (oldTable[i] != NULL)
            {
                delete oldTable[i];
            }
        }
        delete[] oldTable;
    }

public:
    HashTable(int size = 5)
    {
        totSize = 5;
        currSize = 0;

        table = new Node *[totSize];
        for (int i = 0; i < totSize; i++)
        {
            table[i] = NULL;
        }
    }
    void insert(string key, int val) // Average Case-O(1)
    {
        int idx = hashFucntion(key);

        Node *newNode = new Node(key, val);
        newNode->next = table[idx];
        table[idx] = newNode;

        currSize++;
        // Rehashing
        double lambda = currSize / (double)totSize;
        if (lambda > 1)
        {
            rehash(); // Worst case complexity of insertion is O(n).
        }
    }
    bool exists(string key)
    {
        int idx = hashFucntion(key);
        Node *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    int search(string key)
    {
        int idx = hashFucntion(key);
        Node *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                return temp->val;
            }
            temp = temp->next;
        }
        return -1;
    }
    void print() // 
    {
        for (int i = 0; i < totSize; i++)
        {
            cout << "idx" << i << "->";
            Node *temp = table[i];
            while (temp != NULL)
            {
                cout << "(" << temp->key << "," << temp->val << ")" << "->";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    // Remove Operation
    void remove(string key)
    {
        int idx = hashFucntion(key);
        Node *temp = table[idx];
        Node *prev = temp;
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                if (prev == temp)
                {
                    table[idx] = temp->next;
                }
                else
                    prev->next = temp->next;
            }
            prev = temp;
            temp = temp->next;
        }
    }
};
int main()
{
    HashTable ht;
    ht.insert("India", 150);
    ht.insert("China", 150);
    ht.insert("US", 50);
    ht.insert("Nepal", 10);
    ht.insert("UK", 20);

    if (ht.exists("can"))
    {
        cout << "India Population:" << ht.search("India") << endl;
    }

    ht.print();
    ht.remove("India");
    ht.print();

    return 0;
}