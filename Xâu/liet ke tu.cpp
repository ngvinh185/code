#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
void tach_dau(string &s){
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])==0&&isalpha(s[i])==0) s[i]=' ';
    }
}
int main()
{
    string s;
    getline(cin,s);
    tach_dau(s);
    stringstream ss(s);
    vector<string> d;
    string tmp;
    while (ss>>tmp){
        d.push_back(tmp);
    }
    for(int i=0;i<d.size();i++){
        cout<<d[i];
        if (i!=d.size()-1) cout<<" ";
    }
    
}