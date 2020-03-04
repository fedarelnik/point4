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
for(int i=0;i<n;i++){
printf("%d) %f | %f\n", i+1, coord_array[i][0], coord_array[i][1]);
}
float minXpoint[2], maxXpoint[2], minYpoint[2], maxYpoint[2];
minX(minXpoint, coord_array, n);
printf("minXpoint = %f | %f\n", minXpoint[0], minXpoint[1]);
maxX(maxXpoint, coord_array, n);
printf("maxXpoint = %f | %f\n", maxXpoint[0], maxXpoint[1]);
minY(minYpoint, coord_array, n);
printf("minYpoint = %f | %f\n", minYpoint[0], minYpoint[1]);
maxY(maxYpoint, coord_array, n);
printf("maxYpoint = %f | %f\n", maxYpoint[0], maxYpoint[1]);
return 0;
}
