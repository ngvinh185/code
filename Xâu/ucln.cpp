#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
ll moD(string s,ll m){
    ll sum=0;
    for(int i=0;i<s.size();i++){
        sum=sum*10+(s[i]-'0');
        sum%=m;
    }
    return sum;
}

ll ucln(string n,ll m){
    if(m==0) return stoll(n);
    else{
        return ucln(to_string(m),moD(n,m));
    }
}
int main(){
    string s;cin>>s;
    ll m;cin>>m;
    cout<<ucln(s,m);
}
