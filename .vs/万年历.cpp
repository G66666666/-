#include <stdio.h>
int main()
{
	int y,m,d;//�����ꡢ�¡��� 
	int i,j,w;
	printf("����������:XX��XX��XX��\n");
	scanf ("%d %d %d",&y,&m,&d);
	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if (m<1||m>12) {
        printf("������·�����\n");
        return 0;
    }
    if (d<1||d>day[m]) {
        printf("�������������\n");
        return 0;
    }
	if (y%400==0||y%100!=0&&y%4==0){
		day[2]=29;
	}
	if (m==1||m==2){
		y--;
		m+=12;
	} 
	w=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;//w��ֵΪ0-6����Ӧ�����յ�����һ 
	if (m==1||m==2){
		y++;
		m-=12;
	}
	printf("   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n"); 
	for (i=0;i<w;i++){
		printf("%6s","");//��ֹ���ֻ��ҵ��ַ� 
	}
	for (i=1,j=w;i<=day[m];i++,j++){
		if (i!=d){
			printf("%6d",i);
		} else {
			printf("%5d*",i);
		}
		if ((j+1)%7==0){
			printf("\n");
		}
	}	
	return 0;
}



