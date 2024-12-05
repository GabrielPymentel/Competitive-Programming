#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main(){
 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string a;cin>>a;
 
	ll mai=0,min=0;
 
	for(auto i : a){
		if(isupper(i)){
			mai++;
		}else{
			min++;
		}
	}
	string ans;
	if(min >= mai){
		for(auto sla : a)
			ans+= tolower(sla);
	}else{
		for(auto sla : a)
			ans+= toupper(sla);	
	}
 
	cout<<ans<<endl;
	return 0;
}
