
#include <stdio.h>

void boublesort(int arr[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int n,i;
    printf("enter th numer of elemetns:");
    scanf("%d",&n);
    
    int arr[n];
   
    for(i=0;i<n;i++){
         printf("enter %d the elemetns:",i);
        scanf("%d\n",&arr[i]);
    }
    

    printf("sorted array in ascending order:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
