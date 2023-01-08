@@ -0,0 +1,163 @@
#include <stdio.h>


/*
SILNIA
int silnia( int i)
{
    if(i<=1) {return 1;}
    else{ return i*silnia(i-1);
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("silnia wynosi : %d",silnia(a));
    return 0;
}
*/

/* EUKLIDES
int euklides(int a,int b){
    if(b!=0)
        { return euklides(b,a%b);
    }
else{
    return a;}
}
int main() {
int a,b;
scanf("%d %d", &a,&b);
printf("%d", euklides(a,b));
}
*/

/* WYPIS
int wypis(int a) {
    if(a<2) {
        return 1;
    }
    else {
        printf("%d ", a);
        return wypis(a-1);
    }
}
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", wypis(a));
}
*/

/* FIBONACCI
int fibonacci(int a) {
    if(a<2) {
        return 1;
    }
    else return (fibonacci(a-1))+(fibonacci(a-2));
}
int main() {
int a;
scanf("%d" , &a);
printf("%d", fibonacci(a));
}
*/

/*BINARKA
int binarka(a){
if(a>0) {
printf("%d", a%2);
binarka(a/2);
}
}
int main(){
int a;
scanf("%d", &a);
printf("%d", binarka(a));
}
*/
/*   suma cyfr liczby
int b;
int sumalicz(a){
    if(a>0) {
    b = b + a%10;
    return sumalicz(a/10);
    }
    printf("%d", b);
}
int main(){
int a;
scanf("%d", &a);
sumalicz(a);
}
*/

/*ZADANIE 7A
int i=0;
int tablica[10] = {0,1,2,3,4,5,6,7,8,9};
int spr(a) {
if(a == tablica[i]){
printf("Ta cyfra znajduje sie w tablicy");
}
else {if(i<11) {
i++;
return spr(a);
    }
else {
    printf("Ta liczba nie znajduje sie w tablicy");
    }
}
}
int main(){
int a;
scanf("%d", &a);
spr(a);
}
*/
int x=0, y=10, z;
int tablica[10] = {0,1,2,3,4,5,6,7,8,9};
int sprbinarne(a){
z=(x+y)/2;
if(y-x==1) {
    printf("liczba ta nie znajduje się w tablicy");
    return 0;
}
if(a==tablica[z]) {
     printf("twoja liczba znajduje się w tablicy");
     return 0;

}
else if (a>tablica[z]) {
        x=z;
    return sprbinarne(a);
}
else {
    y=z;
    return sprbinarne(a);
}
}
int main() {
int a;
scanf("%d", &a);
sprbinarne(a);
}
