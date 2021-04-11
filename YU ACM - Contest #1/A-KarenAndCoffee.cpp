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

const int N = 2e5 + 10;
int cs[N];

int main(){ fastIO;
    int n, k, q, l, r;
    cin>>n>>k>>q;
    for(int i=0;i<n;i++){
        cin >> l >> r;
        cs[l]++;
        cs[r+1]--;
    }
    for(int i=1;i<=(int)(2e5);i++){
        cs[i] += cs[i-1];
    }
    for(int i=1;i<=(int)(2e5);i++){
        cs[i] = (cs[i] >= k);
        cs[i] += cs[i-1];
    }
    for(int i=0;i<q;i++){
        cin>> l >> r;
        cout << cs[r] - cs[l-1] << "\n";
    }
    return 0;
}
