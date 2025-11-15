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
};
class List
{
public:
    Node *head;
    Node *tail;

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

    void pop_front()
    {

        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

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
};
// Function to detect a loop in List.
bool isCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next; //+2
        if (slow == fast)
        {
            cout << "Cycle exists\n";
            return true;
        }
    }
    cout << "Cycle does' nt exists\n";
    return false;
}
int main()
{
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // 1->2->3->4->1
    ll.tail->next = ll.head;
    isCycle(ll.head);

    return 0;
}
