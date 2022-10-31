#include <stdio.h>
int a[101], n;

void quicksort(int left, int right);

int main() {
	int i, j, t;
	//读入数据
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	//排序
	quicksort(1, n);

	//输出结果
	for (i = 1; i <= n; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}

void quicksort(int left, int right) {
	int i, j, temp;
	i = left;
	j = right;

	while (i != j) {
		//右指针左移，寻找小于基准数的数
		while (a[j] > temp) {
			j--;
		}
		//左指针右移，寻找大于基准数的数
		while (a[i] < temp) {
			i++;
		}

		if (i < j) {
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}

	//把基准数归位
	a[left] = a[i];
	a[i] = temp;

	quicksort(left, i - 1); //继续处理左边数组
	quicksort(i + 1, right); //继续处理右边数组
}