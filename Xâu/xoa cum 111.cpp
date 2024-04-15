#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='1'){
            s.erase(i,3);
            --i;
        }
    }
    if(s.size()) cout<<s;
    else cout<<"EMPTY";
}