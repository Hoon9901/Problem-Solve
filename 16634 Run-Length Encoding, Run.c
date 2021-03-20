#include <stdio.h>
int main(){
	char str[103];
	scanf("%[^\n]s", str);
	if (str[0] == 'E') {
		int str_cnt = 1;
		for (int i = 2; str[i] != '\0'; i++)
		{
			if (str[i] == str[i + 1])
				str_cnt = str_cnt + 1;
			else{
				printf("%c%d", str[i], str_cnt);
				str_cnt = 1;
			}
		}
	}
	else {
		for (int i = 2; str[i] != '\0'; i++){
			if (str[i] >= '0' && str[i] <= '9'){
				int num = str[i] - '0';
				for (int j = 0; j < num; j++)
					printf("%c", str[i - 1]);
			}
		}
	}
	return 0;
}