#include <stdio.h>
#include <windows.h>
int a[6]={5,3,8,1,2,7};
void pvoid(int v,int r);
void msvoid(int b[],int p,int r);
void mvoid(int b[],int p,int q,int r);
int main()
{
    printf("<병합 정렬>\n");
    pvoid(7,7);
    printf("===========\n");
    msvoid(a,0,5);
    printf("===========\n");
    pvoid(7,7);
    scanf("%d",&a[0]);
}
void msvoid(int b[],int p,int r){
    int q;
    if(p<r){
        q=(p+r)/2;
        msvoid(b,p,q);
        msvoid(b,q+1,r);
        mvoid(b,p,q,r);
    }
}
void mvoid(int b[],int p,int q,int r){
    int i=p,j=q+1,k=p,t[6]={0,};
    while(i<=q&&j<=r) {
        //pvoid(i,j);
        if(b[i]<=b[j]){
            t[k++]=b[i++];
        }
        else{
            t[k++]=b[j++];
        }
    }
    while(i<=q) t[k++]=b[i++];
    while(j<=r) t[k++]=b[j++];
    for(int l = p; l<=r; l++) b[l]=t[l];
    for(int y=0;y<6;y++){
        if(t[y]==0) printf("%d ",a[y]);
        else {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
            printf("%d ",t[y]);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        }
    }
    printf("\n");

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
