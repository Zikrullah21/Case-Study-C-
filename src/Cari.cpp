#include <iostream>
#include "Cari.h"
using namespace std;

int Cari::binaryserach(int arr[], int l, int r, int x)
{
  if (r >=l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binaryserach(arr, l, mid - 1, x);
            return binaryserach(arr, mid + 1, r, x);
        }
        return -1;   
}
