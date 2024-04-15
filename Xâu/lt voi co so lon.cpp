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
ll Mod(ll x,ll y){
    return (x%mod)*(y%mod)%mod;
}
ll powMod(ll x,ll y){
    if(y==0) return 1;
    ll a=powMod(x,y/2);
    if(y%2==0) return Mod(a,a);
    else return Mod(Mod(a,a),x); 
}
int main(){
    string s;cin>>s;
    ll m;cin>>m;
    ll res=moD(s,mod);
    cout<<powMod(res,m);
}
