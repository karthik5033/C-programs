// #include<stdio.h>
// int main(){
//     int x=10;
//     int *y = &x;
//     printf("%d \n",x);
//     printf("%d\n", y);
//     printf("%u\n", *y);
//     printf("%u\n", &x);
//     printf("%u\n", &y);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     printf("%d \n",sizeof(int));
//     printf("%d \n", sizeof(short int));
//     printf("%d \n", sizeof(long int));
//     printf("%d \n", sizeof(float));
//     printf("%d \n", sizeof(double));
//     printf("%d \n", sizeof(char));
//     printf("%d \n", sizeof(unsigned int));
// }

// #include<stdio.h>
// int main(){
//     int *p1,*p2,a,b,sum;
//     printf("enter a,b");
//     scanf("%d %d",&a,&b);
//     p1=&a;
//     p2=&b;
//     sum=*p1+*p2;
//     printf("sum=%d",sum);
//     return 0;
    


// }

// #include<stdio.h>
// int main(){
//     float *area,radius;
//     area = (float *)malloc(sizeof(float));

//     printf("enter radius");
//     scanf("%f",&radius);
//     float *ptr=&radius;
//     *area = 3.14 * (*ptr) * (*ptr);
//     printf("%.21f",*area);
// }

#include <stdio.h>

void lowest(int *arr, int n, int *min, int *index)
{
    *min = arr[0];
    *index = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
            *index = i;
        }
    }
}

int main()
{
    int arr[100], n, min, x;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    lowest(arr, n, &min, &x); // passing addresses of min and x

    printf("Smallest element is %d at index %d\n", min, x);

    return 0;
}
