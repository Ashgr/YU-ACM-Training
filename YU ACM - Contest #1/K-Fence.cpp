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
    int n,k;
    cin>>n>>k;
    int p[n+5];
    p[0] = 0;
    for(int i=1;i<=n;i++){
        cin>>p[i];
        p[i] += p[i-1];
    }
    int heights = 1e9, index = 1;
    for(int i=k;i<=n;i++){
        if( p[i]-p[i-k] < heights ){
            index = i - k + 1;
            heights = p[i] - p[i-k];
        }
    }
    cout << index;
    return 0;
}
