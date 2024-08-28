//Домашнее задание №9
//Задача 2. Заменить a на b
//В файле .txt дана символьная строка не более 1000 символов. Необходимо
//заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и
//строчные. Результат записать в .txt.
//Данные на входе: Строка из маленьких и больших английских букв,
//знаков препинания и пробелов.
//Данные на выходе: Строка из маленьких и больших английских
//букв, знаков препинания и пробелов.
#include <stdio.h>
#include <string.h>
const int line_size = 1000;
int main(void)
{
char * input_fn = "input.txt";
char * output_fn = "output.txt";
char line[line_size];
FILE *fp;
 fp = fopen(input_fn, "r");
 fscanf(fp, "%[^\n]", line);
 fclose(fp);
char temp;
int i = 0;
 while ((temp = line[i]) != '\0')
 {
 if ((temp == 'a') || (temp == 'A'))
 line[i] += 1;
 else if ((temp == 'b') || (temp == 'B'))
 line[i] -= 1;
 i++;
 }
 fp = fopen(output_fn, "w");
 fprintf(fp, "%s", line);
 fclose(fp);
 return 0;
}
