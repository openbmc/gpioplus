gpioplus = library(
  'gpioplus',
  [
    'gpioplus/chip.cpp',
    'gpioplus/event.cpp',
    'gpioplus/handle.cpp',
    'gpioplus/internal/fd.cpp',
    'gpioplus/internal/sys.cpp',
  ],
  include_directories: includes,
  implicit_include_directories: false,
  version: meson.project_version(),
  install: true)

import('pkgconfig').generate(
  name: 'gpioplus',
  description: 'C++ systemd event wrapper',
  version: meson.project_version(),
)

install_headers(
  'gpioplus/chip.hpp',
  'gpioplus/event.hpp',
  'gpioplus/handle.hpp',
  subdir: 'gpioplus')

install_headers(
  'gpioplus/internal/fd.hpp',
  'gpioplus/internal/sys.hpp',
  subdir: 'gpioplus/internal')

install_headers(
  'gpioplus/test/event.hpp',
  'gpioplus/test/handle.hpp',
  'gpioplus/test/sys.hpp',
  subdir: 'gpioplus/test')

install_headers(
  'gpioplus/utility/aspeed.hpp',
  subdir: 'gpioplus/utility')
