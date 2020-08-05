#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
    int Depth = 0, max_Depth = 0, DepthLoc = 0; 
    int Cnt = 0, max_Cnt = 0, CntLoc = 0;  
    int BracketStartIndex = 0; 
						   

    for(int x = 1; x <= N; x++){
        if(!Depth){ 
            Cnt = 0; 
            BracketStartIndex = x; 
        }
    
    int i; cin >> i; 
    
    Cnt++; 
    	   
    

    if(i == 1) Depth++;
    else Depth--; 

    if(Depth > max_Depth){ 
        DepthLoc = x; 
        max_Depth = Depth; 
    }
    
    if(Cnt > max_Cnt){ 
        CntLoc = BracketStartIndex;  
        					 
        max_Cnt = Cnt; 
    }
}

cout << max_Depth <<" "<< DepthLoc <<" "<< max_Cnt <<" "<< CntLoc << endl;
//Remember to add spaces between each value in the output!
	return 0;
}
