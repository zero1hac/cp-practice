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

int main(){
	int q,v;
	cin>>q;
	HeapMin heap(100001);
	while(q--){
		int command;
		cin>>command;
		switch(command){
			case 1: 
				cin>>v;
				heap.insert(v);
				//heap.printHeap();
				break;
			case 2: 
				cin>>v;
				heap.deleteKey(heap.getPos(v));
				//heap.printHeap();
				break;
			case 3: cout<<heap.getMin();
			}
	}

	
	return 0;
}
