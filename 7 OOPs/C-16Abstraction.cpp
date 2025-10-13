#include <iostream>

using namespace std;
// Abstract class.
class shape
{
public:
    // If functions do not have clear definition that funcn called pure.v.funcn.
    virtual void draw() = 0; // abst function/pure virtual function.
};
class circle : public shape
{
public:
    void draw()
    {
        cout << "Draw Circle" << endl;
    }
};
class square : public shape
{
public:
    void draw()
    {
        cout << "Draw Square";
    }
};

int main()
{
    circle c1;
    c1.draw();
    square s1;
    s1.draw();
    
    return 0;
}