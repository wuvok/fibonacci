#include <stdio.h> 

int fibo(int n){
if (n==1) return 1; 
if (n==2) return 1; 

return fibo(n-1) + fibo(n-2); 
}
void t(i){
    FILE *fp; 
    fp = fopen("fibonaccisequence.txt","a");
    fprintf(fp," %d \n", fibo(i));
    fclose(fp);

}
 
int main(){
    int i; 
    for(i=1;i>0;i++) t(i);

return 0; } 

