#include <stdlib.h>
#include <string.h>
#include "../expr_assert.h"
#include "filter.h"

int greater_than_ten(int element,int index,int *array){
	return (element>=10);
}

int float_greater_than_ten(float element,int index,float *array){
	return (element>=10.0);	
}

int find_character_greater_than_k(char element,int index,char *array){
	return (element>'k');
}

int find_string_which_not_contain_u(char *element,int index,char *array){
	int i;
	for (i = 0; i < strlen(element); ++i)
	{
		if(element[i] == 'u')
			break;
	}
	return(i==strlen(element));
}

void test_for_find_numbers_greater_or_equal_to_ten(){
	int array[5] = {10,20,3,4,5};
	int *result_array;
	int (*p)(int,int,int*);
	p = &greater_than_ten;
	assertEqual(filter_int(array,5,&result_array,p), 2);
	assertEqual(result_array[0], 10);
	assertEqual(result_array[1], 20);
	free(result_array);
}

void test_for_find_numbers_less_than_or_equal_to_ten(){
	float array[5] = {10.4,20.8,3.9,4.2,5.0};
	float *result_array;
	int (*p)(float,int,float*);
	p = &float_greater_than_ten;
	assertEqual(filter_float(array,5,&result_array,p), 2);
	assertEqual(result_array[0], (float)10.4);
	assertEqual(result_array[1], (float)20.8);
	free(result_array);
}

void test_for_find_character_which_are_greater_than_k(){
	char array[] = "Vivek Haridas";
	char *result_array;
	int (*p)(char,int,char*);
	p = &find_character_greater_than_k;
	assertEqual(filter_char(array,strlen(array),&result_array,p), 3);
	assertEqual(result_array[0],'v');
	assertEqual(result_array[1],'r');
	assertEqual(result_array[2],'s');
	free(result_array);
}

void test_to_find_which_string_element_does_not_contain_u(){
	char *array[] = {"suparna","abir","sujit","rakhee"};
	char **result_array;
	int (*p)(char*,int,char*);
	p = &find_string_which_not_contain_u;
	assertEqual(filter_string(array,4,&result_array,p), 2);
	free(result_array);
}