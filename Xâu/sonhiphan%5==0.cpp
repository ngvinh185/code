#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
//#define for(i,a,b) for(int i=a;i<b;i++)
int main(){
  string s;cin>>s;
  int res=0;
  int lt=1;
  for(int i=s.size()-1 ; i>=0 ; i--){
    res+=(s[i]-'0')*lt;
    res%=5;
    lt*=2;
    lt%=5;
  }
  if(res==0) cout<<"YES";
  else cout<<"NO";
}