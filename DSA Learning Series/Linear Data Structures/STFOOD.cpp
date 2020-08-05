#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t,n,s,v,p;
    
    cin >>t ;
    while(t--){
        cin >>n;
        long long max = 0;
        
        for (int i = 0; i < n; i++){
            cin >> s >> p >> v;
            
            if (floor((p/(s+1)))*v > max)
                max = floor((p/(s+1)))*v;
        }
        cout << max << endl;
    }
	return 0;
}
