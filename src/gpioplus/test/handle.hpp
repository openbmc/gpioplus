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
    MOCK_METHOD(std::vector<uint8_t>, getValues, (), (const));
    MOCK_METHOD(void, getValues, (std::vector<uint8_t>&), (const));
    MOCK_METHOD(void, setValues, (const std::vector<uint8_t>&), (const));
};

} // namespace test
} // namespace gpioplus
