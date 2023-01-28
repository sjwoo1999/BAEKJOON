#include <iostream>
using namespace std;

#define MAX_SIZE (100000)
#define _CRT_SECURE_NO_WARNINGS

typedef struct _heap {
	int data[MAX_SIZE];
	int heap_size;
}heap;


heap* init(heap* h) {
	h = (heap*)malloc(sizeof(heap));
	h->heap_size = 0;
	return h;
}

void add(heap* h, int data) {

	h->heap_size += 1;
	h->data[h->heap_size] = data;


	int me = h->heap_size;
	int parent = me / 2;


	while (parent) {

		if (h->data[parent] > h->data[me]) {
			int temp = h->data[parent];
			h->data[parent] = h->data[me];
			h->data[me] = temp;


			me = parent;
			parent = me / 2;
		}

		else {
			break;
		}
	}
	return;
}

int empty(heap* h) {

	return (h->heap_size ? 0 : 1);
}

int remove(heap* h) {


	int res = h->data[1];

	h->data[1] = h->data[h->heap_size];

	h->heap_size -= 1;

	int me = 1;
	int child = 2;

	while (child <= h->heap_size) {

	
		if (child + 1 <= h->heap_size && h->data[child] > h->data[child + 1]) {

			child += 1;
		}


		if (h->data[me] > h->data[child]) {
			int temp = h->data[me];
			h->data[me] = h->data[child];
			h->data[child] = temp;

			me = child;
			child = me * 2;
		}

		else {
			break;
		}
	}
	return res;
}

int main() {
	heap* h = NULL;
	h = init(h);

	int t;
	scanf_s("%d", &t);
	
	while (t--) {
		int x;
		scanf_s("%d", &x);
		if (x > 0) {
			add(h, x);
		}
		else if (x == 0) {
			if (empty(h)) {
				printf("0\n");
			}
			else {
				printf("%d\n", remove(h));
			}
		}
	}
}