#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 255
int main(int argc, char * argv[])
{
    char line[SLEN];
    FILE * fp;
    
    if (argc != 3)
	{
		fprintf(stderr, "Usage: %s sub_string filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
    if((fp = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Can't opern file %s\nn", argv[2]);
		exit(EXIT_FAILURE);
    }
    while(fgets(line, SLEN, fp) != NULL)
    {
        if(strstr(line, argv[1]))
            fputs(line, stdout);
    }
    puts("Done.");

    return  0;
}