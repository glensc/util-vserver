// $Id$    --*- c++ -*--

// Copyright (C) 2003 Enrico Scholz <enrico.scholz@informatik.tu-chemnitz.de>
//  
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; version 2 of the License.
//  
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//  
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.


#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#ifdef VC_ENABLE_API_COMPAT
#  include "getinitpid-compat.hc"
#endif

#ifdef VC_ENABLE_API_LEGACY
#  include "getinitpid-legacy.hc"
#endif

#include "vserver.h"
#include "vserver-internal.h"
#include "internal.h"

#include <sys/types.h>

pid_t
vc_X_getinitpid(pid_t pid)
{
  CALL_VC(CALL_VC_COMPAT(vc_X_getinitpid, pid),
	  CALL_VC_LEGACY(vc_X_getinitpid, pid));
}
