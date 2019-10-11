all_test_deps = []
all_test_dep_libs = []
project_test_sources = []

gtest_dep = dependency('gtest')
test_main = files('run_tests.cpp')

test_deps = [
    gtest_dep 
]

test_dep_libs = [
    complex_lib
]


# This executable contains all the tests
project_test_sources += test_main
all_test_deps += test_deps
all_test_dep_libs += test_dep_libs

test_01_sources = ['test_01.cpp']
test_02_sources = ['test_02.cpp']

project_test_sources += test_01_sources
project_test_sources += test_02_sources

test_01 = executable('test_01', 
    [test_01_sources, test_main], 
    include_directories : inc,
    dependencies : test_deps, 
    link_with : test_dep_libs)

test('test_01', test_01)

test_02 = executable('test_02', 
    [test_02_sources, test_main], 
    include_directories : inc,
    dependencies : all_test_deps, 
    link_with : all_test_dep_libs)

test('test_02', test_02)

all_tests = executable('all_tests', 
    project_test_sources, 
    include_directories : inc, 
    dependencies : all_test_deps, 
    link_with : all_test_dep_libs)

test('all_tests', all_tests)
