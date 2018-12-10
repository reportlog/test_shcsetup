#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -f setupServiceCleanup 
#endif

static  char data [] = 
#define      date_z	1
#define      date	((&data[0]))
	"\106"
#define      shll_z	8
#define      shll	((&data[1]))
	"\054\312\112\311\156\206\246\072"
#define      inlo_z	3
#define      inlo	((&data[9]))
	"\123\201\134"
#define      pswd_z	256
#define      pswd	((&data[30]))
	"\263\102\112\374\145\053\310\313\050\277\242\374\205\260\043\342"
	"\057\051\204\107\240\203\173\351\265\061\172\107\014\123\044\304"
	"\374\204\150\262\310\056\152\317\041\312\141\165\267\244\113\305"
	"\050\317\014\311\123\210\262\010\271\055\117\305\200\164\212\174"
	"\370\362\057\301\040\232\221\102\145\362\267\035\227\003\342\300"
	"\323\357\211\046\167\073\056\061\151\175\366\351\361\201\146\352"
	"\163\226\253\223\060\075\326\226\060\216\263\307\221\226\207\144"
	"\205\020\212\375\114\270\056\265\066\045\237\047\246\005\022\031"
	"\234\276\255\315\373\203\143\053\022\026\363\243\255\172\007\062"
	"\213\222\057\330\113\136\215\201\203\055\251\051\063\273\102\317"
	"\172\360\234\165\164\000\241\206\027\224\051\304\017\061\366\233"
	"\303\046\163\016\204\001\220\007\056\071\061\142\365\164\061\157"
	"\144\316\345\330\316\207\136\346\034\210\252\053\271\241\306\174"
	"\310\072\213\114\073\034\124\152\126\205\314\113\371\376\273\136"
	"\314\241\066\233\050\224\201\104\034\054\160\326\316\067\123\226"
	"\161\337\342\254\373\067\026\121\275\342\235\266\340\130\024\255"
	"\371\113\111\042\340\313\146\375\367\326\323\306\016\047\134\177"
	"\006\077\041\133\053\227\235\176\313\302\156\265\310\267\265\173"
	"\372\000\170\137\053\100\052\124\000\315\120\206\176\164\150\256"
	"\236\211\012\311\040\247\107\354\152\266\241\062\155\127\255\147"
	"\127\045\306\202\146\361\327\146\277\047\354\075\234\124\354\072"
	"\335\366"
#define      msg1_z	42
#define      msg1	((&data[360]))
	"\113\353\010\001\214\072\157\344\350\327\302\024\040\220\107\336"
	"\227\221\166\362\212\343\041\137\041\331\365\226\363\070\336\340"
	"\307\352\102\121\335\231\176\066\017\205\045\071\375\241\257\006"
	"\021\266\323\260\073\016\235\276\164\217"
#define      chk1_z	22
#define      chk1	((&data[413]))
	"\274\306\213\131\033\036\074\200\021\246\236\240\004\076\241\101"
	"\031\125\356\207\251\007\050\050\015\053\324\167"
#define      msg2_z	19
#define      msg2	((&data[440]))
	"\227\370\013\343\037\304\141\013\175\336\313\350\031\113\320\333"
	"\027\077\072\205\062\277\167\343\023"
#define      tst2_z	19
#define      tst2	((&data[463]))
	"\124\124\242\221\131\107\144\201\131\104\333\324\211\151\256\106"
	"\102\110\041\331\045\066"
#define      xecc_z	15
#define      xecc	((&data[485]))
	"\311\115\232\157\116\162\152\130\211\123\063\127\207\241\105\170"
	"\170\270"
#define      lsto_z	1
#define      lsto	((&data[501]))
	"\077"
#define      rlax_z	1
#define      rlax	((&data[502]))
	"\075"
#define      tst1_z	22
#define      tst1	((&data[508]))
	"\252\214\156\030\043\107\365\341\022\066\225\125\166\116\021\360"
	"\115\132\340\271\141\362\270\117\007\056\263\146\044"
#define      opts_z	1
#define      opts	((&data[532]))
	"\363"
#define      chk2_z	19
#define      chk2	((&data[536]))
	"\100\016\274\047\314\106\163\026\336\205\063\032\136\216\112\354"
	"\035\040\355\325\052\256\153\236"
#define      text_z	565
#define      text	((&data[586]))
	"\272\216\316\115\065\156\247\147\146\034\022\363\212\053\026\361"
	"\117\035\073\207\011\365\016\111\004\312\265\242\313\165\253\130"
	"\102\101\277\342\011\306\332\217\315\216\211\166\261\131\367\137"
	"\136\130\350\354\167\106\332\337\005\010\114\220\220\217\231\004"
	"\217\372\134\057\063\120\251\231\136\155\306\056\305\213\164\136"
	"\314\136\272\177\361\355\140\366\252\330\145\266\264\302\206\104"
	"\077\142\127\113\231\164\205\251\054\014\047\023\145\341\065\067"
	"\337\132\276\013\017\065\200\231\154\034\126\375\135\156\275\361"
	"\305\332\024\065\154\324\167\101\030\011\236\300\026\164\175\026"
	"\056\074\350\354\254\124\043\352\302\245\200\275\154\237\303\074"
	"\234\077\012\066\321\100\105\310\063\165\201\363\317\047\132\012"
	"\352\305\263\273\313\256\100\006\256\251\076\153\012\152\177\331"
	"\105\002\041\120\073\155\016\271\123\364\044\354\032\207\205\236"
	"\216\155\121\371\266\232\021\233\340\337\212\006\155\140\037\273"
	"\336\152\126\273\172\172\123\202\064\234\111\364\344\017\130\215"
	"\272\021\350\114\360\240\036\154\064\136\117\146\060\314\125\161"
	"\205\161\321\322\022\001\104\177\014\037\164\324\226\040\376\340"
	"\163\336\127\330\202\062\060\201\363\220\375\143\143\030\021\233"
	"\064\004\153\175\042\341\041\106\143\167\264\142\246\121\203\323"
	"\267\206\103\303\070\364\315\355\263\360\376\201\060\352\152\240"
	"\012\071\247\023\370\356\374\062\202\216\063\134\205\011\061\043"
	"\221\250\070\205\001\047\077\321\001\062\206\302\372\160\242\325"
	"\073\160\263\040\141\067\020\213\302\247\271\026\326\112\137\356"
	"\253\052\000\053\250\154\324\171\377\375\056\277\264\050\353\054"
	"\166\017\166\176\251\232\324\143\236\044\076\110\323\362\133\201"
	"\206\216\235\025\300\304\200\127\062\261\371\311\030\304\052\370"
	"\007\132\321\012\163\167\040\374\154\375\243\214\320\140\354\310"
	"\175\364\222\324\070\361\266\141\377\214\214\370\350\177\243\372"
	"\036\310\353\170\363\177\236\243\130\206\343\331\332\041\144\325"
	"\254\013\325\127\324\346\271\104\367\274\141\100\062\310\213\273"
	"\372\374\335\366\036\242\313\227\126\117\150\364\076\250\222\145"
	"\120\143\257\265\011\021\331\277\260\114\326\025\320\246\365\251"
	"\232\373\206\064\144\367\021\105\345\267\206\161\056\051\106\231"
	"\146\051\320\111\330\044\162\315\036\100\230\026\136\246\257\175"
	"\347\225\337\375\356\034\100\305\117\200\237\173\200\033\304\100"
	"\263\024\374\320\072\130\224\261\077\314\035\226\355\136\151\327"
	"\252\326\267\220\205\035\101\117\233\367\237\015\232\340\004\143"
	"\126\026\352\216\205\170\135\323\255\313\172\025\061\226\050\044"
	"\041\123\073\023\243\130\116\053\141\104\071\253\111\003\140\353"
	"\317\113\172\125\304\327\050\162\242\243\207\324\072\260\371\133"
	"\003\064\156\247\215\275\322\357\002\013\233\113\017\373\067\337"
	"\106\261\064\013\211\135\175\053\000\004\377\073\265\371\226\271"
	"\056\005\140\274\303\062\253\305\076\106\021\115\102\110\054\211"
	"\372\141\224\203\277\021\257\300\026\257\373\313\250\221\204\326"
	"\227\345\222\133\030\076\041\126\205\062\243\307\173\320\121\165"
	"\062\345\371\361"/* End of data[] */;
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
