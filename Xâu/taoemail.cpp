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
// Sample Input 0

// 4
// nguyen   van LONg 20/10/2002
// ngo Vang Long 20/12/2002
// Nguyen  Vu Long 22/12/2003
// ho van  nam 17/09/2002
// Sample Output 0

// longnv@xyz.edu.vn
// 20102002
// longnv2@xyz.edu.vn
// 20122002
// longnv3@xyz.edu.vn
// 22122003
// namhv@xyz.edu.vn
// 1792002