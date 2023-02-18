#include<stdio.h>
int main(){
	
	int n,search_element;
	printf("Enter the number element you want to push inside the array ");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	
	
		}
		
		
		printf("enter the number you want to search inside the array ");
		scanf("%d",&search_element);
		
		//sorting
		
		int start=0,end=n-1,pos=-1,mid;
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		
//		int a[]={1,3,5,7,8,9,10,45,55,65,346};
		
		//scearching
		
		while(end>=start){
			mid=(end+start)/2;
			if(a[mid]==search_element){
				pos=mid;
				break;
			}else if(a[mid]>n){
				end=mid-1;
			}else{
				start=mid+1;
			}
			
		}
		
		if(pos==-1){
			printf("\nElement not found");
		}else{
			printf("\nElement is present");
		}
	
	
	return 0;
}
