#include <stdio.h>
#include <stdlib.h>

float bsearch1(float array[],float key,int size)
{
    int first=0;
    int last=size-1;
    int found=0;
    int possition=-1;
    int middle;

    while(!found && first<=last){
        middle=(first+last)/2;
        if(array[middle]==key){
            found=1;
            possition=middle;

        }
        else if(key<array[middle])last=middle-1;
        else first=middle+1;
    }
    return possition;
}

void main()
{
    float key;
    float d[]={1,2,3,4,5,6,7,8,9,10};
    while(1){
        printf("\n Enter value for: ");
        scanf("%f",&key);

        printf("\n value is %i\n",bsearch1(d,key,10));
    }
}
