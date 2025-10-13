#include <iostream>

using namespace std;

int main()
{
int a=5;
int *aptr=&a;
int *aptr2=aptr+3; 
cout<<aptr2<<endl; 
cout<<aptr<<endl;
cout<<aptr2-aptr<<endl; // This will print the output how many elements are there between the two pointers
    return 0;
}