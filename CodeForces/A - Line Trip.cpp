#include <bits/stdc++.h>
#define ll long long 
#define b begin()
#define e end()
#define vetInt vector<int>
#define vetStr vector<string>
#define vetChar vector<char>
//Se mandei, deu errado
 
const ll MxN = 1e10;
 
using namespace std;
 
void solve() {	
	int n,m; cin>>n>>m;
	vetInt s = {0};
 
	for(int i = 0; i < n; i++){
		int sla;
		cin>>sla;
		s.push_back(sla);
	}	
	s.push_back(m);
	vetInt l(m) , k;
	for(int i = 0 ; i < m; i++){
		l[i] = i;
	}
 
	for(int j = 1;  j <= n; j++){
		k.push_back(s[j] - s[j-1]);
	}
 
	int MX = 0;
 
	for(auto& p : k){
		if(p > MX){
			MX = p;
		}
	}
	int tm = s.size(); 
	if(MX < (s[tm-1] - s[tm-2])*2){
		MX =  (s[tm-1] - s[tm-2])*2;
	}
	
	cout<<MX<<endl;	
 
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cout.tie(nullptr);	
	int t = 1;
	cin>>t;	
	while(t--)
		solve();	
	return 0;
 
}
