#include <stdio.h>
#include <stdlib.h>

int maximumSum(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (!(a[i - 1] <= a[i]))
            a[i - 1] = a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}


int main()

{

int T;
printf("Enter the number of test case :");
scanf("%d",&T);

while(T--){


    int N;
    printf("\nEnter the number of input: ");
    scanf("%d",&N);
    int a[N];
    printf("\nEnter the number of array[%d]:",N);
    for(int i =0; i<N; i++){
     scanf("%d",&a[i]);
    }
    printf("%d\n", maximumSum(a, N));


}

return 0;
}




