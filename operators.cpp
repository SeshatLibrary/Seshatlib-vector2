#include "vector2.hpp"

namespace Seshat {
  namespace Vector2 {

    template Vector2<float> operator+(const Vector2<float> &r, const Vector2<float> &l);
    template Vector2<double> operator+(const Vector2<double> &r, const Vector2<double> &l);
    template Vector2<long double> operator+(const Vector2<long double> &r, const Vector2<long double> &l);
    
    template Vector2<float> operator-(const Vector2<float> &r, const Vector2<float> &l);
    template Vector2<double> operator-(const Vector2<double> &r, const Vector2<double> &l);
    template Vector2<long double> operator-(const Vector2<long double> &r, const Vector2<long double> &l);

    template<class T>
    Vector2<T> operator+(const Vector2<T> &l, const Vector2<T> &r)
    {
      return Vector2<T>(l.x+r.x,r.y+r.y);
    }

    template<class T>
    Vector2<T> operator-(const Vector2<T> &l, const Vector2<T> &r)
    {
      return Vector2<T>(l.x-r.x,l.y-r.y);
    }
  }
}
