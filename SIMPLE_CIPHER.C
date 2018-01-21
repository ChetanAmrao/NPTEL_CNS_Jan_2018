#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Maximum name size + 1. */
#define MAX_PT_SIZE 256

int main(int argC, char *argV[]){
	/*Allocate memory and check if okay*/
	char *pt = malloc(MAX_PT_SIZE);
	if(pt == NULL){
		printf("No Memory\n");
		return 1;
	}
	int i,key,C[100];
	

	/*Accept the plain text you want to Shift Cipher*/
	printf("Enter Your Plain Text\n");

	/*Get the plane text within the size limit*/
	fgets(pt, MAX_PT_SIZE, stdin);

        /*Remove trailing newline, if there. */
        if ((strlen(pt) > 0) && (pt[strlen (pt) - 1] == '\n'))
             pt[strlen (pt) - 1] = '\0';
	
	/*Print out text*/	
	printf("Plain Text that you entered is\n");
	puts(pt);

	/*Print out ASCII of plain text*/	
	printf("\nYour Plain Text in ASCII decimal is\n");
	for(i=0;i<=strlen(pt);i++)
	{
		if(pt[i]==' '){
		printf(" ",pt[i]);}
		else{
		printf("%d",pt[i]);}
	}
	
	/*Accept KEY to implement an easy shift cipher*/
	printf("\n\nEnter key\n");
	scanf("%d",&key);

	/*Print out ASCII of Cipher text*/		
	printf("\nYour Cipher Text with your Key in ASCII decimal is\n");
	for(i=0;i<=strlen(pt);i++)
	{
		if(pt[i]==32){
		printf(" ");
		C[i]=pt[i];}
		else{
			C[i]=pt[i]+key;
			if((C[i]<=90)&&(C[i]>=65)){
			printf("%d",C[i]);}
			else
			if(C[i]>90){
			C[i]=C[i]-26;
			printf("%d",C[i]);}
		        }
	}
	
	/*Print out Cipher text*/			
	printf("\n\nYour Cipher Text Is\n\n");
	for(i=0;i<=strlen(pt);i++)
	{
		if(C[i]==35){
		printf(" ");}
		else{
		printf("%c",C[i]);}
	}
	printf("\n");
	/* Free memory and exit. */
    	free (pt);

	return 0;	
}

