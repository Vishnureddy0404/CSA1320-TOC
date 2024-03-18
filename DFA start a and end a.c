#include <stdio.h>
int main() {
    char input;
    int state = 0;
    printf("Enter the input string: ");
    while ((input = getchar()) != '\n') {
        if (state == 0 && input == '0') {
            state = 1;
        } else if (state == 1 && input == '1') {
            state = 1;
        } else {
            state = 2;
            break;
        }
    }
    if (state == 1) {
        printf("Accepted\n");
    }else{
	
        printf("Rejected\n");
   
	return 0;
}
}
