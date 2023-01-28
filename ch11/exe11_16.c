#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 20
void map_identity(char * str);
void map_upper_case(char * str);
void map_lower_case(char * str);
char * s_gets(char * str, int len);

int main(int argc, char * argv[])
{
    char str[MAX];

    puts("Enter a string");
    if(s_gets(str, MAX))
    {
        if(argc == 1)
        {
            map_identity(str);
            printf("\n");
        }else if(argc > 2 || (argc == 2 && argv[1][0] != '-'))
        {
            printf("Usage: program_name [-p | -l | -u]\n");
            return 1;
        }else{
            switch(argv[1][1])
            {
                case 'p':
                    map_identity(str);
                    printf("\n");
                    break;
                case 'u':
                    map_upper_case(str);
                    printf("\n");
                    break;
                case 'l':
                    map_lower_case(str);
                    printf("\n");
                    break;
                default:
                    printf("Usage: program_name [-p | -l | -u]\n");
				    return 1;
            }
        }  
    }else
        puts("Bye!\n");

    return 0;
}

void map_identity(char * str)
{
    printf("%s", str);
}

void map_upper_case(char * str)
{
    while(*str != '\0')
    {
        putchar(toupper(*str));
        str++;
    }
}

void map_lower_case(char * str)
{
    while(*str != '\0')
    {
        putchar(tolower(*str));
        str++;
    }
}

char * s_gets(char * str, int len)
{
    char * ret = fgets(str, len, stdin);
    char * find_n = NULL;

    if(ret)
    {
        find_n = strchr(str, '\n');
        if(find_n)
            *find_n = '\0';
        else
            while(getchar() != '\n')
                continue;
    }

    return ret;
}