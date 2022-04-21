#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main(){
	int tab[10][10];
	int sortt[10];
	
	srand(time(NULL));
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			tab[i][j]=rand()%9+1;
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "Po sortowaniu 1" << endl;
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			sort(tab[i], tab[i]+10);
			cout << tab[i][j] << "  ";
		}
		cout << endl;
	}
	
	cout << "Po sortowaniu 2" << endl;
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			sortt[j]=tab[i][j];
		}
		cout << endl;
		sort(sortt, sortt+10);
		for(int i=0; i<10; i++){
			cout << sortt[i] << " ";
		}

	}
	
	return 0;
}
