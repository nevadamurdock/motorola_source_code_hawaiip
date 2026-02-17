/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef _XT_CHECKSUM_H
#define _XT_CHECKSUM_H

#include <linux/types.h>

struct xt_checksum_info {
	__u8 operation;
};

#define XT_CHECKSUM_OP_FILL	0x01

#endif /* _XT_CHECKSUM_H */
