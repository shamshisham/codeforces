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
  string s,ss=""; cin>>s;
  int l=s.length();
  vector<char>v;
  char last='-1';
  for (int i = 0; i < l; i++)
  {
    if(s[i]=='W' && i+2<l){
        if(s[i+1]=='U' && s[i+2]=='B'){
            if(last!=' ')
            v.push_back(' ');
            last=' ';
            i+=2;
           continue;
        }
    }  
    
        v.push_back(s[i]);
        last=s[i];
  }

  for(int i=0;i<v.size();i++){
   cout<<v[i];
  }
}

int main()
{
    fast();
    solution();
}
