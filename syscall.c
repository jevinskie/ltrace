char * syscall_list[] = { "setup",		/* 0 */
			"exit",
			"fork",
			"read",
			"write",
			"open",
			"close",
			"waitpid",
			"creat",
			"link",
			"unlink",		/* 10 */
			"execve",
			"chdir",
			"time",
			"mknod",
			"chmod",
			"chown",
			"break",
			"oldstat",
			"lseek",
			"getpid",		/* 20 */
			"mount",
			"umount",
			"setuid",
			"getuid",
			"stime",
			"ptrace",
			"alarm",
			"oldfstat",
			"pause",
			"utime",		/* 30 */
			"stty",
			"gtty",
			"access",
			"nice",
			"ftime",
			"sync",
			"kill",
			"rename",
			"mkdir",
			"rmdir",		/* 40 */
			"dup",
			"pipe",
			"times",
			"prof",
			"brk",
			"setgid",
			"getgid",
			"signal",
			"geteuid",
			"getegid",		/* 50 */
			"acct",
			"phys",
			"lock",
			"ioctl",
			"fcntl",
			"mpx",
			"setpgid",
			"ulimit",
			"oldolduname",
			"umask",		/* 60 */
			"chroot",
			"ustat",
			"dup2",
			"getppid",
			"getpgrp",
			"setsid",
			"sigaction",
			"sgetmask",
			"ssetmask",
			"setreuid",		/* 70 */
			"setregid",
			"sigsuspend",
			"sigpending",
			"sethostname",
			"setrlimit",
			"getrlimit",
			"getrusage",
			"gettimeofday",
			"settimeofday",
			"getgroups",		/* 80 */
			"setgroups",
			"select",
			"symlink",
			"oldlstat",
			"readlink",
			"uselib",
			"swapon",
			"reboot",
			"readdir",
			"mmap",			/* 90 */
			"munmap",
			"truncate",
			"ftruncate",
			"fchmod",
			"fchown",
			"getpriority",
			"setpriority",
			"profil",
			"statfs",
			"fstatfs",		/* 100 */
			"ioperm",
			"socketcall",
			"syslog",
			"setitimer",
			"getitimer",
			"stat",
			"lstat",
			"fstat",
			"olduname",
			"iopl",			/* 110 */
			"vhangup",
			"idle",
			"vm86",
			"wait4",
			"swapoff",
			"sysinfo",
			"ipc",
			"fsync",
			"sigreturn",
			"clone",		/* 120 */
			"setdomainname",
			"uname",
			"modify_ldt",
			"adjtimex",
			"mprotect",
			"sigprocmask",
			"create_module",
			"init_module",
			"delete_module",
			"get_kernel_syms",	/* 130 */
			"quotactl",
			"getpgid",
			"fchdir",
			"bdflush",
			"sysfs",
			"personality",
			"afs_syscall",
			"setfsuid",
			"setfsgid",
			"_llseek",		/* 140 */
			"getdents",
			"_newselect",
			"flock",
			"msync",
			"readv",
			"writev",
			"getsid",
			"fdatasync",
			"_sysctl",
			"mlock",		/* 150 */
			"munlock",
			"mlockall",
			"munlockall",
			"sched_setparam",
			"sched_getparam",
			"sched_setscheduler",
			"sched_getscheduler",
			"sched_yield",
			"sched_get_priority_max",
			"sched_get_priority_min",	/* 160 */
			"sched_rr_get_interval",
			"nanosleep",
			"mremap",
};
