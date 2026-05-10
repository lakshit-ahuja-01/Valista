// #include <stdio.h>
// int main() {
//     int i = 0;
//     i++; 
//     do {
//         printf("%d ", i);
//         i++;
//     } while (i < 10); 

//     return 0;
// }  

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter Range to check prime within: ");
//     scanf("%d",&n);
//     for (int i=2;i<=n;i++){
//         int a=0;
//         for (int j=2;j<i;j++){
//             if (i%j==0){
//                 a=1;
//                 break;
//             }
//         }
//         if (a==0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a ,b=0, c;
//     scanf("%d",&a);
//     while(a>0){
//     c=a%10;
//     b=b+c;
//     a=a/10;
//     }
//     printf("%d",b);
// }

// #include <stdio.h>
// #include<math.h>
// int main() {
//     int number, F, L, sum;
//     scanf("%d", &number);
//     int t=number,count=0;
//     while (t > 0) {
//         t=t/10;
//         count++;
//     }
//     int temp=number;
//     L = (temp/10)%10; 
//     F= number/pow(10,count-2);
//     F=F%10;
//     sum = F+L;
//     printf("Sum  = %d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main (){
//     int num, F, Third, sum;
//     scanf("%d", &num);
//     F = num / 1000;           
//     Third = num / 10;  
//     Third = Third % 10;
//     sum = F + Third;
//     printf("%d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     char n[100];
//     int first, third, sum;
//     scanf("%s", n);
//     first = n[0] - '0';
//     third = n[3] - '0';
//     sum = first + third;
//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int arr[5];
//     for(int i = 0; i < 5; i++){
//         scanf("%d", &arr[i]);
//     }  
//     int min = arr[0], max = arr[0];
//     for(int i = 1; i < 5; i++){
//         if(arr[i] < min)
//          {min = arr[i];}
//         if(arr[i] > max) {
//         max = arr[i];}
//     }
//     printf("Min: %d\nMax: %d\n", min, max);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int arr[100], n;
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }    
//     for(int i = n - 1; i >= 0; i--){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int arr[100], n, sum = 0;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int binary, decimal = 0, place = 1, rem;
//     scanf("%d", &binary);
//     while (binary > 0) {
//         rem = binary % 10;        // last digit
//         decimal += rem * place;    // add to decimal
//         binary = binary / 10;     // remove last digit
//         place = place * 2;          // next power of 2
//     }
//     printf("%d", decimal);
//     return 0;
//  }
// return 0; 
// }
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     long long binary = 0;
//     int place = 1, rem;

//     scanf("%d", &n);

//     while(n > 0)
//     {
//         rem = n % 2;
//         binary = binary + rem * place;
//         place = place * 10;
//         n = n / 2;
//     }
//     printf("%lld", binary);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// int main(){
//     char a[100];
//     scanf("%s",&a);
//     int len =strlen(a);
//     int b=0,c;
//     int num = atoi(a);
//     while (a>0){
//         c=num%10;
//         b+=pow(c,len);
//         num=num/10;
//     }
// printf("%d",b);

// }

// #include <stdio.h>
// int main() {
//     int arr[100], n, target;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     scanf("%d", &target);
// int count = 0;
// for (int i = 0; i < n; i++)
// {
//     if (arr[i] == target)
//         count++;
// }
// if (count > 0)
//     printf("Found %d times\n", count);
// else
//     printf("Not found\n");
//     return 0;
// }

#include <stdio.h>
int main(){
    int arr[100], a, i, j;
    scanf("%d", &a);
    for (i = 0; i < a; i++){
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < a; i++){
        int isDuplicate = 0;
        for (j = 0; j < i; j++){
            if (arr[i] == arr[j]){
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

// #include <stdio.h>
// int main() {
//     int row, cols;
//     scanf("%d %d", &row, &cols);
//     int arr[row][cols];
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int row, col;
//     scanf("%d %d", &row, &col);
//     int A[row][col], B[row][col];
//     int equal = 1;
//     for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             scanf("%d", &A[i][j]);
//         }
//     }
//     for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             scanf("%d", &B[i][j]);
//         }
//     }
//     for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             if(A[i][j] != B[i][j]) {
//                 equal = 0;
//                 break;
//             }
//         }
//     }

//     if(equal)
//         printf("Equal");
//     else
//         printf("Not Equal");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int row, col;
//     scanf("%d %d", &row, &col);
//     int arr[row][col];
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int j = 0; j < col; j++) {
//         for (int i = 0; i < row; i++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// } 

// #include <stdio.h>

// int main() {
//     int r, c;
//     scanf("%d %d", &r, &c);
//     int arr[r][c];
//     for(int i = 0; i < r; i++) {
//         for(int j = 0; j < c; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for(int i = 0; i < r; i++) {
//         int sum = 0;
//         for(int j = 0; j < c; j++) {
//             sum += arr[i][j];
//         }
//         printf("Row %d = %d ", i + 1, sum);
//     }
//     for(int j = 0; j < c; j++) {
//         int sum = 0;
//         for(int i = 0; i < r; i++) {
//             sum += arr[i][j];
//         }
//         printf("Column %d = %d ", j + 1, sum);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int row, cols;
//     if (scanf("%d %d", &row, &cols) != 2) 
//     return 0;
//     int arr[row][cols];
//     int sum = 0;
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &arr[i][j]);
//             if (j >= i) {
//             sum += arr[i][j];
//             }
//         }
//     }
//     printf("Sum of upper triangular : %d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int row, cols;
//     if (scanf("%d %d", &row, &cols)) 
//     return 0;
//     int arr[row][cols];
//     int sum = 0;
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &arr[i][j]);
//             if (j <= i) {
//             sum += arr[i][j];
//             }
//         }
//     }
//     printf("Sum of lower triangular : %d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int row, col;
//     scanf("%d %d", &row, &col);
//     int A[row][col], B[row][col], C[row][col];
//     for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             scanf("%d", &A[i][j]);
//         }
//     }
//     for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             scanf("%d", &B[i][j]);
//         }
//     }
//     for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             C[i][j] = A[i][j] + B[i][j];
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }