#include <stdio.h>
int main()  {
//we declaration some variable  
int sec , hours , min , sec1;
//take a input from user and print it.
printf("input secends:\t");

scanf("%d",&sec);
//caculating the number of hours
hours=(sec/3600);
//caculating the number of minutes
min=(sec-(3600*hours))/60;
//caculating the number of scends

sec1= (sec-(3600*hours)-(min*60));

//print the output 

printf("Hours - %d\n:Minute - %d\n:Secends - %d\n ",hours,min,sec1);
return 0;


	
	
}

