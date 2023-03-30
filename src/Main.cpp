#include <iostream>
#include "Cari.h"
using namespace std;

int main(void)
{
    int arr[] = { 90, 59, 55, 43, 33, 21, 20, 11};
    int x = 43;
    int n = sizeof(arr) / sizeof(arr[0]);

    Cari cariNilai;
    int hasil = cariNilai.binaryserach(arr, 0, n - 1, x);

    (hasil == -1) ?
        cout << "Elemen tidak ditemukan di dalam array"
        : cout << "Elemen ditemukan pada array indeks ke-" <<hasil;
    
    return 0;
} 