#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	FILE* file=fopen("trigo.csv","w");
	if(file==NULL){
		exit(1);
	}
	fprintf(file,"x,sin(x),cos(x),tan(x)\n");
	for(int i=0; i<=360; i++){
		fprintf(file,"%d°,%f,%f,%f\n",i,sin(i*M_PI/180),cos(i*M_PI/180),tan(i*M_PI/180));
	}
	fclose(file);	
}
