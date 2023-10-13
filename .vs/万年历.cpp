#include <stdio.h>
int main()
{
	int y,m,d;//代表年、月、日 
	int i,j,w,s;
	printf("请输入日期:XX年XX月XX日\n");
	scanf ("%d %d %d",&y,&m,&d);
	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if (y%400==0||y%100!=0&&y%4==0){
		day[2]=29;
	}
	if (m==1||m==2){
		m+=12;
		y--;
	} 
	w=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;//w的值为0-6，对应星期日到星期一
	if (m==13||m==14){
		m-=12;
		y++;
	} 
	printf("   Sun   Mon   Tue   Wen   Thu   Fri   Sat\n"); 
	for (i=0;i<w;i++){
		printf("%6s","");//防止出现混乱的字符  
	}
	for (i=1,j=w;i<=day[m];i++){
		if (i!=d){
			printf("%6d",i);
		} else {
			printf("%5d*",i);
		}
		j++;
		if (j%7==0){
			printf("\n");
		}
	}
	return 0;
}
