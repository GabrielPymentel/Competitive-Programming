#include <bits/stdc++.h>
#define ll long long
//Thank'you Willian Lin :D
using namespace std;
 
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	string a;cin>>a;
	set<int> ata;
	for(auto l : a){
		ata.insert(l);
	}
	if(ata.size()%2 == 0){
		cout<<"CHAT WITH HER!\n";
	}else{
		cout<<"IGNORE HIM!\n";
	}
	return 0;
}
