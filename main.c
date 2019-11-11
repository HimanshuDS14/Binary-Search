#include<stdio.h>

int main()
{
    int size,i;
    printf("Enter a array size : ");
    scanf("%d" , &size);
    int arr[size];

    printf("Enter %d elements into array(sorted form) : " , size);
    for(i=0;i<size;i++)
    {
        scanf("%d" , &arr[i]);

    }

    printf("Given Array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d " , arr[i]);
    }

    int item;
    printf("\nEnter a item which you want a search: ");
    scanf("%d"  , &item);


   printf("\n");
   int lower_index = 0;
   int upper_index = (sizeof(arr)/sizeof(arr[0]))-1;
   int pos , flag=0;


   while(lower_index <=upper_index)
   {
       int middle_index = (lower_index+upper_index)/2;

       if(item==arr[middle_index])
       {

           flag=1;
           pos = middle_index;
           break;

       }
       else if(item > arr[middle_index])
       {
           lower_index = middle_index+1;
       }
       else
       {
           upper_index = middle_index-1;

       }

   }

   if(flag==1)
   {
       printf("Item found at  : %d position" , pos);
   }
   else
   {
       printf("Item not found");
   }

}
