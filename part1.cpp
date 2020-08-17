/*In this first response, please paste your code that implements an array. Your array should follow these guidelines:

Store int data types
Store 10 values
Have an appropriate name
Be initialized in the declaration statement

Your Response*/
#include <iostream>

using namespace std;

int main()
{
  // declaring the array and initializing it with zeros
  int array_of_int [10] = {0};
  // what is below is not asked, but I needed it to make sure the code was working
  // just an extra empty line to make the output clearer
  cout<<endl;
  for(int i = 0; i < 10; i++)
    {
      array_of_int[i] = i + 1; // gives the array values from 1 to 10 both included
    }
  // output the values stored in the array
    for(int j = 0; j < 10; j++)
    {
      cout<< array_of_int[j];
      cout<<" ";
    }
  cout<< endl;
  // exit main with the success value 0
  return 0;
}

/**The question for this section
In this second response, please paste your code that implements an enumeration. Your enumeration should follow these guidelines:

Store the months of the year
Start the first element as 1 rather than 0
Use an appropriate name

Your Response**/
#include <iostream>

//no need for this: using namespace std;

int main()
{
// declaring the enum and initializing it with the 12 months of the year , having January indexed at 1
  enum MonthsOfYear {January = 1, February, March, April, May, June, July, August, September, October, November, December};

// exit main with the success value 0
  return 0;
}
