#include<stdio.h>
int main(){
    int n, k, m, i, x, count;
    scanf("%d %d %d",&n,&k,&m);
    bool a[n];
    for(i = 0;i <= n -1;i++){
    	a[i] = 1;
	}
	i = k - 1;
	x = 0;
	count = n;
	for(;;){
		if(count == 2){
			break;
		}
		if(a[i] == 1){
			x = x + 1; 
		}
		if(x == m){
			x = 0;
			a[i] = 0;
			count = count - 1;
		}
		i = i + 1;
		if(i >= n){
			i = 0;
		}
	}
	for(i = 0;i <= n - 1;i++){
		if(a[i] == 1){
			printf("%d ",i + 1);
		}
	}
     return 0;
}

