#include "Span.hpp"

Span::Span(unsigned int N)
{
	this->N = N;
	this->size = 0;
}

Span::Span(const Span &span)
{
	N = 0;
	*this = span;
}

Span::~Span()
{
	vector.clear();
}

Span &Span::operator=(const Span &span)
{
	vector.clear();
	N = span.getN();
	size = span.getSize();
	for (unsigned int i = 0; i < size; ++i)
		vector.push_back(span.get(i));
	return *this;
}

unsigned int Span::getN() const
{
	return N;
}

unsigned int Span::getSize() const
{
	return size;
}

int Span::get(unsigned int index) const
{
	if (index >= size)
		throw std::exception();
	return vector[index];
}

void Span::print() const
{
	for (unsigned int i = 0; i < size; ++i)
		std::cout << vector[i] << " ";
	std::cout << std::endl;
}

void Span::addNumber(int number)
{
	if (size == N)
		throw std::exception();
	size++;
	vector.push_back(number);
}

int Span::shortestSpan()
{
	int span = INT_MAX;

	std::sort(vector.begin(), vector.end());
	for (unsigned int i = 0; i < size - 1; ++i)
	{
		int tmpSpan = vector[i + 1] - vector[i];
		if (span > tmpSpan)
			span = tmpSpan;
	}
	return span;
}

int Span::longestSpan()
{
	std::sort(vector.begin(), vector.end());
	return vector.back() - vector.front();
}

void Span::fill(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (size + std::distance(begin, end) > N)
		throw std::exception();
	size += std::distance(begin, end);
	vector.insert(vector.end(), begin, end);
}
