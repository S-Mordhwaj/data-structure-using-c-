#include<stdio.h>
int lsearch(int arr[], int size, int key){
int i;
for(i = 0; i<size; i++){
if(arr[i] == key)
return i;
}
if(i == size) return -1;
}
int main()
{
 int arr[100], n, i, key;
printf("Enter the no. of values:\n");
scanf("%d", &n);
printf("Enter the values:\n");
for(i=0; i<n; i++)
scanf("%d",&arr[i]);
printf("Enter element to search for:\n");
scanf("%d", &key);
if(lsearch(arr,n,key) == -1 )
printf("Element is not found:\n");
else
printf("Element is found at %d index \n",lsearch(arr,n,key));
return 0;
}