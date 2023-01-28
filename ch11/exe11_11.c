#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ROWS 10
#define COLS 20
void print_menu(void);
void print_original(char * pstr[], int row);
int get_first(void);
void sort_ascii(char * array[], int row);
void sort_length(char * array[], int row);
void sort_first_word_len(char * array[], int row);
char * s_gets(char * str, int len);
int first_word_len(char * str);
int main(void)
{
    char str[ROWS][COLS];
    char * pstr[ROWS];
    int i;
    int cnt;
    int choice;

    for(i = 0; i < ROWS; i++)
        pstr[i] = str[i];
	printf("Enter up to 10 strings (empty line to stop): \n");
    for(cnt = 0; cnt < ROWS; )
    {
        if(!s_gets(str[cnt], COLS) || str[cnt][0] == '\0')
            break;
        else
            cnt++;
    }
    
    print_menu();
    while((choice = get_first()) != 'q')
    {
        switch(choice)
        {
            case 'o':
                print_original(pstr, cnt);
                break;
            case 'a':
                sort_ascii(pstr, cnt);
                break;
            case 'l':
                sort_length(pstr, cnt);
                break;
            case 'f':
                sort_first_word_len(pstr, cnt);
                break;
            default:
                printf("%c is invalid.\n", choice);
                puts("Enter a character: ");
                continue;
        }
        print_menu();
    }
    printf("Bye!\n");

    return 0;
}

void print_menu(void)
{
    puts("----------------------------------------------------------");
	puts("- Choose an option:                                      -");
	puts("- (o) Print strings in original order.                   -");
	puts("- (a) Print strings in ASCII collating sequence.         -");
	puts("- (l) Print strings ordered by length.                   -");
	puts("- (f) Print strings ordered by length of the first word. -");
	puts("- (q) Quit.                                              -");
    puts("- --------------------------------------------------------");
	puts("Enter a character: ");
}

void print_original(char * pstr[], int row)
{
    printf("strings are as follows: \n");
    for(int i = 0; i < row; i++)
        printf("arr[%d]: %s\n", i, pstr[i]);
}

int get_first(void)
{
    int choice;
    
    while(isspace(choice = getchar()))
        continue;
    while(getchar() != '\n')
        continue;

    return choice;
}

void sort_ascii(char * array[], int row)
{
    int i, j;
    char * tmp;

    for(i = 0; i < row - 1; i++)
        for(j = i + 1; j < row; j++)
            if(strcmp(array[i], array[j]) > 0)
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
}

void sort_length(char * array[], int row)
{
    int i, j;
    char * tmp;

    for(i = 0; i < row - 1; i++)
        for(j = i + 1; j < row; j++)
            if(strlen(array[i]) > strlen(array[j]))
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
}

void sort_first_word_len(char * array[], int row)
{
    int i, j;
    char * tmp;

    for(i = 0; i < row - 1; i++)
        for(j = i + 1; j < row; j++)
            if(first_word_len(array[i]) > first_word_len(array[j]))
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
}

int first_word_len(char * str)
{
    int len = 0;

    while(*str != '\0' && !isspace(*str))
    {
        len++;
        str++;
    }

    return len;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        while(st[i] != '\n' && st[i] != '\0')
            i++;
        if(st[i] == '\n')
            st[i] = '\0';
        else
            while(getchar() != '\n')
                continue;
    }

    return ret_val;
}