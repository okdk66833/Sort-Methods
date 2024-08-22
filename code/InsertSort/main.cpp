#include <stdio.h>
#include <windows.h>
int a[6]={5,3,8,1,2,7};
int b;
void pvoid(int v);
int main()
{
    printf("<삽입 정렬>\n");
    pvoid(7);
    printf("===========\n");
    for(int i=0;i<6;i++){
        b=a[i];
        for(int j=0;j<i;j++){
            if(a[i]<a[j]){
                for(int k=i;k>j;k--){
                    a[k]=a[k-1];
                    pvoid(k-1);
                }
                printf("\n");
                a[j]=b;
                break;
            }
        }

    }
    printf("===========\n");
    pvoid(7);
    scanf("%d",&a[0]);
}
void pvoid(int v){
    for(int i=0;i<6;i++){
        if(i==v){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
            printf("%d",b);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
            printf(" ");
        }
        else printf("%d ",a[i]);
    }
    printf("\n");
}
