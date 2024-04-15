#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;cin>>t;
    cin.ignore();
    while (t--){
        string s;cin>>s;
        map<char,int> cnt;
        for(int i=0;i<s.size();i++) cnt[s[i]]+=1;
        int dem=0;
        for(auto x:cnt){
            if(x.second%2!=0)dem+=1;
        }
        if(dem<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}
