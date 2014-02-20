/*
 * Program #: 1
 * Name: Kemnitz, Kameron
 * WSUID: E228Y979
 */

#include <stdio.h>

struct anyscore // Designs the structure globally, so it can be used anywhere
{
  int recid;
  char course[7];
  char wsuid[9];
  char test[9];
  char subdate[9];
  double score1;
  double score2;
};

typedef struct anyscore score;
score cs300score; // Creates the structure globally
score cs460score; // Creates the structure globally

/* The PrintScore function prints out all values for both structures. These
 * values are entered by the user in the main function. */

void PrintScore () {
  printf("STRUCT CS300SCORE VALUES:\n");
  printf("recid: %d\n", cs300score.recid);
  printf("course: %s\n", cs300score.course);
  printf("wsuid: %s\n", cs300score.wsuid);
  printf("test: %s\n", cs300score.test);
  printf("subdate: %s\n", cs300score.subdate);
  printf("score1: %.2f\n", cs300score.score1);
  printf("score2: \n", cs300score.score2);
  
  printf("\nSTRUCT CS460SCORE VALUES:\n");
  printf("recid: %d\n", cs460score.recid);
  printf("course: %s\n", cs460score.course);
  printf("wsuid: %s\n", cs460score.wsuid);
  printf("test: %s\n", cs460score.test);
  printf("subdate: %s\n", cs460score.subdate);
  printf("score1: %.2f\n", cs460score.score1);
  printf("score2: \n", cs460score.score2);
  
  printf("All values have been printed! Have a nice day. :)\n");
}

int main (void) {
  
  /* This block of code prompts the user to enter values, and uses the
   * structures to store these values. */
  
  // CS 300
  printf("Please enter a value for recid for cs300score: ");
  scanf("%d", &cs300score.recid); 
  printf("Please enter a value for course for cs300score: ");
  scanf("%s", cs300score.course);
  printf("Please enter a value for wsuid for cs300score: ");
  scanf("%s", cs300score.wsuid);
  printf("Please enter a value for test for cs300score: ");
  scanf("%s", cs300score.test);
  printf("Please enter a value for subdate for cs300score: ");
  scanf("%s", cs300score.subdate);
  printf("Please enter a value for score1 for cs300score: ");
  scanf("%lf", &cs300score.score1);
  printf("ALL VALUES FOR CS 300 HAVE BEEN ENTERED\n");
  
  // CS 460
  printf("Please enter a value for recid for cs460score: ");
  scanf("%d", &cs460score.recid); 
  printf("Please enter a value for course for cs460score: ");
  scanf("%s", cs460score.course);
  printf("Please enter a value for wsuid for cs460score: ");
  scanf("%s", cs460score.wsuid);
  printf("Please enter a value for test for cs460score: ");
  scanf("%s", cs460score.test);
  printf("Please enter a value for subdate for cs460score: ");
  scanf("%s", cs460score.subdate);
  printf("Please enter a value for score1 for cs460score: ");
  scanf("%lf", &cs460score.score1);
  printf("ALL VALUES FOR CS 300 HAVE BEEN ENTERED\n");
  
  PrintScore(); // Calls the PrintScore function
  
  
return 0;  // Returns 0, exits program
}