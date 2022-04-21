#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main(){
	int tab[10][10];
	int tabsort[100];
	int x = 0;
	
	srand(time(NULL));
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			tab[i][j]=rand()%90+10;
			cout << tab[i][j] << " ";
			tabsort[i*10+j] = tab[i][j];
		}
		cout << endl;
	}
	sort(tabsort, tabsort+100);
	cout << endl << "Po sortowaniu" << endl << endl;
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout << tabsort[i*10+j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
