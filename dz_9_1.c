//Домашнее задание №9
//Задача 1. По одному разу
//В файле .txt даны два слова не более 100 символов каждое, разделенные
//одним пробелом. Найдите только те символы слов, которые встречаются в
//обоих словах только один раз. Напечатайте их через пробел в файл .txt в
//лексикографическом порядке.
//Данные на входе: Два слова из маленьких английских букв через
//пробел. Длинна каждого слова не больше 100 символов.
//Данные на выходе: Маленькие английские буквы через пробел.
#include <stdio.h>
#include <string.h>

char name_in[] = "input.txt";
char name_out[] = "output.txt";
void arrprint_big_smol(int a[], int b[], int len, int _bs, int fp);
int main()
{

FILE *f_in = fopen(name_in, "r");
char word1[100];
char word2[100];
fscanf(f_in, "%s%s", word1, word2);
int alpha1_smol[26] = {0};
int alpha1_big[26] = {0};
int alpha2_smol[26] = {0};
int alpha2_big[26] = {0};
int counter = -1;
 while(word1[++counter] != '\0')
 {
 if(word1[counter]>='a' && word1[counter]<='z')
 ++alpha1_smol[word1[counter] - 'a'];
 if(word1[counter]>='A' && word1[counter]<='Z')
 ++alpha1_big[word1[counter] - 'A'];    
 }
 counter = -1;
 while(word2[++counter] != '\0')
 {
 if(word2[counter]>='a' && word2[counter]<='z')
 ++alpha2_smol[word2[counter] - 'a'];
 if(word2[counter]>='A' && word2[counter]<='Z')
 ++alpha2_big[word2[counter] - 'A']; //++alpha2_smol[word2[counter] - 'a'];
 }

arrprint_big_smol(alpha1_smol, alpha2_smol,26,1,1); //smol
arrprint_big_smol(alpha1_big, alpha2_big,26,0,1); //big
 fclose(f_in);
 
 return 0;
}
void arrprint_big_smol(int a[], int b[], int len, int _bs, int fp)
{
    FILE *f_out = fopen(name_out, "a");
    int bs; //low high registr
    if(_bs==0)
    bs=65;
    else
    bs=97;
    for(int i=0; i<len;i++)
    {
       if(a[i]==1 && b[i]==1)
       {
           if (fp) // in file or print
           fprintf(f_out,"%c", (char) i+bs);
           else
           printf("%c", (char) i+bs); //65 big 97 small
       }
       
    }
    if (fp) // in file or print
           {fprintf(f_out,"%s", "\n");
            fclose(f_out);
           }
           else
           printf("%s", "\n");
}
