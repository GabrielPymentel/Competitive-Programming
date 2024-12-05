#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    
    int n, ans = 0;cin>>n;
    while(n--){
        int a,b,c;cin>>a>>b>>c;
        if(a+b+c > 1)
            ans++;
    }
 
    cout<<ans<<endl;
    return 0;
}
