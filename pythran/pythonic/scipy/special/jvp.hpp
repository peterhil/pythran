#ifndef PYTHONIC_SCIPY_SPECIAL_JVP_HPP
#define PYTHONIC_SCIPY_SPECIAL_JVP_HPP

#include "pythonic/include/scipy/special/jvp.hpp"

#include "pythonic/types/ndarray.hpp"
#include "pythonic/utils/functor.hpp"
#include "pythonic/utils/numpy_traits.hpp"

#include "pythonic/utils/boost_local_config.hpp"
#include <boost/math/special_functions/bessel_prime.hpp>

PYTHONIC_NS_BEGIN

namespace scipy
{
  namespace special
  {
    namespace details
    {
      template <class T0, class T1>
      double jvp(T0 x, T1 y)
      {
        using namespace boost::math::policies;
        return boost::math::cyl_bessel_j_prime(
            x, y, make_policy(promote_double<true>()));
      }
    }

#define NUMPY_NARY_FUNC_NAME jvp
#define NUMPY_NARY_FUNC_SYM details::jvp
#include "pythonic/types/numpy_nary_expr.hpp"
  }
}
PYTHONIC_NS_END

#endif
