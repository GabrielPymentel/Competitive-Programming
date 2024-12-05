#include <bits/stdc++.h>
#define ll long long 
#define b begin()
#define e end()
 
const int MxN = 1e3;
using namespace std;
 
void solve() {
	int n,k; cin>>n>>k;
 
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		cin>>v[i];
 
	vector<int> sla;
	int ans = 0;
 
	for(int j = 0; j < v.size(); j++)
		sla.push_back(v[j]);
 
	sort(sla.b, sla.e);
	
	for(int s = 0; s < n; s++){
		
		if(sla[s] == v[s])
			ans++;
	}
 
	if(ans == n || k > 1)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
 
int main(){
		
	int t = 1;
	cin>>t;	
	while(t--)
		solve();	
	return 0;
 
}
