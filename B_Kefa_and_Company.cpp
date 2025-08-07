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
bool sortbyfirst(const pair<int,int>&a,const pair<int,int>&b){
    return a.first<b.first;
}
void solution(){
  int n,d,ans=0,sum=0;
  cin>>n>>d;
  vector<pair<int,int>> v(n);
  for (int i = 0; i < n; i++){
  cin>>v[i].first>>v[i].second;
  }

  sort(v.begin(),v.end(),sortbyfirst);

   int l=0,r=l+1;
   sum=v[l].second;
   while(r<n){
    if(v[r].first-v[l].first<=d){
        sum+=v[r].second;
        ans=max(sum,ans);
        r++;
    }
      else{
       ans=max(max(v[l].second,v[r].second),sum); 
       l==r;
       r++;
       sum=0;
      } 
   }
   cout<<max(ans,sum);
}

int main()
{
    fast();
    solution();
}
