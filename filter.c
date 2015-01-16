#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int filter_int(int *array, int length_of_array,int **result_array, int (*function_ptr)(int element,int index,int *array)){
	int i, count = 0, temp_array[length_of_array];
	for (i = 0; i < length_of_array; ++i)
	{
		if(function_ptr(array[i],i,array)){
			temp_array[count] = array[i];
			count++;
		}
	}
	*result_array = (int *)malloc(sizeof(int)*count);
	for (i = 0; i < count; ++i)
	{
		(*result_array)[i] = temp_array[i];
	}
	
	return count;
}

int filter_float(float *array, int length_of_array,float **result_array, int (*function_ptr)(float element,int index,float *array)){
int i, count = 0, temp_array[length_of_array];
	for (i = 0; i < length_of_array; ++i)
	{
		if(function_ptr(array[i],i,array)){
			temp_array[count] = array[i];
			count++;
		}
	}
	*result_array = (float *)malloc(sizeof(int)*count);
	for (i = 0; i < count; ++i)
	{
		(*result_array)[i] = temp_array[i];
	}
	
	return count;
}

int filter_char(char *array, int length_of_array,char **result_array, int (*function_ptr)(char element,int index,char *array)){
	int i, count = 0;
	char temp_array[length_of_array];
	for (i = 0; i < length_of_array; ++i)
	{
		if(function_ptr(array[i],i,array)){
			temp_array[count] = array[i];
			count++;
		}
	}
	*result_array = (char *)malloc(sizeof(int)*count);
	for (i = 0; i < count; ++i)
	{
		(*result_array)[i] = temp_array[i];
	}
	
	return count;
}

int filter_string(char **array, int length_of_array,char ***result_array, int (*function_ptr)(char *element,int index,char **array)){
	int i, count = 0;
	char *temp_array[length_of_array];
	for (i = 0; i < length_of_array; ++i)
	{
		if(function_ptr(array[i],i,array)){
			temp_array[count] = array[i];
			count++;
		}
	}
	*result_array = (char **)malloc(sizeof(char *)*count);
	for (i = 0; i < count; ++i)
	{
		(*result_array)[i] = temp_array[i];
	}
	
	return count;
}