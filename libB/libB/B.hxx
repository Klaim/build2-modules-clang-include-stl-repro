#pragma once

#include <iosfwd>
#include <string>

#include <libB/export.hxx>

namespace B
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBB_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
