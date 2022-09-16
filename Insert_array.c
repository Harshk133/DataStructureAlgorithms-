//How to insert a element at a particular position in the array?
#include<stdio.h>
#include<conio.h>

int main(){
int arr[10]={0}, no, e, p, i;

printf("Enter number of elements\n");
scanf("%d", &no);
printf("Enter the elements into array\n");
for(i=0;i<no;i++){
scanf("%d", &arr[i]);
}

printf("Your array is\n");
printf("Element Data\n");
for(i=0;i<no;i++){
printf("arr[%d] = %d\n", i+1,arr[i]);
}

printf("Enter the elements and last position to be insert\n");
scanf("%d%d", &e, &p);
p--;

for(i=no;i!=p;i--){
arr[i]=arr[i-1];
arr[i]=e;
}

printf("Element Data\n");
for(i=0;i<=no;i++){
if(arr[i]!=0)
printf("\narr[%d] = %d\n", i+1, arr[i]);
}
getch();
}