#include <stdio.h>

float greatestOf (float *a, float *b, float *c, float *d){ // Buat Fungsi greatestOf
    float max = *a; // Definisikan nilai a sebagai nilai max nya
    if (*b > max && *b != *a){ // Jika b lebih besar dari max dan tidak sama dengan a
        max = *b; // Maka b adalah nilai max nya
        }
    if (*c > max && *c != *a && *c != *b){ // Jika c lebih besar dari max dan tidak sama dengan a dan b
        max = *c; // Maka c adalah nilai max nya
        }
    if (*d > max && *d != *a && *d != *b && *d != *c){ // Jika d lebih besar dari max dan tidak sama dengan a, b, c
        max = *d; // Maka d adalah nilai max nya
        }
    return max; // Tampilkan nilai max nya
}
    int main(){ // Buat fungsi utamanya
        float a, b, c, d; // Definisikan Variabel dan tipe datanya
        printf("Masukkan Bilangan : "); // Print "Masukkan Bilangan"
        scanf("%f %f %f %f", &a, &b, &c, &d); // Masukkan nilai bilangannya
        printf("%.f%%\n", greatestOf(&a, &b, &c, &d)); // Tampilkan nilai max nya dari Fungsi greatestOf

        return 0; // Program selesai
    }
