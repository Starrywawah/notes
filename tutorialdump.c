/***

Name : Margaret Nathania Hartono
Student ID : CST2509095
Course code : CST108 (GROUP 1)

TUTORIAL 1

***/

#include <stdio.h>

// Function prototypes
void inputdata(float *minute);              //get user input (minutes spent online)
void converttime(float minute, float *hour); //converts minutes to hours
void evaluateusage(float hour);             //evaluates if usage is healthy
void assessrisk();                          //asks yes/no questions to assess risk
int getYN();                                //get Y/N input from user

int main() {
    float minute, hour;

    printf("***********************************\n");
    printf("   DIGITAL WELLNESS CHECKER APP\n");
    printf("***********************************\n\n");

    inputdata(&minute);          //get input from user
    converttime(minute, &hour);  //convert minutes to hours
    evaluateusage(hour);         //check if usage is high or healthy
    assessrisk();                //ask Y/N questions

    return 0;
}

//function to input minutes spent on internet
void inputdata(float *minute) {
    do {
        printf("Enter the total number of minutes spent on the Internet per day : ");
        scanf(" %f", minute);

        //set input not to be negative
        if (*minute < 0) {
            printf("Invalid input! Please enter a positive value.\n");
        }

    } while (*minute < 0);
}

//function to convert minutes into hours
void converttime(float minute, float *hour) {
    *hour = minute / 60.0; // Conversion formula
}

//Function to evaluate if internet usage is healthy
void evaluateusage(float hour) {
    if (hour >= 4.00) {
        printf("\n\nWarning: Your Internet usage is high.\n\n");
    } else {
        printf("\n\nGood job! Your Internet usage is within a healthy range.\n\n");
    }
}

//function to assess addiction risk using yes/no questions
void assessrisk() {
    int i = 0;

    printf("========== Yes/No Question ==========\n\n");

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

    printf("\nTotal YES responses: %d\n", i);

    //determine risk level based on answers
    if (i >= 3) { //the amount of "yes" respond
        printf("Result: You are at HIGH RISK of Internet addiction.\n");
    } else {
        printf("Result: You are at LOW RISK, but monitor your usage\n");
    }
}

// Function to get Y/N input from user
int getYN() {
    char c;

    while (1) {
        printf("Answer (Y/N) : ");
        scanf(" %c", &c);

        if (c == 'Y' || c == 'y') return 1; // Yes = 1
        else if (c == 'N' || c == 'n') return 0; // No = 0
        else printf("\nInvalid input! Enter Y or N only\n");
    }
}