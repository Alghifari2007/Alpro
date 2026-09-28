#include <stdio.h>

int main(void) {
    // Deklarasi variabel sesuai ketentuan tipe data minimal: char, int, float
    char kodeAlat = 'A';
    int tahunProduksi = 2023;
    float rentangMaksimum = 600.0;

    // Menampilkan kartu spesifikasi
    printf("========================================\n");
    printf("         KARTU SPESIFIKASI ALAT         \n");
    printf("========================================\n");
    printf("Kode Alat          : %c\n", kodeAlat);
    printf("Tahun Produksi     : %d\n", tahunProduksi);
    printf("Rentang Maksimum   : %.1f V\n", rentangMaksimum);
    printf("========================================\n");

    return 0;
}