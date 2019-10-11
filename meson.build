project('oop_excercise_02', 'cpp',
        meson_version : '>= 0.40.1',
        default_options : [ 'warning_level=3', 'buildtype=release', 'cpp_std=c++17' ]
       )

project_sources = []
project_header_files = []
project_test_sources = []

inc = include_directories('include')

subdir('include')
subdir('src')

oop_excercise_02 = executable('oop_excercise_02', 
  main_source, 
  include_directories : inc, 
  link_with : complex_lib)

if get_option('enable-tests')
  subdir('tests')
endif
