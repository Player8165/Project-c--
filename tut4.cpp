#include<iostream>
using namespace std;
// int c=30;
int main()
{
    int a, b, c;
    cout << "Enter the value of a " << "\n";
    cin >> a;
    cout << "Enter the value of b " << "\n";
    cin >> b;
    c=a+b;
    cout << "The sum is " << c <<"\n";
    // cout << "The global c is " <<::c; 

    // ***************reference variables****************** 

    float x = 455;
    float & y = x;
    cout << x << endl;
    cout << y << endl;

    // ***************Typecasting****************
    int g = 34;
    float h=23.80;
    cout << "The value of a is " << (float)g <<endl;
    cout << "The value of a is " << float(g) <<endl;
    cout << "The value of b is " << (int)h <<endl; 
    cout << "The value of b is " << int(h) <<endl; 
    return 0;
}