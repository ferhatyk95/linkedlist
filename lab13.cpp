#include <stdio.h>

// Dizideki en büyük elemaný bulan rekurzif fonksiyon
int findMax(int array[], int size) {
    if (size == 1) {
        return array[0];
    } else {
        int maxRest = findMax(array, size - 1);  // Geriye kalan elemanlar için en büyüðü bulunur
        if (array[size - 1] > maxRest) {
            return array[size - 1];
        } else {
            return maxRest;
        }
    }
}

int main() {
    int n;
    printf("Dizi boyutunu girin: ");
    scanf("%d", &n);
    
    int array[n];
    printf("%d elemaný girin:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    //int maxElement = findMax(array, n);  // Rekurzif fonksiyon çaðrýlýyor
    printf("En büyük eleman: %d\n", findMax(array, n));
    
    return 0;
}

