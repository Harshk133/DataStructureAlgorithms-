#include<stdio.h>
#include<conio.h>
#define MAX 10

void main(){
int Arr[MAX], i, j, n, temp, pass = 1, k;

printf("Enter How Many Numbers to Insert:\n");
scanf("%d", &n);

if(n>MAX){
printf("Array size is %d", MAX);
}
else{
printf("Enter %d Number", n);
for(i=0; i<n; i++){
printf("\t\n");
scanf("%d", &Arr[i]);
}
for(i=0; i<n; i++){
for(j=0; j<n-i; i++){
if(Arr[j] > Arr[j+1]){
temp = Arr[j];
Arr[j] = Arr[j+1];
Arr[j+1] = temp;
}
}
printf("\nList after Pass %d is ", pass);
for(k=0; k<n; k++){
printf("\n\t %d", Arr[k]);
}
pass++;
getch();
}
printf("\nTotal Comparisions is %d", pass);
printf("\nThe Final sorted list is");
for(i=0; i<n; i++){
printf("\t %d", Arr[i]);
}
}

getch();
}