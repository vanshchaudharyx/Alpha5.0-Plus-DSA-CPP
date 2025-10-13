#include <iostream>

using namespace std;
int isEven(int n) {
    if (n % 2 == 0) {
        return 1; // Return 1 if n is even
    } else {
        return 0; // Return 0 if n is odd
    }
}

int main() {
    cout<<"Enter a number: ";
    int n;
    cin >> n; 
    isEven(n);
    if (isEven(n)==1) {
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
    }

    
    return 0;
}