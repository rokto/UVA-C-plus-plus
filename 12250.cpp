#include<cstdio>
#include<cstring>

using namespace std;

main()
{
    char a[15],l;
    int i;
    for(i=1;;i++)
    {
    while(scanf("%s",&a)==1)
    {

        l=strlen(a);
        if(a[0]=='#' && a[1]=='\0')
        return 0;
        else if(strcmp(a,"HELLO")==0)
        printf("Case %d: ENGLISH\n",i);
        else if(strcmp(a,"HOLA")==0)
        printf("Case %d: SPANISH\n",i);
        else if(strcmp(a,"HALLO")==0)
        printf("Case %d: GERMAN\n",i);
        else if(strcmp(a,"BONJOUR")==0)
        printf("Case %d: FRENCH\n",i);
        else if(strcmp(a,"CIAO")==0)
        printf("Case %d: ITALIAN\n",i);
        else if(strcmp(a,"ZDRAVSTVUJTE")==0)
        printf("Case %d: RUSSIAN\n",i);
        else
        printf("Case %d: UNKNOWN\n",i);
        break;
    }
    }
    return 0;
}
