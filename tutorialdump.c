//ATTENTION!!!!!! EDIT THE SYNTAXES, DIVIDE IT TO FUNCTIONS BCS OF THE REQUIREMENT!!

#include <stdio.h>

int main(){
  int i;
  float m, h;
  char c;
  printf("Enter the total number of minutes spent on the Internet per day : ");
  scanf("%.2f", &m);
  
  h = m/60;
  
  if (h >=4.00){
    printf("\n\nWarning: Your Internet usage is high.\n\n");
  }
  else{
    printf("\n\nGood job! Your Internet usage is within a healthy range.\n\n");
  }

  printf("--Yes/No Question--\n");
  printf("Do you stay online longer than intended?\n");
  printf("Answer (Y/N) : ");
  scanf("%c", &c);
  
  printf("\nDo people complain about your Internet usage?\n");
  printf("Answer (Y/N) : ");
  scanf("%c", &c);
  
  printf("\nDo you often say “just a few more minutes”?\n");
  printf("Answer (Y/N) : ");
  scanf("%c", &c);
  
  printf("\nDo you struggle to reduce your Internet usage?\n");
  printf("Answer (Y/N) : ");
  scanf("%c", &c);
  
  printf("\nDo you hide the amount of time you spend online?\n");
  printf("Answer (Y/N) : ");
  scanf("%c", &c);

  if(c = y || c = Y){
    if(c>=3){
      printf("\n\nResult: You are at HIGH RISK of Internet addiction.\n");
      }
  }
  
  if(c = n || c = N){
    if(c>=3){
      printf("\n\nResult: You are at LOW RISK, but monitor your usage\n");
      }
  }

  return 0;
}
