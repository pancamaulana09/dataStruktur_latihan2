#include <stdio.h>
#include <stdlib.h>

void koboImaginaryChess(int i, int j, int size, int *papan){ // Buat Fungsinya
    int baris, kolom; // Definisikan tipe data dari baris dan kolom

    // Array untuk Pergerakan kudanya 
    int Kuda[8][2] = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

    // Definisikan letak kuda dengan angka 7
    papan[i * size + j] = 7;

    for(int k = 0; k < 8; k++){ // Perulangan jika k < 8
        baris = i + Kuda[k][0]; // Pada baris, i akan diinialisasi Variabel k dengan nilai 0
        kolom = j + Kuda[k][1]; // Pada kolom, j akan diinialisasi Variabel k dengan nilai 1

        if(baris >= 0 && baris < size && kolom >= 0 && kolom < size){ // Cek baris dan kolom indeks pada array papan
            papan[baris * size + kolom] = 1; // Jika benar, nilai indeks pada papan diubah menjadi 1
        }
    }
}

int main(){
    
    int size = 8; // Definisikan size 2D array 
    int *papan = (int*) calloc(size * size, sizeof(int)); // Samakan sizenya dengan papan

    int i, j; // Nilai i dan j sebagai inputan
    printf("Masukkan Baris dan Kolom : \n"); // Masukkan Baris dan Kolom
    scanf("%d %d", &i, &j); // Simpan angka Baris dan kolom

    // Panggil fungsi koboImaginaryChess untuk menandai cell yang dijangkau
    koboImaginaryChess(i, j, size, papan);

    for(int baris = 0; baris < size; baris++){ // Perulangan baris akan berjalan sebanyak size
        for(int kolom = 0; kolom < size; kolom++){ // Perulangan kolom akan berjalan sebanyak size
            printf("%d ", papan[baris * size + kolom]); // Elemen baris dihitung dari indeks baris dan kolomnya
        }
        printf("\n"); // Buat elemen pada barisan baru
    }

    // Pembebasan memory karena menggunakan calloc
    free(papan);

    return 0; // Prorgram Selesai
}

