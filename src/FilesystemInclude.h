#ifndef __DEP_CHECKER__FILESYSTEMINCLUDE_H
#define __DEP_CHECKER__FILESYSTEMINCLUDE_H

#ifdef WITH_BOOST

#include <boost/filesystem.hpp>

namespace filesystem = boost::filesystem;

#else

#include <filesystem>

namespace filesystem = std::filesystem;

#endif

#endif
