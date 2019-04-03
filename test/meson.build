gtest = dependency('gtest', main: true, disabler: true, required: build_tests)
gmock = dependency('gmock', disabler: true, required: build_tests)

tests = [
  'chip',
  'event',
  'handle',
  'internal/fd',
  'mocks',
  'utility/aspeed',
]

foreach t : tests
  test(t, executable(t.underscorify(), t + '.cpp',
                     implicit_include_directories: false,
                     dependencies: [gpioplus, gtest, gmock]))
endforeach
