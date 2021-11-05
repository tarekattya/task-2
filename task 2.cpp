#include <stdio.h>
int main()  { 
int sec , hours , min , sec1;
printf("input secends:\t");
scanf("%d",&sec);
hours=(sec/3600);

min=(sec-(3600*hours))/60;

sec1= (sec-(3600*hours)-(min*60));

printf("Hours - %d\n:Minute - %d\n:Secends - %d\n ",hours,min,sec1);
return 0;


	
	
}

