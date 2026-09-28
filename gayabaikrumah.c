#include <stdio.h>

int main(void) {
    // Deklarasi variabel dengan nama yang jelas (deskriptif)
    int jumlahBarang = 5;
    float hargaSatuan = 15000.0;
    float totalBiaya = 0.0;

    // Perhitungan dengan spasi yang konsisten
    totalBiaya = jumlahBarang * hargaSatuan;

    // Output dengan indentasi yang rapi
    printf("Jumlah Barang : %d\n", jumlahBarang);
    printf("Total Biaya   : Rp %.2f\n", totalBiaya);

    return 0;
}