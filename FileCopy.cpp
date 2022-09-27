#include<stdio.h>
int main()
{
      int ch;
      FILE *fp,*fq;
      fp=fopen("AD.txt","r");
      fq=fopen("AN.txt","w");   
      if(fp==NULL||fq==NULL)
            printf("File does not exist");
      else
            while((ch=fgetc(fp))!=EOF)
            {
                  fputc(ch,fq);
            }
      printf("Copied....");
      return 0;
}
