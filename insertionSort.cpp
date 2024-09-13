#include <iostream>
using namespace std;

// Função para realizar a ordenação por inserção
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Elemento atual que será comparado
        int j = i - 1;

        // Move os elementos que são maiores que a "key" para a posição à frente
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Função para imprimir o array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array original: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Array ordenado: ";
    printArray(arr, n);

    return 0;
}
