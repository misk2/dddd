#include <stdio.h>
#include <stdlib.h>
/*
ZADANIE 1
int a,b,c;

int f(a,b){
printf("%p\n", &a);
printf("%p\n", &b);
}
int main()
{
int d=c;

printf("%p\n", &c);
printf("%p\n", &d);
f(c,d);
}
*/

/*
ZADANIE 2
int main() {
int t[10];
for(int i=0;i<10;i++) {
scanf("%d", &t[i]);
}
for(int i=0;i<10;i++) {
printf("%d ", t[i]);
}
}

*/
/*
ZADANIE 3

void z(int *a, int *b) {
int c=*a;
a=*b;
b=c;
printf("\nA = %d B = %d", a,b);

}
int main() {
int a=10;
int b=52;
printf("a = %d b = %d", a,b);
z(&a,&b);

}
*/

/*ZADANIE 4 NA POZNIEJ
int main() {
int t[] = {0,1,2,3,4,5,6,7,8,9};
int x = sizeof(a);



}

*/


/*
ZADANIE 5

void f(int *a,int *b,int *c,int *z){
if(*b<*a&&*b<*c)
{
*z=*a;
*a=*b;
*b=*z;
}
if(*c<*a&&*c<*b){
*z=*a;
*a=*c;
*c=*z;
}
if(*c<*b){
*z=*b;
*b=*c;
*c=*z;

}
}
int main() {
int a,b,c,z;
scanf("%d %d %d", &a,&b,&c);
f(&a,&b,&c, &z);
printf("%d %d %d", a,b,c);
}
*/

/*
int t[10];
void f(int *a, int *b){
int n=*b-*a;
for(int i=0;i<n;i++){
*(t+i) = i;

}

}


int main(){

f(&t,t[9]);
for(int i=0;i<10;i++){
printf("%d ", *(t+i));
}



}*/



//POWTORKA
















