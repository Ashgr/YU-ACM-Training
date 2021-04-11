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

ll bten(int arr[],int size,int base){
    ll ret = 0;
    for(int i=size-1;i>-1;i--){
        ret += (ll)(pow(base,size-i-1)) * arr[i];
    }
    return ret;
}

int main(){ fastIO;
    int n,m,bx,by;

    cin>>n>>bx;
    int xdig[n];
    for(int i = 0;i<n;i++)
        cin>>xdig[i];
    cin>>m>>by;
    int ydig[m];
    for(int i=0;i<m;i++)
        cin>>ydig[i];

    ll X = bten(xdig,n,bx);
    ll Y = bten(ydig,m,by);

    if(X>Y) cout<<'>';
    else if(X<Y) cout<<'<';
    else cout<<'=';

    return 0;
}
