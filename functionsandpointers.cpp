#include<iostream>
using namespace std;
// void multiplyBy(int &, int);
int * multiplyBy (int *, int);
void multiplyArrayBy(int *, int);
main(){
    int a = 10;
    int *b = multiplyBy(&a, 5);
    *b = 55;
    cout << a << endl;
    cout << *b << endl;
    // ------------------------ //
    int array[10];
    for(int i = 0; i < 10; i++){
        array[i] = i;
    }
    multiplyArrayBy( array, 5);
    for(int i = 0; i < 10; i++){
        cout << "array [" << i << "] = " << array[i] << endl;
    }

}
int * multiplyBy(int * var, int amount){
    //int * var = &a;
    *var = *var * amount;
    return var;
}
void multiplyArrayBy(int *array, int amount){
    for(int i = 0; i < 10; i++){
        array[i] = array[i] * amount;
    }
}