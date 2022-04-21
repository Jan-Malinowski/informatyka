#include <iostream>

//liczb parzyste

using namespace std;

bool parzysta(int a){
	if(a%2==0){
		return true;
	}
	else{
		return false;
	}
}



int main(){
	
	for(int i=1; i<100; i++){
		if(parzysta(i)){
			cout << i << "  ";
		}
	}
	
	return 0;
}
