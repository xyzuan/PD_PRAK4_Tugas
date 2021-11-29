/*
	Jody Yuantoro ( 2021-147 )
	Informatics Engineering, Faculty of Engineering
	University of Muhammadiyah Malang
*/

#include <stdio.h>

int pil_ordo; int ordo_size;
int var_ordo_2x2[2][2]; int var_ordo_3x3[3][3];

int ordo_max_min(int ordo_arrays[], int ordo_size){
    int smallest = ordo_arrays[0];
    int biggest = ordo_arrays[0];
    for (int index = 0; index < ordo_size; index++){
        if (ordo_arrays[index] < smallest){
            smallest = ordo_arrays[index];
        } if (ordo_arrays[index] > biggest){
            biggest = ordo_arrays[index];
        }
    } printf("smallest : %d\tbiggest : %d", smallest, biggest);
}

int main(){
    awal:
    printf("Pilih ordo matrix, 2x2 maka 2 atau 3x3 maka 3 : "); scanf("%d", &pil_ordo);
    switch ( pil_ordo ){
    case 2:
        printf("\nmasukkan angka dalam matrix : \n");
        ordo_size = 2;
        for(int ordo_x = 0; ordo_x < ordo_size; ordo_x++){
            for(int ordo_y = 0; ordo_y < ordo_size; ordo_y++){
                printf("masukkan angka pada indeks [%d][%d] : ", ordo_x ,ordo_y);
                scanf("%d", &var_ordo_2x2[ordo_x][ordo_y]);  
            }
        } printf("\nhasilnya adalah :\n");
        for(int ordo_x = 0; ordo_x < ordo_size; ordo_x++){
            for(int ordo_y = 0; ordo_y < ordo_size; ordo_y++){
                printf("%d\t", var_ordo_2x2[ordo_x][ordo_y]);
            }   printf("\n");
        }
        int ordo_2x2[4] = {var_ordo_2x2[0][0], var_ordo_2x2[0][1],
                           var_ordo_2x2[1][0], var_ordo_2x2[1][1]};
        ordo_max_min(ordo_2x2,ordo_size);
        break;

    case 3:
        printf("\nmasukkan angka dalam matrix : \n");
        ordo_size = 3;
        for(int ordo_x = 0; ordo_x < ordo_size; ordo_x++){
            for(int ordo_y = 0; ordo_y < ordo_size; ordo_y++){
                printf("masukkan angka pada indeks [%d][%d] : ", ordo_x ,ordo_y);
                scanf("%d", &var_ordo_3x3[ordo_x][ordo_y]);  
            }
        } printf("\nhasilnya adalah :\n");
        for(int ordo_x = 0; ordo_x < ordo_size; ordo_x++){
            for(int ordo_y = 0; ordo_y < ordo_size; ordo_y++){
                printf("%d\t", var_ordo_3x3[ordo_x][ordo_y]);
            }   printf("\n");
        }
        int ordo_3x3[9] = {var_ordo_3x3[0][0], var_ordo_3x3[0][1],var_ordo_3x3[0][2],
                           var_ordo_3x3[1][0], var_ordo_3x3[1][1],var_ordo_3x3[1][2],
                           var_ordo_3x3[2][0], var_ordo_3x3[2][1],var_ordo_3x3[2][2]};
        ordo_max_min(ordo_3x3,ordo_size);
        break;
    
    default:
        printf("Inputan anda salah...\n");
        goto awal;
    }
}