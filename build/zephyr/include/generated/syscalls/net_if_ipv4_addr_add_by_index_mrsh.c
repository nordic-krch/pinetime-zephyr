/* auto-generated by gen_syscalls.py, don't edit */
#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic push
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif
#include <syscalls/net_if.h>

extern bool z_vrfy_net_if_ipv4_addr_add_by_index(int index, struct in_addr * addr, enum net_addr_type addr_type, u32_t vlifetime);
uintptr_t z_mrsh_net_if_ipv4_addr_add_by_index(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, void *ssf)
{
	_current_cpu->syscall_frame = ssf;
	(void) arg4;	/* unused */
	(void) arg5;	/* unused */
	bool ret = z_vrfy_net_if_ipv4_addr_add_by_index(*(int*)&arg0, *(struct in_addr **)&arg1, *(enum net_addr_type*)&arg2, *(u32_t*)&arg3)
;
	return (uintptr_t) ret;
}

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif
