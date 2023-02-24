#include <stdio.h>
#include <string.h>

#define NLEN 30

struct namect
{
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

struct namect getinfo(void);
struct namect makeinfo(struct namect person);
void showinfo(struct namect person);
char * s_gets(char * st, int n);
int main(void)
{
    struct namect person;

    person = getinfo();
    person = makeinfo(person);
    showinfo(person);

    return 0;
}

struct namect getinfo(void)
{
    struct namect temp;

    printf("Please enter your first name.\n");
    s_gets(temp.fname, NLEN);
    printf("Please enter your last name.\n");
    s_gets(temp.lname, NLEN);

    return temp;
}

struct namect makeinfo(struct namect person)
{
    person.letters = strlen(person.fname) + strlen(person.lname);

    return person;
}

void showinfo(struct namect person)
{
    printf("%s %s, your name contains %d letters.\n", person.fname, person.lname, person.letters);
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if(ret_val != NULL)
    {
        find = strchr(st, '\n');
        if(find)
            *find = '\0';
        else
            while(getchar() != '\n')
                continue;
    }

    return ret_val;
}
