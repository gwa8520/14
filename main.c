#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book{
	int number;
	char title[10];
};

int main(int argc, char *argv[]) {
	
	struct Book *p;
	
	p=(struct Book*)melloc(2*sizeof(struct));	//총 32바이트 멀록  
	
	if(p==NULL){
		printf("failed");
		return;
	}
	p->number=1;
	strcpy(p->title,"C Programming");
	
	(p+1)->number=2;
	strcpy((p+1)->title,"Electrons");
	
	free(p);
	
	
	return 0;
}
