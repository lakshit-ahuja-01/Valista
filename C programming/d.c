// // #include <stdio.h>
// // #include <stdlib.h>
// // int main(){
// //     int n,i,*ptr,sum=0;
// //     printf("Enter number of elements: ");
// //     scanf("%d",&n);
// //     ptr=(int*)malloc(n*sizeof(int));
// //      if(ptr == NULL) {
// //     printf("Error! memory not allocated.");
// //     exit(0);
// //   }
// // printf("Enter elements; ");
// // for(i=0;i<n;++i){
// //     scanf("%d",ptr+i);
// //     sum += *(ptr + i);
// //   }
// //   printf("Sum = %d", sum);
// //   free(ptr);
// //   return 0;
// // }

// // #include <stdio.h>
// // #include <stdlib.h>
// // int main() {
// //   int n, i, *ptr, sum = 0;
// //   printf("Enter number of elements: ");
// //   scanf("%d", &n);
// //  ptr = (int*)calloc(n, sizeof(int));
// //   if(ptr == NULL) {
// //     printf("Error! memory not allocated.");
// //     exit(0);
// //   }
// //  printf("Enter elements: ");
// //   for(i = 0; i < n; ++i) {
// //     scanf("%d", ptr + i);
// //     sum += *(ptr + i);
// //   }
// //   printf("Sum = %d", sum);
// //   free(ptr);
// //   return 0;
// // }

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//   int *ptr, i , n1, n2;
//   printf("Enter size: ");
//   scanf("%d", &n1);
// ptr = (int*) malloc(n1 * sizeof(int));
//  printf("Addresses of previously allocated memory:\n");
//   for(i = 0; i < n1; ++i)
//     printf("%pc\n",ptr + i);
// printf("\nEnter the new size: ");
//   scanf("%d", &n2);
//   ptr = realloc(ptr, n2 * sizeof(int));
//  printf("Addresses of newly allocated memory:\n");
//   for(i = 0; i < n2; ++i)
//     printf("%p\n", ptr + i);
//    free(ptr);
//  return 0;
// }
 
// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     void *ptr = &a;
//     printf("%d", *(int*)ptr);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// struct Student{
//     int rollNo;
//     char name[50];
//     float marks;
// };
// int main(){
//     struct Student s1;
//     s1.rollNo=101;
//     strcpy(s1.name,"John Doe");
//     s1.marks=85.5;
//     printf("Roll No: %d\n",s1.rollNo);
//     printf("Name: %s\n",s1.name);
//     printf("Marks: %.2f\n",s1.marks);
//     return 0;
// }

// complex number addition using typedef

// #include <stdio.h>
// typedef struct{
// float real;
// float imag;
// }complex;
// complex add(complex n1,complex n2){
//     complex temp;
//     temp.real=n1.real+n2.real;
//     temp.imag=n1.imag + n2.imag;
//     return temp;
// }
// int main(){
//     complex c1={2.3,4.5},c2={3.4,5.0},result;
//     result = add(c1,c2);
//     printf("Result: %.1f + %.1fi",result.real,result.imag);
//     return 0;
// }

// #include<stdio.h>
// typedef struct
// {
// 	int x;
// 	int y;
// }POINT;
// void display(POINT);
// int main()
// {
// 	POINT p1 = {2, 3};
// 	display(p1);
// 	return 0;}
// void display( POINT p)
// {
// 	printf("%d %d", p.x, p.y);
// }

// #include <stdio.h>
// struct Student{
//     int id;
//     float gpa;
// };
// void swapStudents(struct Student *s1,struct Student*s2){
//     struct Student temp=*s1;
//     *s1=*s2;
//     *s2=temp;
// }
// int main(){
//     struct Student a = {1, 3.5};
//     struct Student b = {2, 3.9};
//     swapStudents(&a,&b);
//     printf("A:Id %d,GPA %.1f\n", a.id,a.gpa);
//     printf("B:Id %d,GPA %.1f\n", b.id,b.gpa);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// typedef struct {
//     char first_name[20];
//     char mid_name[20];
//     char last_name[20];
// } NAME;
// typedef struct {
//     int dd;
//     int mm;
//     int yy;
// } DATE;
// struct student {
//     NAME name;      
//     char course[20];
//     DATE DOB;      
//     float fees;
// };
// int main() {
//     struct student stud1;
//     strcpy(stud1.name.first_name, "Janak");
//     strcpy(stud1.name.mid_name, "Raj");
//     strcpy(stud1.name.last_name, "Thareja");
//     strcpy(stud1.course, "BCA");
//     stud1.DOB.dd = 15;
//     stud1.DOB.mm = 9;
//     stud1.DOB.yy = 1990;  
//     stud1.fees = 45000.0;
//     printf("STUDENT RECORD\n");
//     printf("Full Name: %s %s %s\n", stud1.name.first_name, stud1.name.mid_name, stud1.name.last_name);
//     printf("Course:    %s\n", stud1.course);
//     printf("DOB:       %02d/%02d/%d\n", stud1.DOB.dd, stud1.DOB.mm, stud1.DOB.yy);
//     printf("Fees:      %.2f\n", stud1.fees);
//     return 0;
// }

// create a structure address (city,pin).nest it inside an emplyoee structure (name,address).
//concept: Accessing sub-members (emp.addr.city)
// #include <stdio.h>
// #include <string.h>
// struct Address {
//     char city[50];
//     long int pin;
// };
// struct Employee {
//     char name[50];
//     struct Address addr;
// };
// int main() {
//     struct Employee emp;
//     strcpy(emp.name, "Lakshit");
//     strcpy(emp.addr.city, "nowhere");
//     emp.addr.pin = 10001;
//     printf("Name: %s\n", emp.name);
//     printf("City: %s\n", emp.addr.city);
//     printf("Pin: %ld\n", emp.addr.pin);
//     return 0;
// }

