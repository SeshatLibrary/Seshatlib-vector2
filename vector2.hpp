#ifndef VECTOR2_HPP
#define VECTOR2_HPP

#include <iostream>
#include <cmath>
#include <string>
#include <math.h>

namespace Seshat {
  namespace Vector2 {
    template <class T = double> class Vector2
    {
      public:
        T x;
        T y;
        Vector2(T x = 0.0,T y = 0.0);

        T size() const;
        Vector2<T> normalize() const;
        std::string to_string() const;

    };

    template <class T>
    Vector2<T> scalar(const T &k, const Vector2<T> &v);
    template <class T>
    T dot(const Vector2<T> &a, const Vector2<T> &b);
    template <class T>
    T angle(const Vector2<T> &a, const Vector2<T> &b);

    template <class T>
    Vector2<T> operator+(const Vector2<T> &l, const Vector2<T> &r);
    template <class T>
    Vector2<T> operator-(const Vector2<T> &l, const Vector2<T> &r);
  }
}

#endif /* VECTOR2_HPP */
