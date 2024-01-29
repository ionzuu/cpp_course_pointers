#include<iostream>
using namespace std;

main(){
    int a[3];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    short int zm;
    cout << a << endl;
    int * const p = &a[0];
    cout << &a[0] << endl;
    cout << &a[1] << endl;
    cout << &a[2] << endl;
    cout << &a[3] << endl;
    cout << p << endl;
    cout << endl;
    cout << a << endl;
    cout << a + 1 << endl;
    cout << a + 2 << endl;
    cout << a + 3 << endl;
    cout << endl;
    cout << *a << endl;
    cout << *(a + 1) << endl;
    cout << *(a + 2) << endl;
    cout << endl;
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    int * p2 = &a[0];
    cout << *p2 << endl;
    cout << ++*p2 << endl;
    cout << *++p2 << endl;
    cout << *p2++ << endl;
    cout << *p2 << endl;
}