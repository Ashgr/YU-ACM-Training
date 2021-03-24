#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int T = 0 ;T<t ;T++){
        int n;
        cin>>n;
        int A[n];
        int B[n];
        for(int i = 0 ; i<n ; i++){
            int x;
            cin>>x;
            A[i] = x;
        }
        int cnt_one = 0;
        for(int i = 0 ; i<n ; i++){
            int x;
            cin>>x;
            B[i] = x;
            if(B[i] == 1)cnt_one++;
        }
        bool is_sorted = true;
    /*    A[5] = A[4]
        print(A[6])*/

        for(int i = 0 ; i<n-1 ; i++){
            if(A[i] > A[i+1]){
                is_sorted = false;
                break;
            }
        }
        // 0 0 0 0 , n = 4
        if((cnt_one < n && cnt_one >= 1) || is_sorted){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
