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
    int n,m;
    cin>>n>>m;
    if(n == 1 && m==10){
        cout << -1;
    } else if(m == 10){
        cout << 1;
        for(int i=0;i<n-1;i++)
            cout << 0;
    } else {
        for(int i=0;i<n;i++)
            cout<<m;
    }
    return 0;
}
