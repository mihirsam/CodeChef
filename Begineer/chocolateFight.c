#include<stdio.h>

int main(void)
{
  int result[]={}, count=0, testCase, mel, ban, i ;

  printf("Enter The Number Of Test Cases : ");
  scanf("%d",&testCase);

  for(int i=0;i<testCase;i++)
  {
    printf("Enter the numbers of chocolate : ");
    scanf("%d%d", &mel, &ban);
    chocolateLeft(mel, ban, count, result);
    count++;
  }

  for(i=0;i<=count;i++)
  {
    printf(result[i]);
  }
}

void chocolateLeft(int mel, int ban, int count, float result[])
{
  int leftChocolate;
  while(mel != ban || mel <= 0 || ban <= 0)
  {
    if(mel > ban)
    {
      mel = mel - ban;
    }
    else if(mel < ban)
    {
      ban = ban - mel;
    }
  }

  leftChocolate = mel + ban;
  result[count] = leftChocolate;
}
