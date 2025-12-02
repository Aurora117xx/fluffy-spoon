#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,3,5,7,9,6 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n-i-1; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//	for ( i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,3,6,5,2,4,7,9,0,8 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = i+1; j < n; j++)
//		{
//			if (arr[i]>arr[j])
//			{
//				int t = arr[i];
//				arr[i] = arr[j];
//				arr[j] = t;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{	
//		printf("%d ", arr[i]);	
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//// 交换两个字符串（简单交换指针指向的内容）
//void swap(int** a, int** b) {
//    char* temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// 冒泡排序函数用于字符串数组
//void bubbleSort(int* arr[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = 0; j < n - i - 1; j++) {
//            if (arr[j]>arr[j + 1]) {
//                swap(&arr[j], &arr[j + 1]);
//            }
//        }
//    }
//}
//
//int main() {
//    int arr[] = { 9,8,7,6,5,4,3};
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    bubbleSort(arr, n);
//
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}

//#include <stdio.h>
//
//// 找一维整数数组最大值
//int findMax(int arr[], int n) {
//    int max = arr[0];
//    for (int i = 1; i < n; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    return max;
//}
//
//int main() {
//    int arr[] = { 5, 9, 3, 7, 2 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int max = findMax(arr, n);
//    printf("最大值是：%d\n", max);
//    return 0;
//}

#include <stdio.h>

//// 找二维整数数组最大值
//int findMax2D(int arr[][5], int rows, int cols) {
//    int max = arr[0][0];
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            if (arr[i][j] > max) {
//                max = arr[i][j];
//            }
//        }
//    }
//    return max;
//}
//
//int main() {
//    int arr[3][5] = { {1, 3, 5, 7, 9},
//                    {2, 4, 6, 8, 10},
//                    {11, 13, 15, 17, 19} };
//    int rows = sizeof(arr) / sizeof(arr[0]);
//    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
//    int max = findMax2D(arr, rows, cols);
//    printf("最大值是：%d\n", max);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//// 找字符数组中字典序最大的字符串
//void findMaxStr(char* arr[], int n) {
//    char* maxStr = arr[0];
//    for (int i = 1; i < n; i++) {
//        if (strcmp(arr[i], maxStr) > 0) {
//            maxStr = arr[i];
//        }
//    }
//    printf("字典序最大的字符串是：%s\n", maxStr);
//}
//
//int main() {
//    char* arr[] = { "apple", "banana", "cherry" };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    findMaxStr(arr, n);
//    return 0;
//}

//#include <stdio.h>
//
//// 递归实现Fibonacci数列
//int fibonacci(int n) {
//    if (n == 0) return 0;
//    if (n == 1) return 1;
//    return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main() {
//    int n = 10;  // 计算第10项Fibonacci数
//    int result = fibonacci(n);
//    printf("第 %d 项Fibonacci数是：%d\n", n, result);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int num;
//    for (num = 100; num < 1000; num++) {
//        int units = num % 10;
//        int tens = (num / 10) % 10;
//        int hundreds = num / 100;
//        if (num == (units * units * units + tens * tens * tens + hundreds * hundreds * hundreds)) {
//            printf("%d ", num);
//        }
//    }
//    return 0;
//}

//int main()
//{
//	int n = 1;
//	for (int i = 0; i < 9; i++)
//	{
//		for ( int j = 1; j <= n; j++)
//		{
//			printf("%d*%d=%d ", n, j, n * j);
//		}
//		printf("\n");
//		n++;
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//// 计算杨辉三角中的一个数
//int binomialCoefficient(int n, int k) {
//    if (k == 0 || k == n) {
//        return 1;
//    }
//    else {
//        return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
//    }
//}
//
//// 打印杨辉三角
//void printPascalTriangle(int numRows) {
//    for (int i = 0; i < numRows; i++) {
//        // 打印空格，用于对齐
//        for (int j = 0; j < numRows - i; j++) {
//            printf("   ");
//        }
//        for (int k = 0; k <= i; k++) {
//            int coefficient = binomialCoefficient(i, k);
//            printf("%6d", coefficient);
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int numRows = 10;
//    printPascalTriangle(numRows);
//    return 0;
//}

//int main()
//{
//	int a[10][10], i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for ( j = 0; j <=i; j ++)
//		{
//			if (i==j||j==0)
//			{
//				a[i][j] = 1;
//			}
//			else
//			{
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//			}
//		}
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		for (int k = 0; k < 10 - i; k++) {
//			printf("   ");
//		}
//		for ( j = 0; j <= i; j++)
//		{
//			printf("%6d", a[i][j]);
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//}

//#include <stdio.h>
//
//// 判断一个数是否为完数
//int isPerfectNumber(int num) {
//    int sum = 0;
//    for (int i = 1; i < num; i++) {
//        if (num % i == 0) {
//            sum += i;
//        }
//    }
//    return sum == num;
//}
//
//int main() {
//    int limit = 10000;
//    printf("1到%d之间的完数有：\n", limit);
//    for (int num = 1; num <= limit; num++) {
//        if (isPerfectNumber(num)) {
//            printf("%d ", num);
//        }
//    }
//    printf("\n");
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    char ch = 'a';
//    // 将小写字母转换为大写字母
//    if (ch >= 'a' && ch <= 'z') {
//        ch = ch - 32;
//    }
//    printf("转换后的字符为：%c\n", ch);
//
//    char anotherCh = 'A';
//    // 将大写字母转换为小写字母
//    if (anotherCh >= 'A' && anotherCh <= 'Z') {
//        anotherCh = anotherCh + 32;
//    }
//    printf("转换后的字符为：%c\n", anotherCh);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int factorial(int n) {
//    int result = 1;
//    for (int i = 1; i <= n; i++) {
//        result *= i;
//    }
//    return result;
//}
//
//int main() {
//    int sum_factorial = 0;
//    for (int n = 1; n <= 10; n++) {
//        sum_factorial += factorial(n);
//    }
//    printf("1!到10!的累加和为：%d\n", sum_factorial);
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//
// 判断一个数是否为素数
//int isPrime(int num) {
//    if (num < 2) {
//        return 0;
//    }
//    if (num == 2) {
//        return 1;
//    }
//    if (num % 2 == 0) {
//        return 0;
//    }
//    for (int i = 3; i <= sqrt(num); i += 2) {
//        if (num % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    int num = 17;
//    if (isPrime(num)) {
//        printf("%d是素数\n", num);
//    }
//    else {
//        printf("%d不是素数\n", num);
//    }
//    return 0;
//}

//int main()
//{
//	int i, j;
//	for ( i = 2	; i <=100; i++)
//	{
//		for ( j = 2; j < i; j++)
//		{
//			if (i%j==0)
//			{
//				break;
//			}
//		}
//		if (i==j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//   
//int main() {
//    int n = 5;  // 控制菱形的大小，这里以5为例，可以按需修改
//    // 打印上半部分菱形
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        for (int k = 1; k <= 2*i - 1; k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    // 打印下半部分菱形
//    for (int i = n - 1; i >= 1; i--) {
//        for (int j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//
//#define MAX_LENGTH 100
//
//int main() {
//    char str[MAX_LENGTH];
//    // 使用scanf函数输入字符串
//    scanf("%s", str);
//
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (isupper(str[i])) {
//            str[i] = tolower(str[i]);
//        }
//        else if (islower(str[i])) {
//            str[i] = toupper(str[i]);
//        }
//    }
//    // 使用printf函数输出变换后的字符串并换行
//    printf("%s\n", str);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//#define MAX_LENGTH 100
//
//int main() {
//    char str[MAX_LENGTH];
//    scanf("%s", str);
//
//    int i = 0;
//    while (str[i] != '\0') {
//        if (str[i] >= 'A' && str[i] <= 'Z') {
//            // 将大写字母转换为小写字母，利用ASCII码差值（小写字母比大写字母的ASCII码值大32）
//            str[i] += 32;
//        }
//        else if (str[i] >= 'a' && str[i] <= 'z') {
//            // 将小写字母转换为大写字母，利用ASCII码差值
//            str[i] -= 32;
//        }
//        i++;
//    }
//
//    printf("%s\n", str);
//
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//#define MAX_LENGTH 100
//
//int main() {
//    char str[MAX_LENGTH];
//    char target;
//    // 输入原始字符串
//    scanf("%s", str);
//    // 输入要删除的指定字符
//    scanf(" %c", &target);  // 注意这里的空格，用于处理输入缓冲区遗留的换行符等
//
//    int j = 0;
//    for (int i = 0; i < strlen(str); i++) {
//        if (str[i] != target) {
//            str[j++] = str[i];
//        }
//    }
//    str[j] = '\0';  // 添加字符串结束标志
//
//    printf("%s\n", str);
//
//    return 0;
//}
//
//#include <stdio.h>
//#define ROWS 3
//#define COLS 3
//void transpose(int matrix[][COLS], int result[][ROWS]) {
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j < COLS; j++) {
//            result[j][i] = matrix[i][j];
//        }
//    }
//}
//int main() {
//    int matrix[ROWS][COLS] = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}
//    };
//    int transposed[COLS][ROWS];
//    transpose(matrix, transposed);
//    printf("原矩阵：\n");
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j < COLS; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//    printf("转置矩阵：\n");
//    for (int i = 0; i < COLS; i++) {
//        for (int j = 0; j < ROWS; j++) {
//            printf("%d ", transposed[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    printf("所有的水仙花数为：");
//    for (int num = 100; num < 1000; num++) {
//        int hundreds = num / 100;  // 获取百位数字
//        int tens = (num % 100) / 10;  // 获取十位数字
//        int units = num % 10;  // 获取个位数字
//
//        int sum_of_cubes = hundreds * hundreds * hundreds + tens * tens * tens + units * units * units;
//
//        if (sum_of_cubes == num) {
//            printf("%d ", num);
//        }
//    }
//    printf("\n");
//
//    return 0;
//}

//int main()
//{
//    for (int i = 100; i < 1000; i++)
//    {
//        int baiwei = i / 100;
//        int shiwei = (i / 10) % 10;
//        int gewei = i % 10;
//        int shuixianhuashu = baiwei * baiwei * baiwei + shiwei * shiwei * shiwei + gewei * gewei * gewei;
//        if (i==shuixianhuashu)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    double p, w, s;
//    scanf("%lf,%lf,%lf", &p, &w, &s);  // 注意输入格式，用逗号隔开，所以格式化字符串里也用逗号
//
//    double d = 0;  // 折扣率初始化为0
//    if (s < 250) {
//        d = 0;
//    }
//    else if (s < 500) {
//        d = 0.02;
//    }
//    else if (s < 1000) {
//        d = 0.05;
//    }
//    else if (s < 2000) {
//        d = 0.08;
//    }
//    else if (s < 3000) {
//        d = 0.10;
//    }
//    else {
//        d = 0.15;
//    }
//
//    double f = p * w * s * (1 - d);
//    printf("总运费为%.2lf\n", f);
//
//    return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//// 判断一个数是否为素数的函数
//int isPrime(int num) {
//    if (num < 2) {
//        return 0;
//    }
//    if (num == 2) {
//        return 1;
//    }
//    if (num % 2 == 0) {
//        return 0;
//    }
//    for (int i = 3; i <= sqrt(num); i += 2) {
//        if (num % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    for (int num = 100; num <= 200; num++) {
//        if (isPrime(num)) {
//            printf("%d ", num);
//        }
//    }
//    printf("\n");
//    return 0;
//} 

int main()
{
	
	struct STU
	{
		char name[8];
		int age;
	};
	struct STU stu1 = { "牛逼",18 };
	printf("%s\n",stu1.name);
	printf("%d", stu1.age);
	return 0;
}