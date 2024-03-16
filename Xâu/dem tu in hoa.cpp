#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
int check(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]!=toupper(s[i])) return 0;
	}
	return 1;
}
int main(){
	string s;
	vector<string> d;
	while (cin>>s){
		if(check(s)) d.push_back(s);
	}
	cout<<d.size();
}

//input: vinh Dep TRAI
//output:1