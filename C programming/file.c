#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp, *temp;
    char word[100], find[50], replace[50];
    int count = 0;
    fp = fopen("data.txt", "r");
    temp = fopen("temp.txt", "w");
    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }
    printf("Enter word to find: ");
    scanf("%s", find);
    printf("Enter replacement word: ");
    scanf("%s", replace);
    while(fscanf(fp, "%s", word) != EOF)
    {
        if(strcmp(word, find) == 0)
        {
            fprintf(temp, "%s ", replace);
            count++;
        }
        else
        {
            fprintf(temp, "%s ", word);
        }
    }
    fclose(fp);
    fclose(temp);
    printf("Total occurrences replaced = %d", count);
    return 0;
}

