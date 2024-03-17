#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
int main(){
  string s;cin>>s;
  s+="_";
  int dem=1;
  for(int i=1;i<s.size();i++){
    if(s[i]==s[i-1]) dem+=1;
    else{
      cout<<s[i-1]<<dem;
      dem=1;
    }
  }
}
// Sample Input 0

// aacducuucdcabczubduuubaaa
// Sample Output 0

// a2c1d1u1c1u2c1d1c1a1b1c1z1u1b1d1u3b1a3