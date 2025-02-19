/*
 * libhfs - library for reading and writing Macintosh HFS volumes
 * Copyright (C) 1996-1998 Robert Leslie
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
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * $Id: node.h,v 1.7 1998/11/02 22:09:06 rob Exp $
 */

void n_init(node *, btree *, int, int);

int n_new(node *);
int n_free(node *);

int n_search(node *, const byte *);

void n_index(const node *np, byte *record, size_t *reclen);

int n_insert(node *np, byte *record, size_t *reclen);
void n_insertx(node *np, const byte *record, size_t reclen);

int n_delete(node *, byte *, int *);
