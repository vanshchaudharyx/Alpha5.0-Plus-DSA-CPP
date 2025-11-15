#include <iostream>
#include <string>

using namespace std;
class A
{
    string secret = "secret data";
    friend class B;                   // Becomes a friend class of A.
    friend void revealSecret(A &obj); // Becomes a funtion class of A.
};
class B
{
public:
    void showSecret(A &obj)
    {
        cout << obj.secret << endl;
    }
};
void revealSecret(A &obj)
{
    cout << obj.secret << endl;
}  
int main()
{
    A a1;
    B b1;
    b1.showSecret(a1); // We can call b class func by passing an a class object.
    revealSecret(a1);
    return 0;
}