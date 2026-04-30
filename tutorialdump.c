//ATTENTION!!!!!! NOT FINISHED YET!!!
#include <stdio.h>

void inputdata();
void converttime();
void evaluateusage();
void assessrisk();
char getYN();


int main() {
    float m, h; //minute, hour
    char c; //choice
    int i = 0;
    inputdata();
    converttime();
    evaluateusage();
    assessrisk();
    return 0;
}

void inputdata(float *m) {
    do {
    printf("Enter the total number of minutes spent on the Internet per day : ");
    scanf(" %f", &m);

    if (m<0 || ){
        printf("Invalid input! Enter the total number of minutes spent on the Internet per day : ");
    }
    
    } while (m<0);
}

void converttime(float m, float h) {
    h = m / 60;
}

void evaluateusage(float h) {
    if (h >= 4.00) {
        printf("\n\nWarning: Your Internet usage is high.\n\n");
    } else {
        printf("\n\nGood job! Your Internet usage is within a healthy range.\n\n");
    }
}

void assessrisk(char c) {
    printf("--Yes/No Question--\n\n");

    printf("Do you stay online longer than intended?\n");
    c = getYN();
    printf("\nDo people complain about your Internet usage?\n");
    c = getYN();
    printf("\nDo you often say \"just a few more minutes\"?\n");
    c = getYN();
    printf("\nDo you struggle to reduce your Internet usage?\n");
    c = getYN();
    printf("\nDo you hide the amount of time you spend online?\n");
    c = getYN();

    if (i >= 3) {
        printf("\n\nResult: You are at HIGH RISK of Internet addiction.\n");
    } else {
        printf("\n\nResult: You are at LOW RISK, but monitor your usage\n");
    }
}

char getYN(char c, int i = 0) {
    do {
        printf("Answer (Y/N) : ");
        scanf(" %c", &c);

        if (!(c=='Y'||c=='y'||c=='N'||c=='n')) {
            printf("\nInvalid input! Enter Y or N only :");
        }

    } while (!(c=='Y'||c=='y'||c=='N'||c=='n'));

    if (c=='Y'||c=='y') i++;
}
