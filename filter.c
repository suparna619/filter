#include <stdio.h>
#include <string.h>


int filter_int(int *array, int length_of_array,int *result_array, int (*function_ptr)(int element,int index,int *array)){
	int i, count = 0;
	if(length_of_array == 0)
		return 0;
	for (i = 0; i < length_of_array; ++i)
	{
		if(function_ptr(array[i],i,array)){
			result_array[count] = array[i];
			count++;
		}
	}
	return 1;
}