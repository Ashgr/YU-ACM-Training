#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        A[i] = x;
    }
    sort(A,A+n);
    for(int i = 0 ; i<n ; i++){
        cout<<A[i]<<" ";
    }
}
