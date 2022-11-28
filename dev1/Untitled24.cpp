#include<stdio.h>

int main(){
	unsigned long ulsum = 0;
	long ulcount = 5;
	while(0 <= ulcount){
		ulsum += ulcount;
		ulcount --;
	}
	printf("%1u\n",ulsum);
	return 0;
}
	


