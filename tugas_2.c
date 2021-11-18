#include <stdio.h>
#include "ordo_maxmin.h"

int pil_ordo;
int var_ordo_2x2[2][2];
int var_ordo_3x3[3][3];
int biggest,smallest;

int main(){
    printf("Pilih ordo matrix, 2x2 maka 2 atau 3x3 maka 3 : ");
    scanf("%d", &pil_ordo);

    switch ( pil_ordo ){
    case 2:
        printf("\nmasukkan angka dalam matrix : \n");
        for(int loop_ordo_x = 0; loop_ordo_x < 2; loop_ordo_x++){
            for(int loop_ordo_y = 0; loop_ordo_y < 2; loop_ordo_y++){
                printf("masukkan angka pada indeks [%d][%d] : ", loop_ordo_x ,loop_ordo_y);
                scanf("%d", &var_ordo_2x2[loop_ordo_x][loop_ordo_y]);
            }
        }
        break;
    case 3:
        printf("\nmasukkan angka dalam matrix : \n");
        for(int loop_ordo_x = 0; loop_ordo_x < 3; loop_ordo_x++){
            for(int loop_ordo_y = 0; loop_ordo_y < 3; loop_ordo_y++){
                printf("masukkan angka pada indeks [%d][%d] : ", loop_ordo_x ,loop_ordo_y);
                scanf("%d", &var_ordo_3x3[loop_ordo_x][loop_ordo_y]);
            }
        }
        break;
    default:
        break;
    }

    /* Find a Smallest & biggest value
       in var_ordo_2x2 and var_ordo_3x3 */

    /* Converting Multidimensional Array Ordo values
       to Single Array
    */
    int ordo_2x2[4] = {var_ordo_2x2[0][0], var_ordo_2x2[0][1],
                       var_ordo_2x2[1][0], var_ordo_2x2[1][1]};

    int ordo_3x3[9] = {var_ordo_3x3[0][0], var_ordo_3x3[0][1],var_ordo_3x3[0][2],
                       var_ordo_3x3[1][0], var_ordo_3x3[1][1],var_ordo_3x3[1][2],
                       var_ordo_3x3[2][0], var_ordo_3x3[2][1],var_ordo_3x3[2][2]};

    /* Result Output
       Array list and smallest biggest array values
    */
    printf("\nhasilnya adalah : \n");
    switch ( pil_ordo ){
    case 2:        
        printf("%d\t%d\n%d\t%d\n", var_ordo_2x2[0][0], var_ordo_2x2[0][1],
                                   var_ordo_2x2[1][0], var_ordo_2x2[1][1]);

        ordo_max_min(ordo_2x2, 4);
        break;

    case 3:
        printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n",
                var_ordo_3x3[0][0],var_ordo_3x3[0][1],var_ordo_3x3[0][2],
                var_ordo_3x3[1][0],var_ordo_3x3[1][1],var_ordo_3x3[1][2],
                var_ordo_3x3[2][0],var_ordo_3x3[2][1],var_ordo_3x3[2][2]);

        ordo_max_min(ordo_3x3, 9);
        break;
    }
}