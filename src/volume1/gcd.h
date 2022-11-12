#if defined(_WIN32)
#   define TAOCP_API         __declspec(dllexport)
#elif defined(__GNUC__) && ((__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 3))
#   define TAOCP_API         __attribute__((visibility("default")))
#else
#   define TAOCP_API
#endif

#ifndef GCD_H
#define GCD_H

template <typename T>
void exchange(T& a, T& b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

template <typename T>
TAOCP_API T algEuclid(T m, T n)
{
	if (m < n)
		exchange(m, n);

	T result = 1;
	T r = 1;

	while (r != 0)
	{
		r = m % n;
		result = n;
		m = n;
		n = r;
	}

	return result;
}

template <typename T>
TAOCP_API void algExtendEuclid(T m, T n, T& a, T& b, T& d)
{
	if (n > m)
		exchange(m, n);

	T a_ = 1;
	b = 1;
	a = 0;
	T b_ = 0;
	T c = m;
	d = n;

	T q, r, t;

	q = c / d;
	r = c % d;

	while (r != 0)
	{
		c = d;
		d = r;
		t = a_;
		a_ = a;
		a = t - q * a;
		t = b_;
		b_ = b;
		b = t - q * b;

		q = c / d;
		r = c % d;
	}
}

TAOCP_API int gcd(int m, int n);

#endif