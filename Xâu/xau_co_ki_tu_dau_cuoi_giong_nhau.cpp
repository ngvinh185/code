#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
#define for(i,a,b) for(int i=a;i<=b;i++)
int main(){
  string s;cin>>s;
  sort(s.begin(),s.end());
  s+="_";
  ll res=s.size()-1;
  ll dem=1;
  for(int i=1;i<s.size();i++){
    if(s[i]==s[i-1]) dem+=1;
    else{
      res+=(dem-1)*dem/2;
      dem=1;
    }
  }
  cout<<res;
}