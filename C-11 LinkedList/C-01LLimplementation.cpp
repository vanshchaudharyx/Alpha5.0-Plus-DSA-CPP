#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int val)
    {
        data = val;
        next = NULL;
    }
    ~Node()

    {
        cout << "destructor of node\n"
             << data << endl;

        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
class List
{
    Node *head;
    Node *tail;

public:
    ~List()
    {
        cout << "destructor of list \n";

        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val); // Dyanamic Allocation.
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head; // newNode.next
            head = newNode;
        }
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_front()
    {

        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back()
    {

        Node *temp = head;
        while (temp->next != tail) // We also use while (temop->next->next!=null).
        {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    // Insert in middle.
    void insert(int val, int position)
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        for (int i = 0; i < position - 1; i++)
        {
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "Invalid Position";
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    } // Function to print List
    void printlist()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "Null" << endl;
    }
    // Iterative Search in List.
    int searchItr(int key)
    {
        Node *temp = head;
        int idx = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
};

// This is the basic structure of a Linkedlist in C++.
int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);
    ll.insert(6, 2);
    ll.printlist();
    ll.pop_back();
    ll.printlist();
    cout << "Index is " << ll.searchItr(6); // return 2.

    return 0;
}
