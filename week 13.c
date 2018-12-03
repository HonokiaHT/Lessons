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
	printf("ptr2 =%p�� ptrl = %p , ptr2 - ptrl =%d\n ", ptr2, ptr1, ptr2 - ptr1);
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
	printf("var1 �����ĵ�ַ�� %p\n", var1);
	printf("var2 �����ĵ�ַ�� %p\n", var2);

	printf("\nvar2 �����ĵ�ַ�� %d\n", *var2);
	printf("var2 �����ĵ�ַ�� %d\n", *var2);
	printf("var2 �����ĵ�ַ�� %p\n", var2);
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

//Program 6						ѡ��ָ�뺯��

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

//Program 7					ð�ݷ�ָ�뺯��

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


//p291.3	��������ں����з������顪������ָ�뺯�������ѷ���������Ϊ����֮һ
				//			��ʹ�� static+������ ����Ҫ���صľֲ���������

/*
int main()
{
	void input(int *p);
	int *process(int *p);
	void output(int *p);
	int nums[10],numsout[10], *p, *pout;
	p = nums;

	input(p);

	pout = process(p,numsout);

	output(pout);

	system("pause");
	return 0;
}

void input(int *p)
{
	int i;
	printf("Please enter 10 numbers:\n");
	for (i = 0; i <= 9; i++,p++)
		scanf_s("%d", p);
}

int *process(int *p)
{
	int i, save, *savep1,*savep2,*re, max, min;
	static int a[10];
	max = *p;
	min = *p;
	re = p;
	savep1 = p;
	savep2 = p;
	for (i = 1; i <= 9; i++, p++)
	{
		if (max < *(p + 1))
		{
			max = *(p + 1);
			savep1 = p + 1;
		}
		if (min > *(p + 1))
		{
			min = *(p + 1);
			savep2 = p + 1;
		}
	}
	save = *p;
	*p = max;
	*savep1 = save;

	save = *re;
	*re = min;
	*savep2 = save;

	for (i = 0, p = re; i <= 9; i++, p++)
		a[i] = *p;
	return a;
}

void output(int *p)
{
	int i;
	printf("After sorting,the numbers are as follows:\n");
	for (i = 1; i <= 10; i++, p++)
		printf("%d ", *p);
	printf("\n\n");
}
*/


//p291.4										��������λ�õ���

/*
int main()
{
	int *sort(int *p, int n, int m, int numsout[]);

	int nums[20], numsout[20];
	int i = 0, n = 0, m;
	int *p, *pout;

	printf("Please enter some numbers(up to 20)(q to quit):\n");
	while (scanf_s("%d", &nums[i]) == 1)
	{
		i++;
		n++;
	}
	printf("Please enter how many numbers will be put in front:\n");
	scanf_s("%*c%d", &m);

	p = nums;
	pout = sort(p, n, m, numsout);
	
	printf("After sorting,the numbers are as follows:\n");
	for (i = 1; i <= n; i++, pout++)
		printf("%d ", *pout);
	printf("\n");

	system("pause");
	return 0;
}

int *sort(int *p,int n,int m,int numsout[])						//����Ϊָ����ʽ���Է���ָ��
{
	int save, i,j;
	int *re;
	re = p;
	for (i = 1; i <= n - m; i++)
		for (p = re + n - m - i,j = 1; j <= m; j++, p++)		//���������һ��Ҫ����ƶ������ĵ�ַ
		{
			save = *(p + 1);
			*(p + 1) = *p;
			*p = save;
		}
	for (p = re, i = 0; i <= n - 1; i++,p++)					//���������������Ϊ���鷵��
		numsout[i] = *p;

	return numsout;
}
*/


//p291.5

/*
int main()
{
	int remain(int *p, int n);
	int mans[50] = { 0 };
	int n;
	int *p;

	
	printf("Please enter the number of the people(up tp 50):\n");
	scanf_s("%d", &n);
	for (int i = 0; i <= n-1; i++)
		mans[i] = 1;
	p = mans;

	printf("\nThe left man is %d.\n", remain(p, n));

	system("pause");
	return 0;
}

int remain(int *p,int n)
{
	int theman=0, count=0;
	int *re = p;
	for (int i = 0; i <= 3 * (n - 1)-1; )			//ѭ�����ܲ���������Ϊ���˵ĸ���-1��������
	{
		if (p == (re + n))							//��Խ�磨�����������ޣ����ûص�һ��
			p = re;
		if (*p == 0)								//���������ѱ���̭����
		{
			p++;
			continue;
		}

		i++;count++;								//ѭ����������������+1�����˲��㿪ʼһ�β���
													//��һ�ˡ���������

		if (count == 3)								//����Ϊ3�����˱���̭
		{
			count = 0;
			*p = 0;
		}
		p++;
	}

	for (p = re;; p++)
		if (*p == 1)								//�ҵ�Ψһʣ��
		{
			theman = p - re + 1;					//���ظ���λ��
			break;
		}
	return theman;
}
*/


//p219.9							��ά����ָ��λ��Ѱ��

/*
#define M 3
#define N 3
int main()
{
	int matrix[M][N], Tmatrix[N][M];
	int i, j;
	int *p1,*p2;

	printf("Please assign values to the %dx%d array:\n",M,N);
	for (i = 0; i <= M-1; i++)
		for (j = 0; j <= N-1; j++)
			scanf_s("%d", &matrix[i][j]);

	p1 = &matrix[0][0];
	p2 = &Tmatrix[0][0];

	for (i = 0; i <= M - 1; i++)
		for (j = 0; j <= N - 1; j++)
			*(p2 + j * N + i) = *(p1 + i * M + j);			//�������θ�ֵ��ע��ת�ú����б仯��

	printf("\nAfter sorting,the array is:\n");
	for (i = 1; i <= M * N; i++, p2++)
	{
		printf("%d ", *p2);
		if (i % M == 0)
			printf("\n");
	}

	system("pause");
	return 0;
}
*/


//List 10.5
/*
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31,28,[4] = 31,30,31,[1] = 29 };
	int i;

	for (i = 0; i < MONTHS; i++)
		printf("%2d %d \n", i + 1, days[i]);
	system("pause");
	return 0;
}
*/

//List 10.6
/*
#define SIZE 4
int main(void)
{
	int valuel = 44;
	int arr[SIZE];
	int value2 = 88;
	int i;

	printf("valuel = %d, value2 = %d \n", valuel, value2);
	for (i = -1; i <= SIZE; i++)
		arr[i] = 2 * i + 1;
	for (i = -1; i < 7; i++)
		printf("%2d %d \n", i, arr[i]);
	printf("valuel = %d, value2 = %d \n", valuel, value2);
	system("pause");
	return 0;
}
*/


//Program 1

/*
int i=0;
int main()
{
	int min(int *p);

	int array[100];

	int *p;

	printf("Please assign values to the matrix(up to 100)(q to quit):\n");
	while ((scanf_s("%d", &array[i]) == 1))
		i++;

	p = array;
	printf("\nThe minimum number in the array is %d.\n", min(p));

	system("pause");
	return 0;
}
int min(int *p)
{
	int min, n=1;						//nΪѭ��������
	min = *p;

	for (; n <= i-1; n++,p++)
	{
		if (min > *(p + 1))
			min = *(p + 1);
	}
	return min;
}
*/



//Program 2
					//[]���ȼ�����*
					//int *p[]  һ�����飬�����ж���ָ�룬ÿ��ָ�붼ָ������
					//int (*p)[]  ָ��[]��Ԫ�ص�һ�������飩ָ�룬��p��ָ��[]��Ԫ��(int����)�������ָ��

/*
#define M 3
#define N 4
int main()
{
	void transposition(int(*p)[N], int(*q)[M]);

	int array[M][N], Tarray[N][M] = { 0 };
	int i, j;
	int *p, *q;

	printf("Please assign values to the %dx%d matrix:\n", M, N);
	for (i = 0; i <= M-1; i++)
		for (j = 0; j <= N-1; j++)
			scanf_s("%d", &array[i][j]);
	p = array;
	q = Tarray;

	printf("\nThe transposed matrix is:\n");
	transposition(p, q);

	system("pause");
	return 0;
}

void transposition(int(*p)[N], int(*q)[M])
{
	int i, j;
	for (i = 0; i <= M - 1; i++)
		for (j = 0; j <= N - 1; j++)
			*(*(q + j) + i) = *(*(p + i) + j);

	for (i=0;i<=N-1;i++)
	{
		for(j=0;j<=M-1;j++)
			printf("%d ", *(*(q + i) + j));
		printf("\n");
	}
}
*/



//Program 3

int main()
{

}
