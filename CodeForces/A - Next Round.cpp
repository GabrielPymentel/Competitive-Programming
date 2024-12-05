#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n,k; cin>>n>>k;
    vector<int> l(n);
    for(int i = 0; i < n; i++)
        cin>>l[i];
    int ans=  0;
    for(int j = 0; j < n; j++){
        if(l[j] >= l[k-1] && l[j] > 0)
            ++ans;
    }
 
    cout<<ans<<endl;
    return 0;
}
