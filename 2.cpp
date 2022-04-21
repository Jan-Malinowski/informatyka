#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Podaj liczbe: ";
	cin >> x;
	if(x>0)
		cout << "liczba jest dodatnia" << endl;
	
	else
	if(x==0)
		cout << "liczba jest rowna 0" << endl;
	
	else
		cout << "liczba jest ujemna" << endl;	
	
	return 0;
}
