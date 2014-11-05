int comare_int(const void *num1, const void *num2){
	if(*(int*)num1 < *(int *)num2)
		return -1;
	if (*(int *) num1 > *(int*) num2)
		return 1;
	return 0;
}

int comare_double(const void *num1, const void *num2){
	if(*(double*)num1 < *(double *)num2)
		return -1;
	if (*(double *) num1 > *(double*) num2)
		return 1;
	return 0;
}

int comare_float(const void *num1, const void *num2){
	if(*(float*)num1 < *(float*)num2)
		return -1;
	if (*(float*) num1 > *(float*) num2)
		return 1;
	return 0;
}