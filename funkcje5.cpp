#include <iostream>

//suma cyfr w liczbie w zapisie binarnym

using namespace std;

int suma(int a){
	int s =0;
	while(a){
		s+=a%2;
		a/=2;
	}
	return s;
}



int main(){
	
	for(int i=0; i<200; i++){
		cout << i  << "  " << suma(i) << endl;
	}
	
	return 0;
}
