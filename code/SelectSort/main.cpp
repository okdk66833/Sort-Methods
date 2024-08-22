#include <stdio.h>
#include <windows.h>
int a[6]={5,3,8,1,2,7};
int b;
void pvoid(int v,int r);
int main()
{
    printf("<선택 정렬>\n");
    pvoid(7,7);
    printf("===========\n");
    for(int i=0;i<5;i++){
        int m=i;
        for(int j=i+1;j<6;j++){
            if(a[m]>a[j]){
                m=j;
            }
        }
        pvoid(m,i);
        int t=a[m];
        a[m]=a[i];
        a[i]=t;
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
