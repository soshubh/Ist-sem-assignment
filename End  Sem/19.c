// Write a program to calculate Karl Pearson’s coefficient of 
// correlation from the formula
#include <stdio.h>
#include <math.h>
void main()
{
   int n,i;
    scanf("%d",&n);
    float x[n],y[n];
     for(i=0;i<n;i++)
        scanf("%f",&x[i]);
     for( i=0;i<n;i++)
        scanf("%f",&y[i]);    
    float sumx=0,sumy=0;
    for(i=0;i<n;i++)
    {
      sumx=sumx+x[i];
      sumy=sumy+y[i];
    }  
    float meanx=(float)sumx/(float)n;  
    float meany=(float)sumy/(float)n;
    for(i=0;i<n;i++)
    {
       x[i]=x[i]-meanx;
       y[i]=y[i]-meany;
    }
    float sigma=0;
        for(i=0;i<n;i++)
          sigma=sigma+ (x[i]*y[i]);
       
         float Numerator=sigma;
//     printf("\nNumerator (SIG(x[i]-x')(y[i]-y'))=%f",Numerator);  
    for(i=0;i<n;i++)
     {
     x[i]=x[i]*x[i];
     y[i]=y[i]*y[i];
     }
    sumx=sumy=0;
    for(i=0;i<n;i++)
    {
      sumx=sumx+x[i];
      sumy=sumy+y[i];
    }  
   float Denominator = sqrt(sumx*sumy);
//    printf("\nDenominator root(SIG(x[i]-x')^2*SIG(y[i]-y')^2): %f",Denominator);
   double r=(double)Numerator/(double)Denominator;
   printf("\nr = (SIG(x[i]-x')(y[i]-y')/root(SIG(x[i]-x')^2*SIG(y[i]-y')^2) = %lf",r);
}
