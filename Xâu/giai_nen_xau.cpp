#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
int main(){
  string s;cin>>s;
  for(int i=0;i<s.size();i++){
    if(isalpha(s[i])){
      int j=i+1;
      string tmp;
      while(isdigit(s[j])){
        tmp+=s[j];
        ++j;
      }
      ll number=stoll(tmp);
      for(ll k=0;k<number;k++){
        cout<<s[i];
      }
    }
  }
}
// Sample Input 0
// h7j4w6z1z8z10z8z1u8u6u1

// Sample Output 0
// hhhhhhhjjjjwwwwwwzzzzzzzzzzzzzzzzzzzzzzzzzzzzuuuuuuuuuuuuuuu