#include "mbed.h" //include the header file "mbed.h"

Serial pc(USBTX, USBRX); //creates a Serial object named "pc" for output to the computer's serial port


int n=6; //term value integer variable named "n" with the value 6


int fib(int n){   // This function takes input n and returns the nth number (6) in the Fibonacci series.
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

int main() //Prints the fibonacci secquence on Putty app on the pc.
    {
    pc.printf("using recursive function (%d) \r\n", n);
    for(int i=1; i<=n; i++)
    pc.printf("%d, \n\r ", fib(i));

    }
