#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float dist(float x1, float y1, float x2, float y2){
return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

void open_coord(float coord[][2], int n, char filename[]){
int i = 0, j = 0;
printf("filename is: %s\n", filename);
printf("number: %d\n", n);
FILE *fp;
char c, num[10];
memset(num, '\0', 10);
fp = fopen(filename,"r");
do{
c = getc(fp);
switch(c){
case ' ':
printf("here  \n");
//coord[i][0]=atof(num);
printf("before");
printf("x%d: %s\n", i, num);
j = 0;
memset(num, '\0', 10);
break;
case '\n':
printf("here n\n");
//coord[i][1]=atof(num);
printf("y%d: %s\n", i, num);
j = 0;
i++;
memset(num, '\0', 10);
break;
default:
num[j]=c;
j++;
}
}while((!feof(fp))&&(i<n));
fclose(fp);
}
