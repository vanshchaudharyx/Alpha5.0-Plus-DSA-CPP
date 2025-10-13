#include <iostream>
using namespace std;

class example
{
public:
    static int x;
};
int example::x = 0;
int main()
{

    example e1;
    example e2;
    example e3;
    cout << e1.x++ << endl;
    cout << e2.x++ << endl;
    cout << e3.x++ << endl;

       return 0;  
}