#include <stdio.h>
#include <math.h>


#include <stdio.h>

int mian(){
    int a, b;
    for(a=1;a<=100;a++){
        if(a%10==9 || a/10==9){
            printf("%d ", a);
            b++;
        }

    }printf("\n%d", b);
    return 0;
}
// int main(){
//     int a=0, i=0;
//     int sum, t;
//     for(a=100;a<=200;a++){    //优化  for(a=100;a<=200;a+=2)
//         t=sqrt(a);
//         for(i=2;i<=t;i++){
//             if(0==a%i){
//                 break;
//             }    
//         }
//         if(i>t){
//             printf("%d ", a);
//             sum++;
//         }
//     }printf("\n%d", sum);
//     return 0;
// }



// int main(){
//     int m=0, n=0, t=0;
//     scanf("%d%d", &m, &n);

//     while(0!=m%n){
//         t=m%n;
//         if(t!=0){
//             m=n;
//             n=t;
//     }
//     }
    
//         printf("%d\n", n);

//     return 0;
// }



// int main(){
//     int i;
//     for(i=1; i<=100; i++){

//         if(0==i%3)
//         printf("%d\n", i);
//     }
//     return 0;
// }





// int main(){
//     int a=0, b=0, c=0;
//     printf("please input:");
//     scanf("%d%d%d", &a, &b, &c);
//     if(a < b){
//         int t=a;
//         a=b;
//         b=t;
//     }
//     if(a < c){
//         int t=a;
//         a=c;
//         c=t;
//     }
//     if(b < c){
//         int t=b;
//         b=c;
//         c=t;
//     }

//     printf("%d %d %d\n", a, b, c);
//     return 0;
// }