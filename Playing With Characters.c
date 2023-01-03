#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch[20];
    char s[20];
    char sen[100];

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%s",ch);
    scanf("%s",s);
  //  scanf("%[^\n]%*c",&sen);
    scanf("\n%[^\n]%*c", sen);

    printf("%s\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    

    
    return 0;
}

