// #include <stdio.h>
// #include <string.h>
// int main(){
// int num,gender;
// int marks[100];
// int sum=0;
// scanf("%d",&num);
// for (int i=0;i<num;i++){
//     scanf("%d",&marks[i]);
// }
//     scanf("%d",&gender);

// for (int i=0;i<num;i++){
// if(i%2==0 && gender==1){
// sum+=marks[i];
// }
// else if(i%2!=0 && gender==0){
//     sum+=marks[i];
// }
// }
// printf("%d",sum);
// }   

// #include <stdio.h>
// int main(){
//     int arr[3]={5,10,15};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int(*ptr)[3];
//     ptr=&arr;
//     for(int i=0;i<n;i++){
//         printf("%d ",(*ptr)[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// void foo(int(*arr)[5]){
//     printf("%lu ",sizeof(*arr));
// }

// #include <stdio.h>
// int main(){
//     int arr[2][3]={{1,2,3},{4,5,6}};
//     int(*ptr)[2][3]=&arr;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",(*ptr)[i][j]);
//         }printf("\n");
//     }
// }

// #include <stdio.h>
// int main(){
//     int var1 = 10;
//     int var2 = 20;
//     int var3 = 30;
//     int*ptr_arr[3]={&var1,&var2,&var3};
//     for(int i=0;i<3;i++){
//         printf("value of var: %d\tAddress: %p\n",i+1,*ptr_arr[i],ptr_arr[i]);
//     }

// }

// #include <stdio.h>
// int main(){
//     char* arr[]={"Chitkara","University","Punjab"};
//     for(int i=0;i<3;i++){
//         printf("%d\n",arr[i]);
//     }
//     for(int i=0;i<3;i++){
//         printf("Address of arr[%d]: %p\n",i,(void*)arr[i]); 
//     }
// }

// #include <stdio.h>
// void add(int a,int b){
//     printf("Sum: %d\n",a+b);
// }
// void subtract(int a,int b){
//     printf("Difference: %d\n",a-b);
// }
// void multiply(int a,int b){
//     printf("Product: %d\n",a*b);
// }
// void divide(int a,int b){
//     printf("Quotient: %d\n",a/b);
// }
// int main(){
//     int x=50,y=5;
//     void (*arr[4])(int, int)
//         = { &add, &subtract, &multiply, &divide };
//     for (int i = 0; i < 4; i++) {
//         arr[i](x, y);
//     }    
// return 0; 
// }

/*Create a structure Student to store name, roll number, and marks. input data for one student and display it using dot */
// #include <stdio.h>
// struct Student{
//     char name[100];
//     long long int roll_number;
//     int marks;
// };
// int main(){
//     struct Student s1;
//     scanf("%s",&s1.name);
//     scanf("%lld",&s1.roll_number);
//     scanf("%d",&s1.marks);
//     printf("%s\n",s1.name);
//     printf("%lld\n",s1.roll_number);
//     printf("%d",s1.marks);
// }
/*Create a structure Distance with feet and inch. Add two distances and handle the conversion (12inches=1foot)*/
// #include <stdio.h>
// struct Distance{
//     int foot;
//     int inch;
// };
// int main(){ 
//     struct Distance d1,d2;
//     scanf("%d",&d1.foot);
//     d1.inch=12;
//     d2.inch=12;
//     scanf("%d",&d2.foot);
//     printf("%d\n",(d1.foot*d1.inch)+(d2.foot*d1.inch));
// }

// #include <stdio.h>
// struct Distance{
//     float foot;
//     float inch;
// };
// int main(){ 
//     struct Distance d1,d2;
//     scanf("%f",&d1.inch);
//     scanf("%f",&d2.inch);
//     d1.foot=d1.inch/12;
//     d2.foot=d2.inch/12;
//     printf("%f\n",d1.foot+d2.foot);
// }

// #include <stdio.h>
// struct Student{
//     int rollno;
//     char name[50];
//     float mark;
// };
// int main(){
//     struct Student s1[2] = {{101,"John Doe",85.5},{102,"Jane Smith",90.0}};
//     for(int i=0;i<2;i++){
// printf("Roll NO; %d\n",s1[i].rollno);
// printf("Name; %s\n",s1[i].name);
// printf("Marks; %.2f\n",s1[i].mark);
//     }
// }

// #include<stdio.h>
// int main()
// {	struct student
// 	{	
// 		int rollno;
// 		char name[100];
// 		float fee;
// 		char DOB[100];
// 	};
// 	struct student s1[100];
// 	int n, i;
// 	printf("number of students : \n");
// 	scanf("%d", &n);
// 	for(i=0;i<n;i++)
// 	{	printf("roll number : \n");
// 		scanf("%d", &s1[i].rollno);
// 		printf("Enter the name : \n");
//         scanf("%s",&s1[i].name);
//         printf("Enter the fees: \n");
//         scanf("%f",&s1[i].fee);
//         printf("%s",&s1[i].DOB);
// 	}
//     for(i=0;i<n;i++)
	
// {	
// printf("\n ROLL No. = %d", s1[i].rollno);
// printf("\n NAME. = %s",s1[i].name);
// printf("\n ROLL No. = %f", s1[i].fee);
// printf("\n ROLL No. = %s", s1[i].DOB);
// 	}
// }

// #include<stdio.h>
// struct Students{
//     char name[100];
//     int marks;
// };
// int main(){
//     struct Students s1,s2,s3,s4,s5;
// }