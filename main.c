#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int sayma[26]={0};
    int emir,karakter,i;
    karakter=0;
    printf("Lutfen bir text girin ve entera basin.\n");
    while((c=getchar())!='\n')
    {
        emir=c-'a';
        if(emir >=0 && emir<26)
        sayma[emir]++;
        else
        karakter++;

    }
    printf("\nGirdiginiz text %d karakter iceriyor : \n",karakter);
    for(i=0;i<26;i++)
    {
        printf("\n %d kez %c\n",sayma[i],'a'+i);
    }
}
