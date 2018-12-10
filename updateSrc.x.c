#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -f updateSrc 
#endif

static  char data [] = 
#define      shll_z	8
#define      shll	((&data[1]))
	"\106\161\356\250\014\260\147\213\054\130"
#define      tst2_z	19
#define      tst2	((&data[11]))
	"\162\210\130\124\002\035\115\022\042\267\034\151\044\124\246\370"
	"\111\224\047\276\242\256"
#define      lsto_z	1
#define      lsto	((&data[32]))
	"\361"
#define      chk1_z	22
#define      chk1	((&data[33]))
	"\301\110\353\133\251\327\227\322\057\157\022\377\077\265\271\161"
	"\351\363\132\065\261\316\143\322"
#define      chk2_z	19
#define      chk2	((&data[60]))
	"\063\217\014\132\130\312\307\145\256\056\305\273\313\110\364\161"
	"\356\154\224\347\063\117\355\257"
#define      text_z	586
#define      text	((&data[226]))
	"\251\071\240\000\177\371\345\322\153\127\164\031\313\114\230\143"
	"\165\357\306\107\335\223\323\021\042\340\377\321\263\375\000\134"
	"\066\241\135\266\233\103\210\006\233\375\037\146\111\270\312\277"
	"\247\221\007\205\044\333\226\106\273\225\030\156\223\031\313\311"
	"\272\051\177\126\155\010\134\010\005\174\157\117\064\071\016\334"
	"\312\026\141\357\361\370\065\254\216\116\033\041\147\347\352\042"
	"\021\152\170\176\162\324\206\167\121\365\307\205\057\325\141\372"
	"\354\303\351\335\273\037\212\112\155\246\153\325\215\126\367\236"
	"\301\160\034\063\105\243\253\226\231\162\033\310\110\175\302\064"
	"\100\161\316\217\216\144\075\332\212\063\045\333\076\251\342\205"
	"\001\301\011\011\362\001\243\127\207\212\126\343\231\067\155\070"
	"\120\071\340\166\205\372\206\170\152\342\045\004\146\270\254\164"
	"\325\143\155\332\147\346\125\264\213\376\114\341\142\121\307\177"
	"\036\302\123\061\106\256\333\043\326\343\072\365\016\144\202\106"
	"\264\244\071\040\327\023\213\367\064\153\224\077\270\332\302\255"
	"\065\237\076\175\271\042\137\351\120\336\037\016\361\017\306\251"
	"\054\135\015\054\300\115\113\160\167\050\235\117\033\333\240\266"
	"\260\114\103\246\310\115\055\355\370\131\013\124\030\014\064\106"
	"\117\160\227\331\065\352\007\011\377\137\356\000\115\023\176\257"
	"\353\035\150\217\235\125\011\162\033\047\012\272\044\044\007\277"
	"\344\040\370\012\000\274\312\174\313\171\144\037\323\260\225\073"
	"\372\261\212\103\066\053\366\217\117\026\055\202\214\242\100\227"
	"\055\376\333\215\160\002\023\267\132\104\025\250\327\023\171\136"
	"\040\020\246\226\113\357\106\052\146\040\123\366\037\235\262\160"
	"\271\275\346\010\335\035\200\242\040\115\127\144\140\113\145\373"
	"\220\105\206\006\045\334\225\303\171\341\255\160\273\054\045\203"
	"\001\002\356\046\304\205\164\072\124\352\233\211\332\056\046\172"
	"\212\133\135\375\061\364\357\024\070\351\330\126\146\351\075\345"
	"\141\103\110\371\044\151\070\177\053\011\364\255\012\014\240\323"
	"\057\366\011\135\344\150\161\354\034\064\206\013\270\333\166\004"
	"\141\300\275\000\341\237\046\131\112\046\160\144\134\045\020\004"
	"\345\222\336\147\113\135\367\003\272\163\036\177\347\035\336\200"
	"\255\066\346\270\375\361\317\020\056\115\051\340\033\060\004\112"
	"\073\326\315\120\102\045\302\377\053\035\306\006\326\076\126\006"
	"\123\112\035\131\352\255\146\331\126\121\156\031\227\122\371\320"
	"\057\124\272\170\212\031\133\327\017\200\160\040\354\201\376\123"
	"\211\371\005\125\125\061\333\060\016\130\031\261\363\002\206\124"
	"\114\110\336\270\273\333\340\143\024\225\337\121\121\252\334\232"
	"\062\276\243\245\324\326\233\274\167\274\351\041\001\331\270\107"
	"\071\004\323\067\221\055\074\227\072\050\020\302\225\234\202\350"
	"\041\127\362\320\025\075\315\160\174\052\346\052\210\312\051\351"
	"\226\100\167\232\063\333\067\102\162\350\254\212\054\231\132\051"
	"\021\264\355\172\332\377\326\043\246\253\025\023\362\216\123\256"
	"\211\207\244\265\130\240\370\132\265\255\262\126\133\170\206\105"
	"\062\261\302\211\373\115\031\022\151\355\035\327\353\070\147\316"
	"\054\020\130\014\241\151\045\302\024\257\101\253\022\374\313\234"
	"\106\070\102\262\016\320\011\005\157\312\166\214\376\273\057\252"
	"\121\310\035\155\221\145"
#define      pswd_z	256
#define      pswd	((&data[860]))
	"\054\377\255\051\312\111\160\003\214\042\021\134\053\027\314\366"
	"\216\130\364\111\207\352\242\002\031\026\324\307\330\100\042\245"
	"\200\023\305\176\232\222\061\305\323\323\351\331\246\330\220\167"
	"\022\273\216\007\245\060\012\276\107\336\206\037\037\251\304\237"
	"\275\212\035\127\035\116\035\360\042\007\311\310\337\132\100\362"
	"\025\316\372\272\377\004\171\106\343\000\145\002\252\052\242\147"
	"\265\277\277\322\016\335\303\060\344\215\371\304\347\071\266\374"
	"\007\260\267\007\265\061\115\230\061\263\233\333\336\075\103\223"
	"\375\002\146\014\340\051\074\304\266\066\210\236\160\077\233\170"
	"\360\122\177\245\203\314\076\265\200\332\221\136\027\324\362\025"
	"\327\130\041\267\202\136\174\070\225\004\326\005\104\161\175\064"
	"\304\374\332\110\311\031\376\111\363\217\250\013\144\232\041\073"
	"\363\102\363\165\241\157\255\066\163\204\073\270\366\271\355\273"
	"\265\307\004\177\341\002\311\324\221\161\340\365\014\001\061\377"
	"\103\044\164\345\223\042\033\007\247\127\277\235\020\255\131\306"
	"\165\135\106\126\137\017\052\361\201\013\347\215\014\030\215\120"
	"\074\001\065\320\044\121\327\313\250\227\151\271\104\302\200\272"
	"\040\306\020\177\326\236\233\120\273\011\341\041\365\064\274\041"
	"\064\151\113\377\263\273\003\100\336\025\235\012\054\151\000\272"
	"\301\365\004\111\223\240\231\117\251\172\161\237"
#define      rlax_z	1
#define      rlax	((&data[1155]))
	"\211"
#define      msg1_z	42
#define      msg1	((&data[1162]))
	"\343\113\307\346\214\246\363\115\162\327\327\374\310\234\317\126"
	"\026\271\074\167\077\037\373\102\112\106\277\046\052\364\213\147"
	"\210\124\161\017\315\060\211\124\352\326\354\064\152\273\220\114"
#define      date_z	1
#define      date	((&data[1204]))
	"\032"
#define      inlo_z	3
#define      inlo	((&data[1205]))
	"\312\146\212"
#define      xecc_z	15
#define      xecc	((&data[1209]))
	"\350\244\077\310\071\163\240\273\232\204\101\334\030\052\352\131"
	"\235\071"
#define      msg2_z	19
#define      msg2	((&data[1227]))
	"\062\126\300\245\223\175\010\306\044\303\045\244\151\127\164\227"
	"\275\161\041\113\260\372"
#define      tst1_z	22
#define      tst1	((&data[1250]))
	"\222\104\264\074\124\357\350\103\115\151\031\072\111\311\257\133"
	"\210\361\323\050\341\237\116\244"
#define      opts_z	1
#define      opts	((&data[1272]))
	"\051"/* End of data[] */;
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
