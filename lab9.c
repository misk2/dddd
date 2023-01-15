#include <stdio.h>
#include <stdlib.h>
/*
struct a {
char imie[10];
char nazwisko[30];
int numer_telefonu;



};


int main()
{
   struct a s1;
   struct a s2;
   strcpy(s1.imie,"Kacper");
   strcpy(s1.nazwisko,"Miś");
   s1.numer_telefonu= 123123123;
   strcpy(s2.imie,"Andrzej");
   strcpy(s2.nazwisko,"Misiak");
   s2.numer_telefonu= 123456789;
   printf("%s\n", s1.imie);
   printf("%s\n", s1.nazwisko);
   printf("%d\n", s1.numer_telefonu);
   printf("%s\n", s2.imie);
   printf("%s\n", s2.nazwisko);
   printf("%d\n", s2.numer_telefonu);

}
*/
/*
struct b {
int x,y;
};


int main() {
struct b s3 = {.x=5, .y=8};
printf("%d\n", s3.x);
printf("%d\n", s3.y);



}
*//*
struct c {
int x,y;
};


int main() {
struct b s4 = {.x=5, .y=8};
struct b s5 = {.x=3, .y=5};
struct b s6 = {.x=2, .y=4};
printf("%d\n", s4.x);
printf("%d\n", s4.y);


}
*/
/*
struct b {
int x,y;
};


int main() {
int a,b;
struct b s7 = {.x=5, .y=8};
struct b s8 = {.x=8, .y=15};
a=(s8.y-s7.y)/(s8.x-s7.x);
b= s7.y -a*s7.x;
printf("y = %d x + %d", a, b);

}

*//*
struct b {
int x,y;
};


int main() {
int a1,a2;
struct b s9 = {.x=5, .y=8};
struct b s10 = {.x=8, .y=15};
struct b s11 = {.x=12, .y=75};
struct b s12 = {.x=31, .y=42};
a1=(s10.y-s9.y)/(s10.x-s9.x);
a2=(s12.y-s11.y)/(s12.x-s11.x);
if(a1==a2) {
printf("proste są równoległe");
}
else {
printf("proste nie są rownoległe");
}

}*/

struct b {
int x,y;
};


int main() {
int a,b;
struct b s13 = {.x=3, .y=4};
struct b s14 = {.x=1, .y=1};
struct b s15 = {.x=1, .y=10};
struct b s16 = {.x=10, .y=1};
struct b s17 = {.x=10, .y=10};
if(s13.x>s14.x&&s13.x<s16.x&&s13.y>s14.y&&s13.y<s17.y) {
printf("znajduje sie w srodku kwadaratu");}
else {printf("punkt znajduje sie poza kwadratem");}
}
