#ifndef GCD_H
#define GCD_H

template <typename T>
void exchange(const T& a, const T& b) 
{
    T c;
    c = a;
    a = b;
}

template <typename T>
T gcd(T m,T n)
{
    if(m < n)
        exchange(m, n);

    T result = 1;

    while(m != 1)
    {
         T r;
         r = m % n;
         if(r == 0)
         {
            result = n;
            break;
         }
         else
         {
            m = n;
            n = r;
         }
    }

    return result;
}

#endif