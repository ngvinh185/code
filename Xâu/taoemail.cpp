#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
void chuanhoa(string &s){
  for(int i=0;i<s.size();i++){
    s[i]=tolower(s[i]);
  }
}
void chuanhoamk(string &s){
  stringstream ss(s);
  string tmp;
  while(getline(ss,tmp,'/')){
    ll b=stoll(tmp);
    tmp=to_string (b);
    cout<<tmp;
  }
  cout<<endl;

}
int main(){
  int n;cin>>n;
  cin.ignore();
  map<string,int> a;
  while (n--){
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<string> d;
    string tmp;
    while (ss>>tmp){
      chuanhoa(tmp);
      d.push_back(tmp); 
    }
    string birth=d.back();
    string email=d[d.size()-2];
    for(int i=0;i<d.size()-2;i++){
      email+=d[i][0];
    }
    a[email]+=1;
    if(a[email]==1) cout<<email<<"@xyz.edu.vn"<<endl;
    else cout<<email<<a[email]<<"@xyz.edu.vn"<<endl;
    chuanhoamk(birth);
  }
}