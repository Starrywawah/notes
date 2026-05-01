//ATTENTION!!!!!! NOT FINISHED YET!!!
#include <stdio.h>
#include <string.h>

void inputdata(float *m);
float converttime(float m, float *h);
void evaluateusage(float h);
void assessrisk();
int getYN();


int main() {
    float m, h; //minute, hour
    char c; //choice
    int i = 0;
    inputdata(&m);
    converttime(m, &h);
    evaluateusage(h);
    assessrisk();
    return 0;
}

void inputdata(float *m) {
    do {
    printf("Enter the total number of minutes spent on the Internet per day : ");
    scanf(" %f", m);

    if (*m<0){
        printf("Invalid input! Enter the total number of minutes spent on the Internet per day : ");
    }
    
    } while (*m<0);
}

void converttime(float m, float *h) {
    *h = m / 60;
}

void evaluateusage(float h) {
    if (h >= 4.00) {
        printf("\n\nWarning: Your Internet usage is high.\n\n");
    } else {
        printf("\n\nGood job! Your Internet usage is within a healthy range.\n\n");
    }
}

void assessrisk() {
    int i = 0;

    printf("--Yes/No Question--\n\n");

    printf("Do you stay online longer than intended?\n");
    i += getYN();

    printf("\nDo people complain about your Internet usage?\n");
    i += getYN();

    printf("\nDo you often say \"just a few more minutes\"?\n");
    i += getYN();

    printf("\nDo you struggle to reduce your Internet usage?\n");
    i += getYN();

    printf("\nDo you hide the amount of time you spend online?\n");
    i += getYN();

    printf("\nTotal YES responses: %d\n", i);  // REQUIRED

    if (i >= 3) {
        printf("\nResult: You are at HIGH RISK of Internet addiction.\n");
    } else {
        printf("\nResult: You are at LOW RISK, but monitor your usage\n");
    }
}

int getYN() {
    char c;
    
    while (1) {
        printf("Answer (Y/N) : ");
        scanf(" %c", &c);

        if (c=='Y'||c=='y') return 1;
            
        else if (c=='N' || c== 'n') return 0;
        
        else printf("\nInvalid input! Enter Y or N only : ");
        }

    } while (!(c=='Y'||c=='y'||c=='N'||c=='n'));

    if (c=='Y'||c=='y') i++;
}
