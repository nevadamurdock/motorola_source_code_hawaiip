/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef _XT_NFQUEUE_H
#define _XT_NFQUEUE_H

#include <linux/types.h>

/* Versao 0 */
struct xt_nfq_info {
	__u16 queuenum;
};

/* Versao 1 */
struct xt_nfq_info_v1 {
	__u16 queuenum;
	__u16 queues_total;
};

/* Versao 2 */
struct xt_nfq_info_v2 {
	__u16 queuenum;
	__u16 queues_total;
	__u16 bypass;
};

/* Versao 3 */
struct xt_nfq_info_v3 {
	__u16 queuenum;
	__u16 queues_total;
	__u16 flags;
};

#define NFQ_FLAG_BYPASS		0x01
#define NFQ_FLAG_CPU_FANOUT	0x02
#define NFQ_FLAG_MASK		0x03

#endif /* _XT_NFQUEUE_H */
