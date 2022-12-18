#include <stdio.h>
#include <stdlib.h>
int n=0;
/*void pierwsza(char *tab){
if(n==0) {
printf("Talica jest pusta");
return;
}
else { for(int i=0;i<=n;i++)
printf("%c ",tab[i] );

}


}
void druga(char *tab){
for(int i=0;i<=n;i++)
{
if (n<100){
printf("co wpisac na puste miejsce?");
char d;
scanf("%c", &d);
if(d<=9 && d=>0) {
tab[n] = d;
n++;
return;
else{printf("blad");
return;

}
}
}
}
return;
}
void trzecia(char *tab){
int pytana;
scanf("%d", &pytana);
if(pytana>0 && pytana<n){
n--;
for(int i=pytana;i<n;i++){
tab[i] = tab[i+1];
}
return;
}
else {
printf("blad");
return;

}
}*/
int czwarta(char *tab){
int s = 0;
for(int i=0;i<n;i++){
if(tab[i]>='0' && tab[i]<='9') {
s+=tab[i];
}

}
return s;

}

int main()
{
char tab[100];
int a;
printf("wybierz 0 jesli chcesz zakonczyc dzialanie");
printf("wybierz 1 jesli chcesz wywołać funkcję typu void która wypisze elementy tablicy, lub zwróci komunikat błędu jeśli n==0");
printf("wybierz 2 jesli chcesz wywołać funkcję typu void która sprawdzi czy w tablicy jest miejsce na nowy element. Jeśli tak to program poprosi użytkownika o podanie cyfry i wstawi ją do tablicy, jeśli nie ma miejsca lub znak podany przez użytkownika nie jest cyfrą program powinien zwrócić odpowiedni komunikat");
printf("wybierz 3 jesli chcesz wywołać funkcję typu void która poprosi o indeks elementu i usunie go z tablicy oraz zmniejszy zmienną n o jeden, jednocześnie przesuwając pozostałe elementy tak, aby tablica po wywołaniu zawierała wszystkie pozostałe elementy znajdowały się na n pierwszych miejscach zachowując oryginalną kolejność.");
printf("wybierz 4 jesli chcesz wywołać funkcję typu int która zwróci sumę cyfr reprezentowanych przez znaki w tablicy, program główny powinien wypisać tę sumę na ekran. Jeśli funkcja zostanie wywołana dla kiedy tablica posiada 0 znaków funkcja powinna zwrócić liczbę która pozwoli programowi głównemu zwrócić odpowiedni komunikat zamiast Suma=0.");
printf("wybierz 5 jesli chcesz wywołać funkcję typu void która wypisze elementy listy jako drzewo binarne, tzn. w pierwszym wierszu powinien być wypisany 1 element, w drugim 2, w trzecim 4 itd. pierwyszy wiersz powinien być wyśrodkowany na jedynym elemencie, pozostałe powinny być wypisane tak aby zachować struktórę przypominającą trójkąt równoboczny.");
scanf("%d", &a);
/*switch(a) {
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:} */










}

