gtest_dep = dependency('gtest', main: true, disabler: true, required: false)
gmock_dep = dependency('gmock', disabler: true, required: false)
if not gtest_dep.found() or not gmock_dep.found()
    gtest_opts = import('cmake').subproject_options()
    gtest_opts.add_cmake_defines({'CMAKE_CXX_FLAGS': '-Wno-pedantic'})
    gtest_proj = import('cmake').subproject(
        'googletest',
        options: gtest_opts,
        required: false,
    )
    if gtest_proj.found()
        gtest_dep = declare_dependency(
            dependencies: [
                dependency('threads'),
                gtest_proj.dependency('gtest'),
                gtest_proj.dependency('gtest_main'),
            ],
        )
        gmock_dep = gtest_proj.dependency('gmock')
    else
        assert(not build_tests.enabled(), 'Googletest is required')
    endif
endif


tests = ['chip', 'event', 'handle', 'internal/fd', 'mocks', 'utility/aspeed']

foreach t : tests
    test(
        t,
        executable(
            t.underscorify(),
            t + '.cpp',
            implicit_include_directories: false,
            dependencies: [gpioplus_dep, gtest_dep, gmock_dep],
        ),
    )
endforeach
