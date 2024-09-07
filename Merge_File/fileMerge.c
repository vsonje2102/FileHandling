#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
int main(int argc,char *argv[]){
	if(argc != 3){
		printf("<directory_name> :  parameter");
		return 1;
	}
	DIR *d;
	FILE *fDest,*fSource;
	char lineBuffer[256];
	char ch;
	struct dirent **namelist;
	// destination file
	fDest=fopen(argv[2],"w");
	if(fDest == NULL){ printf("Error in opening destination file\n"); exit(0);  }
	// used scandir because i wanted them to get sorted using their names
	int n = scandir(argv[1], &namelist, NULL, alphasort);
	if (n < 0) {
    		perror("scandir");
    		return EXIT_FAILURE;
	}
	int i=0;
	while(i<n){
		if(namelist[i]->d_type == DT_REG){
			char fileName[1024];
			sprintf(fileName,"%s/%s",argv[1],namelist[i]->d_name);
			fSource=fopen(fileName,"r");
			if(fSource == NULL){ printf("Error in opening %s file\n",fileName); exit(0); }
			while((ch=getc(fSource)) != EOF){
				fputc(ch,fDest);
			}
			printf("Data copied of %s in %s\n",fileName,argv[2]);
		}
		i++;
	}
	printf("## DATA SUCCESSFULLY MERGED FROM %s ##\n",argv[2]);
	return 0;
}
