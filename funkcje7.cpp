#include <iostream>

//palindrom

using namespace std;

bool palindrom(string a){
	int x = a.size();
	for(int i=0; (x-1)/2>i; i++){
		if(a[i]!=a[x-1-i]){
			return false;
		}
	}
	return true;
}

int main(){
	string a="";
	cin >> a;
	if(palindrom(a)){
		cout<<"Palindrom";
	}
	else{
		cout << "Nie";
	}
	
	return 0;
}
