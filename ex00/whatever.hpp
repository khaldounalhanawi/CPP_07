#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename t>
const t	&min(const t &a, const t &b)
{
	return (a < b ? a : b);
}

template <typename t>
const t	&max(const t &a, const t &b)
{
	return (a > b ? a : b);
}

template <typename t>
void	swap(t &a, t &b)
{
	t	temp = a;

	a = b;
	b = temp;
	return ;
}

#endif
