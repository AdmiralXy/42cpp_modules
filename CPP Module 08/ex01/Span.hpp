#ifndef INC_42CPP_MODULES_SPAN_H
#define INC_42CPP_MODULES_SPAN_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

class Span
{
private:
	std::vector<int> vector;
	unsigned int N;
	unsigned int size;
	Span();
public:
	Span(unsigned int N);
	Span(const Span &span);
	~Span();
	Span &operator=(const Span &span);
	unsigned int getN() const;
	unsigned int getSize() const;
	int get(unsigned int index) const;
	void print() const;
	void addNumber(int number);
	int shortestSpan();
	int longestSpan();
	void fill(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};


#endif
