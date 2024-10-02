#include <iostream>
using namespace std;
    int main() {
    int a, b, temp;
    cout << "Please enter two numbers: ";
    cin >> a >> b;
    cout << "The numbers you entered were a = " << a << " and b = " << b << "." << endl;

    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "After swapping, a = " << a << " and b = " << b << "." << endl;

    return 0;
}
