#include <stdio.h>


int main(){
    long int t; 
    long sum3;
    long sum5;
    long sum15;
    scanf("%ld",&t);
    
    for(int a0 = 0; a0 < t; a0++)
    {
        long int n; 
        scanf("%ld",&n);
        n--;
        
	sum3 = 3 * (((n/3) * (n/3+1))
			/2);
       	sum5 = 5 * (((n/5) * (n/5+1))
			/2);
	sum15 = 15 * (((n/15) * (n/15+1))
			/2);
	n = sum3 + sum5 - sum15;

	printf("%li\n", n);
                
    }
    return 0;
}
