#include <stdio.h>
#define SIZE 3

int isAnagram(char *s,char *t){
	
	//create two buckets
	int sCnt[26] = {0};
	int tCnt[26] = {0};
	
	//store s
	int i=0;
	while (s[i] != '\0'){
		sCnt[s[i++] - 'a']++;
	} 
	
	//store t
	i=0;
	while (t[i] != '\0'){
		tCnt[t[i++] - 'a']++;
	}
	
	//return
	for (i=0;i<26;i++){
		if (sCnt[i] != tCnt[i]) return 0; 
	} 
	return 1;
}

int main(void){
	
	char s1[SIZE+1] = "rat";
	char s2[SIZE+1] = "car";
	
	printf("%d\n",isAnagram(s1,s2));
	
	return 0;
} 
