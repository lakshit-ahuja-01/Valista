// recursive

// General Programming Problems
// Binary Equivalent of a Number
// Square of number -- recursive and non recursive
// swapping using function -- integer,character,real


// sumFirstSecond

// #include<stdio.h>
// #include<math.h>
//  int sumFirstSecond(int n){
//     int k=(int)log10(n)+1;
//     int first = n / (int)pow(10, k-1);
//     int second = (n / (int)pow(10, k-2)) % 10;
//     return first + second;
//  }
//  int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",sumFirstSecond(n));
//  }

// #include<stdio.h>
// int sumFirstSecond(int n){
// if(n<100){
//     return (n/10)+(n%10);
// }
// else{
// return sumFirstSecond(n/10);
// }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",sumFirstSecond(n));
// }

// countOddDigit

// #include <stdio.h>
// int countOddDigit(int n){
// {
// int count = 0;
// while(n > 0)
// {
// int digit = n % 10;
// if(digit % 2 != 0){
//     count++;
// }
//     n = n / 10;
// }
//     return count;}
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",countOddDigit(n));
// }

// #include <stdio.h>
// int countOddDigit(int n)
// {
//     if(n == 0)
//     {
//         return 0;
//     }
//     int digit = n % 10;
//     if(digit % 2 != 0)
//     {
//         return 1 + countOddDigit(n / 10);
//     }
//     return countOddDigit(n / 10);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d", countOddDigit(n));
//     return 0;
// }

// smallestDigit
// #include<stdio.h>
// int smallestDigit(int n){
//     if(n < 10){
//         return n;
//     }
//     int k = n % 10;
//     int small = smallestDigit(n / 10);
//     if(k < small){
//         return k;
//     }
//     return small;
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d", smallestDigit(n));
//     return 0;
// }

// sumEvenPosition

// #include<stdio.h>
// #include <math.h>
// int sumEvenPosition(int n){
//     int j=0;
//     int k;
//     int o=(int)log10(n)+1;
//     if(o%2!=0){
// while(n>0){
//     k=(n/10)%10;
//     j+=k;
//     n=n/100;
// }return j;}
// else{
//     while(n>0){
//     k=n%10;
//     j+=k;
//     n=n/100;
// }return j;
// }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d", sumEvenPosition(n));
//     return 0;
// }
// #include<stdio.h>
// int sumEvenPosition(int n)
// {
//     if(n == 0)
//     {
//         return 0;
//     }
//     int digits = (int)log10(n) + 1;
//     if(digits % 2 != 0)
//     {
//         return ((n / 10) % 10) + sumEvenPosition(n / 100);
//     }
//     return (n % 10) + sumEvenPosition(n / 100);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d", sumEvenPosition(n));
//     return 0;
// }   

// middleDigit
// #include <stdio.h>
// #include <math.h>
// int middleDigit(int n){
//     int j=(int)log10(n)+1;
//     int k=(n/(pow(10,j/2)));
//     return k%10;
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d", middleDigit(n));
//     return 0;
// }  


// #include <stdio.h>
// #include <math.h>

// int middleDigit(int n)
// {
//     if(n < 10)
//     {
//         return n;
//     }
//     int digits = (int)log10(n) + 1;
//     int power = pow(10, digits - 1);
//     n = (n % power) / 10;
//     return middleDigit(n);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d", middleDigit(n));
//     return 0;
// }

// Prime Factors of a number using recrsion
// #include <stdio.h>
// int prime_factor(int n){
//  for(int i=2;i<=n;i++){
//         while(n%i==0){
//             printf("%d\n",i);
//             n=n/i;
// }
//  }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     prime_factor(n);
//     return 0;
// }

// #include <stdio.h>

// void prime_factor(int n, int i)
// {
//     if(n == 1)
//     {
//         return;
//     }
//     if(n % i == 0)
//     {
//         printf("%d ", i);

//         prime_factor(n / i, i);
//     }
//     else
//     {
//         prime_factor(n, i + 1);
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     prime_factor(n, 2);
//     return 0;
// }

#include <stdio.h>

int main() {
    int arr[3] = { 5, 10, 15 };    
      int n = sizeof(arr) / sizeof(arr[0]);

    // Declare pointer variable
    int (*ptr)[3];

    // Assign address of val[0] to ptr.
    // We can use ptr=&val[0];(both are same)
    ptr = &arr;
    
      for (int i = 0; i < n; i++)
        printf("%d ", (*ptr)[i]);

    return 0;
}
1.C 2.C 3.A 4.B 5.C
6.A 7.B 8.C 9.A 10.C 11.B 12.B
13.B 14.A 15.A 16.B 17.A 18.B 19.B 20.A
21.C 22.B 23.A24.A 25.B 26.B 27.A 28.A 29.C
