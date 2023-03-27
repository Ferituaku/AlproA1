/* Nama File    		: JumPrimaProc.c */
/* Deskripsi    		: Menghitung dan menampilkan jumlah bilangan prima*/
/* Pembuat      		: Al Ferro Putra Yusanda - 24060122140164*/
/*Tanggal Pembuatan		: 27 Maret 2023 */	

#include <stdio.h>

void Jumprim (int hasil, int N);

int main(){
    int N;
    int hasil = 0;
    
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    
    if (N < 0){
        printf("Input harus positif");   
    }
    else{
        (Jumprim(hasil,N));
    }

return 0;
}

void Jumprim (int hasil, int N){
/*kamus lokal*/
    int faktor;
/*Algoritma*/
    printf("Jumlah prima adalah ");
    for (int i = 1; i <= N & N > 0; i++) {
        faktor = 0;
        for (int j = 1; j <= i; j++){
            if (i % j == 0){
                faktor ++;
            }
        }
        if (faktor == 2){
            hasil+=i;
        }
    }
    printf("%d",hasil);
}