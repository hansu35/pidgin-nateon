/**
 * @file nateon-utils.h Utility functions
 *
 * purple
 *
 * Purple is the legal property of its developers, whose names are too numerous
 * to list here.  Please refer to the COPYRIGHT file distributed with this
 * source distribution.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef _NATEON_UTILS_H_
#define _NATEON_UTILS_H_

/**
 * Parses the NATEON message formatting into a format compatible with Purple.
 *
 * @param mime     The mime header with the formatting.
 * @param pre_ret  The returned prefix string.
 * @param post_ret The returned postfix string.
 *
 * @return The new message.
 */
//void nateon_parse_format(const char *mime, char **pre_ret, char **post_ret);
char *nateon_parse_format(const char *payload);

/**
 * Parses the Purple message formatting (html) into the NATEON format.
 *
 * @param html			The html message to format.
 * @param attributes	The returned attributes string.
 * @param message		The returned message string.
 *
 * @return The new message.
 */
//void nateon_import_html(const char *html, char **attributes, char **message);
char *nateon_import_html(const char *html);

//void nateon_parse_socket(const char *str, char **ret_host, int *ret_port);

#endif /* _NATEON_UTILS_H_ */
