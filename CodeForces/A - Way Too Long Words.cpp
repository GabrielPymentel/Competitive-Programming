#include <bits/stdc++.h>
#define ll long long
//Thank'you Willian Lin :D
using namespace std;
 
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n; cin>>n;
	while(n--){
		string a; cin>>a;
		if(a.length() <=10){
			cout<<a<<endl;
		}else{
			cout<<a[0]<<to_string(a.length()-2) <<a[a.length()-1]<<endl;
		}
	}	
	return 0;
}
