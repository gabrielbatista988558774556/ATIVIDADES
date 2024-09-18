#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        bool swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int n;
    printf("Digite o número de elementos: ");
    scanf("%d", &n);
    int arr[n];
    printf("Digite os elementos: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    bubbleSort(arr, n);

    printf("Ordenado: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}