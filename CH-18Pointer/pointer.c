#include <stdio.h>
#define pf printf

void main()
{
    int n = 89;

    int *ptr; // Pointer

    ptr = &n;

    pf("\n\t: %d\n", n);       
    pf("Ptr\t: %d\n", *ptr); 

    pf("N Address : %u\n", &n);    
    pf("Ptr Address : %u\n", ptr);
    pf("Ptr Address : %p\n", ptr);
    pf("Ptr Address : %x\n\n", ptr); 

    n = 100;

    pf("\n\t: %d\n", n);  
    pf("Ptr\t: %d\n\n", *ptr); 

    *ptr = 567;

    pf("\n\t: %d\n", n);     
    pf("Ptr\t: %d\n", *ptr);
}