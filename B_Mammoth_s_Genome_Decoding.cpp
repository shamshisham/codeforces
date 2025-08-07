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


const ll MAx = 1000001;
void solution(){
  int n; cin>>n;
  int maxi=0;
  string s; cin>>s;
  map<char,int> mp;
  vector<int> index;
  vector<int> ele;
  char arr[4]={'A','G','C','T'};
  for (int i = 0; i < n; i++)
  {  
    mp[s[i]]++;  
    if(s[i]!='?')
    maxi=max(maxi,mp[s[i]]);
    else index.push_back(i);  
  }
   int j=0;
  for (int i = 0; i < n; i++)
  {     if(s[i]=='?') continue;
           while(mp[s[i]]!=maxi && mp['?']!=0 && maxi!=0){
            s[index[j]]=s[i];
            mp['?']--;
            mp[s[i]]++;
            j++;
          }
          if(mp[s[i]]!=maxi) ele.push_back(s[i]);
        }
        
     if(ele.size()>mp['?'] || mp['?']%4!=0) {cout<<"==="; return;}

     else if(mp['?']%4==0 && mp['?']!=0){
      cout<<1;
      int x=mp['?']/4;
       while(x--){
        for(int i=0;i<4;i++)
          s[index[j++]]=arr[i];
       }
     }
    
      for (int i = 0; i < n; i++)
      {
       cout<< s[i];
      }
      
     
     
}

int main()
{
    fast();
    solution();
}
