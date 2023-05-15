#include <stdio.h>

// Dizi boyutu
#define N 9


int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
 
        int mid = left + (right - left) / 2;

    // Eðer ortadaki eleman aranan elemana eþitse, bulunduðu indis döndürülür
        if (arr[mid] == x)
            return mid;

    // Eðer ortadaki eleman aranan elemandan büyükse, sað tarafta arama yapýlýr   
        if (arr[mid] > x)
            right = mid - 1;

     // Eðer ortadaki eleman aranan elemandan küçükse, sol tarafta arama yapýlýr
        else
            left = mid + 1;
    }
    // Eleman bulunamazsa -1 döndürülür
    return -1;
}


int main() {
 
    int dizi[]={4,8,3,84,47,76,9,24,68};
    

    int aranan = 47;

    int sonuc = binarySearch(dizi, 0, N-1, aranan);

    // Sonuç -1 ise eleman bulunamadýðý belirtilir, aksi takdirde bulunduðu indis gösterilir
    if (sonuc == -1)
        printf("Eleman bulunamadi.");
    else
        printf("Eleman %d indisinde bulundu.", sonuc);

    return 0;
}
