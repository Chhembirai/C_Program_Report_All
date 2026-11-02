//27
//Input subject marks and calculate percent to show your result
#include<stdio.h>
int main() {
    int e, s, m, n, c, p;
    
    printf("Enter marks of English, Science, Math, Nepali, Computer = ");
    scanf("%d%d%d%d%d", &e, &s, &m, &n, &c);
   
    p = (e + s + m + n + c)*100 / 500;
    
    if (p >= 80) {
        printf("You got Distinction\n");
    } else if (p >= 60 && p < 80) {
        printf("You got First Division\n");
    } else if (p >= 40 && p < 60) {
        printf("You passed the exam\n");
    } else {
        printf("You failed the exam\n");
    }
 
    return 0;
}