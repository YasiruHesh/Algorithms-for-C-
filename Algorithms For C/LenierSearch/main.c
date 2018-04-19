#include <stdio.h>
#include <stdlib.h>

int lsearch(float data[],int size,float key)
{
    int found=0;
    int possition=-1;
    int index=0;

    while(index<size && !found){
        if(data[index]==key)
        {
            found=1;
            possition=index;
            break;
        }
        index++;
    }
    return possition;

}
void main()
{
    float d[]={0,1,2,3,4,5,6,7,8,9};
    float key;
    while(1){
        printf("\n p1.Enter a float to search");
        scanf("%f",&key);
        printf("\n the index is %i\n",lsearch(d,10,key));
    }

}



