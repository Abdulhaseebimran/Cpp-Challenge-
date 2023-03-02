#include <iostream>
using namespace std;

int main(){
	int DATA[10] = {1,3,7,2,6,9,4,5,6,7};
	int max = DATA[0];
	int k = 1;
	int LOC = 1;
		
//	for(k=0;k<10;k++){
//		if(max<DATA[k]){
//			max = DATA[k];
//			LOC = k;
//		}
//	}

	do{
	 if(max<DATA[k]){
	 	max = DATA[k];
	 	LOC = k;
	 }	
	 k++;	
	}
	while(k<10);
	
	  cout << endl;
	    cout << "The maximum value is: " << max << endl;
	    cout << "The location of maximum value is: " << LOC;
	
	
	
	return 0;
}