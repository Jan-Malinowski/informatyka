#include <iostream>
#include <fstream>

using namespace std;

//Zapisywanie tekstu do pliku

int main(){
	ofstream wpisz("nowy.txt");
	wpisz << "Pierwszy plik w c++";
	
	return 0;
}
