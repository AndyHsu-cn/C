#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    FILE * src_file;
    FILE * des_file;
    int ch;

    if(argc != 3)
    {
        fprintf(stdout, "Usage: src_file des_file\n");
        exit(EXIT_FAILURE);
    }
    
    if((src_file = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stdout, "Could't open input file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if((des_file = fopen(argv[2], "wb")) == NULL)
    {
        fprintf(stdout, "Could't open output file %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    // 所有文件打开成功，准备读写
    while((ch = getc(src_file)) != EOF)
        putc(ch, des_file);

    fclose(src_file);
    fclose(des_file);

    return 0;
}