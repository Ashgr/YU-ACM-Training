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
    ll a , b , x,y,n;
    cin>>a>>b>>x>>y>>n;
    ll temp_A = a , temp_B = b ;
    temp_A = max(temp_A-n , x);
    ll rem = n-(a-temp_A);
    if(rem){
        temp_B = max(temp_B-rem , y);
    }
    ll B = b;
    B = max(B-n,y);
    ll remain = n-(b-B);
    if(remain){
        a = max(a-remain,x);
    }
    ll ans = min((a*B) , (temp_A*temp_B));
    cout<<ans<<endl;
}

int main(){ fastIO;
    int t;
    cin>>t;
    while(t--)
        test_case();
    return 0;
}
