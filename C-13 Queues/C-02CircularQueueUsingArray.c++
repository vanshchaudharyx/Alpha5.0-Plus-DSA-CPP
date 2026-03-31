#include <iostream>
using namespace std;
class Queue
{
public:
     int *arr;
     int capacity;
     int currSize;
     int f, r; // f-front ,r-rear.
public:
     Queue(int capacity)
     {
          this->capacity = capacity;
          arr = new int[capacity];
          currSize = 0;
          f = 0; // We initalize this from 1 because if we only push elements the it remains same at -1th position that cause error while using front.
          r = -1;
     }
     void push(int data)
     {
          if (currSize == capacity)
          {
               cout << "queue is full";
               return;
          }
          r = (r + 1) % capacity;
          arr[r] = data;
          currSize++;
     }
     void pop()
     {
          if (empty())
          {
               cout << "queue is empty";
               return;
          }
          f = (f + 1) % capacity;
          currSize--;
     }
     int front()
     {
          if (empty())
          {
               cout << "queue is empty";
               return -1;
          }

          return arr[f];
     }
     bool empty()
     {
          return currSize == 0;
     }
};
int main()
{
     Queue q(4);
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
     cout << q.front() << endl;
     q.pop();
     cout << q.front() << endl;
     q.pop();
     cout << q.front() << endl;
     q.pop();
     cout << q.front() << endl;
     q.pop();

     return 0;
}