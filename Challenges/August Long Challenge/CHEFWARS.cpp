#include <iostream>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    FAST;
	long long n;
	cin >> n;
	long long h,p;
	
	for (long long i = 0; i < n; i ++){
	    cin >> h >> p;
	    
	    while(h > 0 and p > 0){
	        h -= p;
	        p /= 2;
	    }
	    if (h <= 0)
	       cout << '1' << endl;
	    else 
	       cout << '0' << endl;
	}
	return 0;
}
