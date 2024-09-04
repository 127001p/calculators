#include <complex>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x , y ;
    char op;
    cout << "Enter the x :";
    cin >> x ;
    cout << "Enter the y :";
    cin >> y ;
    cout << "Enter the operator :";
    cin >> op ;
    switch (op) {
        case '+':
            cout << "Sum :" << x + y << endl ;
            break;
        case '-':
            cout << "Difference :" << x - y << endl ;
            break;
        case '*':
            cout << "Product :" << x * y << endl ;
            break;
        case '/':
            cout << "Divide :" <<  x / y << endl ;
            break;
        case '^':
            cout << "Power x^Y :" << pow(x, y) << endl ;
            break;
        case '%':
            cout << "Reminder :" << x % y << endl ;
            break;
        default:
            cout << "Invalid Operator :" << op << endl ;
            break;
    }
    return 0;
}
