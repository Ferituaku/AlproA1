#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, equal, sum = 0, *array;


    printf("masukkan jumlah elementnya: ");
    scanf("%d", &n);

    array = (int*)malloc(n*sizeof(int));

    printf("masukkan ke-%d bilangannya: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n;i++)
    {
        equal = 0;
        for(int j=0; j<n; j++)
        {
            if(array[i]==array[j])
            {
                equal++;
            }
        }
        if(equal>1)
        {
            sum += array[i];
        }
    }
    printf("%d", sum);
return 0;
}