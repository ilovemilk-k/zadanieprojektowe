#include <iostream>
using namespace std;

int main() {
	int tab[] = { 3, 1, -5, 0, 2, 1 };
	int rozmiar = sizeof(tab) / sizeof(tab[0]);
	cout << "\nSize: " << rozmiar<<endl;

	for (int i = 0; i < rozmiar - 2; i++) {
		if (tab[i] + tab[i + 1] < tab[i + 2]) {
			cout << "[" << tab[i] << ", " << tab[i + 1] << "]\n";
		}
	}

	

	// Program zeby dzialal dla dowolnej tablicy musi uwzglednic
	//	1. Liczba w tablicy elementow powinna byc przynajmniej 3
	//	2. 
	return 0;
}