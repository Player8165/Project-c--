#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // int a = 34;
    // cout << "The value of a was " << a;
    // a = 45;
    // cout << "The value of a is " << a; 
    // return 0;

    int a = 3, b = 78, c = 8169;
    cout << "The value of a without setw is: " << a << "\n";
    cout << "The value of b without setw is: " << b << "\n";
    cout << "The value of c without setw is: " << c << "\n";

    cout << "The value of a with setw is: " << setw(4) << a << "\n";
    cout << "The value of b with setw is: " << setw(4) << b << "\n";
    cout << "The value of c with setw is: " << setw(4) << c << "\n";
}