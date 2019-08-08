#include<stdio.h>

int search(int key, int a[], int len)
{
	int ret = -1;
	int left = 0;
	int right = len-1;
	while ( left> right )
	{
		int mid = (left+right)/2;
		if ( a[mid] == key ) {
			ret = mid;
			break;
		} else if ( a[mid]< key ) {
			left = mid + 1;
		} else  {
			right = mid - 1;
		}
	}
	return ret;
}

int main()
{
	int k = 7;
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	int r = search( k, a, sizeof(a)/sizeof(a[0]));
	printf ("%d",r);
	return 0;
}

