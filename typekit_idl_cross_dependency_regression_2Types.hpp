#ifndef typekit_idl_cross_dependency_regression_2Types_HPP
#define typekit_idl_cross_dependency_regression_2Types_HPP

#include <typekit_idl_cross_dependency_regression_1/typekit_idl_cross_dependency_regression_1Types.hpp>

namespace typekit_idl_cross_dependency_regression_2 {
    // Only use StdUsingStruct, this was causing orogen to generate a list of
    // typekits that did not include the path to base/
    struct EndStruct {
        typekit_idl_cross_dependency_regression_1::StdUsingStruct std;
    };
}


#endif
