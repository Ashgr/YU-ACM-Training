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
    int n,face1,face2,nf1,nf2;
    cin>>n;
    cin>>face1;
    face2 = 7-face1;
    for(int i=0;i<n;i++){
        cin>>nf1>>nf2;
        if(nf1 == face1 || nf1 == face2 || nf2 == face1 || nf2 == face2)
            return cout<<"NO", 0;
    }
    cout<<"YES";
    return 0;
}
