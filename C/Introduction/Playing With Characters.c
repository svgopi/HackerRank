#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char a[20];
    char b[100];
    char c[200];
    
    scanf("%s",&a);
    scanf("%s\n",&b);
    scanf("%[^\n]%*c",&c);
    
    printf("%s\n",a);
    printf("%s\n",b);
    printf("%s\n",c);
 
    return 0;
}
