//# include <stdio.h> 
int MAX_SIZE;
void bubble_sort(int list[], int n){ 
	int i, j, temp; 
	for(i=n-1; i>0; i--){ // 0 ~ (i-1)까지 반복 
		for(j=0; j<i; j++){ // j번째와 j+1번째의 요소가 크기 순이 아니면 교환 
			if(list[j]<list[j+1])
			{ 
				temp = list[j]; 
				list[j] = list[j+1]; 
				list[j+1] = temp; 
			} 
		} 
	}
	return;
} 

void main(){ 
	int i; int n;
	int list[5] ;
	
	MAX_SIZE = 5;
	n = MAX_SIZE;
	
	list[0]=7; 
	list[1]=5; 
	list[2]=3; 
	list[3]=1; 
	list[4]=4;

	//bubble_sort(list, n); // 정렬 결과 출력 
	for(i=0; i<n; i++){ 
		printf("%d\n", list[i]); 
	} 
}
