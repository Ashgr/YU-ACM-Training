#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int A[n];
    for(int i = 0 ; i<n ; i++){
        cin>>A[i];
    }
    int ans = 0;
    for(int i = 0 ; i<n ; i++){
        int x = A[i];
        int index = i;
        int counter = 0;
        // seee left points
        while(A[index]>=A[index-1] && index>=1){
            index--;
            counter++;
        }
        // see right points
        index = i;
        while(A[index]>=A[index+1] && index<n-1){
            index++;
            counter++;
        }
        counter++;
        if(counter > ans){
            ans = counter;
        }
    }
    cout<<ans;
}
