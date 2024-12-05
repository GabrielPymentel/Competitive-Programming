#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while(t--){
        vector<int> notas;
        int n; cin>>n;
        for(int i = 0; i < n; ++i){
            int nt; cin>>nt;
            notas.push_back(nt);
        }
        
        int adj = 0;
        
        for(int l = 1; l < n; ++l){
            if(abs(notas[l] - notas[l-1]) == 5 || abs(notas[l] - notas[l-1]) == 7){
                adj++;
            }
        }
        if(adj == n-1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
