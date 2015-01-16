int filter_int(int *array, int length_of_array,int **result_array, int (*function_ptr)(int element,int index,int *array));

int filter_float(float *array, int length_of_array,float **result_array, int (*function_ptr)(float element,int index,float *array));

int filter_char(char *array, int length_of_array,char **result_array, int (*function_ptr)(char element,int index,char *array));

int filter_string(char **array, int length_of_array,char ***result_array, int (*function_ptr)(char *element,int index,char **array));