#include <bits/stdc++.h>
#define ll long long
#define b begin()
#define e end()
 
using namespace std;
 
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;cin>>t;
	while(t--){
		int ans = 0;
		set<int> ata;
		int n; cin>>n;
		vector<int> sla(n);
		for(int i = 0; i < n; i++)
			cin>>sla[i];
 
		for(auto m : sla)
			ata.insert(m);
 
		for(auto s : ata)
			ans += count(sla.b, sla.e, s) / 2;
		
		cout<<ans<<endl;
			
	}
		return 0;	
}
