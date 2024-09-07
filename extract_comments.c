#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	if(argc != 3){
		printf("<input_file_name> <output_file_name> : paramters\n");
		return 0;
	}
	FILE *fCursor1,*fCursor2;
	char ch1,ch2;
	int flag=0;	// to chcek comment is reading or not
			// 0 for not reading .. 1 for reading
	fCursor1=fopen(argv[1],"r");	//input file
	fCursor2=fopen(argv[2],"w");	//output file
	if(fCursor1==NULL || fCursor2==NULL){
		printf("Error in opening input or output file\n");
		exit(0);
	}
	ch1=getc(fCursor1);	//reading first charcter of file
	// checking that file is empty or  not
	if(ch1 == EOF){
		printf("Input File dont have anything\n");
	} 
	// printing heading in the output file 
	char buf[256];
	sprintf(buf,"## following are all the comments extracted from %s file\n ##",argv[1]);
	fputs(buf,fCursor2);
	//feesk is uesd to not print delimter in file
	// newline is addded after each completed comment
	while((ch2=getc(fCursor1)) != EOF){
		if(ch1 == '/' && ch2 == '*'){ flag = 1; ch2=getc(fCursor1); } // again reading charcter to skip delimeters
		if(ch1 == '*' && ch2 == '/'){ flag = 0; fseek(fCursor2,-1,SEEK_CUR);  putc(10,fCursor2);} // flag=1 no comment & flag=0 comment
		if(flag==1){
			putc(ch2,fCursor2);
		}
		ch1=ch2;
	}
	printf("If comments were present with delimter '/*''*/' in file %s they are extracted in %s\nThankyou!\n",argv[1],argv[2]);
	fclose(fCursor1);
	fclose(fCursor2);
	return 0;
}
