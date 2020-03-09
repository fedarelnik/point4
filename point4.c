#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "init.h"

int main(int argc, char *argv[]){
int n = 50;
char coordfile[] = "koordinaty.txt";
float coord_array[n][2];
open_coord(coord_array, n, coordfile);
//for(int i=0;i<n;i++){
//printf("%d) %f | %f\n", i+1, coord_array[i][0], coord_array[i][1]);
//}
return 0;
}
