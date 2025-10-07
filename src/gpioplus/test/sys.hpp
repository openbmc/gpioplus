#pragma once
#include <gpioplus/internal/sys.hpp>

#include <gmock/gmock.h>

namespace gpioplus
{
namespace test
{

class SysMock : public internal::Sys
{
  public:
    MOCK_METHOD(int, open, (const char*, int), (const));
    MOCK_METHOD(int, dup, (int), (const));
    MOCK_METHOD(int, close, (int), (const));
    MOCK_METHOD(int, read, (int, void*, size_t), (const));
    MOCK_METHOD(int, fcntl_setfl, (int, int), (const));
    MOCK_METHOD(int, fcntl_getfl, (int), (const));

    MOCK_METHOD(int, gpiohandle_get_line_values, (int, struct gpiohandle_data*),
                (const));
    MOCK_METHOD(int, gpiohandle_set_line_values, (int, struct gpiohandle_data*),
                (const));
    MOCK_METHOD(int, gpio_get_chipinfo, (int, struct gpiochip_info*), (const));
    MOCK_METHOD(int, gpio_get_lineinfo, (int, struct gpioline_info*), (const));
    MOCK_METHOD(int, gpio_get_linehandle, (int, struct gpiohandle_request*),
                (const));
    MOCK_METHOD(int, gpio_get_lineevent, (int, struct gpioevent_request*),
                (const));
};

} // namespace test
} // namespace gpioplus
