#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main() {
    FAST;
    int t;
    cin >> t;
	long long n,z;
	
	
	while(t--){
	    priority_queue <int> pq;
	    cin >> n >> z;
	    int x;
	    int count = 0;
	    for (long long i = 0; i < n; i++){
	        cin >> x;
	        pq.push(x);
	    }
	    
	    
	    while (z > 0 && pq.top() > 0){
	        int attack = pq.top();
	        z -= attack;
	        pq.pop();
	        pq.push((attack/2));
	        count ++;
	    }
	    
	    if (z > 0) cout << "Evacuate" << endl;
	    else cout << count << endl;
	}
	return 0;
}
