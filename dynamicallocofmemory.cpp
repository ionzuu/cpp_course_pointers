#include <iostream>
using namespace std;
main(){
        /*
        int *p = new int;
        *p = 5;
        cout << *p << endl;
        delete p;
        p = NULL;
        if(p != NULL){
            *p = 10;
            cout << *p << endl;
        */
    int amount;
    cout << "How many numbers would you like to store in an array?: ";
    cin >> amount;
    int *p = new (nothrow) int[amount];
    if(p != NULL){
        for(int i = 0; i < amount; i++){
            cout << "Enter the " << (i+1) << " number: ";
            cin >> p[i];
        }
        for(int i = 0; i < amount; i++){
            cout << "p [ " << i << " ] =  " << p[i] << endl;
        }
    }
    else{
        cout << "Not enough memory " << endl;
    }
    
delete []p;
}