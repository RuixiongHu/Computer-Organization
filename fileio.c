#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

char* reverse(char* input){
  char temp[80];
  int i;
  int length = strlen(input);
  for(i=0;i<length;i++){
    temp[i]=input[length-i-1];
  }
  //temp[length]='\0';
  strcpy(input,temp);
  return(input);
}


int main(){
  int i,j,k;
  char buffer[80];
  FILE *myfile;
  int l=10;
  if (NULL== ( myfile= fopen("myfile.txt","r+") )){
    perror("fopen failed\n");
    exit(-1);
  }
  fscanf(myfile, "%d %d %d %s", &i,&j,&k,buffer);
  printf("%d %d %d %s\n", i, j ,k, buffer);
  fprintf(myfile, "     %d", l);
  fclose(myfile);
  reverse(buffer);
  printf("\n%s", buffer);
  return (0);


}
