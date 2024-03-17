#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
void chuanhoaten(string &s){
  for(int i=0;i<s.size();i++){
    if(i==0) s[i]=toupper(s[i]);
    else s[i]=tolower(s[i]);
  }
}
void chuanhoans(string &s){
  if (s[1]=='/') s='0'+s;
  if(s[4]=='/') s.insert(3,"0");
}
int main(){
  string name;
  string birth;
  getline(cin,name);
  getline(cin,birth);
  stringstream ss(name);
  string tmp;
  while (ss>>tmp){
    chuanhoaten(tmp);
    cout<<tmp<<" ";
  }
  cout<<endl;
  chuanhoans(birth);
  cout<<birth;

}