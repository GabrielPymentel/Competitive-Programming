#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
	int c = 0;
	int n; cin>>n;
	for(int i = 0;i < n; ++i){
		string sla;cin >> sla;
		if(sla == "++X" || sla == "X++"){
			++c;
		}else{
			--c;
		}
	}
	cout<<c<<endl;
	return 0;
}
