#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<math.h>


//4*3与3*4矩阵乘积（不具有普遍性）
/*
int main()
{
	int a[4][3], b[3][4];
	int i, j;
	printf("Please assign values to the 4x3 matrix:\n");
	for (i = 0; i <= 3; i++)
		for (j = 0; j <= 2; j++)
			scanf_s("%d", &a[i][j]);
	printf("Please assign values to the 3x4 matrix:\n");
	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 3; j++)
			scanf_s("%d", &b[i][j]);
	int ans[4][4] = { 0 };
	int n;

	printf("The product of the two matrices is:\n");
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (n = 0; n <= 2; n++)			//乘积项数指示物
				ans[i][j] = ans[i][j] + a[i][n] * b[n][j];
			printf("%d ", ans[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}	
*/

//List 10.7
/*
#define MONTHS 12
#define YEARS 5
int main()
{
	//用2010~2014年的降水量数据初始化数组
	const float rain[YEARS][MONTHS] =
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
	    {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2},
	};
	int year, month;
	float subtot, total;

	printf(" YEAR   RAINFALL   (inches)  \n");
	for (year = 0, total = 0; year < YEARS; year++)
	{
		for (month = 0, subtot = 0; month < MONTHS; month++)
			subtot += rain[year][month];
		printf("%5d %15.1f \n", 2010 + year, subtot);
		total += subtot;
	}
	printf("\nThe yearly average is %.1f inches \n\n", total / YEARS);
	printf("MONTHLY ACERAGES; \n\n");
	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct");
	printf(" Nov  Dec \n");

	for (month = 0; month < MONTHS; month++)
	{
		for (year = 0, subtot = 0; year < YEARS; year++)
			subtot += rain[year][month];
		printf("%4.1f ", subtot / YEARS);
	}

	printf("\n");
	system("pause");
	return 0;
*/

//eg7.6
/*
int age(int a)
{
	int nage;
	if (a == 1)
		nage = 10;
	else
		nage = age(a - 1) + 2;
	return  nage;
}

int main()
{
	printf("The age of the fifth is %d.\n", age(5));

	system("pause");
	return 0;
}
*/

//eg7.7
/*
int factorial(n)
{
	int c;
	if (n == 1)
		c = 1;
	else
		c = factorial(n - 1)*n;
	return c;
}
int main()
{
	int m;
	printf("Please enter a number to find the factorial of it:");
	scanf_s("%d", &m);
	printf("The factorial of %d is %d.", m, factorial(m));

	system("pause");
}
*/

//list 9.3
/*
int imin(int n, int m)
{
	int min;

	if (n < m)
		min = n;
	else
		min = m;
	return min;
}
int main()
{
	int evil1, evil2;
	printf("Please enter a pair of intergers(q to quit):\n");

	while (scanf_s("%d %d", &evil1, &evil2) == 2)	//scanf()返回成功读取数据的个数
	{
		printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
		printf("Please enter a pair of intergers(q to quit):\n");
	}
	printf("さよなら.\n");

	system("pause");
	return 0;

}
*/

//p218.1
/*
int divisor(a, b)				//最大公因数函数
{
	int max, d = 1;		
	while (d <= a && d <= b)	//最大公因数必小于两数
	{
		if (a%d == 0 && b%d == 0)
			max = d;
		d++;
	}
	return max;
}
int multiple(a, b)				//最小公倍数函数
{
	int min=0, d;
	if (a > b)
		d = a;
	else
	while (min == 0)
		d = b;					//
	{
		if (d%a == 0 && d%b == 0)
			min = d;
		d++;
	}
	return min;
}
int main()
{	int a,b;
	printf("Please enter two numbers:\n");
	scanf_s("%d %d", &a, &b);
	printf("The maximum common divisor of the two numbers is %d.\n", divisor(a, b));
	printf("The least common multiple of the two numbers is %d.\n", multiple(a, b));
	system("pause");
	return 0;
}
*/

//p218.3
/*
int primenum(n)
{
	int d = 1;
	int count = 0;
	for (d; d <= sqrt(n); d++)
		if (n%d == 0)
			count++;

	return count;
}
int main()
{
	printf("Please enter a number:\n");
	int n;
	scanf_s("%d", &n);
	int count = primenum(n);
	if (n != 1 && count == 1)
		printf("%d is prime number.\n", n);
	else if (n != 1)
		printf("%d isn't prime number.\n", n);
	else
		printf("%d neither prime number nor composite number,\n", n);

	system("pause");
	return 0;
}
*/

//p218.4
/*
int i, j;		//全局变量

int main()
{
	int a[3][3];
	printf("Please assign values to the 3x3 matrix:\n");
	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 2; j++)
			scanf_s("%d", &a[i][j]);

	printf("The transpose matrix of this matrix is:\n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
			printf("%d ", Tmatrix(a));			//多次调用函数，每次输出一个值
		printf("\n");
	}
	system("pause");
	return 0;
}

int Tmatrix(int a[3][3])					
{
	int save;
	int b[3][3];
	b[i][j] = a[j][i];							//直接调用主函数for循环中的i、j值
	return b[i][j];
}
*/

//p218.11
/*
void sort10(int nums[10])
{
	int i, k;
	int smaller = 0;

	for (i = 0; i <= 8; i++)			//10个数，比对9次
	{
		for (k = 0; k <= 8 - i; k++)
		{
			if (nums[k] > nums[k + 1])	//如果第k个数比第k+1个数大，二者值交换，将较大数置后
			{
				smaller = nums[k + 1];
				nums[k + 1] = nums[k];
				nums[k] = smaller;
			}
		}								//多次进行将最大数置到最后
	}
	for (i = 0; i <= 9; i++)
		printf("%d ", nums[i]);
	printf("\n");
}

int main()
{
	int i,num[10];
	printf("Please enter 10 numbers:\n");
	for (i=0;i <= 9;i++)
		scanf_s("%d", &num[i]);
	printf("The numbers that after sorting are as follows:\n");

	sort10(num);		//将整个数组作参数

	system("pause");
	return 0;
}
*/

//p219.13
/*
double legendre(double n, double x)
{
	double c;
	if (n == 0)
		c = 1;
	else if (n == 1)
		c = x;
	else
		c = ((2 * n - 1)*x - legendre(n - 1, x) - (n - 1)*legendre(n - 2, x)) / n;
	return c;
}

int main()
{
	double n, x;
	printf("Please assign values to 'n'and'x' for the Legendre Polynomials:\n");
	scanf_s("%lf%lf", &n, &x);
	printf("The answer is %lf.\n", legendre(n, x));
	system("pause");
	return 0;
}
*/

//List 9.7
/*
long fact(int n);
long rfact(int n);
int main(void)
{
	int num;

	printf("This program calculates factorials \n");
	printf(" Enter a value in the range 0-12 (q to quit) : \n");
	while (scanf_s("%d", &num) == 1)
	{
		if (num < 0)
			printf("No negative numbers,Please \n");
		else if (num > 12)
			printf(" Keep input under 13 \n");
		else
		{
			printf("loop: %d factorial = %ld \n", num, fact(num));
			printf("recursion: %d factorial = %ld \n", num, rfact(num));
		}
		printf(" Enter a value int the range 0-12 (q to quit) : \n");
	}
	printf("bye \n");
	system("pause");
	return 0;
}

long fact(int n)
{
	long ans;
	for (ans = 1; n > 1; n--)
		ans = n * ans;
	return ans;
}

long rfact(int n)
{
	long ans;
	if (n > 0)
		ans = n * rfact(n - 1);
	else
		ans = 1;
	return ans;
}
*/

//List 9.13
/*
void interchange(int u, int v);
int main(void)
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d \n", x, y);
	interchange(x, y);
	printf(" Now x = %d y = %d \n", x, y);
	system("pause");
	return 0;
}

void interchange(int u, int v)
{
	int temp;
	temp = u;
	u = v;
	v = temp;
}
*/

//Program 3
/*
int i, b;			//b为判断符号

int main()
{
	char reserve(char a[10]);
	char a[10];
	printf("Please enter a string(up to 10 character)('/'to end):\n");
	for (i = 0; i <= 9; i++)
	{
		scanf_s("%c", &a[i]);
		if (a[i] == '/')
			break;
	}
	b = i;			
	printf("The reserve string is as follows:\n");
	for (i = 0; i <= b; i++)
 		printf("%c", reserve(a));
	printf("\n");
	system("pause");
	return 0;
}

char reserve(char a[10])
{
	char c;
	c = a[b - i-1];
	return c;
}
*/

//Program 4				连接字符串			
/*
int i, j, pause1, pause2, count;
int main()
{
	char connect(char a, char b);
	char a[21], b[21], c[42];

	printf("Please assign values to the array a(up to 20 characters)('/'to end):\n");
	for (i = 0; i <= 20; i++)
	{
		scanf_s("%c", &a[i]);
		if (a[i] == '/')
			break;
	}
	pause1 = i;		//储存有效项数1

	printf("Please assign values to the array b(up to 20 characters)('/'to end):\n");
	for (i = 0; i <= 20; i++)
	{
		scanf_s("%c", &b[i]);
		if (b[i] == '/')
			break;
	}
	pause2 = i;		//储存有效项数2
	
	int k;
	for (count=0,i = 0, j = 0, k = 0; count <= pause1 + pause2-1 ; count++,i++, k++,j++)
	{
		if (count <= pause1)
			j = 1;
		else
			i = 0;
		c[k] = connect(a[i], b[j]);
	}
	printf("After conncting,the string is:\n");
	for(k=0;k<= pause1 + pause2-1 ;k++)						//项数(除去换行符及‘/’后）
		printf("%c",c[k]);
	printf("\n");

	system("pause");
	return 0;
}

char connect(char a, char b)
{
	char ch=0;
	while (1)
	{
		if (count <= pause1)
		{	
			if (a == '/' || a == '\n')
			{
				i++;
				count++;
			}
			else
			{
				ch = a;
				break;
			}
		}
		else
		{
			if (b == '/' || b == '\n')
			{
				j++;
				count++;
			}
			else
			{
				ch = b;
				break;
			}
		}
	}
	return ch;

}
*/

//Program 5					选择法函数

/*
int main()
{
	void select10(int a[10]);
	int nums[10];
	printf("Please enter 10 numbers:\n");
	
	int i;
	for (i = 0; i <= 9; i++)
		scanf_s("%d", &nums[i]);

	printf("After sorting,the numbers are as follows(from small to big):\n");
	select10(nums);

	system("pause");
	return 0;
}

void select10(int a[10])
{
	int i,j=0, max,save,save_j;

	for (i = 0; i <= 8; i++)
	{
		j = 0;
		max = a[j];
		save_j = j;

		for (j; j <= 8 - i; j++)
		{
			if (a[j + 1] > max)
			{
				max = a[j + 1];				//储存该最大数值
				save_j = j + 1;				//储存该最大数数位置
			}
		}
		save = a[j];					//将最后一位数与最大数互换(!!注意此时j多进行了一次j++!!)
		a[j] = max;
		a[save_j] = save;
	}

	for (i = 0; i <= 9; i++)
		printf("%d ", a[i]);
	printf("\n");
}*/