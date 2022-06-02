#include<stdio.h>
#include<conio.h>

main(){

    FILE *fp;
    char in, fn[35], cho;

    printf("\n\t\t\t\t\Text Editor\n\n");
    printf("\n\n\t\t\tEnter File Name : ");
    gets(fn);
    printf("\n\n\t\tWrite:w\n\t\tRead:r\n\t\tAdd:a\n\t\tChoose Mode : ");
    scanf("%c", &cho);

    if(cho=='r')
    {
        fp=fopen(fn,"r");
        printf("\n\n\n\t\t\tREAD MODE\n\n");

        while ((in=getc(fp))!=EOF)
        {
                   printf("%c", in);
        }

        fclose(fp);
    }
    else if(cho=='w')
    {
        fp=fopen(fn,"w");
        printf("\n\n\n\t\t\tWrite Mode");
        printf("\n\n\n\t\t\tFor Save File Press Ctrl+z\n\n");

        while((in=getchar())!= EOF)
        {
            putc(in, fp);
        }
        fclose(fp);
    }

    else if(cho=='a')
    {
        fp=fopen(fn,"a");
        printf("\n\n\n\t\t\tADD Mode");
        printf("\n\n\n\t\t\tFor Save File Press Ctrl+z\n\n");

        while((in=getchar())!= EOF)
        {
            putc(in, fp);
        }
        fclose(fp);
    }
    getch();

    return 0;
}
