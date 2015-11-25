#ifndef PYTHONIC_INCLUDE_MATH_COPYSIGN_HPP
#define PYTHONIC_INCLUDE_MATH_COPYSIGN_HPP

#include "pythonic/include/utils/functor.hpp"
#include <cmath>

namespace pythonic
{

  namespace math
  {
    DECLARE_FUNCTOR_2(copysign, std::copysign);
  }
}

#endif
