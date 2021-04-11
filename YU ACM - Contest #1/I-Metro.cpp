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
    int n,s;
    cin>>n>>s;
    s--;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];

    bool ok = false;
    if(a[s] && a[0]){
        cout << "YES";
        return 0;
    } else if(a[0] && b[s]){
        for(int i=s;i<n;i++){
            if(a[i] && b[i]){
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";
    } else {
        cout << "NO";
    }
    return 0;
}
