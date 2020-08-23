#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
signed main() {
    FAST;
	long long t,n,k,i;
	cin >> t;
	
	while(t--){
	    cin >> n >> k;
	    long long ans = 1e18;
	    unordered_map<int, int> count;  
	    long long f[n], c = 0;
	   
	    vector <vector <int> > vec;
		vector <int> v;
		vector <int>::iterator it; 
		for (i = 0; i < n; i++){
			cin >> f[i];
			
			it = find(v.begin(),v.end(),f[i]);
			
			if (it == v.end())
				v.push_back(f[i]);
			else{
				vec.push_back(v);
				v.clear();
				v.push_back(f[i]);
			}
		}
		vec.push_back(v);

        for (int i=0; i<n; i++)        
            count[f[i]]++;  
           
            for (auto e:count)
                if (e.second > 1){
                    c += e.second;
            }
        long long size = vec.size();
	    ans = min(ans, k+c);
	    ans = min(ans, k*size);
	    
	    
	    cout << ans << endl;
	}
	return 0;
}
