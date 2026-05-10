// #include <stdio.h>
// int sum_n(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     scanf("%d", &n);
//     printf("%d", sum_n(n));
//     return 0;
// }

// #include <stdio.h>
// int cal_HCF(int n1, int n2) {
//     int i, hcf;
//     for (i = 1; i <= n1 || i <= n2; ++i) {
//         if (n1 % i == 0 && n2 % i == 0) {
//             hcf = i;
//         }
//     }
//     return hcf;
// }

// int cal_LCM(int n1, int n2, int hcf) {
//     int lcm = (n1 * n2) / hcf;
//     return lcm;
// }
// int main() {
//     int num1, num2, hcf, lcm;
//     printf("Enter two positive integers: ");
//     scanf("%d %d", &num1, &num2);
//     hcf = cal_HCF(num1, num2);
//     lcm = cal_LCM(num1, num2, hcf);
//     printf("HCF of %d and %d is %d\n", num1, num2, hcf);
//     printf("LCM of %d and %d is %d\n", num1, num2, lcm);
//     return 0;
// }

// #include <stdio.h>
// int fact(int n){
//    if (n==0 || n==1){
//       return 1;
//    }
//    else{
//       return n*fact(n-1);
//    }
// }
// int main(){
//    int n;
//    scanf("%d",&n);
//    printf("%d",fact(n));
//    return 0;
// }

// #include <stdio.h> 
// int recursive_sum(int n); 
// int main(){ 
//     int n, sum_result; 
//     scanf("%d", &n);     
//     sum_result = recursive_sum(n);     
//     printf("%d",sum_result);
//     return 0;
// } 
// int recursive_sum(int n){ 
//     if (n == 0){ 
//         return 0;
//     } else{ 
//         return n + recursive_sum(n - 1); 
//     } 
// }

// #include <stdio.h>
// int fib(int n);
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++) {
//         printf("%d\n", fib(i));
//     }
//     return 0;
// }
// int fib(int n){
//     if (n <= 1){
//         return n;
//     } else{
//         return fib(n-1)+fib(n-2);
//     }
// }

// #include <stdio.h>
// int power(int base, int exp) {
//     int result = 1;
//     for (int i = 0; i < exp; ++i) {
//         result *= base;
//     }
//     return result;
// }
// int main() {
//     int num, original, remainder, n = 0;
//     int result = 0; 
//     scanf("%d", &num);
//     original = num;
//     int temp = num;
//     while (temp != 0) {
//         temp /= 10;
//         n++;
//     }
//     temp = num; 
//     while (temp > 0) {
//         remainder = temp % 10;
//         result += power(remainder, n); 
//         temp /= 10;
//     }
//     if (result == num) {
//         printf("%d is an Armstrong number.\n", num);
//     } else {
//         printf("%d is not an Armstrong number.\n", num);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int rev(int n) {
//     static int reversed_num = 0;
//     if (n == 0) {
//         int temp = reversed_num;
//         reversed_num = 0; 
//         return temp;
//     }
//     reversed_num = reversed_num * 10 + (n % 10);
//     return rev(n / 10);
// }
// int main() {
//     int n;
//     scanf("%d", &n);
//     printf("%d", rev(n));
//     return 0;
// }

// #include <stdio.h>
// int main(){
// int *p,a;
// printf("enter the value of a \n");
// scanf("%d",&a);
// p = &a;     /* address of a is assigned to p */
// printf("Value of a is : %d", *p);        /* show a's value using p variable */
// return 0;
// }

// #include <stdio.h>
// int main(){
// int x=10;
// int y=20;
// int *ptr1=&x;
// int *ptr2=&y;
// ptr1 = ptr2;
// printf("%d %d", *ptr1, *ptr2);
// return 0;
// }

// #include <stdio.h>
// int main(){
// 	int a=35,b;
// 	int *ptr, *ptr1;
// 	ptr = &a;
// 	ptr1 = &b;
// 	printf("%d\n",*ptr1);
// 	b = 36;
// 	printf("%d and %d\n",*ptr,*ptr1);
// 	b = 90;
// 	printf("%d\n",*ptr1);
// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	int a=20;		
//     int *p; 
// 	p=&a; 
//     printf("Pointer before Increment: ");
// 	printf("%p \n", p);
// 	p++;
//     printf("Pointer after increment: ");
// 	printf("%p \n", p);
// return 0;
// }
// #include<stdio.h>
// int main()
// { 
// int x = 50;
// int *ptr1 = &x;
// int *ptr2 = &x;
// int y = ++*ptr2 ;
// printf("%d %d", ++*ptr1, y);
// return 0;
// } 
// #include <stdio.h>
// int main()
// {
// 	int a=20;
// 	int *p;         
// 	p=&a;         
// 	printf("Pointer before decrement: ");
// 	printf("%d \n", p);
//     p--;              
// 	printf("Pointer after decrement: ");
// 	printf("%d \n", p);
//     return 0;
// }    
// #include<stdio.h>  
// int main()
// {  
// int a=50;
// int b=3;     
// int *p;       
// p=&b;
// printf("Address of p variable is %u \n",p);        
// p=p+b;
// printf("After adding 3: Address of p variable is %u \n",p);       
// return 0;  
// } 

// #include <stdio.h>
// int main(){
//     int num1,num2,sum;
//     int *ptr1, *ptr2;
//     ptr1 = &num1; 
//     ptr2 = &num2; 
//     printf("Enter any two numbers: ");
//     scanf("%d%d", ptr1, ptr2);
//     sum = *ptr1 + *ptr2;
//     printf("Sum = %d", sum);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a=50;int b=3;
//     int *p;
//     p=&a;
//     printf("Address of p variable is %u\n",p);
//     p=p-b;
//     printf("After subtracting 3:Address of p variable is %u",p);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	int a=20;
// 	int *p;         // Pointer to an integer
// 	p=&a;         // Pointer stores the address of a
// 	printf("Pointer before decrement: ");
// 	printf("%p \n", p);
//                 p--;              // decrementing pointer p;
// 	printf("Pointer after decrement: ");
// 	printf("%p \n", p);
//        return 0;
// }    

// #include <stdio.h>
// #include <math.h>

// void SeconddigitSum(int number, int *sec, int *secLast)
// {
//     int count = 0;
//     if (number < 0)
//         number = -number;
//     if (number < 10)
//     {
//         *sec = *secLast = -1;
//         return;
//     }
//     int temp = number;
//     while (temp > 0)
//     {
//         temp /= 10;
//         count++;
//     }
//     int divisor = pow(10, count - 2);
//     *sec = (number / divisor) % 10;
//     *secLast = (number / 10) % 10;
// }

// #include <stdio.h>
// int main(){
//     struct A{
//         int marks;
//         char grade;
//     }A1;
//     struct A B1;
//     A1.marks=80;
//     A1.grade='A';
//     printf("marks= %d\t",A1.marks);
//     printf("grade= %c\t",A1.grade);
//     B1=A1;
//     printf("\nmarks= %d\t",B1.marks);
//     printf("grade= %c\t",B1.grade);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     struct rec{
//         int age;
//         char *name;
//     }*ptr;
//     char name1[10]="abc";
//     ptr->name=name1;
//     ptr->age=93;
//     printf("%s\t",ptr->name);
//     printf("%d\n",ptr->age);
//     return 0;
// }

// #include <stdio.h>
// struct student{
//     char name[20]; int age;
// };
// int main(){
//     struct student s1={"Anita",10},s2={"Anita",12};
//     if(s1==s2) // error: invalid operands to binary == (have 'struct student' and 'struct student')
//     printf("same\n");
//     else
//     printf("Not same\n");
//     return 0;
// }

// #include<stdio.h>
// void func(struct tag); // warning: 'struct tag' declared inside parameter list will not be visible outside of this definition or declaration
// int main(){
// struct tag;
// {int i;
// char c;};
// struct tag var={1,'e'};
// func(var);
// return 0;
// }
// void func(struct tag v){
//     printf("%d %c \n",v.i,v.c);
// }

// #include <stdio.h>
// struct tag {
//     int i;
//     char c;
// };
// void func(struct tag);
// int main() {
//     struct tag var = {'e',1};
//     func(var);
//     return 0;
// }
// void func(struct tag v) {
//     printf("%d %c \n", v.i, v.c);
// }

// #include <stdio.h>
// struct tag {
//     int i;
//     char c;
// };
// void func(struct tag);
// int main() {
//     struct tag var = {1,'e'};
//     func(var);
//     printf("%d\n", var.i);
//     return 0;
// }
// void func(struct tag v) {
//     v.i++;
// }

// #include<stdio.h>
// struct 
// {
// };
// int main(){
// }

