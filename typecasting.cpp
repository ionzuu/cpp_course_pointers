#include<iostream>
using namespace std;
// Type casting
main(){
    double var = 5.6;
    int a = 1;
    int b = 2;
    cout << (double)a / b << endl;
    cout << (int)var << endl; // explicit way
    int x = 1234567891;
    short y = x; // implicit way of casting
    cout << y << endl;
    cout << int(var) << endl;
    cout<< static_cast<int>(var) << endl;
    char ch = 'k';
    cout << ch << endl;
    cout << (int)ch << endl;
    char ch2;
    cin >> ch2;
    cout << ch2 << endl;
    cout << (int)ch2 << endl;
}