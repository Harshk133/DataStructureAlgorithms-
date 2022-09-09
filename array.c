#include<stdio.h>
#include<conio.h>
# define max 5

main(){
int arr[max], i;
//clrscr();
printf("Enter elements into array (maximum 5)\n");
for(i=0;i<max;i++){
scanf("%d", &arr[i]);
}
printf("Your array is\n");
for(i=0;i<max;i++){
printf("arr[%d] = %d\n",i,arr[i]);
}
getch();
}