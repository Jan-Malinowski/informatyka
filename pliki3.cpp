#include <iostream>
#include <fstream>

using namespace std;

//ile liczb parzystych i ile palidromow

bool palindrom(string a){
	int x = a.size();
	for(int i=0; x/2>i; i++){
		if(a[i]!=a[x-1-i]){
			return false;
		}
	}
	return true;
}

int main(){
	ifstream czytam("liczby.txt");
	string wyraz;
	int ile=0, ile1=0, ile2=0;
	
	
	while(czytam>>wyraz){
		if(wyraz.size()%2==0){ // moze tez byc length()
			ile+=1;
		}
		if(palindrom(wyraz)){
			cout << wyraz << "\n";
		}
		if(wyraz.size()<10){ // moze tez byc length()
			ile1+=1;
		}
		if(wyraz[0]==wyraz[wyraz.size()-1]){
			ile2+=1;
		}
		
	}
	cout << "\n" << ile << "\n" << ile1 << "\n" << ile2;
	
	return 0;
}
