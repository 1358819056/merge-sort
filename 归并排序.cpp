#include<stdio.h>
int temp[10];
void mergesort(int b[],int l,int r);
int main(){
	int a;
	scanf("%d",&a);
	int b[a];
	for(int i=0;i<a;i++)scanf("%d",&b[i]);
	mergesort(b,0,a-1);
	for(int i=0;i<a;i++)printf("%d ",b[i]);
} 
void mergesort(int b[],int l,int r){
	if(l>=r){return;
	}
	int mid=(l+r)/2;
	mergesort(b,l,mid);
	mergesort(b,mid+1,r);
	int k=0,i=l,j=mid+1;
	while(i<=mid&&j<=r){
		if(b[i]<=b[j]){temp[k++]=b[i++];
		}else{temp[k++]=b[j++];
		}
	}
	while(i<=mid){temp[k++]=b[i++];
	}
	while(j<=r){temp[k++]=b[j++];}
	for(i=l,j=0;i<=r;i++,j++){b[i]=temp[j];
	}
}
