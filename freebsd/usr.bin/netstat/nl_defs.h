#include <nlist.h>
#ifndef __rtems__
extern const struct nlist nl[];
#else /* __rtems__ */
extern struct nlist nl[];
#endif /* __rtems__ */
#define	N_AHSTAT	0
#define	N_ARPSTAT	1
#define	N_CARPSTATS	2
#define	N_DIVCBINFO	3
#define	N_ESPSTAT	4
#define	N_ICMP6STAT	5
#define	N_ICMPSTAT	6
#define	N_IGMPSTAT	7
#define	N_IP6STAT	8
#define	N_IPCOMPSTAT	9
#define	N_IPSEC4STAT	10
#define	N_IPSEC6STAT	11
#define	N_IPSTAT	12
#define	N_MF6CTABLE	13
#define	N_MFCHASHTBL	14
#define	N_MFCTABLESIZE	15
#define	N_MIF6TABLE	16
#define	N_MRT6STAT	17
#define	N_MRTSTAT	18
#define	N_NETISR_BINDTHREADS	19
#define	N_NETISR_DEFAULTQLIMIT	20
#define	N_NETISR_DISPATCH_POLICY	21
#define	N_NETISR_MAXPROT	22
#define	N_NETISR_MAXQLIMIT	23
#define	N_NETISR_MAXTHREADS	24
#define	N_NETISR_PROTO	25
#define	N_NGSOCKLIST	26
#define	N_NWS	27
#define	N_NWS_ARRAY	28
#define	N_NWS_COUNT	29
#define	N_PFKEYSTAT	30
#define	N_PFSYNCSTATS	31
#define	N_PIM6STAT	32
#define	N_PIMSTAT	33
#define	N_RIP6STAT	34
#define	N_RIPCBINFO	35
#define	N_RTREE	36
#define	N_RTSTAT	37
#define	N_RTTRASH	38
#define	N_SCTPSTAT	39
#define	N_SFSTAT	40
#define	N_TCBINFO	41
#define	N_TCPSTAT	42
#define	N_TCPS_STATES	43
#define	N_UDBINFO	44
#define	N_UDPSTAT	45
#define	N_UNP_COUNT	46
#define	N_UNP_DHEAD	47
#define	N_UNP_GENCNT	48
#define	N_UNP_SHEAD	49
#define	N_UNP_SPHEAD	50
#define	N_VIFTABLE	51
