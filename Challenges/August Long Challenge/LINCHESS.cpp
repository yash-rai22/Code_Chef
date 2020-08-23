#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main() {
    FAST;
	long long t;
	cin >> t;
	
	while(t--){
	    long long n,k,c1=0;
	    cin >> n >> k;
	    long long p[n],c[n];
	    
	    for (long long i = 0; i < n; i++){
	        cin >> p[i];
	       // if (p[i] == k)
	       //     cout << p[i] << endl;
	        c[i] = 1e10;
	    }
	    
	    
	    for (long long i = 0; i < n; i++){
	            if (k % p[i] == 0)
	                c[i] = (k / p[i]) - 1;
	            
	           // cout << c[i] << " "; 
	    }
	    
	    if (*min_element(c,c+n) < 1e9){
	        c1 = p[min_element(c,c+n)-c];
	        cout << c1 << endl;
	    }
	    else
	        cout << -1 << endl;
	}
	return 0;
}
