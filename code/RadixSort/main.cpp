#include <stdio.h>
#include <windows.h>
void pvoid(int v,int r);
void p2void(int v,int r);
int a[6]={531,723,525,224,864,241},b[6];
int main()
{
    int m=0,e=1;
    printf("<기수 정렬>\n");
    pvoid(7,7);
    printf("===========\n");
    for (int i=0;i<6;i++) if(a[i]>m) m=a[i];
	while(m/e>0){
		int t[10]={0,};
		for (int i=0;i<6;i++) t[a[i]/e%10]++;
		for (int i=1;i<10;i++) t[i]+=t[i-1];
		for(int i=5;i>=0;i--) b[--t[a[i]/e%10]]=a[i];
		p2void(7,7);
		for (int i=0;i<6;i++) a[i]=b[i];
		e*=10;
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
void p2void(int v,int r){
    for(int i=0;i<6;i++){
        if(i==v || i==r){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
            printf("%d",b[i]);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
            printf(" ");
        }
        else printf("%d ",b[i]);
    }
    printf("\n");
}
