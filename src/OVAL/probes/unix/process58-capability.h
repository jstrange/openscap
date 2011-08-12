/* map based on OVAL and /usr/include/linux/capability.h
 * not all capabilities from capability.h are allowed in OVAL */
static const struct oscap_string_map CapabilityType[] = {
{0, "CAP_CHOWN"},
{1, "CAP_DAC_OVERRIDE"},
{2, "CAP_DAC_READ_SEARCH"},
{3, "CAP_FOWNER"},
{4, "CAP_FSETID"},
{5, "CAP_KILL"},
{6, "CAP_SETGID"},
{7, "CAP_SETUID"},
{8, "CAP_SETPCAP"},
{9, "CAP_LINUX_IMMUTABLE"},
{10, "CAP_NET_BIND_SERVICE"},
{11, "CAP_NET_BROADCAST"},
{12, "CAP_NET_ADMIN"},
{13, "CAP_NET_RAW"},
{14, "CAP_IPC_LOCK"},
{15, "CAP_IPC_OWNER"},
{16, "CAP_SYS_MODULE"},
{17, "CAP_SYS_RAWIO"},
{18, "CAP_SYS_CHROOT"},
{19, "CAP_SYS_PTRACE"},
{21, "CAP_SYS_ADMIN"},
{22, "CAP_SYS_BOOT"},
{23, "CAP_SYS_NICE"},
{24, "CAP_SYS_RESOURCE"},
{25, "CAP_SYS_TIME"},
{26, "CAP_SYS_TTY_CONFIG"},
{27, "CAP_MKNOD"},
{28, "CAP_LEASE"},
{29, "CAP_AUDIT_WRITE"},
{30, "CAP_AUDIT_CONTROL"},
{31, "CAP_SETFCAP"},
{32, "CAP_MAC_OVERRIDE"},
{33, "CAP_MAC_ADMIN"},
{-1, NULL}
};