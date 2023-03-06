#include "mbed.h"

Serial pc(USBTX, USBRX);

//term value
int n=12;


int fib(int n){
    //1,2,3,4,5......
    //0,1,1,2,3
    if(n == 1)
        return (0);
    else if (n == 2) 
        return (1);
    else{
        return(fib(n-1)+fib(n-2));       
        }
}

int main()
    {
    pc.printf("using recursive function (%d) \r\n", n);
    for(int i=1; i<=n; i++)
    pc.printf("%d, \n\r ", fib(i));

    }
