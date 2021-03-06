// Pingus - A free Lemmings clone
// Copyright (C) 1998-2009 Ingo Ruhnke <grumbel@gmail.com>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "driver_factory.hpp"

#include "engine/input/core_driver.hpp"
#include "engine/input/sdl_driver.hpp"
#include "util/mem.hpp"

namespace Input {

std::unique_ptr<Driver>
DriverFactory::create(const std::string& name, Manager* manager)
{
  if (name == "sdl")
  {
    return util::make_unique<SDLDriver>();
  }
  else if (name == "core")
  {
    return util::make_unique<CoreDriver>(manager);
  }
  else
  {
    return 0;
  }
}

} // namespace Input

/* EOF */
