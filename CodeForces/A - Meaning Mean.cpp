#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main(){
 
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin>>t;
 
	while(t--){
		int n; cin>>n;
		vector<int> v;
		for(int i = 0; i < n; ++i){
			int sla; cin>>sla;
			v.push_back(sla);
		}
 
		sort(v.begin(), v.end());
		while(size(v) > 1){
			v[1] = floor((v[0] + v[1]) /2);
			v.erase(v.begin());	
		}
			cout<<v[0]<<endl;
	}
	return 0;
}
