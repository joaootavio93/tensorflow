# Install script for directory: C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/AdolcForward;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/AlignedVector3;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/ArpackSupport;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/AutoDiff;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/BVH;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/EulerAngles;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/FFT;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/IterativeSolvers;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/KroneckerProduct;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/LevenbergMarquardt;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/MatrixFunctions;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/MoreVectorization;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/MPRealSupport;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/NonLinearOptimization;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/NumericalDiff;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/OpenGLSupport;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/Polynomials;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/Skyline;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/SparseExtra;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/SpecialFunctions;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/Splines")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen" TYPE FILE FILES
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/AdolcForward"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/AlignedVector3"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/ArpackSupport"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/AutoDiff"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/BVH"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/EulerAngles"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/FFT"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/IterativeSolvers"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/KroneckerProduct"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/LevenbergMarquardt"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/MatrixFunctions"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/MoreVectorization"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/MPRealSupport"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/NonLinearOptimization"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/NumericalDiff"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/OpenGLSupport"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/Polynomials"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/Skyline"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/SparseExtra"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/SpecialFunctions"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/Splines"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen/src")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/unsupported/Eigen" TYPE DIRECTORY FILES "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/unsupported/Eigen/src" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen-build/unsupported/Eigen/CXX11/cmake_install.cmake")

endif()

