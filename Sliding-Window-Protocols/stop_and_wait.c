#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    int x1,n,count=0,i=1;
    printf("Enter the number of frames to send \n");
    scanf("%d",&n);
    while(count<n){
        int r=rand()%10;
        printf("Sending frame %d\n",i);
        if(r%2==0){
            printf("Waiting for 2 sec\n");
            for(int x2=1;x2<2;x2++){
                sleep(x2);
            }
            printf("Acknownlegment not recived\n");
            printf("Resending frame %d\n",i);
        }
        printf("Acknowledegment recived for frame %d\n",i);
        i++;
        count++;
        sleep(1);
    }
    return 0;
}
