//parity bit evn or odd

#include<stdio.h>

int main () {
    int arr[8] = {0};  // Initialize array
    int n, c = 0, s = 0;
    char ch;
    
    printf("Enter the char: ");
    scanf("%c", &ch);
    int x = ch;
    printf("ASCII value is %d\n", x);
    
    // Convert to binary (bits 1-7)
    for (int i = 7; i > 0; i--) {
        arr[i] = x % 2;
        if (arr[i] == 1) 
            c++;
        x = x / 2;
    }
    
    printf("\nEnter 1 for Even parity or 2 for Odd Parity: ");
    scanf("%d", &n);
    
    // Set parity bit at arr[0]
    if (n == 1) {  // Even parity
        arr[0] = (c % 2 == 0) ? 0 : 1;
    }
    else if (n == 2) {  // Odd parity
        arr[0] = (c % 2 == 0) ? 1 : 0;
    }
    
    printf("\nSender sends the data: ");
    for(int i = 0; i < 8; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
    
    // Check parity (XOR all bits)
    for (int i = 0; i < 8; i++){
        s = s ^ arr[i];
    }
    
    if (s == 0){
        printf("\nReceiver received correct data\n");
    }
    else{
        printf("\nReceiver received wrong data\n");
    }
    
//    return 0;
}
