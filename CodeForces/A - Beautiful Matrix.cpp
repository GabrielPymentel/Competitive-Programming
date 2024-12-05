#include <bits/stdc++.h>
#define ll long long
#define b begin()
#define e end()
 
using namespace std;
 
void solve(){
 
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector<vector<int>> matriz;
 
	for(int i = 0 ;i < 5; i++){
		vector<int> sla(5);
 
		for(int k = 0; k < 5; k++)
			cin>>sla[k];
 
		matriz.push_back(sla);
	}
 
	int linha = 1;
	int count = 1;
	bool brk = false;
	for(auto j : matriz){
		if(brk){
			break;
		}
		if(find(j.b,j.e, 1) != j.e){
			for(int i : j){
				if(i == 1){
					brk = true;
					break;
				}
				else{
					count++;
				}
		}
	}else{
		linha++;
	}
	}
 
	int c1 = abs(count - 3);
	int c2 = abs(linha - 3);
	cout<<c1+c2<<endl;
 
	return 0;	
}
