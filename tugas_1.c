/*
	Jody Yuantoro ( 2021-147 )
	Informatics Engineering, Faculty of Engineering
	University of Muhammadiyah Malang
*/

#include <stdio.h>

int main(){

    int nilai_pd[2][3];

    // Nilai Boruto
    printf("\nnilai boruto : \n");
    for(int nilai_boruto = 1; nilai_boruto <= 3; nilai_boruto++){
        printf("ujian progdas ke-%d : ", nilai_boruto);
        scanf("%d", &nilai_pd[0][nilai_boruto]);
    }

    // Nilai Sarada
    printf("\nnilai sarada : \n");
    for(int nilai_sarada = 1; nilai_sarada <= 3; nilai_sarada++){
        printf("ujian progdas ke-%d : ", nilai_sarada);
        scanf("%d", &nilai_pd[1][nilai_sarada]);
    }

    // Perbandingan
    printf("\nrekap perbandingan nilai boruto dan sarada :\n");
    for (int pd = 1; pd <= 3; pd++){ 
        if(nilai_pd[1][pd] >= nilai_pd[0][pd]){
            printf("hasilnya : 0\n");
        } else {
            printf("hasilnya : 1\n");
        }
    }

}
