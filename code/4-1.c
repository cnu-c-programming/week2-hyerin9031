#include <stdio.h>

int main()
{
    int a, b;
    char c;
    int result;

    scanf("%d %d %c", &a, &b, &c);
    if(c == '+'){
        result = a+b;
    }
    else if(c == '-'){
        result = a-b;
    }
    else if(c == '*'){
        result = a*b;
    }
    else{
        result = a/b;
    }

    printf("%d", result);
    
    return 0;
}

