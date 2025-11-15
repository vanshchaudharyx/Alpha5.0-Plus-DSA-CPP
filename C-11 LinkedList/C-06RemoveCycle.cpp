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

void removeCycle(Node *head)
{
    // Step 1 To detect Cycle.
    Node *slow = head;
    Node *fast = head;
    bool isCycle = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "Cycle Exists\n";
            isCycle = true;
            break;
        }
    }
    if (!isCycle)
    {
        cout << "Cycle doesn't exists\n";
        return;
    }
    // Step 2 To remove a cycle.
    slow = head;
    if (slow == fast) // Special Case if complete cycle exists.
    {
        while (fast->next != slow)
        {
            fast = fast->next;
        }
        fast->next = NULL;
    }
    else
    {
        Node *prev = fast;
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
            prev = fast;
        }
        prev->next = NULL;
    }
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
    removeCycle(ll.head);
    ll.printlist();

    return 0;
}
