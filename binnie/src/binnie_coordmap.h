/*
 * binnie_coordmap.h Binnie co-ordinate mapping.
 *
 * Copyright (c) 2013 Genome Research Ltd. 
 * Author: Nicholas Clarke <nicholas.clarke@sanger.ac.uk>
 *
 * This file is part of BridgeBuilder. 
 *
 * BridgeBuilder is free software: you can redistribute it and/or modify it under 
 * the terms of the GNU General Public License as published by the Free Software 
 * Foundation; either version 3 of the License, or (at your option) any later 
 * version. 
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT 
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS 
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.  
 * 
 * You should have received a copy of the GNU General Public License along with 
 * this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */

 #define READ_UNMAPPED (-1)

 // Co-ordinate map
 typedef struct CoordMap CoordMap;

 // Result
 typedef struct {
  int start;
  int end;
  char* id;    
 } MappedRange;

 // Read map from file
 CoordMap* bc_read_file(const char *filename);

 // Look up co-ordinates
 MappedRange* bc_map_range(CoordMap* coordMap, int start, int end);