#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int tab[10][10];
	int tablica[10]={0};
	int suma = 0;
	
	srand(time(NULL));
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			tab[i][j]=rand()%9+1;
			suma+=tab[i][j];
			cout << tab[i][j] << "  ";
			tablica[j]+=tab[i][j];
		}
		cout <<  suma << endl;
		suma = 0;
	}
	
	for(int i=0; i<10; i++){
		cout << tablica[i] << " ";
	}
	
	return 0;
}
