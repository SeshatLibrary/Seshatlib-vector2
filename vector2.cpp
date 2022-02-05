#include "vector2.hpp"

namespace Seshat {
  namespace Vector2 {

    template class Vector2<float>;
    template class Vector2<double>;
    template class Vector2<long double>;

    template float Vector2<float>::size() const;
    template double Vector2<double>::size() const;
    template long double Vector2<long double>::size() const;

    template Vector2<float> Vector2<float>::normalize() const;
    template Vector2<double> Vector2<double>::normalize() const;
    template Vector2<long double> Vector2<long double>::normalize() const;

    template std::string Vector2<float>::to_string() const;
    template std::string Vector2<double>::to_string() const;
    template std::string Vector2<long double>::to_string() const;

    template float dot(const Vector2<float> &a, const Vector2<float> &b);
    template double dot(const Vector2<double> &a, const Vector2<double> &b);
    template long double dot(const Vector2<long double> &a, const Vector2<long double> &b);

    template float angle(const Vector2<float> &a, const Vector2<float> &b);
    template double angle(const Vector2<double> &a, const Vector2<double> &b);
    template long double angle(const Vector2<long double> &a, const Vector2<long double> &b);
    
    template Vector2<float> scalar(const float &k, const Vector2<float> &v);
    template Vector2<double> scalar(const double &k, const Vector2<double> &v);
    template Vector2<long double> scalar(const long double &k, const Vector2<long double> &v);

    template<typename T>
    Vector2<T>::Vector2(T x,T y)
    {
      this->x = x;
      this->y = y;
    }

    template<typename T>
    T Vector2<T>::size() const
    {
      return std::sqrt(x*x + y*y);
    }
    
    template <typename T>
    Vector2<T> Vector2<T>::normalize() const
    {
      return Vector2<T>(this->x/this->size(),this->y/this->size());
    }

    template<typename T>
    std::string Vector2<T>::to_string() const
    {
      return "("+std::to_string(this->x)+", "+std::to_string(this->y)+")";
    }
    
    template<class T>
    T dot(const Vector2<T> &a, const Vector2<T> &b)
    {
      return a.x*b.x + a.y*b.y;
    }

    template<typename T>
    T angle(const Vector2<T> &a, const Vector2<T> &b)
    {
      return acos(dot(a,b)/(a.size() * b.size()));
    }

    template <class T>
    Vector2<T> scalar(const T &k, const Vector2<T> &v)
    {
      return Vector2<T>(k*v.x,k*v.y);
    }
  }
}
