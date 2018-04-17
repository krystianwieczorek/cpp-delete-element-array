#include <iostream>
 
using namespace std;
 
 
void wypisz(int * qwe, int n) {
	for(int i = 0; i < n - 1; i++) {
		cout << qwe[i] << endl;
	}
}
 
int * kasuj_element(int * tab, int rozmiar, int ktory) {
	
	int * new_tab = new int[rozmiar - 1];
	
	bool after = false;
	for (int i = 0; i < rozmiar - 1; i++) {
		if (i == ktory - 1) {
			after = true;
		}
		if (after) {
			new_tab[i] = tab[i+1];
		}
		else {
			new_tab[i] = tab[i];
		}
	}
		
	return new_tab;
	delete[] new_tab;
} 
 
int main(int argc, char *argv[])
{
	int rozmiar, ktory;
	
	cout << "Podaj rozmiar" << endl;
	cin >> rozmiar;
	cout << "Podaj ktory" << endl;
	cin >> ktory;
	cout << "------------------------------------------" << endl;
	int * tab = new int[rozmiar];
	for(int i = 0; i < rozmiar; i++) {
		tab[i] = i;
	}
	
	wypisz(kasuj_element(tab, rozmiar, ktory), rozmiar);
	
	delete[] tab;
	
    return 0;
}
