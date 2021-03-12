/*Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът.*/

#include <stdio.h>

int main(void){
    FILE *pfile = NULL;
    char*filename = "text.txt";
    pfile = fopen (filename, "wt");
    if(pfile ==NULL)
        printf("Failed to open %s.\n",filename);

    fclose (pfile);
    pfile = NULL;

    /*int rename (const char text.txt, const char newNameText.txt);*/
    if(rename ("text.txt","NewText.txt"))
        printf("Failed to rename file.");
    else
        printf("File renamed successfully.");

    
    return 0;
}