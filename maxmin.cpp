#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int tab[10][10];
	int tablica[10]={0};
	int kolmin[10]={9,9,9,9,9,9,9,9,9,9};
	int kolmax[10] = {0};
	int suma = 0;
	int max = 0;
	int min = 9;
	
	srand(time(NULL));
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			tab[i][j]=rand()%9+1;
			suma+=tab[i][j];
			cout << tab[i][j] << "  ";
			
			tablica[j]+=tab[i][j];
			if(tab[i][j]>max){
				max=tab[i][j];
			}
			if(tab[i][j]<min){
				min=tab[i][j];
			}
			
			if(tab[i][j]>kolmax[j]){
				kolmax[j]=tab[i][j];
			}
			if(tab[i][j]<kolmin[j]){
				kolmin[j]=tab[i][j];
			}
		}
		cout << "suma: "<< suma;
		cout << " max: "<< max;
		cout << " min: "<< min << endl;
		suma = 0;
		max = 0;
		min = 9;
	}
	
	for(int i=0; i<10; i++){
		cout << endl << "suma kolumny " << i+1 << " " << tablica[i]<< "  max w kol " << i+1 << ": " << kolmax[i] << "  min w kol " << i+1 << ": " << kolmin[i];
	}	
	return 0;
}
