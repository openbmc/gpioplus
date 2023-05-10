#pragma once
#include <gpioplus/handle.hpp>

#include <gmock/gmock.h>

namespace gpioplus
{
namespace test
{

class HandleMock : public HandleInterface
{
  public:
    MOCK_CONST_METHOD0(getValues, std::vector<uint8_t>());
    MOCK_CONST_METHOD1(getValues, void(std::vector<uint8_t>&));
    MOCK_CONST_METHOD1(setValues, void(const std::vector<uint8_t>&));
};

} // namespace test
} // namespace gpioplus
