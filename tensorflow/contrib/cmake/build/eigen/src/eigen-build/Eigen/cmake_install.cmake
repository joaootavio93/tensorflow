# Install script for directory: C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen

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
   "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/Cholesky;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/CholmodSupport;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/Core;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/Dense;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/Eigen;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/Eigenvalues;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/Geometry;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/Householder;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/IterativeLinearSolvers;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/Jacobi;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/LU;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/MetisSupport;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/OrderingMethods;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/PaStiXSupport;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/PardisoSupport;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/QR;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/QtAlignedMalloc;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/SPQRSupport;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/SVD;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/Sparse;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/SparseCholesky;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/SparseCore;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/SparseLU;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/SparseQR;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/StdDeque;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/StdList;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/StdVector;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/SuperLUSupport;C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/UmfPackSupport")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen" TYPE FILE FILES
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/Cholesky"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/CholmodSupport"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/Core"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/Dense"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/Eigen"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/Eigenvalues"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/Geometry"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/Householder"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/IterativeLinearSolvers"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/Jacobi"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/LU"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/MetisSupport"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/OrderingMethods"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/PaStiXSupport"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/PardisoSupport"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/QR"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/QtAlignedMalloc"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/SPQRSupport"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/SVD"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/Sparse"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/SparseCholesky"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/SparseCore"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/SparseLU"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/SparseQR"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/StdDeque"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/StdList"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/StdVector"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/SuperLUSupport"
    "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/UmfPackSupport"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen/src")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/external/eigen_archive/Eigen" TYPE DIRECTORY FILES "C:/Visual Studio 2015/Projects/tensorflow/tensorflow/contrib/cmake/build/eigen/src/eigen/Eigen/src" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

