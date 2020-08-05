#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t,ans,T;
    long long N;
    string s;
    cin >> T;
    while (T--){
        cin >> s;
        ans = 0, t = 0;
        N = s.length();
        for (int i=0; i < N; i++){    
            if (s[i]=='<') 
                t++;   
            else{    
                t--;    
                if (t==0)
                    ans=max(ans,i+1);   
                else if (t<0) 
                    break;    
            }
        }
        cout << ans << endl;
    }
	return 0;
}
