#ifndef CLIB_PARTITION_PROTOS_H
#define CLIB_PARTITION_PROTOS_H

/*
    *** Automatically generated from 'partition.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>
#include <libraries/partition.h>

AROS_LP2(struct PartitionHandle *, OpenRootPartition,
        AROS_LPA(STRPTR, Device, A1),
        AROS_LPA(LONG, Unit, D1),
        struct PartitionBase *, PartitionBase, 5, Partition)

AROS_LP1(void, CloseRootPartition,
        AROS_LPA(struct PartitionHandle *, ph, A1),
        struct PartitionBase *, PartitionBase, 6, Partition)

AROS_LP1(LONG, OpenPartitionTable,
        AROS_LPA(struct PartitionHandle *, root, A1),
        struct PartitionBase *, PartitionBase, 7, Partition)

AROS_LP1(void, ClosePartitionTable,
        AROS_LPA(struct PartitionHandle *, root, A1),
        struct PartitionBase *, PartitionBase, 8, Partition)

AROS_LP1(LONG, WritePartitionTable,
        AROS_LPA(struct PartitionHandle *, root, A1),
        struct PartitionBase *, PartitionBase, 9, Partition)

AROS_LP2(LONG, CreatePartitionTable,
        AROS_LPA(struct PartitionHandle *, root, A1),
        AROS_LPA(ULONG, type, D1),
        struct PartitionBase *, PartitionBase, 10, Partition)

AROS_LP2(struct PartitionHandle *, AddPartition,
        AROS_LPA(struct PartitionHandle *, root, A1),
        AROS_LPA(struct TagItem *, taglist, A2),
        struct PartitionBase *, PartitionBase, 11, Partition)

AROS_LP1(void, DeletePartition,
        AROS_LPA(struct PartitionHandle *, ph, A1),
        struct PartitionBase *, PartitionBase, 12, Partition)

AROS_LP2(LONG, GetPartitionTableAttrs,
        AROS_LPA(struct PartitionHandle *, root, A1),
        AROS_LPA(struct TagItem *, taglist, A2),
        struct PartitionBase *, PartitionBase, 13, Partition)

AROS_LP2(LONG, SetPartitionTableAttrs,
        AROS_LPA(struct PartitionHandle *, root, A1),
        AROS_LPA(struct TagItem *, taglist, A2),
        struct PartitionBase *, PartitionBase, 14, Partition)

AROS_LP2(LONG, GetPartitionAttrs,
        AROS_LPA(struct PartitionHandle *, ph, A1),
        AROS_LPA(struct TagItem *, taglist, A2),
        struct PartitionBase *, PartitionBase, 15, Partition)

AROS_LP2(LONG, SetPartitionAttrs,
        AROS_LPA(struct PartitionHandle *, ph, A1),
        AROS_LPA(struct TagItem *, taglist, A2),
        struct PartitionBase *, PartitionBase, 16, Partition)

AROS_LP1(struct PartitionAttribute *, QueryPartitionTableAttrs,
        AROS_LPA(struct PartitionHandle *, table, A1),
        struct PartitionBase *, PartitionBase, 17, Partition)

AROS_LP1(struct PartitionAttribute *, QueryPartitionAttrs,
        AROS_LPA(struct PartitionHandle *, table, A1),
        struct PartitionBase *, PartitionBase, 18, Partition)

AROS_LP1(LONG, DestroyPartitionTable,
        AROS_LPA(struct PartitionHandle *, root, A1),
        struct PartitionBase *, PartitionBase, 19, Partition)

#endif /* CLIB_PARTITION_PROTOS_H */
