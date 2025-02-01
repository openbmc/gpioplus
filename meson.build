project(
    'gpioplus',
    'cpp',
    version: '0.1',
    meson_version: '>=1.1.1',
    default_options: [
        'warning_level=3',
        'cpp_std=c++23',
        'tests=' + (meson.is_subproject() ? 'disabled' : 'auto'),
        'examples=' + (meson.is_subproject() ? 'false' : 'true'),
    ],
)

subdir('src')

build_tests = get_option('tests')
build_examples = get_option('examples')

if build_examples
    subdir('example')
endif
if build_tests.allowed()
    subdir('test')
endif
