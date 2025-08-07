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
  int n,k,cn=0,count; cin>>n>>k;
  while(n--){
     string s;
   indexed_set st;
   count=0;
   cin>>s;
   int ln=s.length();
   for (int i = 0; i < ln; i++)
   {
    st.insert(s[i]-'0');
   }
   if(st.size()<k+1)continue;
     for (int j = 0; j <= k; j++)
     {  
        if(*next(st.begin(),j)==j)  count++;
            
    }
       if(count==k+1) cn++;
  }
       cout<<cn;
}

int main()
{
    fast();
    solution();
}
