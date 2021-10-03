#include<stdio.h>
void main()
{



	int i, n, search,flag=0;
	printf("How many element You Want?\n");
	scanf_s("%d", &n);
	printf("Enter Array Elment\n");
	for (i = 0; i <=n; i++)
	{
		scanf_s("%d", &a[i]);
	}

    int Binary_search(int a[], int low, int high, int search)
   
	int mid;

	
	while (low <= high)
	{
		mid = (low + high) / 2;

		if (search == a[mid])
		{
			printf("Element found\n");
			break;
		}

		else if (search < a[mid] && a[low] <= search)
		{
			high = mid - 1;
		}

		else if (search > a[mid] && a[high] >= search)
		{
			low = mid + 1;
		}

		else
		{
			printf("Element not found\n");
			break;
		}
	}
	return;
}


