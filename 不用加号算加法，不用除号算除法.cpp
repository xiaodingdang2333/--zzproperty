 int Add(int num1,int num2) {
         
        while (num2!=0) {
            int temp = num1^num2;
            num2 = (num1&num2)<<1;
            num1 = temp;
        }
        return num1;
    }

#include<stdio.h>
void main(){
int dived;
int div;
scanf("%d",&dived);
scanf("%d",&div);
if((dived^div)<0)
printf("-");
if(dived<0)
dived=0-dived;
if(div<0)
div=0-div;
int i=15;
int res=0;
for(i;i>=0;i¨C){
if((dived>>i)>=div){
dived=dived-(1<<i)*div;
res=(1<<i)+res;
}
}
printf("%d",res);

}
