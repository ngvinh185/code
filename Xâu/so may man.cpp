#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
int Sum(string s){
	int sum=0; 
	for(int i=0;i<s.size();i++){
		sum+=(s[i]-'0');
	}
	return sum;
}
int main(){
	string s;cin>>s;
	while (s.size()>1){
		s=to_string(Sum(s));
	}
	if(s=="9") cout<<"YES";
	else cout<<"NO";
}
