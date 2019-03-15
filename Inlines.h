#ifndef BELOT_INLINES_H
#define BELOT_INLINES_H

template<typename T>
inline T& operator++(T& e)
{
    e = T(int(e) + 1);
    return e;
}

template<typename T>
inline T operator++(T &e, int)
{
    T result = e;
    ++e;
    return result;
}
#endif