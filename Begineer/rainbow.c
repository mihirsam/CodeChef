        #include<stdio.h>

        int main()
        {
          int t, ele, y=0, i, quo, rem, k;
          //printf("Enter number of times to run loops: ");
          scanf("%d",&t);
          int counter[t];
          while(y<t)
          {
              //printf("Enter the number of elements: ");
              scanf("%d",&ele);
              int a[ele];
              counter[y] = 0;

              for(i=0;i<ele;i++)
              {
                scanf("%d",&a[i]);
              }

              quo = ele / 2;
              rem = ele % 2;
              k = quo + rem;

              for(i=0;i<k-1;i++)
              {
                if (a[i] != a[i+1] && a[i] + 1 != a[i+1])
                {
                  counter[y]++;
                  break;
                }

                if(a[i] != a[ele-1-i])
                {
                  counter[y]++;
                  break;
                }

              }

              if(a[0] != 1 || a[k-1] != 7)
              {
                counter[y]++;
              }

              y++;
          }
          for(i=0;i<t;i++)
          {
              if(counter[i] == 0){
                printf("yes\n");
              }
              else{
                printf("no\n");
              }
          }
          return 0;
        }
