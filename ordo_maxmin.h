/*
	Jody Yuantoro ( 2021-147 )
	Informatics Engineering, Faculty of Engineering
	University of Muhammadiyah Malang
*/

void ordo_max_min(int ordo_arrays[], int ordo_size)
{
    int smallest = ordo_arrays[0];
    int biggest = ordo_arrays[0];

    for (int index = 0; index < ordo_size; index++){
        if (ordo_arrays[index] < smallest){
            smallest = ordo_arrays[index];
        }
        if (ordo_arrays[index] > biggest){
            biggest = ordo_arrays[index];
        }
    }

    printf("smallest : %d\tbiggest : %d", smallest, biggest);

}