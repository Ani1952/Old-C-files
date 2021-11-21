#include<stdio.h>

void sort(int arr[],int n){
	if(n==0)
	return;
	int flag=arr[n];
	int j=n-1;
	int c;
	if(flag>arr[j]){
		c=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=c;
	}
	sort(arr,n-1);
}

void print(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr)/4 ;// Divide by 4 since 1 value takes 4 byte
    sort(arr, n);
    print(arr, n);
 
    return 0;
}
