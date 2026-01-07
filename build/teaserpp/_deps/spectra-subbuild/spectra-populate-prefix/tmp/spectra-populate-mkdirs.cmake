# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/siny/hydra_ws/build/teaserpp/_deps/spectra-src"
  "/home/siny/hydra_ws/build/teaserpp/_deps/spectra-build"
  "/home/siny/hydra_ws/build/teaserpp/_deps/spectra-subbuild/spectra-populate-prefix"
  "/home/siny/hydra_ws/build/teaserpp/_deps/spectra-subbuild/spectra-populate-prefix/tmp"
  "/home/siny/hydra_ws/build/teaserpp/_deps/spectra-subbuild/spectra-populate-prefix/src/spectra-populate-stamp"
  "/home/siny/hydra_ws/build/teaserpp/_deps/spectra-subbuild/spectra-populate-prefix/src"
  "/home/siny/hydra_ws/build/teaserpp/_deps/spectra-subbuild/spectra-populate-prefix/src/spectra-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/siny/hydra_ws/build/teaserpp/_deps/spectra-subbuild/spectra-populate-prefix/src/spectra-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/siny/hydra_ws/build/teaserpp/_deps/spectra-subbuild/spectra-populate-prefix/src/spectra-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
