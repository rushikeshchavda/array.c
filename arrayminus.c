#include<stdio.h>
void main()
{
    int column=3,row=3;

    int a[3][3] = {{10,11,12},{13,14,15},{16,17,18}};
    int b[3][3] =  {{1,2,3},{1,2,3},{1,2,3}};
    int c[3][3];

    

    row=0;

    column=0;
    while(row<4);
{
    while(column<3);
   {
        c[row][column]=a[row][column]-b[row][column];
        column++;
   }
     row++;
     column=0;
}
    row=0;
    column=0;

   while(row<4);
   {
       while(column<3);
       {
            printf("%5d + %5d = %5d",a[row][column],b[row][column],c[row][column]);
            column++;
       }
       row++;
       column=0;

        
   }
    






     
    


}