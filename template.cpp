#include <cassert>
#include <cstdint>

namespace
{
    // --- Constants ---
    constexpr uint32_t SOME_LIMIT{100};

    // --- Static globals ---
    uint32_t instanceCountS{0};
}

// ============================================================================
// Public interface
// ============================================================================

/// @brief  Brief description.
/// @param  pParamP  Description.
/// @return Description.
uint32_t doSomething(int const* pParamP)
{
    // Guard: validate preconditions
    assert(pParamP != nullptr);

    uint32_t result{SOME_LIMIT};

    if (*pParamP > 0)
    {
        result = static_cast<uint32_t>(*pParamP);
    }

    return result;
}
