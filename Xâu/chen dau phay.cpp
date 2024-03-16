#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
int main(){
	string s;cin>>s;
	int dem=0;
	for(int i=s.size()-1;i>0;i--){
		dem+=1;
		if (dem==3) s.insert(i,",");
	}
	cout<<s;
}

//Sample Input 0
//
//999970094
//Sample Output 0
//
//999,970,094