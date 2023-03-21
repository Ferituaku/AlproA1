#include <stdio.h>


int main() {
    int sama;
    int i, j, N;
    int *arr;

    printf("Masukkan ukuran array: ");
    scanf("%d", &N);

    arr = (int*)malloc(N * sizeof(int));

    printf("masukkan element: ");
    for (i = 0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    

    // Hitung frekuensi kemunculan setiap elemen dalam tabel
    for (i = 0; i < N; i++) {
        sama = 0;
        for (j = i+1; j < N; j++) {
            if (i == j) {
                break;
            }
            else{
                if(arr[i]==arr[j]){
                    sama++;
                }
            }
        }
        if(sama == 1){
            printf("%d ", arr[i]);
        }
    }


    return 0;
}
