#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "init.h"

int main(int argc, char *argv[]){
int n = 4;
char coordfile[] = "coord.txt";
float coord_array[n][2];
open_coord(coord_array, n, coordfile);
printf("hello world\n");
return 0;
}
