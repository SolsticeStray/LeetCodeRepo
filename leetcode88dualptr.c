#include <stdio.h>
#define SIZE1 9
#define SIZE2 5

/*Double pointers*/
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int p1,p2,p;

	//start backwards to ensure original data cannot be replaced    
    p1 = m-1;
    p2 = n-1;
    p = m+n-1;
    
    while(p2>=0){
    	if((p1>=0)&&(nums1[p1]>nums2[p2])){
    		nums1[p--] = nums1[p1--];
		}
		else{
			nums1[p--] = nums2[p2--];
		}
	}
    
}

int main(void){
	
	int n1[SIZE1] = {1,1,4,6};
	int n2[SIZE2] = {0,2,3,5,8};
	
	merge(n1, SIZE1, SIZE1-SIZE2, n2, SIZE2, SIZE2);
	
	int i;
	for(i=0;i<SIZE1;i++){
		printf("%d\n",n1[i]);
	}
	
	return 0;
}
