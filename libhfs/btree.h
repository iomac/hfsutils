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
 * $Id: btree.h,v 1.8 1998/11/02 22:08:55 rob Exp $
 */

int bt_getnode(node *, btree *, unsigned long);
int bt_putnode(node *);

int bt_readhdr(btree *);
int bt_writehdr(btree *);

int bt_space(btree *bt, size_t nrecs);

int bt_insert(btree *bt, const byte *record, unsigned long reclen);
int bt_delete(btree *, const byte *);

int bt_search(btree *, const byte *, node *);
