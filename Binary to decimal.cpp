#include <stdio.h>
int main() 
{ 
	int n, binary_n, decimal_num = 0, base = 1, rem; 
	printf (" Enter a binary number="); 
	scanf (" %d", &n);
	binary_n = n;
	while ( n > 0) 
	{ 
    	rem = n% 10;
    	decimal_num= decimal_num + rem * base; 
    	n= n / 10; 
    	base = base * 2; 
	} 
	printf (" The decimal number is %d \t", decimal_num);	
}
