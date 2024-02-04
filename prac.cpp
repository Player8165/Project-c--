#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter 1 for Add, 2 for Sub, 3 for Mul, 4 for Div: ";
    cin >> n;
    switch(n){
        case 1:
            cout << a+b ;
            break;
        
        case 2:
            cout << a-b ;
            break;

        case 3:
            cout << a*b ;
            break;

        case 4:
            cout << a/b ;
            break;

        default:
            cout << "Enter integers";
            break;
    }
    return 0;
}