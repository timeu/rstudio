/*
 * SessionTexCompiler.hpp
 *
 * Copyright (C) 2009-11 by RStudio, Inc.
 *
 * This program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

#ifndef SESSION_MODULES_TEX_COMPILER_HPP
#define SESSION_MODULES_TEX_COMPILER_HPP

#include <core/system/Types.hpp>

namespace core {
   class Error;
   class FilePath;
   namespace shell_utils {
      class ShellArgs;
   }
}
 
namespace session {
namespace modules { 
namespace tex {
namespace compiler {

core::Error texToPdf(const core::FilePath& texProgramPath,
                     const core::system::Options& envVars,
                     const core::shell_utils::ShellArgs& args,
                     const core::FilePath& texFilePath);

} // namespace compiler
} // namespace tex
} // namespace modules
} // namesapce session

#endif // SESSION_MODULES_TEX_COMPILER_HPP