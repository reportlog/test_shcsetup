#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -f specific 
#endif

static  char data [] = 
#define      inlo_z	3
#define      inlo	((&data[0]))
	"\217\110\142"
#define      date_z	1
#define      date	((&data[3]))
	"\341"
#define      lsto_z	1
#define      lsto	((&data[4]))
	"\172"
#define      chk1_z	22
#define      chk1	((&data[10]))
	"\270\256\017\132\250\031\152\015\124\050\241\336\013\310\344\105"
	"\001\213\211\016\164\010\121\376\333\241\222\013\202\353"
#define      shll_z	8
#define      shll	((&data[36]))
	"\212\162\214\064\162\157\034\177\300\256"
#define      msg1_z	42
#define      msg1	((&data[55]))
	"\034\034\367\152\125\320\230\165\045\012\336\041\161\023\074\255"
	"\071\323\300\143\007\171\144\343\221\260\244\220\354\145\004\270"
	"\271\223\373\315\152\117\257\000\374\126\174\110\033\307\143\302"
	"\162\374\224\263"
#define      msg2_z	19
#define      msg2	((&data[101]))
	"\205\221\130\063\156\234\363\252\047\307\261\122\002\144\332\360"
	"\030\227\370\067\247\371\242\240\263\334"
#define      rlax_z	1
#define      rlax	((&data[123]))
	"\256"
#define      text_z	268
#define      text	((&data[162]))
	"\135\077\123\132\122\157\166\111\332\313\032\162\101\100\174\346"
	"\061\035\153\302\165\237\143\051\173\016\137\103\341\360\203\077"
	"\057\326\231\201\106\020\324\122\363\243\011\023\002\237\070\217"
	"\231\345\130\310\343\043\221\201\155\203\122\146\076\077\253\136"
	"\242\266\247\213\201\257\253\242\037\360\300\312\147\060\342\141"
	"\060\014\367\212\275\031\141\272\136\200\274\023\322\152\273\376"
	"\302\334\007\354\212\374\247\167\314\302\232\000\061\143\203\362"
	"\043\305\243\077\145\355\364\271\341\367\033\072\331\040\130\216"
	"\270\363\335\243\254\215\171\336\041\266\150\227\336\120\104\273"
	"\241\231\013\043\223\052\310\055\032\174\252\040\143\273\300\056"
	"\120\377\200\034\304\246\004\344\356\016\111\227\345\234\325\024"
	"\346\155\136\225\250\202\374\331\131\327\157\350\072\314\115\134"
	"\034\355\031\103\176\202\117\314\066\221\171\061\033\046\017\146"
	"\122\335\101\220\206\206\260\217\332\255\021\014\255\265\227\162"
	"\302\250\031\007\102\324\101\043\122\333\326\052\266\216\062\215"
	"\356\230\171\072\273\244\340\254\202\176\104\250\147\361\321\044"
	"\151\131\363\011\161\137\074\350\305\232\317\315\124\173\361\133"
	"\150\350\001\102\046\344\300\240\004\146\307\010\262\366\377\222"
	"\270\077\203\103\207\330\273\370\014\165\031\272\146\321\223\202"
	"\152\206\313\040\334\345\222\035\046\017\004\127\054\160\032\242"
	"\017\175"
#define      opts_z	1
#define      opts	((&data[446]))
	"\253"
#define      xecc_z	15
#define      xecc	((&data[450]))
	"\033\122\255\151\010\313\272\013\133\346\211\264\244\351\355\222"
	"\014\176\113"
#define      tst1_z	22
#define      tst1	((&data[467]))
	"\157\251\062\101\251\226\350\250\146\077\052\077\330\253\130\106"
	"\025\250\267\216\354\271\034\130\227\217\065"
#define      tst2_z	19
#define      tst2	((&data[493]))
	"\312\226\021\072\216\376\102\234\140\236\204\260\202\210\246\054"
	"\161\063\056\243"
#define      chk2_z	19
#define      chk2	((&data[514]))
	"\136\334\255\024\044\325\252\314\342\122\325\010\157\117\215\353"
	"\100\240\221\277\310\025\001\327"
#define      pswd_z	256
#define      pswd	((&data[589]))
	"\036\371\063\215\024\205\072\137\257\202\054\036\333\304\255\020"
	"\101\320\143\345\002\273\341\141\203\366\142\133\211\060\277\250"
	"\051\362\065\076\170\160\236\047\362\312\105\315\216\363\336\320"
	"\304\102\266\306\133\251\054\103\066\026\344\035\323\161\067\376"
	"\352\007\014\161\271\056\073\133\033\360\070\374\333\205\032\177"
	"\177\216\017\332\067\074\035\155\122\002\213\046\164\302\045\137"
	"\312\061\320\203\140\014\336\174\375\026\171\330\234\224\130\033"
	"\042\147\365\131\243\023\307\366\026\122\035\212\025\103\352\337"
	"\164\273\143\325\307\101\122\304\130\313\235\364\137\365\017\202"
	"\135\005\334\000\030\243\367\056\366\025\271\014\130\244\353\314"
	"\137\116\242\046\220\364\352\350\277\207\334\037\175\354\241\332"
	"\361\176\333\012\041\323\071\030\350\363\044\100\227\020\015\366"
	"\137\257\034\360\243\007\330\143\217\265\203\014\242\045\347\224"
	"\243\303\236\305\226\330\335\176\313\002\276\143\023\313\132\163"
	"\172\167\143\036\176\074\201\016\361\005\033\223\052\002\047\315"
	"\305\306\222\133\237\160\332\153\163\231\316\207\144\050\372\337"
	"\237\136\376\036\232\200\054\214\205\107\040\257\112\107\175\017"
	"\016\017\153\255\200\106\030\364\337\347\173\104\020\166\044\257"
	"\324\042\316\157\242\372\373\047\102\033\327\214\143\124\234\162"
	"\144\010\037\344\375\227\047\201\215\212\335\027\273\235\277\344"
	"\217\365\042\010\145\301\057\127\213\165\045\032\151"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
