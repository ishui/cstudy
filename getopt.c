#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{
   int ch;
   int opterr = 0;
   int optind,  optopt;
   char *optarg;
   while((ch = getopt(argc, argv, "a:bcde")) != -1)
   switch(ch)
   {
      case 'a':
         printf("option a:'%s'\n", optarg);  break;
      case 'b':
         printf("option b :b\n");  break;
      default:
         printf("other option :%c\n", ch);
   }
   printf("optopt +%c\n", optopt);
}