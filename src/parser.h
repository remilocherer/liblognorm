/*
 *
 * Libee - An Event Expression Library inspired by CEE
 * Copyright 2010 by Rainer Gerhards and Adiscon GmbH.
 *
 * This file is part of libee.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * A copy of the LGPL v2.1 can be found in the file "COPYING" in this distribution.
 */
#ifndef LIBLOGNORM_PARSER_H_INCLUDED
#define	LIBLOGNORM_PARSER_H_INCLUDED

/**
 * Parser interface.
 * @param[in] str input string
 * @param[in] offs offset where parsing has to start inside str.
 * @param[in] ed string with extra data (if needed)
 * @param[out] parsed int number of characters consumed by the parser.
 * @return 0 on success, something else otherwise
 */


/** 
 * Parser for RFC5424 date.
 */
int ln_parseRFC5424Date(es_str_t *str, es_size_t *offs, es_str_t *ed, es_size_t *parsed);

/** 
 * Parser for RFC3164 date.
 */
int ln_parseRFC3164Date(es_str_t *str, es_size_t *offs, es_str_t *ed, es_size_t *parsed);

/** 
 * Parser for numbers.
 */
int ln_parseNumber(es_str_t *str, es_size_t *offs, es_str_t *ed, es_size_t *parsed);


/** 
 * Parser for Words (SP-terminated strings).
 */
int ln_parseWord(es_str_t *str, es_size_t *offs, es_str_t *ed, es_size_t *parsed);


/** 
 * Parse everything up to a specific character.
 */
int ln_parseCharTo(es_str_t *str, es_size_t *offs, es_str_t *ed, es_size_t *parsed);


/** 
 * Get everything till the rest of string.
 */
int ln_parseRest(es_str_t *str, es_size_t *offs, es_str_t *ed, es_size_t *parsed);


/** 
 * Parse a quoted string.
 */
int ln_parseQuotedString(es_str_t *str, es_size_t *offs, es_str_t *ed, es_size_t *parsed);

/** 
 * Parse an ISO date.
 */
int ln_parseISODate(es_str_t *str, es_size_t *offs, es_str_t *ed, es_size_t *parsed);


/** 
 * Parse a timestamp in 12hr format.
 */
int ln_parseTime12hr(es_str_t *str, es_size_t *offs, es_str_t *ed, es_size_t *parsed);


/** 
 * Parse a timestamp in 24hr format.
 */
int ln_parseTime24hr(es_str_t *str, es_size_t *offs, es_str_t *ed, es_size_t *parsed);

/** 
 * Parser for IPv4 addresses.
 */
int ln_parseIPv4(es_str_t *str, es_size_t *offs, es_str_t *ed, es_size_t *parsed);

#endif /* #ifndef LIBLOGNORM_PARSER_H_INCLUDED */