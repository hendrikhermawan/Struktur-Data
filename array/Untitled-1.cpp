#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Tukar elemen jika elemen ke-j lebih besar dari elemen ke-(j+1)
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Masukkan jumlah angka: ";
    std::cin >> n;
    
    int arr[n];
    
    std::cout << "Masukkan angka-angka tersebut: \n";
    for (int i = 0; i < n; i++){
        std::cout << "Angka ke-" << i+1 << ": ";
        std::cin >> arr[i];
    }

    
    std::cout << "Array sebelum diurutkan: \n";
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    std::cout << "Array setelah diurutkan: \n";
    printArray(arr, n);
    
    return 0;
}
