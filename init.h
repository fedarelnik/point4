#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void area_lines(float bound[][4], float coord[][2], int n){

}
void minX(float point[2], float coord[][2], int n){
point[0] = coord[0][0];
point[1] = coord[0][1];
for(int i=1;i<n;i++){
if(coord[i][0]<point[0]){
point[0] = coord[i][0];
point[1] = coord[i][1];
}
}
}
void maxX(float point[2], float coord[][2], int n){
point[0] = coord[0][0];
point[1] = coord[0][1];
for(int i=1;i<n;i++){
if(coord[i][0]>point[0]){
point[0] = coord[i][0];
point[1] = coord[i][1];
}
}
}
void minY(float point[2], float coord[][2], int n){
point[0] = coord[0][0];
point[1] = coord[0][1];
for(int i=1;i<n;i++){
if(coord[i][1]<point[1]){
point[0] = coord[i][0];
point[1] = coord[i][1];
}
}
}
void maxY(float point[2], float coord[][2], int n){
point[0] = coord[0][0];
point[1] = coord[0][1];
for(int i=1;i<n;i++){
if(coord[i][1]>point[1]){
point[0] = coord[i][0];
point[1] = coord[i][1];
}
}
}

float dist(float x1, float y1, float x2, float y2){
return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

void open_coord(float coord[][2], int n, char filename[]){
int i = 0, j = 0;
//printf("filename is: %s\n", filename);
//printf("number: %d\n", n);
FILE *fp;
char c, num[10];
memset(num, '\0', 10);
fp = fopen(filename,"r");
do{
c = getc(fp);
switch(c){
case ' ':
coord[i][0]=atof(num);
//printf("x%d: %f\n", i, atof(num));
j = 0;
memset(num, '\0', 10);
break;
case '\n':
coord[i][1]=atof(num);
//printf("y%d: %f\n", i, atof(num));
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
