//Домашнее задание №9
//Задача 6. Заканчивается на a
//В файле .txt дано предложение. Необходимо определить, сколько слов
//заканчиваются на букву 'а'. Ответ записать в файл .txt.
//Данные на входе: Строка из английских букв и пробелов не более 1000 символов.
//Данные на выходе: Одно целое число

#include <stdio.h>
#include <string.h>
const int line_size = 1000;
const char find_simb='a';
int main(void)
{
char * input_fn = "input.txt";
char * output_fn ="output.txt";
char line[line_size];
FILE *fp;
int count = 0;
 fp = fopen(input_fn, "r");
 while (fscanf(fp, "%s", line) == 1)
	{
	if (line[strlen(line) - 1] == find_simb)
	count++;
	}
 fclose(fp);
 fp = fopen(output_fn, "w");
 fprintf(fp, "%d", count);
 fclose(fp);
 return 0;
}
