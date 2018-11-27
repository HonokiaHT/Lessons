#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<math.h>
#include<string.h>

/*
//List 10.9

#define MONTHS 12
int main()
{
	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %2d has %d days.\n", index + 1, *(days + index));
	system("pause");
	return 0;
}
*/

//List 10.10

/*
#define SIZE 100
int sum(int ar[], int n);
int main()
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	long answer;
	answer = sum(marbles, SIZE);
	printf("The total number of marbles is %ld.\n", answer);
	printf("The size of marbles is %zd bytes.\n", sizeof marbles);
	system("pause");
	return 0;
}

int sum(int ar[], int n)
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
	total += ar[i];
	printf("The size of ar is %zd bytes.\n", sizeof ar);
	return total;
}
*/

//List 10.11
/*

#define SIZE 10
int sump(int *start, int *end);
int main()
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	long answer;
	answer = sump(marbles, marbles + SIZE);
	printf("The total number of marbles is %ld.\n", answer);
	system("pause");
	return 0;
}

int sump(int *start, int *end)
{
	int total = 0;
	while (start < end)
	{
		total += *start;
		start++;
	}
	return total;
}
*/

//List 10.12

/*
int main()
{
	int urn[5] = { 100,200,300,400,500 };
	int *ptr1, *ptr2, *ptr3;
	ptr1 = urn;
	ptr2 = &urn[2];
	printf("pointer value,dereferenced pointer address:\n");
	printf("ptr1=%p,*ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1);
	ptr3 = ptr1 + 4;
	printf("\nadding an int to a pointer:\n");
	printf("ptr1+4=%p,*(ptr1+4)=%d\n", ptr1 + 4, *(ptr1 + 4));
	ptr1++;
	printf("\nvalues after ptr1++\n");
	printf("ptr1=%p,*ptr1=%d,&ptr1=%p", ptr1, *ptr1, &ptr1);
	ptr2--;
	printf("\nvalues after ptr2--");
	printf("ptr2=%p,*ptr2=%d,&ptr2=%p", ptr2, *ptr2, &ptr2);
	--ptr1;
	++ptr2;
	printf("\nPointers reset to original value:\n");
	printf("ptr1=%p,ptr2=%p", ptr1, ptr2);
	printf("\nsubtracting one pointer from another:\n");
	printf("ptr2 =%p， ptrl = %p , ptr2 - ptrl =%d\n ", ptr2, ptr1, ptr2 - ptr1);
	printf("\nsubtracting an int from a pointer,\n");
	printf("ptr3=%p,ptr3-2=%p\n", ptr3, ptr3 - 2);
	system("pause");
	return 0;
}
*/

//Program 5

/*
int main()
{
	int  var1;
	int  var2[10] = { 0 };
	printf("var1 变量的地址： %p\n", var1);
	printf("var2 变量的地址： %p\n", var2);

	printf("\nvar2 变量的地址： %d\n", *var2);
	printf("var2 变量的地址： %d\n", *var2);
	printf("var2 变量的地址： %p\n", var2);
	system("pause");
	return 0;
}
*/

//Program 5

/*
int main()
{
	int select_max(int *p, int i);
	int nums[20];
	int i = 0, *p;
	printf("Please enter some numbers(up to 20)(q to quit):\n");

	while (scanf_s("%d", &nums[i]) == 1)
		i++;

	p = nums;

	printf("The max number in the numbers is %d.\n", select_max(p, i));

	system("pause");
	return 0;
}

int select_max(int *p, int i)
{
	int m = *p, count;
	for (count = 0; count <= i; count++, *p++)
		if (m < *p)
			m = *p;
	return m;
}
*/

//Program 6						选择法指针函数

/*
int main()
{
	void select_sort(float *p, int n);
	int  nums[20],i = 0;
	float *p;

	printf("Please enter some numbers(up tp 20 numbers)(q to quit):\n");

	while (scanf_s("%f", &nums[i]) == 1)
		i++;
	p = nums;
	select_sort(p, i);

	system("pause");
	return 0;
}

void select_sort(float *p, int n)
{
	int save,i,j;
	float max = *p,*save_p, *re;

	re = p;
	
	for (i = 0; i <= n - 2; i++)
	{
		for (p = re, j = 0, max = *p, save_p = p; j <= n - 2 - i; j++, p++)
		{
			
			if (max < *(p + 1))
			{
				max = *(p + 1);
				save_p = p + 1;
			}
		}
		save = *p;
		*p = max;
		*save_p = save;
	}

	p = re;
	printf("After sorting,the numbers are as follows:\n");
	for (i = 0; i <= n-1; i++,p++)
		printf("%.2f ", *p);
	printf("\n");
}
*/

//Program 7					冒泡法指针函数

/*
int main()
{
	void bubble_sort(float *p, int n);
	int i=0, nums[20];
	float *p;

	printf("Please enter some numbers(up tp 20 numbers)(q to quit):\n");

	while (scanf_s("%f", &nums[i]) == 1)
		i++;
	p = nums;

	bubble_sort(p, i);

	system("pause");
	return 0;
}

void bubble_sort(float *p, int n)
{
	int save, i, j;
	float *re = p;

	for (i = 0; i <= n - 2; i++)
	{
		for (p = re,j=0; j <= n - 2 - i; j++, p++)
		{
			if (*p > *(p + 1))
			{
				save = *p;
				*p = *(p + 1);
				*(p + 1) = save;
			}
		}
	}
	p = re;

	printf("After sorting,the numbers are as follows:\n");
	for (i = 0; i <= n - 1; i++, p++)
		printf("%.2f ", *p);
	printf("\n");
}
*/