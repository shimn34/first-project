#include<iostream>
using namespace std;

int main(){
    int i;

    for(i=1;i<=100;i++){
        if(i%15==0){
            cout << i << " : FizzBuzz\n";
        }
        else{
            if(i%3==0){
                cout << i << " : Fizz\n";
            }
            else if(i%5==0){
                cout << i << " : Buzz\n";
            }
            else{
                cout << i << endl;
            }
        }
    }

    return 0;
}