//How to create two dimensional array??
#include<stdio.h>
#include<conio.h>
#define row 2
#define col 2

int main(){
int arr[row][col],i,j;

printf("Enter Values in two dimensional arrays (2 rows, 2 columns)\n");
for(i=0;i<row;i++){
for(j=0;j<col;j++){
scanf("%d", &arr[i][j]);
}
}

printf("Your two dimensional array is\n");
for(i=0;i<row;i++){
for(j=0;j<col;j++){
printf("%d\t", arr[i][j]);
}
printf("\n");
}
getch();
return 0;
}