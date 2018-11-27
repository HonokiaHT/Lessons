#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<math.h>
#include<string.h>

//eg 7.14
/*
int i;
int main()
	{
		int score[10];
	printf("Please enter 10 scores:\n");
	for (i = 0; i <= 9; i++)
		scanf_s("%d", &score[i]);
	statistics(score);			

}
void statistcs(int a[10])
{

}
*/

//p219.14
/*

int i, j;
double ave[10];

int main()
{
	void ave_student(int a[10][5]);
	void ave_lesson(int a[10][5]);
	void highest(int a[10][5]);
	void d(int a[10][5]);

	int scores[10][5];

	printf("Please enter the 10 students' scores:\n");
	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 4; j++)
			scanf_s("%d", &scores[i][j]);

	ave_student(scores);
	ave_lesson(scores);
	highest(scores);
	d(scores);

	system("pause");
	return 0;
}

void ave_student(int a[10][5])
{
	double sum;
	for (i = 0; i <= 9; i++)
	{
		for (sum = 0, j = 0; j <= 4; j++)
			sum = sum + a[i][j];
		printf("The average score of student %d is %lf.\n", i + 1,sum/5.0 );
		ave[i] = sum / 5.0;
	}
	printf("\n");
}

void ave_lesson(int a[10][5])
{
	double sum;
	for (i = 0; i <= 4; i++)
	{ 
		for (j = 0, sum = 0; j <= 9; j++)
			sum = sum + a[j][i];
		printf("The average score of lesson %d is %lf.\n", i + 1, sum / 5.0);
	}
	printf("\n");
}

void highest(int a[10][5])
{
	int max = a[0][0];
	int student = 1;
	int lesson = 1;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 4; j++)
			if (a[i][j] > max)
			{
				max = a[i][j];
				student = i;
				lesson = j;
			}
	}
	printf("The highest score is belong to student %d,lesson %d.\n", student, lesson);
	printf("\n");
}

void d(int a[10][5])
{
	double sum = 0, sum2 = 0;
	for (i = 0; i <= 9; i++)
	{
		sum = sum + ave[i];
		sum2 = sum2 + ave[i] * ave[i];
	}
	printf("The variance of the studens' average score is %d.\n",sum2/10.0-pow(sum/10.0,2));
	printf("\n");
}
*/

//p219.15

/*
int i, j;
char list_name[10][10];
int list_num[10];

int main()
{
	void getlist(n);
	void sort(n);
	int search(p);

	printf("Please enter 10 workers' numbers and names:\n");

	getlist(10);
	printf("\n");
	sort(10);
	printf("\n");

	int s, worker;
	printf("Please enter a worker's number:\n");
	scanf_s("%d", &s);

	worker=search(s);

	if (worker == -1)
		printf("The number is not in the list.\n");
	else
		printf("The worker is %s.\n", list_name[worker]);

	system("pause");
	return 0;
}

void getlist(n)
{
	for (i = 0; i <= n - 1; i++)
		scanf_s("%d %s", &list_num[i], &list_name[i],n-1);
}

void sort(n)
{
	int save;
	char saves[10];
	for (i = 0; i <= n - 2; i++)
		for (j = 0; j <= n - 2 - i; j++)
			if (list_num[j] > list_num[j + 1])
			{
				save = list_num[j];
				list_num[j] = list_num[j + 1];
				list_num[j + 1] = save;

				strcpy(saves, list_name[j]);
				strcpy(list_name[j], list_name[j + 1]);
				strcpy(list_name[j + 1], saves);
			}
	printf("After sorting,the workers' numbers and names are:\n");
	for (i = 0; i <= n - 1; i++)
		printf("%d\t%s\n", list_num[i], list_name[i]);
}

int search(p)
{
	int count, d, mid;
	int min = 0, max = 9;
	while(min+1!=max)
	{
		mid = (min + max) / 2;
		if (p == list_num[mid])
		{
			d = mid;
			return d;
		}
		else
			if (p > list_num[mid])
				min = mid;
			else
				max = mid;
	}
	return -1;
}
*/

//p219.17
/*
char nums[10];
int i = 0;

int main()
{
	void tostring(num);
	long int num;
	printf("Please enter a number(up to 9999999999):\n");
	scanf_s("%ld", &num);

	tostring(num);

	printf("The string is:\n");
	for (i=i-1; i >= 0; i--)
		printf("%ld", nums[i]);
	printf("\n");

	system("pause");
	return 0;
}

void tostring(num)
{
	nums[i] = num % 10;
	i++;
	if (num / 10 >= 1)
		tostring(num / 10);
}
*/
