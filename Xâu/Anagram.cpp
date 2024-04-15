#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
    int t;cin>>t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin,s);
        vector<string> d;
        string tmp;
        stringstream ss(s);
        while(ss>>tmp){
            d.push_back(tmp);
        }
        sort(d[0].begin(),d[0].end());
        sort(d[1].begin(),d[1].end());
        if(d[0]==d[1]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
