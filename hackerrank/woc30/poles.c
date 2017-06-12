#include<stdio.h>
int mat_poles[5000][2];
int mat_cost[5000][5000];

int fn1(int i){
	int sum2=0;
	int val = mat_poles[i-1][0];
	for(int j=0;j<i;j++){
		sum2 += mat_poles[j][1] * (mat_poles[j][0] - val);
	}
	return sum2;

}

int fn2(int q, int i, int j){
	int sum2=0;
	int val = mat_poles[j][0];
	for(int p=q+1;p<=j;p++){
		sum2 += mat_poles[p][1] *(mat_poles[p][0] - val);
	}
	return mat_cost[i-1][q] + sum2;

}

int main(){
	int n,k;
	scanf("%d%d",&n,&k);

	for(int i=n-1;i>=0;i--){
		scanf("%d%d",&mat_poles[i][0],&mat_poles[i][1]);
	}
	if(k==1){
		int sum1=0;
		for(int i=1;i<n;i++){
			sum1 += (mat_poles[0][0] - mat_poles[i][0])*mat_poles[i][1];
		}
		printf("%d", sum1);
	}
	else{
		for(int i=0;i<n;i++){
			mat_cost[0][i] = fn1(i+1);
		}
		for(int i=1;i<k;i++){
			for(int j=i;j<n;j++){
				int min_val =0;
				for(int p=i-1;p<j;p++){
					int ty = fn2(p, i, j);
					if(ty <= min_val)min_val=ty;
				}
				mat_cost[i][j] = min_val;
			}
		}
		printf("%d", mat_cost[k][n]);
		for(int i=0;i<k;i++){
			for(int j=0;j<n;j++){
				printf("%d ", mat_cost[i][j]);
			}
			printf("\n");
		}
	}

	
	return 0;
}
