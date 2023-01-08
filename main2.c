#include <stdio.h>
#include <stdlib.h>
/*int main() {
    char buff[20];
    int max = 0;
    int min = 0;
    FILE* fp = fopen("./liczby.txt", "r");
    for(int i = 0; i < 100; i++) {
        fscanf(fp, "%s", buff);
        int a = atoi(buff);
        if(a > max) {
            max = a;
        }
        if (a < min) {
            min = a;
        }
    }
    printf("max:%d min:%d\n", max, min);
    return 0;
}

/*int main() {
    FILE* fp = fopen("./parzyste.txt", "w+");
    FILE* fnp = fopen("./nieparzyste.txt", "w+");
    int n = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int x = 0;
        scanf("%d", &x);
        if(x %2 == 0) {
            fprintf(fp, "%d\n", x);
            continue;
        }
        fprintf(fnp, "%d\n", x);

    }

}
*/



struct dane
{
char imie[20];
char nazwisko[30];

};


int main() {
FILE* fp = fopen("./baza.txt","r");

}




















s

