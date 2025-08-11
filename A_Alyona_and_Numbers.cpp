#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define fast() ios_base::sync_with_stdio(0), cout.tie(0), cin.tie(0)
#define asort(a) sort(a, a + n)
#define dsort(a) sort(a, a + n, greater<int>())
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
#define clr(v, d) memset(v, d, sizeof(v))
#define rep(i, v) for (int i = 0; i < sz(v); ++i)
#define lp(i, n) for (int i = 0; i < (int)(n); ++i)
#define lpi(i, j, n) for (int i = (j); i < (int)(n); ++i)
#define lpd(i, j, n) for (int i = (j); i >= (int)(n); --i)
#define MAX 200000009
typedef vector<int> vi;
typedef vector<long long> vii;
typedef long long ll;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
typedef tree<int , null_type ,  less_equal<int> , rb_tree_tag , tree_order_statistics_node_update> ordered_multiset;
int mini=1e9;
const ll MAx = 1000001;

void solution(){
  ll n,m,cn=0; cin>>n>>m;
  map<int,ll> mp;
  for (int i =1; i <= n; i++)
  { 
     if(i>5){mp[0]=mp[5]; cn+=mp[i%5]; continue;}
    int y=abs(5-i);
    while(y<=m){
     if(y!=0) {cn++;
     mp[i]++;}
     y+=5;
     }
   }
  cout<<cn;
}

int main()
{
    fast();
    solution();
}

// for x = 1 fits y equal to 4 or 9;
// for x = 2 fits y equal to 3 or 8;
// for x = 3 fits y equal to 2, 7 or 12;
// for x = 4 fits y equal to 1, 6 or 11;
// for x = 5 fits y equal to 5 or 10;
// for x = 6 fits y equal to 4 or 9.