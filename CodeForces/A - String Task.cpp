#include <bits/stdc++.h>
#define ll long long 
#define b begin()
#define e end()
#define vetInt vector<int>
#define vetStr vector<string>
#define vetChar vector<char>
const ll MxN = 1e10;
 
using namespace std;
 
void solve() {	
	vetChar vogals = {'a','e','i','o','u','A','E','I','O','U','y','Y'};
	string sla; cin>>sla;
	const int Mx = sla.length();
	vetChar v;
 
	for(int i =0 ; i < Mx; i++){
		if(find(vogals.b,vogals.e , sla[i]) == vogals.e){
			v.push_back(sla[i]);
		}
	}	
 
	string ans = "";
	for(int j = 0; j < v.size(); j++){
		ans+='.';
		ans+=tolower(v[j]);
	}
 
	cout<<ans<<endl;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	int t = 1;
	//cin>>t;	
	while(t--)
		solve();	
	return 0;
 
}
