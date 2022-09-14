#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    int x1,n,count=0,i=1,fr=0,nt=0,j=0,s=0;
    int l[1000];
    printf("Enter the number of frames to send \n");
    scanf("%d",&n);
    printf("Enter the window size\n");
    scanf("%d",&fr);
    while(count<n){
        for(int k=0;(k<fr)&&(i+k<=n);k++){
            printf("Sending frame %d\n",i+k);
        }
        for(int k=0;(k<fr)&&(i+k<=n);k++){
            int r=rand()%10;
            if(r%2==0){
                printf("Acknowlegement of frame %d is recived\n",(i+k));
                nt++;
                count++;
            }
            else{
                 printf("Acknowlegement of frame %d is not recived\n",(i+k));
                 l[j]=i+k;
                 j++;
            }
        }
        for(int k=s;k<j;k++){
            printf("Frame %d is retramsmited\n",l[k]);
            nt++;
            printf("Acknowlegement %d is recived\n",l[k]);
            s++;
            count++;
        }
        i=i+fr;
        sleep(1);
    }
    return 0;
}
