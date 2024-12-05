#include <bits/stdc++.h>
#define ll long long 
#define b begin()
#define e end()
#define vetInt vector<int>
#define vetStr vector<string>
#define vetChar vector<char>
 
//Thank'you Willian Lin and Diego Pedro.
//CodeForces
//Beecrowd
 
const int MxN = 1e4;
 
using namespace std;
 
void solve() {
	int x1,x2,x3; cin>>x1>>x2>>x3;
 
	vetInt n = {x1,x2,x3};
	sort(n.b,n.e);
 
	int ans = 0;
 
	for(int i = 1; i < 3; i++)
		ans+= n[i] - n[i-1];
	
	cout<<ans<<endl;
}
 
int main(){
		
	int t = 1;
	//cin>>t;	
	while(t--)
		solve();	
	return 0;
 
}
