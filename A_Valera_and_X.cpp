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

string solution(){
  int n; cin>>n;
  vector<vector<char>> v(n,vector<char>(n));
  set<char>diagonal,others;
  char mark;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
       cin>>v[i][j];
    } 
  }
   mark=v[0][0];
  for (int i = 0; i < n; i++)
  {  diagonal.insert(v[i][i]);
     diagonal.insert(v[i][n-(i+1)]);
    for (int j = 0; j < n; j++)
    {  
       if(j!=i && j!=n-(i+1)) {
        if(v[i][j]==mark) {return "NO";}
        others.insert(v[i][j]);}
    } 
  }
  if(diagonal.size()==1 && others.size()==1) return "YES";
  return "NO";
}

int main()
{
    fast();
    cout<<solution();
}

