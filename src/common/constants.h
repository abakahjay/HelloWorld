#ifndef HELLOWORLD_COMMON_CONSTANTS_H
#define HELLOWORLD_COMMON_CONSTANTS_H

// ================================================================
// SHARED CONSTANTS
// ================================================================
// Values that more than one lesson needs live here so they are
// declared exactly once.
// ================================================================

namespace constants
{
    // constexpr means the value is a compile-time constant.
    // It cannot be changed once it has been given a value.
    //
    // This would produce an error:
    // pi = pi + 1;
    inline constexpr double pi = 22.0 / 7.0;
}

#endif // HELLOWORLD_COMMON_CONSTANTS_H
