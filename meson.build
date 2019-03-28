project('gpioplus', 'cpp',
        version: '0.1', meson_version: '>=0.49.0',
        default_options: [
          'warning_level=3',
          'werror=true',
          'cpp_std=c++17'
        ])

includes = include_directories('src')

subdir('src')

build_tests = get_option('tests')
build_examples = get_option('examples')

if build_examples
  subdir('example')
endif
if not build_tests.disabled()
  subdir('test')
endif
