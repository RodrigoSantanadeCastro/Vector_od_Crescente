#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,d,cont,v[7];
	setlocale(LC_ALL,"PORTUGUESE");
	
	for(i=0;i<7;i++){
		printf("\nDigite o valor da casa %d",i);
		scanf("%d",&v[i]);
	}
	
	for(i=0;i<7;i++){
		for(d=i+1;d<7;d++){
			if(v[i]>v[d]){
				cont=v[i];
				v[i]=v[d];
				v[d]=cont;
			}
		}
	}
	for(i=0;i<7;i++){
		printf("\nO valor da posição %d é %d",i,v[i]);
	}
	
	return 0;
}
