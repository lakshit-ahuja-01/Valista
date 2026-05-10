// class Solution {
//     public void pattern2(int n) {
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         System.out.print("*");
//     }System.out.println();
// }
//     }

// public static void main(String[] args){
//     Solution sol = new Solution();
//     int n=4;
//     sol.pattern2(n);
// }
// }
// class Solution {
//     public void pattern3(int n) {
// for(int i=n;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         System.out.print(j);
//     }System.out.println();
// }
//     }

// public static void main(String[] args){
//     Solution sol = new Solution();
//     int n=4;
//     sol.pattern3(n);
// }
// }

// public class Pyramid {
//     public static void main(String[] args) {
//         int n=5;
//                 for (int o = 1; o <=n; o++) {
//             for (int p = 1; p <= n - o; p++) {
//                 System.out.print(" ");
//             }

//             for (int l = 1; l <= (2 * o - 1); l++) {
//                 System.out.print("*");
//             }
//             System.out.println();
//         }
//         for (int i = n-1; i >= 1; i--) {
//             for (int j = 1; j <= n - i; j++) {
//                 System.out.print(" ");
//             }

//             for (int k = 1; k <= (2 * i - 1); k++) {
//                 System.out.print("*");
//             }
//             System.out.println();
//         }
//     }
// }

class Solution {
    public void pattern2(int n) {
for(int i=1;i<=n;i++){
    for(int j=i;j>=1;j--){
        System.out.print((char)(70-j));
    }System.out.println();
}
    }

public static void main(String[] args){
    Solution sol = new Solution();
    int n=4;
    sol.pattern2(n);
}
}
    

