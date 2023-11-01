#include <stdio.h>

int main(){
	int i, j, n, temp, choice;
	int arr[32];

	printf("Enter the number of items to sort:\n");
	scanf("%d", &n);

	printf("Enter %d integers:\n", n);
	for(i=0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("Choose the desired sorting order:\n");
	printf("1: Ascending order\n");
	printf("2: Descending order\n");

	scanf("%d", &choice);

	if(choice == 1){
		for(i=1; i < n; i++){
			j = i;
		
			while(j > 0 && arr[j-1] > arr[j]){
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
				j--;
			}
		}
	
		for(i=0; i < n; i++)
			printf("%d\n", arr[i]);
	}

	if(choice == 2){
		for(i=1; i < n; i++){
			j = i;
		
			while(j > 0 && arr[j-1] < arr[j]){
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
				j--;
			}
		}
	
		for(i=0; i < n; i++)
			printf("%d\n", arr[i]);
	}


	return 0;

}
