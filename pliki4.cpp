#include <iostream>
#include <fstream>

using namespace std;

//min i max znakow 

int main(){
	ifstream czytam("dane.txt");
	string wyraz;
	int ile=0;
	string max, min;
	czytam >> wyraz;
	max = min = wyraz;
	
	
	while(czytam>>wyraz){
		if(max.size()<wyraz.size()){
			max=wyraz;
		}
		if(min.size()>wyraz.size()){
			min=wyraz;
		}
		
		
	}
	cout << max << "  " << max.size();
	cout << "\n" << min << "  " << min.size();
	
	return 0;
}
