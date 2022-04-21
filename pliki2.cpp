#include <iostream>
#include <fstream>

using namespace std;

//Czytanie pliku

int main(){
	ifstream czytam("nowy.txt");
	string wyraz;
	
	while(czytam>>wyraz){
		cout << wyraz << " ";
	}
	
	return 0;
}
