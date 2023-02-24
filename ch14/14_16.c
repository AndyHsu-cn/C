#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 81
char * s_gets(char * st, int n);
char showmenu(void);
void eatline(void);
void ToUpper(char * st);
void ToLower(char * st);
void Transpose(char * st);
void Dummy(char * st);
void show(void (*pfun)(char * st), char * st);

int main(void)
{
    char line[LEN];
    char copy[LEN];
    char choice;
    void (*pfun)(char * st);

    puts("Enter a string (empty line to quit):");
    while(s_gets(line, LEN) != NULL && line[0] != '\0')
    {
        while((choice = showmenu()) != 'n')
        {
            switch(choice)
            {
                case 'u':
                    pfun = ToUpper;
                    break;
                case 'l':
                    pfun = ToLower;
                    break;
                case 't':
                    pfun = Transpose;
                    break;
                case 'o':
                    pfun = Dummy;
                    break;
            }
            strcpy(copy, line);
            show(pfun, copy);
        }
        puts("Enter a string (empyt line to quit):");
    }
    puts("Bye!");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        find = strchr(st, '\n');
        if(find)
            *find = '\0';
        else
            while(getchar() != '\0')
                continue;
    }

    return ret_val;
}

char showmenu(void)
{
    char ans;

    puts("Enter menu choice:");
    puts("u) uppercase         l) lowercase");
    puts("t) transposed case   o) original case");
    puts("n) next string");
    ans = getchar();
    ans = tolower(ans);
    eatline();

    while(strchr("ulton", ans) == NULL)
    {
        puts("Please enter a, u, l, t, o, or n:");
        ans = tolower(getchar());
        eatline();
    }

    return ans;
}

void eatline(void)
{
    while(getchar() != '\n')
        continue;
}

void ToUpper(char * st)
{
    while(*st)
    {
        *st = toupper(*st);
        st++;
    }
}

void ToLower(char * st)
{
    while(*st)
    {
        *st = tolower(*st);
        st++;
    }
}

void Transpose(char * st)
{
    while(*st)
    {
        if(islower(*st))
            *st = toupper(*st);
        else if(isupper(*st))
            *st = tolower(*st);
        st++;
    }
}

void Dummy(char * st)
{

}

void show(void (*pfun)(char * st), char * st)
{
    (*pfun)(st);
    puts(st);
}