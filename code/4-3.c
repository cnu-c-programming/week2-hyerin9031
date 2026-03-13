#include <stdio.h>

int main()
{
    int a, result=1;
    scanf("%d", &a);

    if(a<=1){
        result=0;
    }
    else{
        for(int i=2;i<a/2;i++){
            if(a%i==0){
                result = 0;
                break;
            }
            else{
                continue;
            }
        }
    }
    

    if(result){
        printf("true");
    }
    else{
        printf("false");
    }
    
    return 0;
}

