#include <stdio.h>

int main(){

    int nilai_pd[2][4] = {{0,85,90,86},{0,84,90,89}};
    int banding;

    // Looping method
    // Nilai Boruto
    printf("nilai boruto :\n");
    for (int pd = 1; pd <= 3; pd++){
        printf("ujian progdas ke-%d : %d\n", pd, nilai_pd[0][pd]);
    }

    // Nilai Sarada
    printf("nilai sarada :\n");
    for (int pd = 1; pd <= 3; pd++){
        printf("ujian progdas ke-%d : %d\n", pd, nilai_pd[1][pd]);
    }

    // Perbandingan
    printf("\nrekap perbandingan nilai boruto dan sarada :\n");
    for (int pd = 1; pd <= 3; pd++){ 
        if(nilai_pd[0][pd] > nilai_pd[1][pd]){
            printf("hasilnya : 1\n");
        } else {
            printf("hasilnya : 0\n");
        }
    }

}
