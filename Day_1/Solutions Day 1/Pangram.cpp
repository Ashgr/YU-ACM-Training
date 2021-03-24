#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i= 0 ; i<n ; i++){
        s[i] = tolower(s[i]);
    }
    if(n<26){
        cout<<"NO";
    }  
    else{
        set<char> my_set;
        for(int i = 0 ;i<n ; i++){
            // my_set.add(...)
            my_set.insert(s[i]);
        }

        if(my_set.size() == 26){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}
