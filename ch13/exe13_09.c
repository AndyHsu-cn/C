#include <stdio.h>
#include <stdlib.h>
#include  <string.h>
#define MAX 41

int main(void)
{
    FILE * fp;
    char words[MAX];
    int count = 0;

    if((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stdout, "Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    // 追加模式，必须先rewind
    rewind(fp);
    puts("Enter words to add to the file: press the # ");
    puts("at the beginning of a line to terminate.");
    // 读取文件一行，读到EOF位置，以确定count的值
    while(fgets(words, MAX, fp))
        count++;
    while(fscanf(stdin, "%40s", words) == 1 && words[0] != '#')
        fprintf(fp, "%d %s\n", ++count, words);
    puts("File contents: ");
    rewind(fp);
    while(fscanf(fp, "%s", words) == 1)
        puts(words);
    puts("Done!");
    if(fclose(fp) != 0)
        fprintf(stderr, "Error closing file\n");

    return 0;
}