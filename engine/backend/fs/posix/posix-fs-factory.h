/* Residual - Virtual machine to run LucasArts' 3D adventure games
 *
 * Residual is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the AUTHORS
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * $URL$
 * $Id$
 */

#ifndef POSIX_FILESYSTEM_FACTORY_H
#define POSIX_FILESYSTEM_FACTORY_H

#include "common/singleton.h"
#include "engine/backend/fs/fs-factory.h"

/**
 * Creates POSIXFilesystemNode objects.
 *
 * Parts of this class are documented in the base interface class, FilesystemFactory.
 */
class POSIXFilesystemFactory : public FilesystemFactory, public Common::Singleton<POSIXFilesystemFactory> {
public:
	typedef Common::String String;

	virtual AbstractFilesystemNode *makeRootFileNode() const;
	virtual AbstractFilesystemNode *makeCurrentDirectoryFileNode() const;
	virtual AbstractFilesystemNode *makeFileNodePath(const String &path) const;

protected:
	POSIXFilesystemFactory() {};

private:
	friend class Common::Singleton<SingletonBaseType>;
};

#endif /*POSIX_FILESYSTEM_FACTORY_H*/