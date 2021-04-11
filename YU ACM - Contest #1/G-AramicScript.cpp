#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define ms0(x) memset(x,0,sizeof x)
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
#define pq priority_queue
#define MOD (ll)(1e6 + 3)
typedef long long ll;
using namespace std;

string clean(string s){
    int ar[26] = {0};
    for(int i = 0 ;i <s.size();i++){
        ar[s[i]-'a']++;
    }
    string ret = "";
    for(int i=0;i<26;i++){
        if(ar[i])
            ret+= 'a'+i;
    }
    return ret;
}

int main(){ fastIO;
    int n;
    string s;
    cin>>n;
    set<string> st;
    for(int i=0;i<n;i++){
        cin>>s;
        string temp = clean(s);
        sort(all(temp));
        st.insert(temp);
    }
    cout<<st.size();
    return 0;
}
