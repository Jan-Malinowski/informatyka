#include <iostream>

//suma cyfr w liczbie

using namespace std;

int suma(int a){
	int s =0;
	while(a){
		s+=a%10;
		a/=10;
	}
	return s;
}



int main(){
	
	for(int i=10; i<200; i++){
		cout << i  << "  " << suma(i) << endl;
	}
	
	return 0;
}
