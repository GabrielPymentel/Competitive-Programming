#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main(){
 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string a, b; cin>>a>>b;
 
	string ans;
	for(int i = b.length()-1 ; i >= 0; --i){
		ans+=b[i];
	}
 
	if(ans == a){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	return 0;
}
