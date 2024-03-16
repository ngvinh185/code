#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
    if (s[2]!='/') s="0"+s;
    if (s[4]=='/') s.insert(3,"0");
    cout<<s;
}
//input:1/8/2005
//output :01/08/2005