#!/bin/sh

# These variables are automatically filled in by the configure script.
name="@PACKAGE_TARNAME@"
version="@PACKAGE_VERSION@"

show_usage()
{
  echo "Usage: gtest-config [OPTIONS...]"
}

show_help()
{
  show_usage
  cat <<\EOF

The `gtest-config' script provides access to the necessary compile and linking
flags to connect with Google C++ Testing Framework, both in a build prior to
installation, and on the system proper after installation. The installation
overrides may be issued in combination with any other queries, but will only
affect installation queries if called on a built but not installed gtest. The
installation queries may not be issued with any other types of queries, and
only one installation query may be made at a time. The version queries and
compiler flag queries may be combined as desired but not mixed. Different
version queries are always combined with logical "and" semantics, and only the
last of any particular query is used while all previous ones ignored. All
versions must be specified as a sequence of numbers separated by periods.
Compiler flag queries output the union of the sets of flags when combined.

 Examples:
  gtest-config --min-version=1.0 || echo "Insufficient Google Test version."

  g++ $(gtest-config --cppflags --cxxflags) -o foo.o -c foo.cpp
  g++ $(gtest-config --ldflags --libs) -o foo foo.o

  # When using a built but not installed Google Test:
  g++ $(../../my_gtest_build/scripts/gtest-config ...) ...

  # When using an installed Google Test, but with installation overrides:
  export GTEST_PREFIX="/opt"
  g++ $(gtest-config --libdir="/opt/lib64" ...) ...

 Help:
  --usage                    brief usage information
  --help                     display this help message

 Installation Overrides:
  --prefix=<dir>             overrides the installation prefix
  --exec-prefix=<dir>        overrides the executable installation prefix
  --libdir=<dir>             overrides the library installation prefix
  --includedir=<dir>         overrides the header file installation prefix

 Installation Queries:
  --prefix                   installation prefix
  --exec-prefix              executable installation prefix
  --libdir                   library installation directory
  --includedir               header file installation directory
  --version                  the version of the Google Test installation

 Version Queries:
  --min-version=VERSION      return 0 if the version is at least VERSION
  --exact-version=VERSION    return 0 if the version is exactly VERSION
  --max-version=VERSION      return 0 if the version is at most VERSION

 Compilation Flag Queries:
  --cppflags                 compile flags specific to the C-like preprocessors
  --cxxflags                 compile flags appropriate for C++ programs
  --ldflags                  linker flags
  --libs                     libraries for linking

EOF
}

# This function bounds our version with a min and a max. It uses some clever
# POSIX-compliant variable expansion to portably do all the work in the shell
# and avoid any dependency on a particular "sed" or "awk" implementation.
# Notable is that it will only ever compare the first 3 components of versions.
# Further components will be cleanly stripped off. All versions must be
# unadorned, so "v1.0" will *not* work. The minimum version must be in $1, and
# the max in $2. TODO(chandlerc@google.com): If this ever breaks, we should
# investigate expanding this via autom4te from AS_VERSION_COMPARE rather than
# continuing to maintain our own shell version.
check_versions()
{
  major_version=${version%%.*}
  minor_version="0"
  point_version="0"
  if test "${version#*.}" != "${version}"; then
    minor_version=${version#*.}
    minor_version=${minor_version%%.*}
  fi
  if test "${version#*.*.}" != "${version}"; then
    point_version=${version#*.*.}
    point_version=${point_version%%.*}
  fi

  min_version="$1"
  min_major_version=${min_version%%.*}
  min_minor_version="0"
  min_point_version="0"
  if test "${min_version#*.}" != "${min_version}"; then
    min_minor_version=${min_version#*.}
    min_minor_version=${min_minor_version%%.*}
  fi
  if test "${min_version#*.*.}" != "${min_version}"; then
    min_point_version=${min_version#*.*.}
    min_point_version=${min_point_version%%.*}
  fi

  max_version="$2"
  max_major_version=${max_version%%.*}
  max_minor_version="0"
  max_point_version="0"
  if test "${max_version#*.}" != "${max_version}"; then
    max_minor_version=${max_version#*.}
    max_minor_version=${max_minor_version%%.*}
  fi
  if test "${max_version#*.*.}" != "${max_version}"; then
    max_point_version=${max_version#*.*.}
    max_point_version=${max_point_version%%.*}
  fi

  test $(($major_version)) -lt $(($min_major_version)) && exit 1
  if test $(($major_version)) -eq $(($min_major_version)); then
    test $(($minor_version)) -lt $(($min_minor_version)) && exit 1
    if test $(($minor_version)) -eq $(($min_minor_version)); then
      test $(($point_version)) -lt $(($min_point_version)) && exit 1
    fi
  fi

  test $(($major_version)) -gt $(($max_major_version)) && exit 1
  if test $(($major_version)) -eq $(($max_major_version)); then
    test $(($minor_version)) -gt $(($max_minor_version)) && exit 1
    if test $(($minor_version)) -eq $(($max_minor_version)); then
      test $(($point_version)) -gt $(($max_point_version)) && exit 1
    fi
  fi

  exit 0
}

# Show the usage line when no arguments are specified.
if test $# -eq 0; then
  show_usage
  exit 1
fi

while test $# -gt 0; do
  case $1 in
    --usage)          show_usage;         exit 0;;
    --help)           show_help;          exit 0;;

    # Installation overrides
    --prefix=*)       GTEST_PREFIX=${1#--prefix=};;
    --exec-prefix=*)  GTEST_EXEC_PREFIX=${1#--exec-prefix=};;
    --libdir=*)       GTEST_LIBDIR=${1#--libdir=};;
    --includedir=*)   GTEST_INCLUDEDIR=${1#--includedir=};;

    # Installation queries
    --prefix|--exec-prefix|--libdir|--includedir|--version)
      if test -n "${do_query}"; then
        show_usage
        exit 1
      fi
      do_query=${1#--}
      ;;

    # Version checking
    --min-version=*)
      do_check_versions=yes
      min_version=${1#--min-version=}
      ;;
    --max-version=*)
      do_check_versions=yes
      max_version=${1#--max-version=}
      ;;
    --exact-version=*)
      do_check_versions=yes
      exact_version=${1#--exact-version=}
      ;;

    # Compiler flag output
    --cppflags)       echo_cppflags=yes;;
    --cxxflags)       echo_cxxflags=yes;;
    --ldflags)        echo_ldflags=yes;;
    --libs)           echo_libs=yes;;

    # Everything else is an error
    *)                show_usage;         exit 1;;
  esac
  shift
done

# These have defaults filled in by the configure script but can also be
# overridden by environment variables or command line parameters.
prefix="${GTEST_PREFIX:-@prefix@}"
exec_prefix="${GTEST_EXEC_PREFIX:-@exec_prefix@}"
libdir="${GTEST_LIBDIR:-@libdir@}"
includedir="${GTEST_INCLUDEDIR:-@includedir@}"

# We try and detect if our binary is not located at its installed location. If
# it's not, we provide variables pointing to the source and build tree rather
# than to the install tree. This allows building against a just-built gtest
# rather than an installed gtest.
bindir="@bindir@"
this_relative_bindir=`dirname $0`
this_bindir=`cd ${this_relative_bindir}; pwd -P`
if test "${this_bindir}" = "${this_bindir%${bindir}}"; then
  # The path to the script doesn't end in the bindir sequence from Autoconf,
  # assume that we are in a build tree.
  build_dir=`dirname ${this_bindir}`
  src_dir=`cd ${this_bindir}; cd @top_srcdir@; pwd -P`

  # TODO(chandlerc@google.com): This is a dangerous dependency on libtool, we
  # should work to remove it, and/or remove libtool altogether, replacing it
  # with direct references to the library and a link path.
  gtest_libs="${build_dir}/lib/libgtest.la @PTHREAD_CFLAGS@ @PTHREAD_LIBS@"
  gtest_ldflags=""

  # We provide hooks to include from either the source or build dir, where the
  # build dir is always preferred. This will potentially allow us to write
  # build rules for generated headers and have them automatically be preferred
  # over provided versions.
  gtest_cppflags="-I${build_dir}/include -I${src_dir}/include"
  gtest_cxxflags="@PTHREAD_CFLAGS@"
else
  # We're using an installed gtest, although it may be staged under some
  # prefix. Assume (as our own libraries do) that we can resolve the prefix,
  # and are present in the dynamic link paths.
  gtest_ldflags="-L${libdir}"
  gtest_libs="-l${name} @PTHREAD_CFLAGS@ @PTHREAD_LIBS@"
  gtest_cppflags="-I${includedir}"
  gtest_cxxflags="@PTHREAD_CFLAGS@"
fi

# Do an installation query if requested.
if test -n "$do_query"; then
  case $do_query in
    prefix)           echo $prefix;       exit 0;;
    exec-prefix)      echo $exec_prefix;  exit 0;;
    libdir)           echo $libdir;       exit 0;;
    includedir)       echo $includedir;   exit 0;;
    version)          echo $version;      exit 0;;
    *)                show_usage;         exit 1;;
  esac
fi

# Do a version check if requested.
if test "$do_check_versions" = "yes"; then
  # Make sure we didn't receive a bad combination of parameters.
  test "$echo_cppflags" = "yes" && show_usage && exit 1
  test "$echo_cxxflags" = "yes" && show_usage && exit 1
  test "$echo_ldflags" = "yes"  && show_usage && exit 1
  test "$echo_libs" = "yes"     && show_usage && exit 1

  if test "$exact_version" != ""; then
    check_versions $exact_version $exact_version
    # unreachable
  else
    check_versions ${min_version:-0.0.0} ${max_version:-9999.9999.9999}
    # unreachable
  fi
fi

# Do the output in the correct order so that these can be used in-line of
# a compiler invocation.
output=""
test "$echo_cppflags" = "yes" && output="$output $gtest_cppflags"
test "$echo_cxxflags" = "yes" && output="$output $gtest_cxxflags"
test "$echo_ldflags" = "yes"  && output="$output $gtest_ldflags"
test "$echo_libs" = "yes"     && output="$output $gtest_libs"
echo $output

exit 0
