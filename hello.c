#include<stdio.h>
int main (){


    // int arr[5];

    printf("Write any five numbers:\n");
   

    // for (int i = 0; i < 5; i++)
    // {
    //  scanf("%d", &arr[i]);

    // }

    // int z = arr[0] + arr[3];

    // printf("%d", z);

    int a,b,c,d,e,x;


    for (int i = 0; i < 5; i++)
    {
       if (i==0)
       {
        scanf("%d", &a);
       }

       else if (i==1){
        scanf("%d", &b);
        }

       else if (i==2){
        scanf("%d", &c);
        }
        
        else if (i==3){
        scanf("%d", &d);
        }

         else if (i==4){
        scanf("%d", &e);
        }



       
    }
    x = a + d;
    printf("The sum of first and fourth numbers: %d", x);

    printf("My name is Shivam Rana");


    return 0;
}