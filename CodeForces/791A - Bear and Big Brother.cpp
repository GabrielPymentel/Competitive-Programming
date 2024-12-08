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
	int l,bo; cin>>l>>bo;
	int c = 0;
	while(l<=bo){
		l*=3;
			bo*=2;
		c++;
	}	

	cout<<c<<endl;
}

int main(){
		
	int t = 1;
	//cin>>t;	
	while(t--)
		solve();	
	return 0;

}
