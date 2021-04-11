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

int main(){ fastIO;
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int> Mp;
    for(int i=1;i<s.size();i++){
        string sbstr = s.substr(i-1,2);
        Mp[sbstr]++;
    }
    string ans;int c = -1e9;
    for(auto& [key,val] : Mp){
        if(val > c){c = val;ans = key;}
    }
    cout<<ans<<"\n";
    return 0;
}
