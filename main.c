#include <stdio.h>
#include <stdlib.h>
char tablica[20];
int n=0;
void wyswietlanie(){
if(n==0) {printf("tablica jest pusta");}
else {
for(int i=0;i<n;i++){
printf(tablica[i]);
}
}

}
void miejsce(){
if(n<20) { printf("podaj liczbe");
int ddd;
scanf("%d", &ddd);
if(ddd>0 || ddd<=256){
tablica[n] = ddd;
n++;
printf("twoja liczba zostala dodana do tablicy");}
else {
printf("nie ma miejsca w tablicy");
}


}

}
void dodanie() {
if(n>=20) {printf("tablica jest pelna");}
else {
printf("podaj znak ktory ma zostac dodany");
char dd;
scanf("%d", &dd);
tablica[n] = dd;
n++;

}


}
/*void usuwanie(int k) {

if (k>0 || k<=20){
tablica[k]=tablica[k+1];
}



}*/
int kwadrat(){
int suma;
if (n==0){printf("Tablica jest pusta");}
else {
for(int i=0;i<=n;i++){

suma += tablica[i]*tablica[i];
return suma;
}
}
}

int main()
{
 char x;
 scanf("%c", &x);

 switch(x)
 {
 case 'e':
 break;
 case 'w':
 wyswietlanie();
 break;
case 'd':
miejsce();
 break;
 case 'D':
 dodanie();
 break;
 case 'u':

 break;
 case 's':
 kwadrat(&n);
 break;
 case 't':
 break;
 case 'T':
 break;
 default:
 break;


 }



/*printf("jaki indeks ma zostac usuniety?");
int k;
scanf("%d", &k);
if (k>0 || k<=20){
usuwanie();
  }
  else{printf("niepoprawny indeks");}
*/
}
