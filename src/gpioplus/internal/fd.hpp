#pragma once
#include <gpioplus/internal/sys.hpp>
#include <type_traits>

namespace gpioplus
{
namespace internal
{

class Fd
{
  public:
    Fd(const char* pathname, int flags, const Sys* sys);
    Fd(int fd, const Sys* sys);
    Fd(int fd, std::false_type, const Sys* sys);
    ~Fd();

    Fd(const Fd& other);
    Fd& operator=(const Fd& other);
    Fd(Fd&& other);
    Fd& operator=(Fd&& other);

    int operator*() const;
    const Sys* getSys() const;

    void setBlocking(bool enabled) const;

  private:
    const Sys* sys;
    int fd;

    void setFlags(int flags) const;
    int getFlags() const;

    void reset();
};

} // namespace internal
} // namespace gpioplus
