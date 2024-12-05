#include <bits/stdc++.h>
#define ll long long
#define b begin()
#define e end()
 
using namespace std;
 
vector<pair<int,int>> search(int ach){
	int ans = 1;
	vector<pair<int,int>> ls = {{ans , ach}};
	while(ans < ach/ans){
		ans++;
		if(ach%ans == 0){
			if(ans*(ach/ans) == ach){
				ls.push_back({ans,ach/ans});
			}
		}
	}	
	return ls;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> k(n);
		for(int i = 0; i <n ; i++)
			cin>>k[i];
  
		  const int ach = k.size() - 2;
		  vector<int> ans;
		  bool t = false;
		  for(int x = 0; x < n; x++){
		    int a1 = search(ach)[x].first;
		    int a2 = search(ach)[x].second;
		    if( find(k.b,k.e,a1) != k.e && find(k.b,k.e,a2) != k.e){
		      cout<< a1 << " "<<a2<<endl;
		      break;
		    }
		  }  
		}
		return 0;	
}
