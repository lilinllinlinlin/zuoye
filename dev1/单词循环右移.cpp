#include<stdio.h>
int main(){
	int M, N, i;
	scanf("%d",&M);
	char g[100][100];
	i=0;
    do{
    	scanf("%s", g[i]);
    	i++;
	}while(getchar()!='\n');
	N=i;
	if(M>N)
	  printf("error\n");
	else{
	  for(i=0;i<M;i++)
	    printf("%s ",g[N-M+i]);//Êä³öµÚN-M+1+i¸ö 
	  for(i=0;i<N-M;i++)
	    printf("%s ",g[i]);
	}
	  
	  
	return 0;
} 
