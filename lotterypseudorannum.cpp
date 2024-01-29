#include<iostream>
using namespace std;
// Lottery - pseudo-random numbers generator - drawing numbers
void lottery(int, int);
main(){
    cout << time(NULL) << endl;
    srand(time(NULL)); // s(seed)rand
    int nr = rand();
    cout << nr << endl;
    nr = rand();
    cout << nr << endl;
    nr = rand();
    cout << nr << endl;
    lottery(49, 6);
}
void lottery(int total_balls, int balls_to_draw){
    if(total_balls < balls_to_draw)
        return;
        
        srand(time(NULL));
        int *balls = new int[balls_to_draw];
        for(int i = 0; i < balls_to_draw; i++){
            balls[i] = rand() % total_balls + 1;
            cout << balls[i] << endl;
            for( int j = 0; j < i+1; j++){
                if(balls[i] == balls[j] && i != j){ // is balls[0] == balls[0]
                    i--;
                    break;
                }
                else if ( j == i){
                    cout << balls[i] << endl;
                }
            }
        }
        delete[] balls;
}