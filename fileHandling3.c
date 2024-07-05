// #include <stdio.h>
// int main(){
// 	FILE *fp;
// 	char buff[200];
// 	fp = fopen("abc.txt","r");
// 	fscanf(fp,"%s",buff);
// 	printf("%s",buff);
// 	fclose(fp);
// 	return 0;
// }


#include <stdio.h>
int main(){
	FILE *fp;
    char c;
    int vowel = 0,count =0,space = 0;
    fp = fopen("FileHan.txt","r");
    while (c!=EOF){
        c = fgetc(fp);
        if((c>='a'&&c<='z')||(c>'A'&& c<='Z')){
            if (c=='a'||c=='e'||c=='i'||c=='0'||c=='u'||c=='A'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            vowel++;
            else
            {count++;}
        }
    }
}

