#include <stdio.h>

float arrayMean(int arr[], int n) { // Buat fungsi float arrayMean
    int tambah = 0; // Definisikan variabel tambah = 0
    for (int i = 0; i < n; i++) { // Buat perulangan i untuk nilai n
        tambah += arr[i]; // Menambahkan nilai arr[i] pada variabel tambah
    }
    return (float) tambah / n; // Mengembalikan nilai rata-ratanya
}

int main() { // Buat Fungsi Utama 
    int n; // Definisikan variabel n dengan tipe data Integer
    printf("Masukkan jumlah data : "); // Print kalimat
    scanf("%d", &n); // Input dan Simpan nilai n

    printf("Masukkan nilai : "); // Print kalimat
    int arr[n]; // Masukkan n kedalam arr
    for (int i = 0; i < n; i++) { // Perulangan dari jumlah data n
        scanf("%d", &arr[i]); // Masukkan nilai-nilai nya
    }

    printf("Nilai Mean : %.2f%%", arrayMean(arr, n)); // Print nilainya dari Fungsi arrayMean
    return 0; // Program selesai
}
