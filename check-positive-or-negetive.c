//Check if a Number is Positive or Negative in C
//Given an integer input, the objective is check whether the given integer is Positive or Negative. 

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("zero");
    }
    else
    {
        (n > 0 )? printf("positive no") : printf("negetive no");
    }
    return 0;
}
