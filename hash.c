#include <stdio.h>
#include <cs50.h>
#include <string.h> //Needed for 'strlen'
#include <ctype.h>
#include <unistd.h>
#include <crypt.h>
#define _XOPEN_SOURCE


int main(int argc, string argv[])
{
    if(argc==2)
    {
        string hash = crypt(argv[1],"00");
        printf("%s\n", hash);
    }
}