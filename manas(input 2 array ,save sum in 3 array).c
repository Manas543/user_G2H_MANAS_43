#include<stdio.h>
int main(){
    int n,i;
 printf(" enter the no. of elements in array:");
scanf("%d", &n);
int arr[n],arr2[n],arr3[n];
printf("enter the first array:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("enter the seciond array:\n");
for
(i=0;i<n;i++){
    scanf("%d",&arr2[i]);
}
printf("the sum of array is:");
for(i=0;i<n;i++){
    arr3[i]=arr[i]+arr2[i];
    printf("%d ",arr3[i]);
}
return 0;
}