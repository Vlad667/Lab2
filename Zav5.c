#include <stdio.h>   
#include <stdlib.h>
#include <math.h>

int main ()
{
    int i;
    double sum = 0,factorial=1,dodanok=1,znam;
    
           for (i=1;dodanok >=0.01;i++) {
    	   factorial *= i;
    	   znam = pow (i, i);
    	   dodanok = factorial/ znam;
    	   sum = sum + dodanok;
    	   printf ("\n%lf", dodanok);
    }
    
     printf("\nSumma rivna = %lf", sum);
	
     system("pause");
    
     return 0;
}

 
