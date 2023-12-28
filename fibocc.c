#include <stdio.h> 

int fib(int x){
if (x==1) return 1; 
if (x==2) return 1; 

return fib(x-1) + fib(x-2); 
}
void iO(i){
    FILE *fp; 
    fp = fopen("fibonaccisequence.txt","a");
    fprintf(fp," %d", fib(i));
    fclose(fp);

}
 
int main(){
    int i; 
    for(i=1;i>0;i++) iO(i);

return 0; } 

