#include<iostream>
#include<vector>
using namespace std;

int main(){
    int i,n;
    cin >> n;
    vector<int> a(n);

    for(i=0;i<n;i++){
        cin >> a[i];
    }
    
    int ans=0;

    for(i=0;i<n;i++){
        ans = ans + a[i];
    }

    cout << "Ans : " << ans << endl;

    return 0;
}