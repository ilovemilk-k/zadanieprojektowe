#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <chrono>
using namespace std;

void wyszukaj(int tab[], int n) {
    for (int i = 0; i < n - 2; i++) {
        if (tab[i] + tab[i + 1] < tab[i + 2]) {
            // Komentarz: cout zablokowany, aby pomiar czasu był bardziej miarodajny
            //cout << "[" << tab[i] << ", " << tab[i + 1] << "]\n";
        }
    }
}

void wyszukaj2(int tab[], int n) {
    int* sumy = new int[n - 2];
    for (int i = 0; i < n - 2; i++) {
        sumy[i] = tab[i] + tab[i + 1];
    }
    for (int i = 2; i < n; i++) {
        if (sumy[i - 2] < tab[i]) {
            // Komentarz: cout zablokowany, aby pomiar czasu był bardziej miarodajny
            //cout << "[" << tab[i - 2] << ", " << tab[i - 1] << "]\n";
        }
    }
    delete[] sumy;  // Zwolnienie pamięci
}

void zmierzCzas(void (*fun)(int*, int), int tab[], int n) {
    auto start = chrono::high_resolution_clock::now();
    fun(tab, n);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> czas_trwania = end - start;
    cout << "Czas: " << czas_trwania.count() << " sekund\n";
}

int main() {
    const vector<int> sizes = { 40000, 60000, 100000, 150000, 500000, 1000000,10000000 };

    // Wylosowanie liczb pseudolosowych jeden raz
    srand(time(NULL));

    for (int size : sizes) {
        int* tab = new int[size];

        for (int i = 0; i < size; i++) {
            tab[i] = rand() % 101;
        }

        cout << "\nWielkość tablicy: " << size << "\n";

        cout << "Funkcja wyszukaj:\n";
        zmierzCzas(wyszukaj, tab, size);

        cout << "Funkcja wyszukaj2:\n";
        zmierzCzas(wyszukaj2, tab, size);

        delete[] tab;  // Zwolnienie pamięci
    }

    return 0;
}
