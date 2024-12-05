#include <bits/stdc++.h>
#define ll long long
#define b begin()
#define e end()
//Thank'you Willian Lin :D
using namespace std;
 
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
		
	string sla;cin>>sla;
	vector<int> n;
	for(auto ata : sla){
		if(ata == '1' || ata == '2' || ata == '3'){
			int a = ata - '0';
			n.push_back(a);
		}
	}
 
	sort(n.b, n.e);
 
	for(int i = 0; i < n.size() ; i++){
		if(i < n.size() -1){
			cout<<n[i] <<'+';
		}else{
			cout<<n[i]<<endl;
		}
	}
	return 0;
}
