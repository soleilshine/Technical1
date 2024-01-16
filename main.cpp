
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char op;
    int a, b, c, result;
    
    cout <<"Enter the operation (+, -, *, /, %, ^): ";
    cin >> op;
    
    cout << "Enter the two numbers ";
    cin >> a >> b;
    
    switch (op) {
        case '+':
             result = a + b;
             cout << "Sum of " << a << " and " << b << " is: " << result << endl;
             break;
        case '-':
             result = a - b;
             cout << "Difference of " << a << " and " << b << " is: " << result << endl;
             break;
        case '*':
             result = a * b;
             cout << "Product of " << a << " and " << b << " is: " << result << endl;
             break;
        case '/':
            if (b != 0) {
                c = a / b;
               cout << "Division of " << a << " by " << b << " is: " << c << endl;
           } else {
               cout << "Cannot divide by zero." << endl;
           }
           break;
        case '%':
            if (b != 0) {
                result = a % b;
                cout << "Modulo of " << a << " and " << b << " is: " << result << endl;
            } else {
                cout << "Cannot calculate modulo with zero." << endl;
            }
            break;
        case '^':
             result = pow(a, b);
             cout << a << " raised to the power of " << b << " is: " << result << endl;
             break;
        default:
             cout << "Invalid operation." << endl;
        
    }

    return 0;
}
