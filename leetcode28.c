#include <stdio.h>
#include <string.h>

int strStr(char* hayStack, char* needle){
	
	int idx = 0;
	int lenN = strlen(needle);
	
	for (;hayStack[idx] != '\0';idx++){
		if (strncmp(hayStack+idx,needle,lenN) == 0){
			return idx;
		}
	}
	return -1;
}

int main(void){
	
	char temp[6] = "hello";
	char target[3] = "el";
	printf("%d\n",strStr(temp, target));
	
	return 0;
}
