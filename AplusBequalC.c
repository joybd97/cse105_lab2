#include<stdio.h>
int main()
{   int a,b;
    printf("Entar the dimantion of matrix\n");
    scanf("%d %d",&a,&b);
    int i,j,m[a][b],n[a][b],s[a][b];
    printf("Enter the first matrix-\n");
    for(i=0;i<a;i++){
        printf("row %d:\n",i+1);
        for(j=0;j<b;j++){
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
    printf("Enter the second matrix-\n");
    for(i=0;i<a;i++){
        printf("row %d:\n",i+1);
        for(j=0;j<b;j++){
            scanf("%d",&n[i][j]);
        }
    printf("\n");
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            s[i][j]=m[i][j]+n[i][j];
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }

}
