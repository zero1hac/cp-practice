#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

class HeapMin{
	int *arr;
	int capacity;
	int heap_size;
	
	public:
		HeapMin(int cap);
	
		void minHeapify(int node);
		
		int parent(int i) { return (i-1)/2; }
	
		int left(int i) { return 2*i+1; }
		
		int right(int i) { return 2*i+2; }

		int getMin() { return arr[0]; }
		
		void minHeapify();
		int extractMin();
		int getPos(int k);
		void deleteKey(int i);
		void insert(int k);
		void decreaseKey(int i, int new_value);
		void printHeap();
		int checkHeap(int k);
		
};

void HeapMin::printHeap(){
	for(int i=0;i<heap_size; i++){
		cout<<arr[i]<<" ";
	}
}

HeapMin::HeapMin(int cap){
	heap_size = 0;
	capacity = cap;
	arr = new int[cap];
}

void HeapMin::minHeapify(int i){
	int l = left(i);
	int r = right(i);
	int smallest = i;
	if(l < heap_size && arr[l] < arr[smallest]){
		smallest = l;
	}
	if(r < heap_size && arr[r] < arr[smallest]){
		smallest = r;
	}

	if(smallest!=i){
		swap(&arr[smallest], &arr[i]);
		minHeapify(smallest);
	}
}

void HeapMin::decreaseKey(int i, int new_value){
	arr[i] = new_value;
	while(i!=0 && arr[parent(i)] > arr[i]){
		swap(&arr[parent(i)], &arr[i]);
		i = parent(i);
	}
}

int HeapMin::extractMin(){
	if(heap_size <= 0){
		return INT_MAX;
	}
	if(heap_size==1){
		heap_size--;
		return arr[0];
	}
	int min_val = arr[0];
	arr[0] = arr[heap_size-1];
	heap_size--;
	minHeapify(0);

	return min_val;
}
	
void HeapMin::deleteKey(int i){
	decreaseKey(i, INT_MIN);
	extractMin();
}

int HeapMin::getPos(int k){
	for(int i=0;i<heap_size;i++){
		if(arr[i]==k)return i;
	}
}
void HeapMin::insert(int k){
	heap_size++;
	int i = heap_size -1;
	arr[i] = k;


	while(i!=0 && arr[parent(i)] > arr[i]){
		swap(&arr[parent(i)], &arr[i]);
		i = parent(i);
	}
}

int HeapMin::checkHeap(int k){
	if(heap_size <= 1 && arr[0]<k)	{cout<<"-1"<<endl; return -1;}
	int flag = 0;
	for(int i=0; i<heap_size; i++){
		if(arr[i]<k)return 1;
	}
	return 0;
}

int main(){
	int q,v,n,k,min1,min2;
	HeapMin heap(1000001);
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>v;
		heap.insert(v);
	}
	int count = 0;
	int flag=heap.checkHeap(k);
	if(flag==-1){ return 0;}
	while(flag){
	//	if(flag==0){cout<<count<<endl;break;}
		if(flag==-1)return 0;
			min1 = heap.extractMin();
			min2 = heap.extractMin();
			q = min1 + 2*min2;
			heap.insert(q);
			count++;
	
	flag = heap.checkHeap(k);
	}
	cout<<count<<endl;

	
	return 0;
}
