/* Nama File    		: JumPrimafunc.c */
/* Deskripsi    		: Menghitung dan menampilkan jumlah bilangan prima*/
/* Pembuat      		: Al Ferro Putra Yusanda - 24060122140164*/
/*Tanggal Pembuatan		: 27 Maret 2023 */	


int jumprim(int n);

int main(){
    // kamus 
    int n;
    // Algoritma
    printf("Masukkan n bilangan: ");
    scanf("%d", &n);

    if (n<0){
        printf("n harus positif");
    }else{
        printf("Jumlah prima adalah: %d", jumprim(n));
    }
}

int jumprim(int n){
    // Kamus Lokal
    int faktor, jumlah = 0;
    // Algoritma
    for(int i = 1; i <= n & n>0; i++){
        faktor = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                faktor++;
            }
        }
        if(faktor == 2){
            jumlah+=i;
        }
    }
    return jumlah;
    }
