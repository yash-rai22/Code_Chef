#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL); cout.tie(NULL);
    
    long long n,x,y;
    cin >> n >> x >> y;
    
    int a[n][2];
    int v[x], w[y], s[n], e[n];
    
    for (long long i = 0; i < n; i++)
        cin >> s[i] >> e[i];
    for (long long i = 0; i < x; i++)
        cin >> v[i];
    for (long long i = 0; i < y; i++)
        cin >> w[i];
        
    sort(v, v+x);
    sort(w, w+y);

int ans = INT_MAX; 
for(long long i = 0; i < n; i++){
	int r = upper_bound(v, v+x, s[i]) - v - 1;

	int q = lower_bound(w, w+y, e[i]) - w;
    
	if(r >= 0 and q < y) //Out of bound check
        ans = min(ans, w[q] - v[r] + 1);
}
cout << ans << endl;    
        
	return 0;
}
