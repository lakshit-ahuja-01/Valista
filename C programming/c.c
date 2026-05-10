// #include <stdio.h>
// #include <string.h>
// int main(){
//     char s[]="Hello, world,world!";
//     char *pos=strstr(s, "world");
//     if (pos !=NULL)
//     printf("Found");
//     else 
//     printf("NOt Found");
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char a[10];
//     scanf("%s", a);
//     int left = 0, right = strlen(a) - 1;
//     while (left < right) {
//         if (a[left] != a[right]) {
//             printf("Not a palindrome\n");
//             return 0;
//         }
//         left++;
//         right--;
//     }
//     printf("Palindrome\n");
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100];
//     int i;
//     int j=1;
//     scanf("%s", str);
//     for(i = strlen(str) - 1; i >= 0; i--){
//     }
//     return 0;
//     if (str[100]==str[i]){
//         printf("p");
//     }
// }

// #include <stdio.h>
// #include <math.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     int k= sqrt(a);
//     printf("%d",k);

// }

// #include <stdio.h>
// #include <ctype.h>
// int main(){
//     char a;
//     scanf("%c",&a);
//    if(isupper(a)){
//     printf("Uppercase");
//    }    
//    else if(islower(a)){
//     printf("Lowercase");
//    }
//    return 0;
// }
// #include <stdio.h>
// #include <ctype.h>
// int main(){
//     char a;
//     scanf("%c",&a);
//     printf("%c",tolower(a)); 
//    return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     printf("%d",abs(a)); 
//    return 0;
// }

// #include <stdio.h>
// #include <time.h>
// int main(){
//     time_t curtime;
//     time(&curtime);
//     printf("%s",ctime(&curtime));

//    return 0;
// }

// #include <stdio.h>
// // Function prototype
// int add(int a, int b); 
// int main() {
//     int res;
// // Function call
//     res = add(10, 20);     
//     printf("%d\n", res);
//     return 0;
// }

// // Function definition
// int add(int a, int b) 
// {
//     int c;
//     c = a + b;
//     return c; 
// }

// #include<stdio.h>  
// int square_area();  
// void main()  
// {  
//     float area = square_area();  
//     printf("%f\n",area);  
// }  
// int square_area()  
// {  
//     float side;  
//     scanf("%f",&side);  
//     return side * side;  
// }

// #include<stdio.h>
// int main()
// {
//     float a,b,c;
//     float intrest;
//     printf("\n");
//     scanf("%f%f%f",&a,&b,&c); 
//     intrest = simple_int(a,b,c); 
//     printf("\n%.2f\n", intrest); 
//     printf("\n");
//     return 0;
// }
// float simple_int(float p, float r, float t) 
// {
//     float si;
//     si = (p * r * t)/100;     
//     return si; 
// }    

// #include<stdio.h>
// int isPrime(int a);
// int main()
// {
//     int n,fact;
//     scanf("%d",&n);
//        fact = isPrime (n);
//     if(fact==2)
//         printf("%d\n", n);
//       else
//       printf(" %d\n", n);
//    return 0;

// }

#include <stdio.h>
int a, b;   
void add()
{ 
     printf("%d", a + b);
}
int main()
{
	 printf("Enter value of a \n");  
              scanf("%d",&a);
	 printf("Enter value of b \n"); 
	add();
	return 0;
}
