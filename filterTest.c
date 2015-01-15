#include "../expr_assert.h"
#include "filter.h"

int greater_than_ten(int element,int index,int *array){
	return (element>=10);
}

void test_for_find_numbers_greater_or_equal_to_ten(){
	int array[5] = {10,20,3,4,5};
	int result_array[5];
	int (*p)(int,int,int*);
	p = &greater_than_ten;
	assertEqual(filter_int(array,5,result_array,p), 1);
	assertEqual(result_array[0], 10);
	assertEqual(result_array[1], 20);
}