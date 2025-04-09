examples = ['pulse']

foreach example : examples
    executable(
        example,
        example + '.cpp',
        implicit_include_directories: false,
        dependencies: gpioplus_dep,
    )
endforeach
