#include<iostream>
using namespace std;

int main(){
    int i,n;

    cin >> n;
    cout << endl;

    int a[n];

    for(i=0;i<n;i++){
        cin >> a[i];
    }

    int min = a[0],max = a[0];

    for(i=0;i<n;i++){
        if(min > a[i]){
            min = a[i];
        }
        else if(max < a[i]){
            max = a[i];
        }
    }

    cout << "min : max = " << min << " : " << max << endl;
}