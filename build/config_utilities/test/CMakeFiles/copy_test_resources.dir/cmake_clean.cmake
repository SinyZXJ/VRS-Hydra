file(REMOVE_RECURSE
  "CMakeFiles/copy_test_resources"
  "resources/bar.yaml"
  "resources/foo.yaml"
  "resources/invalid.yaml"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/copy_test_resources.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
