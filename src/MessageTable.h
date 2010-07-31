/*
 *  Copyright 2009,2010 Reality Jockey, Ltd.
 *                 info@rjdj.me
 *                 http://rjdj.me/
 * 
 *  This file is part of ZenGarden.
 *
 *  ZenGarden is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ZenGarden is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *  
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with ZenGarden.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef _MESSAGE_TABLE_H_
#define _MESSAGE_TABLE_H_

#include "MessageObject.h"

/** [table name] */
class MessageTable : public MessageObject {
  
  public:
    MessageTable(PdMessage *initMessage, PdGraph *graph);
    ~MessageTable();
  
    const char *getObjectLabel();
    ObjectType getObjectType();
  
    char *getName();
  
    /** Get a pointer to the table's buffer. */
    float *getBuffer(int *bufferLength);
  
    /**
     * Resize the table's buffer to the given buffer length. A pointer to the new buffer is returned.
     * If the size of the requested buffer is the same as the current size, then the current
     * buffer is returned.
     */
    float *resizeBuffer(int bufferLength);
  
  private:
    char *name;
    float *buffer;
    int bufferLength;
};

#endif // _MESSAGE_TABLE_H_
