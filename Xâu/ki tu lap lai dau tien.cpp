#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
int main(){
	string s;cin>>s;
	map<char,int>d;
	for(int i=0;i<s.size();i++){
		if(d[s[i]]==1) {
			cout<<s[i];
			return 0;
		}
		d[s[i]]=1;
	}
	cout<<"NONE";
}
//Constraints
//
//1<=len(S)<=10000
//
//Input Format
//5nLQokt1QgU7
//Output Format
//Q
