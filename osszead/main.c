#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, nyolc, b, kecske, keto;
    printf("Kerek egy szamot!");
    scanf("%d",&a);
    printf("Kerek egy masik szamot!");
    scanf("%d", &nyolc);
    b = a * nyolc;
	kecske = a + nyolc;
	keto =a - nyolc;
    printf("A ket szam szorzata: %d\n", b);
    printf("A ket szam osszege: %d\n", kecske);
    printf("A ket szam kulonbsege: %d", keto);
    return 0;
}
