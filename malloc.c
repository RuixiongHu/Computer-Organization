#include <stdlib.h>
#include <stdio.h>

struct student {
  char first_name[32];
  char last_name[32];
  unsigned int id;
  double gpa;
};

void square(double* num){
  *num = *(num) * *(num);
}

void main(void){
  char* cptr;
  double* dblptr;
  struct student* stuptr;
  
  cptr = malloc(10);
  dblptr = malloc(sizeof(double)*10);
  stuptr = malloc(sizeof(struct student)*10);
  unsigned int i;
  for (i=0; i<10; i++){
    *(cptr+i)='a';
    *(dblptr+i)=i+0.1;
    square(dblptr+i);
  }
   for (i=0; i<10; i++){
     printf("%dth value are %c,%f\n", i, *(cptr+i), *(dblptr+i));
  }
   free(cptr);
   free(dblptr);
   free(stuptr);

}
