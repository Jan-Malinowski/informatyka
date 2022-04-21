#include <iostream>

//czy pierwsza i ostatnia cyfra jest taka sama

using namespace std;

bool pierwiost(int a){
	int o = a%10;
	int p=0;
	while(a>0){
		p=a%10;
		a=a/10;
	}
	if(o==p){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	
	for(int i=10; i<1000; i++){	
		if(pierwiost(i)){
			cout << i << "  ";
		}
	}
	
	return 0;
}
