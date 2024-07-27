#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#define run_min 0
#define run_max 16
#define wic_min 0
#define wic_max 1
int main()
{
    printf("\t\t\t\t\tWelcome to this cricket game.\n\n\n");
    char t1[100],t2[100];
    int i,s,w=0,ov,q=0,r=0;
    int x,p,m,l,v,c;
    srand(time(0));
    printf("Enter First team name: ");
    scanf("%s",t1);
    printf("Enter Second team name: ");
    scanf("%s",t2);
    printf("How many overs in this match: ");
    scanf("%d",&ov);
    printf("\n\n%s won the toss.\n%s choose to bat first.\n\n",t1,t1);
    while(1){
    for(i=1; i<=ov; i++)
    {
        x=rand()%(run_max-run_min+1)+run_min;
        v=rand()%(run_max-run_min+1)+run_min;
        p=rand()%(wic_max-wic_min+1)+wic_min;

        if(p==0&&p!=1&&w<=10)
        {
            s=(x+v)+s;
            printf("Run in %d no over: %d wicket in %d over:%d \n\n",i,x+v,i,p);
        }
        else
        {
            if(w<=9){
            w=p+w;
            printf("Run in %d no over: 0 wicket in %d over:%d \n\n",i,i,p);
        }
        else{
            break;
        }
        }

    }
    printf("\t\tScoreBoard --  %s: %d/%d\n\n\n",t1,s,w);
    for(i=1; i<=ov; i++)
    {
        m=rand()%(run_max-run_min+1)+run_min;
        c=rand()%(run_max-run_min+1)+run_min;
        l=rand()%(wic_max-wic_min+1)+wic_min;

        if(l==0&&l!=1&&l<=10)
        {
            q=(m+c)+q;
            printf("Run in %d no over: %d wicket in %d over:%d \n\n",i,m+c,i,l);
        }
        else
        {
            if(r<=9){
            r=l+r;
            printf("Run in %d no over: 0 wicket in %d over:%d \n\n",i,i,l);
        }
        else{
            break;
        }
        }

    }
    printf("\t\tScoreBoard -- %s: %d/%d\n\n\n\n",t2,q,r);
    break;

    }
       if(q>s){
        printf("Congratulations Winner is %s\n\n",t2);
    }
    else if(s>q){
        printf("Congratulations Winner is %s\n\n",t1);
    }
    else{
        printf("Winner is no one.Match Tied.\n\n");
    }

    return 0;
}
