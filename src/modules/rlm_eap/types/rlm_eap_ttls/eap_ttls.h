#pragma once
/*
 * eap_ttls.h
 *
 * Version:     $Id$
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 *
 * @copyright 2003 Alan DeKok <aland@freeradius.org>
 * @copyright 2006 The FreeRADIUS server project
 */
RCSIDH(eap_ttls_h, "$Id$")

#include "eap_tls.h"

typedef struct ttls_tunnel_t {
	VALUE_PAIR	*username;
	bool		authenticated;
	char const	*virtual_server;
} ttls_tunnel_t;

/*
 *	Process the TTLS portion of an EAP-TTLS request.
 */
FR_CODE eap_ttls_process(eap_session_t *eap_session, tls_session_t *tls_session) CC_HINT(nonnull);
