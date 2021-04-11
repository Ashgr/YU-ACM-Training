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

const int N = 1e5 + 10;
int a[N],cs[N];
int n,ans;

int main(){ fastIO;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        cs[i] = cs[i-1] + a[i];
    }

    for(int i=1;i<=n-1;i++){
        int seg1 = cs[i];
        int seg2 = cs[n] - cs[i];
        if(seg1 == seg2)
            ans++;
    }

    cout << ans << "\n";
    return 0;
}
