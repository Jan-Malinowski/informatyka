#include <iostream>

//czy pierwsza i ostatnia cyfra jest taka sama

using namespace std;

int nwd(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return nwd(a-b, b);
	}
}

int main(){
	int a = 15, b = 30;
	cout << nwd(a, b);
	
	return 0;
}
