#include <stdio.h>
#include <string.h>

int main(void) {

    char string [100];
    char new_string[100];
    scanf("%s",string);
    // printf("Panjang : %ld\n",strlen(string));
    // printf("string = %s\n", string);
    // printf("string [o]:%c\n", string[0]);
    int n=0 ;

    for (int i =0 ; i<strlen(string); i++){
        if (string[i]== '('){
            for (int j =i ; j<strlen(string); j++){
                if (string[j]==')'){
                    new_string[n]= string[i];
                    string[j]='M';
                    n++; 
                    break;
                }
            }
        }
        else if (string [i]=='M'){
            new_string[n]= ')';
            n++;
        }
        else if (string[i]==')'){
            continue;
        }
        
        else {
            new_string[n]= string[i];
            n++;
        }
    }

    printf("%s\n",new_string);
    return 0;
}
