#include <stdio.h>
#include <windows.h>
int a[6]={5,3,8,1,2,7};
int b;
void pvoid(int v,int r);
int main()
{
    printf("<버블 정렬>\n");
    pvoid(7,7);
    printf("===========\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            pvoid(j,j+1);
            if(a[j]>a[j+1]){
                int t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }

        }
        printf("\n");
    }
    printf("===========\n");
    pvoid(7,7);
    scanf("%d",&a[0]);
}
void pvoid(int v,int r){
    for(int i=0;i<6;i++){
        if(i==v || i==r){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
            printf("%d",a[i]);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
            printf(" ");
        }
        else printf("%d ",a[i]);
    }
    printf("\n");
}
