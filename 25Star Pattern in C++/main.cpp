#include <iostream>

using namespace std;


void PrintSquarePatter(int n){

    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

            cout<<"* ";
        }
      cout<<endl;
    }
}
void PrintHollowSquareStarPattern(int n){

    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n)
                {
                    cout<<"*";
                }
            else{
                    cout<<" ";
                }
        }
      cout<<endl;
    }
}
void PrintHollowSquareStarPatternWithDiagnoal(int n){

    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n||i==j||j==n-i+1)
                {
                    cout<<"*";
                }

            else{
                    cout<<" ";
                }
        }
      cout<<endl;
    }
}


void PrintRhobusStarPattern(int n){

    for(int i=n;i>=1;i--)
    {
       for(int j=1;j<i-1;j++)
           {
                cout<<" ";

           }
       for(int k=1;k<=n;k++)
           {
               cout<<"*";
           }
      cout<<endl;
    }
}

void PrintHollowRhobusStarPattern(int n)
{
    for(int i=n;i>=1;i--)
    {
       for(int j=1;j<i-1;j++)
           {
                cout<<" ";

           }
       for(int k=1;k<=n;k++)
           {
               if(i==1||k==1||k==n ||i==n )
               cout<<"*";
               else
                cout <<" ";
           }
      cout<<endl;
    }
}
void PrintMirroredRhobusStarPattern(int n)
{
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<i;j++)
               {
                   cout<<" ";
               }
             for(int k=1;k<=n;k++)
               {
                   cout<<"*";
               }

          cout<<endl;
        }
}

void PrintHollowMirroredRhobusStarPattern(int n)
{
   for(int i=1;i<=n;i++)
        {
            for(int j=1;j<i;j++)
               {
                   cout<<" ";
               }
             for(int k=1;k<=n;k++)
               {
                   if(i==1||k==1||i==n||k==n)
                   cout<<"*";
                   else
                    cout<<" ";
               }

          cout<<endl;
        }
}
void PrintRightTrianglestarStarPattern(int n)
{

   for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i>=j)
                 cout<<"*";
                else
                    cout<<" ";
            }
          cout<<endl;
        }
}
void PrintMirroredRightTrianglestarStarPattern(int n)
{
 int m=1;
   for(int i=n;i>=1;i--)
   {

       for(int j=1;j<=i-1;j++)
       {

           cout<<" ";
       }
       for(int k=1;k<=m;k++)
       {

           cout<<"*";
       }
       cout<<endl;
       m++;
   }
}
void PrintHollowRightTrianglestarStarPattern(int n)
{
  for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i>=j &&( i==1|| j==1||i==j) )
                {
                     cout<<"*";
                }
                else
                  {
                        cout<<" ";
                  }
            }
          cout<<endl;
        }
}
void PrintMirroredHollowRightTrianglestarStarPattern(int n)
{

     int m=1;
       for(int i=n;i>=1;i--)
       {

           for(int j=1;j<=i-1;j++)
           {

               cout<<" ";
           }
           for(int k=1;k<=m;k++)
           {
                if(k==1 ||k==m)
               {
                   cout<<"*";
               }
               else
                {
                    cout <<" ";
                }
           }
           cout<<endl;
           m++;
       }
}

void PrintInvertedMirroredHollowRightTrianglestarStarPattern(int n)
{

    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {
            if(i<=j&&(i==j||j==n))
            {
                cout<<"*";
            }
            else
            {
                 cout<<" ";
            }
        }
        cout<<endl;
    }
}
void PrintHollowInvertedRightTrianglestarStarPattern(int n)
{
int m=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(j==1||i==1 || j==m )
            cout<<"*";
            else
                cout <<" ";
        }
        cout<<endl;
        m--;
    }
}
void PrintInvertedRightTrianglestarStarPattern(int n)
{
int m=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        m--;
    }
}
void PrintInvertedMirroredRightTrianglestarStarPattern(int n)
{
    int m=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout <<" ";
        }
        for(int k=1;k<=m;k++)
        {
            cout<<"*";
        }
        cout<<endl;
        m--;

    }
}

void PrintPyramidStarPattern(int n)
{
    int m=n;
    for(int i=1;i<n;i++)
        {

            for(int j=1;j<=m-1;j++)
            {
                 cout<<" ";
            }
            for(int k=1;k<=2*i-1;k++)
            {
                cout<<"*";
            }
            cout<<endl;
            m--;
        }
}

void PrintHollowPyramidStarPattern(int n)
{

    int m=n;
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=m-1;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(k==1||k==2*i-1||i==n)
            cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
        m--;
    }
}
void PrintInvertedPyramidStarPattern(int n)
{

     int m=1;
     for(int i=n;i>=1;i--)
      {
       for(int j=1;j<=m-1;j++)
       {
        cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
          cout<<"*";
        }
        cout<<endl;
        m++;
     }
}
void PrintHollowInvertedPyramidStarPattern(int n)
{
   int m=1;
     for(int i=n;i>=1;i--)
      {
       for(int j=1;j<=m-1;j++)
       {
        cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(k==1|| k==2*i-1|| i==n)
           {
                cout<<"*";
           }
           else
           {
               cout<<" ";
           }
        }
        cout<<endl;
        m++;
     }
}
void PrintRightArrowStarPattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=n-i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i+1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void PrintLeftArrowStarPattern(int n)
{

    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                cout<<" ";
            }
            for(int k=0;k<=n-i;k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i+1;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i+1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void PrintHalfDiamondStarPattern(int n)
{
   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {

            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {

            cout<<"*";
        }
        cout<<endl;
    }

}
void PrintDiamondStarPattern(int n)
{

  int m=n-1;
  int p=1;
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=m;j++)
        {
          cout<<" ";
        }
        for(int k=1;k<=p;k++)
        {
          cout<<"*";
        }
        if(m>i)
        {
          m=m-1;
          p=p+2;
        }
        if(m<i)
        {
          m=m+1;
          p=p-2;
        }
       cout<<endl;
       }
}
void PrintPLusStarPattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i==((n/2)+1))
        {
             for(int j=1;j<=n;j++)
              {
                cout<<"+";
              }
        }
        else{
            for(int j=1;j<=n/2;j++)
            {
                cout<<" ";
            }cout<<"+";
        }
         cout<<endl;
    }
}
void PrintXStarPattern(int n)
{
int m=2*n-1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {

            if(i==j || j==(m-i+1))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
         cout<<endl;
    }

}
int main()
{
    int n,ch;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    do{
        cout<< "********** MENU **********" <<endl;
        cout<< "1. SQUARE PATTERN " <<endl;
        cout<< "2. Hollow Square Star Pattern" <<endl;
        cout<< "3. Hollow Square Star Pattern with diagonal" <<endl;
        cout<< "4. Rhombus Star Pattern" <<endl;
        cout<< "5. Hollow Rhombus Star Pattern" <<endl;
        cout<< "6. Mirrored Rhombus Star Pattern" <<endl;
        cout<< "7. Hollow Mirrored Rhombus star problem" <<endl;
        cout<< "8. Right Triangls star problem" <<endl;
        cout<< "9. Mirrored Right Triangls star problem" <<endl;
        cout<< "10.Hollow Right Triangls star problem" <<endl;
        cout<< "11.Hollow Mirrored Right Triangls star problem" <<endl;
        cout<< "12.Hollow Inverted Mirrored Right Triangls star problem" <<endl;
        cout<< "13.Hollow Inverted  Right Triangls star problem" <<endl;
        cout<< "14.Inverted  Right Triangls star problem" <<endl;
        cout<< "15.Inverted Mirrored Right Triangls star problem" <<endl;
        cout<< "16.pyramid  star problem" <<endl;
        cout<< "17.Hollow pyramid  star problem" <<endl;
        cout<< "18. Inverted pyramid  star problem" <<endl;
        cout<< "19. Hollow Inverted pyramid  star problem" <<endl;
        cout<< "20. Right Arrow star problem" <<endl;
        cout<< "21. Left Arrow star problem" <<endl;
        cout<< "22. half Diamond star problem" <<endl;
        cout<< "23. Plus star problem" <<endl;
        cout<< "24. Diamond star problem" <<endl;
        cout<< "25. X- star problem" <<endl;
        cout<< "30.Exit" <<endl;
        cin>>ch;
            switch(ch)
            {

                case 1: cout<<"Printing your Square pattern"<<endl;
                        PrintSquarePatter(n);
                    break;
                case 2: cout<<"Hollow Square Star Pattern"<<endl;
                        PrintHollowSquareStarPattern(n);
                    break;
                case 3: cout<<"Hollow Square Star Pattern with diagonal"<<endl;
                        PrintHollowSquareStarPatternWithDiagnoal(n);
                    break;
                case 4: cout<<"Rhombus Star Pattern"<<endl;
                        PrintRhobusStarPattern(n);
                    break;
                case 5: cout<<"Hollow Rhombus Star Pattern"<<endl;
                        PrintHollowRhobusStarPattern(n);
                    break;
                case 6: cout<<"Mirrored Rhombus Star Pattern"<<endl;
                        PrintMirroredRhobusStarPattern(n);
                    break;
                case 7: cout<<"Hollow Mirrored Rhombus star problem"<<endl;
                        PrintHollowMirroredRhobusStarPattern(n);
                    break;
                case 8: cout<<"Right Triangle star problem"<<endl;
                        PrintRightTrianglestarStarPattern(n);
                    break;
                case 9: cout<<"Mirrored Right Triangle star problem"<<endl;
                        PrintMirroredRightTrianglestarStarPattern(n);
                    break;
                case 10: cout<<"10.Hollow Right Triangle star problem"<<endl;
                        PrintHollowRightTrianglestarStarPattern(n);
                    break;
                case 11: cout<<"11.Hollow Mirrored Right Triangle star problem"<<endl;
                        PrintMirroredHollowRightTrianglestarStarPattern(n);
                    break;
                case 12: cout<<"12.Hollow Inverted Mirrored Right Triangle star problem"<<endl;
                        PrintInvertedMirroredHollowRightTrianglestarStarPattern(n);
                    break;
                case 13: cout<<"13.Hollow Inverted Right Triangle star problem"<<endl;
                        PrintHollowInvertedRightTrianglestarStarPattern(n);
                    break;
                case 14: cout<<"14.Inverted Right Triangle star problem"<<endl;
                        PrintInvertedRightTrianglestarStarPattern(n);
                    break;
                case 15: cout<<"15.Inverted Mirrored Right Triangle star problem"<<endl;
                        PrintInvertedMirroredRightTrianglestarStarPattern(n);
                    break;
                case 16: cout<<"16.pyramid star problem"<<endl;
                        PrintPyramidStarPattern(n);
                    break;
                case 17: cout<<"17.Hollow pyramid star problem"<<endl;
                        PrintHollowPyramidStarPattern(n);
                    break;
                case 18: cout<<"18.Inverted pyramid star problem"<<endl;
                        PrintInvertedPyramidStarPattern(n);
                    break;
                case 19: cout<<"19.Hollow Inverted pyramid star problem"<<endl;
                        PrintHollowInvertedPyramidStarPattern(n);
                    break;
                case 20: cout<<"20. Right Arrow star problem"<<endl;
                        PrintRightArrowStarPattern(n);
                    break;
                case 21: cout<<"21. Left Arrow star problem"<<endl;
                        PrintLeftArrowStarPattern(n);
                    break;
                case 22: cout<<"22. Half Diamnod star problem"<<endl;
                        PrintHalfDiamondStarPattern(n);
                    break;
                case 23: cout<<"23. plus star problem"<<endl;
                        PrintPLusStarPattern(n);
                    break;
                case 24: cout<<"24. Diamond star problem"<<endl;
                        PrintDiamondStarPattern(n);
                    break;
                case 25: cout<<"25. X- star problem "<<endl;
                        PrintXStarPattern(n);
                    break;
                case 30: cout<<"Exiting from current program"<<endl;
                        exit(0);
                    break;
                default:cout<<"you have Entered wrong input"<<endl;
                    break;

            }
    }while(ch<=30);

      return 0;
}
