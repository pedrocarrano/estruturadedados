#include<stdio.h>
#include<stdlib.h>
int main(){
float array[10], *v;
int i;
for(i=0;i<10;i++){
v = &array[i];	
printf("%p\n", v);
}
}
