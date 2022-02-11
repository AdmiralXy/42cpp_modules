#ifndef INC_42CPP_MODULES_ITER_H
#define INC_42CPP_MODULES_ITER_H

template <typename T>
void iter(T *array, unsigned length, void (*f)(T &elem))
{
	if (!array || !f)
		return;
	for (unsigned i = 0; i < length; i++)
		f(array[i]);
}

#endif
