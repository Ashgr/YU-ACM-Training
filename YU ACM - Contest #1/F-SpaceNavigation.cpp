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

void test_case(){
    int x,y;
    string s;
    cin>>x>>y;
    cin>>s;
    int u = 0,d = 0,l = 0,r = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'U')u++;
        else if(s[i]=='D')d++;
        else if(s[i]=='R')r++;
        else if(s[i]=='L')l++;
    }
    bool flag = false;

    if ( (x>=0 && y>=0) && (r >= x && u >= y) )
        flag = true;
    else if( (x>=0 && y<=0) && (r>=x && d>=abs(y)) )
        flag = true;
    else if( (x<=0 && y>=0) && (l>=abs(x) && u>=y) )
        flag = true;
    else if( (x<=0 && y<=0) && (l>=abs(x) && d>=abs(y)) )
        flag = true;

    if(flag) cout << "YES\n";
    else cout << "NO\n";
}

int main(){ fastIO;
    int t;
    cin>>t;
    while(t--)
        test_case();
    return 0;
}
