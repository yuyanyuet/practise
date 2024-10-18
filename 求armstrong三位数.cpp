#include<stdio.h>
int a,b,c,x;
int main(void){
	x=100;
	while(x<1000){
		a=x/100;
		b=(x%100)/10;
		c=x%10;
		if(x==a*a*a+b*b*b+c*c*c){
			printf("%d%d%d ",a,b,c);
	    }	
		x++;
	}
}