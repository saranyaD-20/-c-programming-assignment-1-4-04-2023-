#include<stdio.h>
main()
{
	int arr[]={12,56,34,78,100};
	int len=sizeof(arr)/sizeof(arr[0]);
	int max=arr[0];
	for(int i=0;i<len;i++)
	if(arr[i]>max)
	 max=arr[i];
	 {
	 	printf("largest element present in given array:%d\n"max);
 }
}
