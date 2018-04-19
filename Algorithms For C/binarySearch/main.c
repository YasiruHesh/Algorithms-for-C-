#include <stdio.h>
#include <stdlib.h>

int binary_search(float arry[],int size,float key)
{
    int first=0;
    int last=size-1;
    int found=0;
    int possition=-1;
    int middle;
    while(!found && first<=last){
        middle=(first+last)/2;
        if (arry[middle]==key){
            found=1;
            possition=middle;
        }
        else if(key<arry[middle])last=middle-1;
        else first=middle+1;
    }
    return possition;
}

void main()
{
    float key;
    float d[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    while(1){
        printf("\n");
        scanf("%f",&key);
        printf("\n index in %i\n",binary_search(d,20,key));
    }
}
