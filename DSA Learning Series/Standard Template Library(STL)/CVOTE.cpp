#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main() {
    FAST;
	map <string, int> chefvotes;
	map <string, int> countryvotes;
	map <string, string> country;
	
	long long n,m;
	cin >> n >> m;
	
	for (long long i = 0; i < n; i++){
	    string chef, c;
	    cin >> chef >> c;
	    country[chef] = c;
	}
	
	string maxcountry;
	string maxchef;
	long long maxcountryvotes = 0;
	long long maxchefvotes = 0;
	
	for (long long i = 0; i < m; i++){
	    string chef;
	    cin >> chef;
	    chefvotes[chef]++;
	    countryvotes[country[chef]]++;
	    
	    if (chefvotes[chef] > maxchefvotes){
	        maxchefvotes = chefvotes[chef];
	        maxchef = chef;
	    }
	    
	    else if(chefvotes[chef] == maxchefvotes){
	        maxchef = min (chef, maxchef);
	    }
	    
	    
	    if (countryvotes[country[chef]] > maxcountryvotes){
	        maxcountry = country[chef];
	        maxcountryvotes = countryvotes[country[chef]];
	    }
	    
	    else if(countryvotes[country[chef]] == maxcountryvotes){
	        maxcountry = min (country[chef], maxcountry);
	    }
	}
	
	cout << maxcountry << endl;
	cout << maxchef << endl;
	return 0;
}
