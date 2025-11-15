#include <iostream>

using namespace std;
int sum(int a, int b) 
{
    int sum=a+b;
    return sum; 
    
}
int main() {
    int s=sum(5,6); //  5,6 are the arguments passed to the function sum.
    cout<<s<<endl; 
    return 0;
}