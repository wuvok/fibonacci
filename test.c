#include <stdio.h> 

int main () { 
char b; 
FILE *fp; 

printf(" phrase to scan into file : ");
scanf("%c", &b); 

fprintf("fp","my name is slim shady");

fp = fopen("test.txt","w");


fclose("test.txt");

return 0;
    
}