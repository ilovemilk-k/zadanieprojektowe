#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

int main() {
	/*
	int tab[] = { 3, 1, -5, 0, 2, 1 };
	int rozmiar = sizeof(tab) / sizeof(tab[0]);
	cout << "\nSize: " << rozmiar<<endl;

	for (int i = 0; i < rozmiar - 2; i++) {
		if (tab[i] + tab[i + 1] < tab[i + 2]) {
			cout << "[" << tab[i] << ", " << tab[i + 1] << "]\n";
		}
	}
	*/
	int licznik = 0;
	const int size = 100;
	int tab[size];
	int pary[size - 2][2];
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		tab[i] = rand()%100;
	}
	cout << endl;

	vector<pair<int, int>>pary2;

	for (int i = 0; i < size - 2; i++) {
		if (tab[i] + tab[i + 1] >= tab[i + 2] && tab[i + 1] + tab[i + 2] >= tab[i + 3])
		{
			i = i + 2;
		}
		if (tab[i] + tab[i + 1] < tab[i + 2]) {
			pary2.push_back(make_pair(tab[i], tab[i + 1]));
		}
	}
		cout << "Pary: \n";
		for (auto p : pary2) {
			cout << p.first <<" "<<p.second<< endl;
		}


		//for (int i = 0; i <= licznik; i++) {
			//cout << pary[i][0]<<" "<< pary[i][1]<<endl;
			 
	
	
	// Program zeby dzialal dla dowolnej tablicy musi uwzglednic
	//	1. Liczba w tablicy elementow powinna byc przynajmniej 3
	//	2. 
	return 0;
}