//Домашнее задание №9
//Задача 5. Самое длинное слово
//В файле .txt дана строка слов, разделенных пробелами. Найти самое длинное
//слово и вывести его в файл .txt. Случай, когда самых длинных слов может быть
//несколько, не обрабатывать.
//Данные на входе: Строка из английских букв и пробелов. Не более 1000 символов.

#include <stdio.h>
#include <string.h>
const int line_size = 1000;
int main(void)
{
char * input_fn = "input.txt";
char * output_fn = "output.txt";
char line[line_size];
char result[line_size];
FILE *fp;
int len, max_len = 0;
 fp = fopen(input_fn, "r");
 while (fscanf(fp, "%s", line) == 1)
 {
	len = strlen(line);
	if (len > max_len)
		{
		max_len = len;
		strcpy(result, line);
		}
 }
 fclose(fp);
 fp = fopen(output_fn, "w");
 fprintf(fp, "%s", result);
 fclose(fp);
 return 0;
}
