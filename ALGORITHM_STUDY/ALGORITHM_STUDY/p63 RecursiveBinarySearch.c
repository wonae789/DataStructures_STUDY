#include<stdio.h> // �Ǻ���ġ �Լ�


int BSearchRecur(int ar[], int first, int last, int target)
{
	int mid;
	if (first > last) // ù�ε����� ������ �ε������� Ŀ���� ����
		return -1; 
	mid = (first + last) / 2; // �߰� mid �ε��� ����
	if (ar[mid] == target) // Ÿ�� ã���� �ش� �ε��� ��ȯ
		return mid;
	else if(target<ar[mid])
		return BSearchRecur(ar, first, mid-1, target);
	else
		return BSearchRecur(ar, mid+1, last, target);


}

int main(void)
{
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BSearchRecur(arr, 0,sizeof(arr) / sizeof(int)-1, 7);
	if (idx == -1)
		printf("Ž������\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);

	idx = BSearchRecur(arr, 0,sizeof(arr) / sizeof(int)-1, 4);
	if (idx == -1)
		printf("Ž������\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);
}