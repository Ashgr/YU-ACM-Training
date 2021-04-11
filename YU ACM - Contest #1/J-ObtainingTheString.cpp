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
    int n;cin>>n;
    string s,t;
    cin>>s>>t;
    vector<int> ans;
    int f1[26] = {0},f2[26] = {0};
    for(int i=0;i<n;i++){f1[s[i]-'a']++;f2[t[i]-'a']++;}
    for(int i=0;i<26;i++)
        if(f1[i]!=f2[i])
            return cout<<-1, 0;
    for(int i=0;i<n;i++){
        if(s[i]==t[i])continue;
        int next = -5;
        for(int j=i+1;j<n;j++)
            if(s[j] == t[i]){
                next = j;
                break;
            }
        for(int j = next - 1; j >= i; --j){
            swap(s[j],s[j+1]);
            ans.pb(j);
        }
    }
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++){
        cout<< ans[i] + 1 <<" ";
    }
    return 0;
}
