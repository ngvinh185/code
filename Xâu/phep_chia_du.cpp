#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
    string s;cin>>s;
    ll m;cin>>m;
    ll sum=0;
    for(int i=0;i<s.size();i++){
        sum=sum*10+(s[i]-'0');
        sum%=m;
    }
    cout<<sum;
}
