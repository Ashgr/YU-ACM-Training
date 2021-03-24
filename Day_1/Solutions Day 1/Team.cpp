#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int answer = 0;
    for(int i = 0 ; i<n ; i++){
        int counter = 0; // count the number of who can solve
        int a , b,c;
        cin>>a>>b>>c;
        if(a == 1){
            counter++;
        }
        if(b == 1){
            counter++;
        }
        if(c == 1){
            counter++;
        }
        if(counter >= 2){
            answer++;
        }
    }
    cout<<answer;
}
