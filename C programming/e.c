// //write a program  to accept five records of employees. the structure is;

// // calculate the total salry of the employees as
// //total salary=basic+da+hra
// //da=10% of basic
// // hra=5% of basic
// //display name age and total salary of the employees in descending oreder on the basic=s of total salary
// #include <stdio.h>

// struct data {
//     char name[25];
//     int age;
//     int basic;
// };

// int main() {
//     struct data e1 = {"a", 19, 100};
//     struct data e2 = {"b", 20, 200};
//     struct data e3 = {"c", 21, 300};
//     struct data e4 = {"d", 22, 400};
//     struct data e5 = {"e", 23, 250};

//     float total_e1, da_e1, hra_e1;
//     da_e1 = e1.basic * 0.10;
//     hra_e1 = e1.basic * 0.05;
//     total_e1 = e1.basic + da_e1 + hra_e1;

//     float total_e2, da_e2, hra_e2;
//     da_e2 = e2.basic * 0.10;
//     hra_e2 = e2.basic * 0.05;
//     total_e2 = e2.basic + da_e2 + hra_e2;

//     float total_e3, da_e3, hra_e3;
//     da_e3 = e3.basic * 0.10;
//     hra_e3 = e3.basic * 0.05;
//     total_e3 = e3.basic + da_e3 + hra_e3;

//     float total_e4, da_e4, hra_e4;
//     da_e4 = e4.basic * 0.10;
//     hra_e4 = e4.basic * 0.05;
//     total_e4 = e4.basic + da_e4 + hra_e4;

//     float total_e5, da_e5, hra_e5;
//     da_e5 = e5.basic * 0.10;
//     hra_e5 = e5.basic * 0.05;
//     total_e5 = e5.basic + da_e5 + hra_e5;
//     float totals[5] = {total_e1, total_e2, total_e3, total_e4, total_e5};
//     struct data emps[5] = {e1, e2, e3, e4, e5};

//     for (int i = 0; i < 5; i++) {
//         for (int j = i + 1; j < 5; j++) {
//             if (totals[i] < totals[j]) {
//                 float tempTotal = totals[i];
//                 totals[i] = totals[j];
//                 totals[j] = tempTotal;

//                 struct data tempEmp = emps[i];
//                 emps[i] = emps[j];
//                 emps[j] = tempEmp;
//             }
//         }
//     }
//     for (int i = 0; i < 5; i++) {
//         printf("%s %d %.2f\n", emps[i].name, emps[i].age, totals[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include<string.h>
// union Data{
//     int i;
//     float f;
// };
// int main(){
//     union Data myData;
//     myData.i=10;
//     printf("myData.i: %d\n",myData.i);
//     myData.f=220.5;
//     printf("myData.f: %.1f\n",myData.f);
//     printf("myData.i(corrupted): %d\n",myData.i);
// }

// #include <stdio.h>
// #include <string.h>
// // enum trafficlight{RED,YELLOW,GREEN};
// //enum t1{RED,YELLOW,GREEN};  can't be redeclare same value on same position
// enum bool{true=1,false=0,YES=1,NO=0};
// int main(){
//     // enum trafficlight light=GREEN;
//     enum bool b1=YES;
//     // printf("%d\n",light);
//     // printf("%d\n",GREEN);
//     if(b1)
//     printf("Go!");
// return 0;
// }

// #include <stdio.h>
// #include <string.h>
// enum dress{white,yellow,blue,black,purple,cyan,green};
// enum day{mon,tue,wed,thur,fri,sat,sun};
// int main(){
//     int day;
//     scanf("%d",&day);
//     switch(day){

// case mon:
//             printf("white");
//             break;

//         case tue:
//             printf("yellow");
//             break;

//         case wed:
//             printf("blue");
//             break;

//         case thur:
//             printf("black");
//             break;

//         case fri:
//             printf("purple");
//             break;

//         case sat:
//             printf("cyan");
//             break;

//         case sun:
//             printf("green");
//             break;
//     }
// }

// #include<stdio.h>

// enum TrafficLight {RED, YELLOW, GREEN};

// int main(){
//     enum TrafficLight signal = GREEN;
//     if(signal == RED)
//         printf("Stop\n");
//     else if (signal == YELLOW)
//         printf("Ready\n");
//     else if (signal == GREEN)
//         printf("Go!\n");
//     return 0;
// }

// #include <stdio.h>
// enum Season {SPRING,SUMMER,AUTUMN,WINTER};
// int main(){
//     enum Season s=AUTUMN;
//     switch (s){
//         case SPRING: 
//         printf("Flowers bloom\n");
//         break;
//         case SUMMER: 
//         printf("Very hot\n");
//         break;
//         case AUTUMN:
//         printf("Leaves fall\n");
//         break;
//     }
// }

//  #include <stdio.h>
//  enum Day { SUN, MON, TUE, WED, THU, FRI, SAT };

//  int main() {
//  printf("%d\n", SUN); // 0
//  printf("%d\n", WED); // 3
//  printf("%d\n", SAT); // 6
//  return 0;
//  }

// #include <stdio.h>

// struct Student {
//     int roll;
//     float marks;
// };

// int main() {
//     struct Student s[5];
//     float total = 0;
//     for(int i = 0; i < 5; i++) {
//         s[i].roll = i + 1;
//         printf("Enter marks for roll %d: ", s[i].roll);
//         scanf("%f", &s[i].marks);
//         total += s[i].marks;
//     }
//     printf("Average Marks: %.2f", total / 5);
//     return 0;
// }


#include <stdio.h>
struct found {
    int a;
    float b;
    double c;
};
int main(){
    struct found s;
    printf("%d", sizeof(s));
    return 0;
}