#include <stdio.h>
int* shotplace;
int l, m;

//사대 위치 정렬
void Swap(int arr[], int a, int b) // a,b 스왑 함수 
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
int Partition(int arr[], int left, int right)
{
	int pivot = arr[left]; // 피벗의 위치는 가장 왼쪽에서 시작
	int low = left + 1;
	int high = right;

	while (low <= high) // 교차되기 전까지 반복한다 
	{
		while (low <= right && pivot >= arr[low]) // 피벗보다 큰 값을 찾는 과정 
		{
			low++; // low를 오른쪽으로 이동 
		}
		while (high >= (left + 1) && pivot <= arr[high]) // 피벗보다 작은 값을 찾는 과정 
		{
			high--; // high를 왼쪽으로 이동
		}
		if (low <= high)// 교차되지 않은 상태이면 스왑 과정 실행 
		{
			Swap(arr, low, high); //low와 high를 스왑 
		}
	}
	Swap(arr, left, high); // 피벗과 high가 가리키는 대상을 교환 
	return high;  // 옮겨진 피벗의 위치정보를 반환 

}
void QuickSort(int arr[], int left, int right)
{
	if (left <= right)
	{
		int pivot = Partition(arr, left, right); // 둘로 나누어서
		QuickSort(arr, left, pivot - 1); // 왼쪽 영역을 정렬한다.
		QuickSort(arr, pivot + 1, right); // 오른쪽 영역을 정렬한다.
	}
}
int abV(int a, int b) {
	int value;
	value = a - b;
	if (value < 0) {
		value = 0 - value;
	}
	return value;
}
//가장 가까운 사대 위치와의 x좌표 거리를 리턴
int findMostCloseDistance(int x, int left, int right) {
	int d, mid, i, temp;

	if (right - left < 3) {
		d = abV(shotplace[left], x);
		for (i = left + 1; i <= right; i++) {
			temp = abV(shotplace[i], x);
			if (temp < d) {
				d = temp;
			}
		}
		return d;
	}

	mid = (left + right) / 2;
	d = abV(shotplace[mid], x);

	/* 오른쪽 비교해서 작아지면 오른쪽, 왼쪽 비교해서 작아지면 왼쪽 검사, 커지면 그 값이 최솟값 */
	if (d > abV(shotplace[mid + 1], x)) {
		findMostCloseDistance(x, mid + 1, right);
	}
	else if (d > abV(shotplace[mid - 1], x)) {
		findMostCloseDistance(x, left, mid - 1);
	}
	else {
		return d;
	}
}

//잡을 수 있으면 1, 못 잡으면 0
int catchable(int x, int y) {
	if (y > l)
		return 0;
	if (findMostCloseDistance(x, 0, m - 1) + y <= l) {
		return 1;
	}
	else {
		return 0;
	}
}

int main(void) {
	int n, i, count = 0;
	int* nx, * ny;

	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%d", &l);

	shotplace = (int*)malloc(sizeof(int) * m);
	nx = (int*)malloc(sizeof(int) * n);
	ny = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < m; i++) {
		scanf("%d", &shotplace[i]);
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &nx[i]);
		scanf("%d", &ny[i]);
	}

	QuickSort(shotplace, 0, m - 1);

	for (i = 0; i < n; i++) {
		count += catchable(nx[i], ny[i]);
	}

	printf("%d", count);
	return 0;
}