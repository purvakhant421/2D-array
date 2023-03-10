/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,j,sum=0;
    printf("Enter size:");
    scanf("%d",&n);
    
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter Elments[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
            
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
            
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<n;j++){
            sum+=a[i][j];
        }
        printf("Sum [%d] :%d\n",i,sum);
    }
    
    return 0;
}
