#include <stdio.h>
#include <conio.h>


int main()
{
    char nama[50];
    char kom[2];
    int nim;
    float ip;

    printf("Helloi World!! \n");

    printf("MAsukkan nama :");
    gets(nama);

    printf("masukkan NIM :");
    scanf("%d", &nim);

    getchar();

    printf("Masukkan kom :");
    gets(kom);

    printf("Masukkan ip :");
    scanf("%f", &ip);

    printf("Nama : ");
    puts(nama);

    printf("NIM : %d\n", nim);

    printf("KOM : ");
    puts(kom);

    printf("IP : %f\n", ip);

    printf("Press any button to continue!");
    getch();
}
