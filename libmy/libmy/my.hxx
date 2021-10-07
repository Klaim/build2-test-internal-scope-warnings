#pragma once

#include <iosfwd>
#include <string>

#include <libmy/export.hxx>

namespace my
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBMY_SYMEXPORT int
  say_hello (std::ostream&, const std::string& name);

  inline int something() {
    int x;
    return x;
  }

}

