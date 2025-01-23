#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

void wyszukaj(int tab[], int n) {
	for (int i = 0; i < n - 2; i++) {
		if (tab[i] + tab[i + 1] < tab[i + 2]) {
			cout << "[" << tab[i] << ", " << tab[i + 1] << "]\n";
		}
	}
}
int main() {


	const int size = 100;
	int tab[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		tab[i] = rand()%100;
	}
	for (int i = 0; i < size; i++) {
		cout<<tab[i]<<" ";
	}
	cout << endl;
	wyszukaj(tab, size);
 
	return 0;
}
// Program zeby dzialal dla dowolnej tablicy musi uwzglednic
	//	1. Liczba w tablicy elementow powinna byc przynajmniej 3
	//	2.