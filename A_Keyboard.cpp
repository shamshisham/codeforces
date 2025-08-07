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
    char ch; cin>>ch;
    string s,newstr=""; cin>>s;
    map<char, pair<char, char>> mp = {
        {'q', {'0', 'w'}}, {'w', {'q', 'e'}}, {'e', {'w', 'r'}}, {'r', {'e', 't'}}, {'t', {'r', 'y'}},
        {'y', {'t', 'u'}}, {'u', {'y', 'i'}}, {'i', {'u', 'o'}}, {'o', {'i', 'p'}}, {'p', {'o', '0'}},
        {'a', {'0', 's'}}, {'s', {'a', 'd'}}, {'d', {'s', 'f'}}, {'f', {'d', 'g'}}, {'g', {'f', 'h'}},
        {'h', {'g', 'j'}}, {'j', {'h', 'k'}}, {'k', {'j', 'l'}}, {'l', {'k', ';'}}, {';', {'l', '0'}},
        {'z', {'0', 'x'}}, {'x', {'z', 'c'}}, {'c', {'x', 'v'}}, {'v', {'c', 'b'}}, {'b', {'v', 'n'}},
        {'n', {'b', 'm'}}, {'m', {'n', ','}}, {',', {'m', '.'}}, {'.', {',', '/'}}, {'/', {'.', '0'}}
    };


 if(ch=='R')
 for(int i=0;i<s.length();i++){
    newstr+=mp[s[i]].first;
 }
 else
 for(int i=0;i<s.length();i++){
    newstr+=mp[s[i]].second;
 }
 for (int i = 0; i < s.length(); i++)
 {
    cout<<newstr[i];
 }
 
}

int main()
{
    fast();
    solution();
}

/*
qwertyuiop
asdfghjkl;
zxcvbnm,./
*/