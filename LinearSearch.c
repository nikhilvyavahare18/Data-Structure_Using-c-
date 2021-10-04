#include<stdio.h>
void main()
{
	int a[100];
	int i, n, search,flag=0;
	printf("How many element You Want?\n");
	scanf_s("%d", &n);
	printf("Enter Array Elment\n");
	for (i = 0; i <=n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("Enter Search Element\n");
	scanf_s("%d", &search);

	
	for (i = 0; i <= n; i++)
	{

		if (search == a[i])
		{
			flag = 1;
			printf("No is Found\n");
			break;
		}
	}
		if (flag == 0)
		{
			printf("No is not Found\n");
		}

	
}