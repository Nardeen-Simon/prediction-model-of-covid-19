#include <stdio.h>

int main()
{
  int array[100], n, c, numberOfDays, subtraction, totalsub=0;
  int average, predictedTotalCases, firstDay=19;

  printf("Enter number of days that you have its total number:\n");
  scanf("%d", &n);

  printf("Enter %d total cases individually: \n", n);

  for (c = 0; c < n; c++)
  {
    printf("Enter total cases for %d/3: ",firstDay , n);
    firstDay++;
    scanf("%d", &array[c]);
  }
  
  firstDay = 19;
  
  for (c = 0 ; c < n - 1; c++)
  {
    subtraction = array[c+1] - array[c];
    printf("subtraction from %d/3 to %d/3 is: %d\n",firstDay , firstDay++ ,subtraction);
    totalsub = totalsub + subtraction ;
    //firstDay++;
  }
  printf("total subtraction is: %d\n",totalsub);
  average = totalsub / n;
  printf("average for subtraction and number of these days is: %d\n",average);
  firstDay = 19;
  printf("Enter number of days from %d/3 until you want to know its total cases: ",firstDay);
  scanf("%d", &numberOfDays);
  
  predictedTotalCases = average * numberOfDays + array[0];
  printf("Prediction is probability: %d",predictedTotalCases);

  return 0;
}