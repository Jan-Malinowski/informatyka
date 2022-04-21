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
			tab[i][j]=rand()%90+10;
			cout << tab[i][j] << "  ";
		}
		cout << endl;
	}
	
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			sortt[j]=tab[j][i];
		}
		sort(sortt, sortt+10);
		for(int j=0; j<10; j++){
			tab[i][j]=sortt[j];
		}
	}
	cout << endl << endl;
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout << tab[j][i] << "  ";
		}
		cout << endl;
	}
	return 0;
}
