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
int freq[26];
const ll MAx = 1000001;
void solution(){
  int n; cin>>n;
  string s; cin>>s;

  int sz=s.length();
  if(sz<n) {cout<<"NO"; return;}
  if(n==1) {cout<<"YES"<<endl; 
   for(int i=0;i<sz;i++) cout<<s[i];
   return;
  }
   
    vi v;
    for(int i=0;i<sz;i++){
      if(freq[s[i]-'a']==0) 
     {
       v.push_back(i);
       freq[s[i]-'a']=1;
       
      }
    }
    if(v.size()<n) {cout<<"NO"; return;}
    cout<<"YES\n"<<s[0];
    int j=1;   
    for (int i = 1; i < sz; i++)
    {
      if(v[j]==i && n>1) {
        cout<<endl;
        n--;
        j++;
      }
      cout<<s[i];
    }
    
   
}

int main()
{
    fast();
    solution();
}
