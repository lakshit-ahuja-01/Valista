// #include<stdio.h>
// int sum();

// int main() {
//     int res;
//     res = sum();
//     printf("%d", res);
// }
    
// int sum() {
//     int a=10,b=20;
//     return (a+b);
// }

// #include <stdio.h>
// int prime(int n){
//     int k=0;
// for(int i=2;i<n;i++){
//     if(n%i==0){
//         k=1;
//         break;
//     }
// }if(k==0){
//     printf("prime");
// }
// else{
//     printf("not prime");
// }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     prime(n);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int arr[5], i, element;
    int flag = 0, pos = -1;
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &element);
    for(i=0; i<5; i++)
    {
        if(element == arr[i])
        {
            pos = i+1;
            printf("%d", pos);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("%d", pos);
    }
    return 0;
}