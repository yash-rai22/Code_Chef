#include <bits/stdc++.h>
using namespace std; 

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int smallestNumber(long long N) 
{ 
    if (N % 9 == 0)
        return N/9;
    else 
        return N/9 + 1;
} 

int main() 
{ 
    FAST;
	long long pc,pr,t;
	cin >> t;
	while(t--){
	cin >> pc >> pr;
	string s1,s2;
	
	if (smallestNumber(pc)  < smallestNumber(pr))
	    cout << 0 <<" "<< smallestNumber(pc) << endl;
	else
	    cout << 1 <<" "<< smallestNumber(pr) << endl;
	}

	return 0; 
} 
