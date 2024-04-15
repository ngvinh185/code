#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
    int t;cin>>t;
    while (t--){
        string x,y;
        cin>>x>>y;
        int check=0;
        sort(y.begin(),y.end());
        for(int i=0;i<x.size();i++){
            auto it=lower_bound(y.begin(),y.end(),x[i]);
            if(*it==x[i]) {
                cout<<"YES"<<endl;
                check=1;
                break;
            }
        }
        if(check==0) cout<<"NO"<<endl;
    }
}
