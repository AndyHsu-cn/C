#include <stdio.h>
#include <stdlib.h>
#define ROWS 20
#define COLS 30

int main(int argc, char * argv[])
{
    FILE * data_fp;
    FILE * img_fp;
    int data[ROWS][COLS];
    char img[ROWS][COLS + 1];
    int ch;
    int i, j;

    if((data_fp = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Can't open input_file %s.\n", argv[1]);
		exit(EXIT_FAILURE);
    }
    if((img_fp = fopen(argv[2], "w")) == NULL)
    {
        fprintf(stderr, "Can't open output_file %s.\n", argv[2]);
		exit(EXIT_FAILURE);
    }
    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            fscanf(data_fp, "%d", *(data + i) + j);
            switch (data[i][j])
			{
				case(0):
					ch = ' ';
					break;
				case(1):
					ch = '.';
					break;
				case(2):
					ch = '\'';
					break;
				case(3):
					ch = ':';
					break;
				case(4):
					ch = '~';
					break;
				case(5):
					ch = '*';
					break;
				case(6):
					ch = '=';
					break;
				case(7):
					ch = '}';
					break;
				case(8):
					ch = '&';
					break;
				case(9):
					ch = '#';
					break;
				default:
					fprintf(stderr, "Error: int out of bounds.\n");
					exit(EXIT_FAILURE);
			}
            img[i][j] = ch;
            fputc(ch, img_fp);
        }
        img[i][30] = '\0';
        fputc('\n', img_fp);
    }
    fclose(data_fp);
    fclose(img_fp);
    puts("Done.");

    return 0;
}