#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    
    int i,j,k;
    for (i=0;i<n;i++){
    	int findSmaller = 0;
    	int tempM = m;
    	for(j=0;j<tempM;j++){
    		if (nums1[j] >= nums2[i]){
    			k = tempM-1;
    			for (;k>=j;k--){
    				nums1[k+1] = nums1[k];
				}
				nums1[j] = nums2[i];
				m++;
				findSmaller = 1;
				break;
			}
		} 
		if(!findSmaller){
			nums1[j] = nums2[i];
			m++;
		}
	}
    
}

int main(void){
	
	int n1[6]={4,5,6};
	int n2[3]={1,2,3};
	int i;
	
	merge(n1,6,3,n2,3,3);
	
	for (i=0;i<6;i++){
		printf("%d\n",n1[i]);
	}
	
	return 0;
} 
