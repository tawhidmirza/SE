#include <stdio.h>
#include <string.h>

int main ()
{



char str[] ="float x =y+5z * 20;";
char keyword[32] [10] ={
"auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"};

      char * token = strtok(str,"");

      while (token !=NULL)
      {
          printf( "%s,",token);
          int flag = 0,i;
          for (i=0; i<32; i++){
            if(strcmp(token,keyword[i])==0){
                flag=1;
            }
          }

          if (flag ==1)
            printf("%s is a keyword\n",token);
          else
            printf("%s is not a keyword\n",token);

          token =strtok(NULL,"");
      }

}

