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
  int n,k,sum=0,ans=0;
  cin>>n>>k;
  int arr[n];
  int t[n];
  vector<int> index;
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin>>t[i];
    if(t[i]==1) sum+=arr[i];
    else {
     index.push_back(i);
    }
  }
  for (int i = 0; i < index.size(); i++)
  {
    int start=index[i], end=index[i]+k-1;
    while(start<=end){
        if(t[start]==0) sum+=arr[start];
        start++;
    }  
    ans=max(ans,sum);

  }
  cout<<ans+sum;
}

int main()
{
    fast();
    solution();
}
