#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -f K99_updateReport 
#endif

static  char data [] = 
#define      tst2_z	19
#define      tst2	((&data[3]))
	"\131\314\153\273\042\167\012\307\156\333\051\044\352\152\175\031"
	"\077\002\267\075\266\163\041"
#define      chk1_z	22
#define      chk1	((&data[27]))
	"\364\332\263\133\264\360\327\132\264\355\250\160\372\016\307\201"
	"\170\023\361\205\256\315\140\271\343\066\143\210\067\153\045"
#define      xecc_z	15
#define      xecc	((&data[57]))
	"\062\374\201\163\014\077\063\116\242\242\046\246\025\145\273\155"
	"\170\302\064"
#define      msg1_z	42
#define      msg1	((&data[78]))
	"\363\017\242\224\105\337\130\342\371\050\345\062\267\154\321\117"
	"\051\101\270\342\367\255\065\017\131\156\127\150\132\025\332\134"
	"\011\234\155\054\106\373\044\000\363\105\177\035\163\334\302\374"
	"\140\260\035\364\155\015"
#define      chk2_z	19
#define      chk2	((&data[128]))
	"\104\150\023\107\220\024\154\027\054\151\016\012\043\253\253\375"
	"\046\036\011\254\252\112\174"
#define      date_z	1
#define      date	((&data[150]))
	"\133"
#define      pswd_z	256
#define      pswd	((&data[201]))
	"\356\111\077\002\311\363\366\331\225\212\036\222\352\317\257\337"
	"\075\275\307\205\176\013\060\310\207\106\070\137\067\000\152\046"
	"\112\252\050\023\235\036\355\063\251\014\305\223\333\165\162\031"
	"\063\072\076\356\272\024\263\362\320\161\000\307\267\162\257\236"
	"\257\166\141\357\233\275\164\125\364\321\053\127\230\277\023\055"
	"\343\121\033\235\146\317\220\066\101\220\375\370\002\254\226\262"
	"\042\367\241\276\264\025\024\250\347\100\000\200\000\023\255\343"
	"\145\311\201\313\230\021\001\331\242\376\321\244\253\150\126\315"
	"\140\367\214\024\015\240\275\364\341\276\164\341\321\042\304\066"
	"\353\106\002\204\127\003\136\371\002\057\236\255\230\365\173\370"
	"\355\007\015\372\250\313\357\211\211\143\152\133\206\057\221\161"
	"\165\223\366\315\227\124\307\231\204\145\107\034\132\302\025\110"
	"\312\042\102\163\355\061\374\167\225\147\322\033\227\143\215\014"
	"\367\203\332\216\330\241\050\134\007\157\170\142\062\215\252\374"
	"\260\354\157\236\036\154\025\264\323\347\320\153\113\135\167\103"
	"\341\121\321\271\363\372\025\372\151\216\134\233\034\007\230\314"
	"\364\007\152\022\164\177\306\110\147\226\263\262\364\052\365\326"
	"\174\307\220\160\301\246\152\053\065\307\307\121\316\137\035\302"
	"\147\210\325\333\010\234\044\157\063\327\041\050\001\027\376\176"
	"\336\217\236\261"
#define      inlo_z	3
#define      inlo	((&data[459]))
	"\031\150\163"
#define      text_z	764
#define      text	((&data[477]))
	"\055\114\264\230\162\376\103\233\022\340\272\377\024\143\013\011"
	"\345\331\125\301\113\012\124\124\130\131\364\354\225\023\032\265"
	"\007\106\000\321\352\062\345\116\313\244\372\104\204\145\304\030"
	"\032\240\307\011\275\335\027\035\305\025\237\275\213\365\215\215"
	"\067\072\300\337\132\064\352\155\134\367\030\330\233\301\107\114"
	"\274\336\275\114\040\070\174\067\172\131\014\273\375\072\047\072"
	"\311\127\165\203\154\211\221\210\140\160\342\020\242\312\026\233"
	"\207\067\364\143\244\121\335\005\056\233\116\112\117\162\325\276"
	"\206\236\166\162\325\106\076\013\046\324\313\162\073\362\010\021"
	"\270\351\353\351\263\120\302\312\341\162\160\016\240\317\136\340"
	"\277\221\272\263\005\067\367\265\057\137\175\150\237\270\331\270"
	"\244\030\205\211\071\155\141\361\044\030\115\302\111\070\041\052"
	"\366\051\225\344\104\144\142\351\033\351\325\062\227\311\131\345"
	"\305\231\130\166\204\221\226\322\266\060\027\013\275\131\345\344"
	"\352\014\036\037\257\033\023\134\334\304\076\106\106\153\221\000"
	"\045\245\207\257\070\043\161\045\017\260\256\062\365\150\032\262"
	"\330\345\056\161\142\237\000\021\103\067\145\272\025\205\120\053"
	"\000\340\322\317\261\226\222\243\347\013\334\227\200\000\040\156"
	"\070\103\106\351\022\055\050\156\201\236\306\277\254\247\016\144"
	"\004\134\303\130\237\136\170\263\024\366\114\235\301\304\154\124"
	"\241\213\003\243\045\323\313\346\322\220\030\277\213\304\134\212"
	"\371\012\266\333\024\124\307\223\375\263\015\121\225\141\021\233"
	"\126\133\333\266\152\310\307\121\252\171\004\317\003\104\361\207"
	"\252\365\322\005\235\243\317\175\002\054\022\164\167\307\373\237"
	"\053\355\175\055\141\362\304\205\154\340\367\125\237\160\202\125"
	"\360\243\111\337\017\245\124\053\313\236\350\160\127\277\344\017"
	"\112\217\054\050\132\313\011\214\151\231\266\043\143\375\032\126"
	"\371\326\324\303\121\364\310\026\036\227\155\241\104\360\012\267"
	"\361\351\131\345\066\206\066\000\365\357\156\067\154\363\355\216"
	"\214\212\347\235\241\016\240\325\257\212\225\340\210\153\244\252"
	"\347\000\030\056\217\071\321\221\120\172\242\041\171\027\354\112"
	"\362\111\312\050\074\267\203\210\205\325\035\063\123\315\374\334"
	"\011\041\033\052\324\367\045\355\156\047\015\162\235\145\277\267"
	"\242\156\077\173\331\327\156\303\311\374\036\324\014\235\100\265"
	"\205\001\032\344\153\111\226\271\234\111\352\335\241\310\067\257"
	"\304\016\116\365\270\016\355\230\075\167\006\331\105\341\372\071"
	"\155\314\153\201\004\111\107\104\177\004\342\156\354\116\327\005"
	"\174\307\255\276\310\124\142\007\215\150\207\363\256\342\117\374"
	"\363\126\336\114\225\226\242\011\242\055\111\142\040\347\015\261"
	"\253\073\050\325\211\330\006\363\111\321\236\001\114\313\132\171"
	"\210\270\242\077\007\067\166\047\035\244\010\373\307\072\320\345"
	"\102\274\030\217\173\044\154\006\103\160\264\001\127\030\334\163"
	"\176\310\200\225\031\313\253\035\201\134\071\075\150\360\130\022"
	"\104\254\204\305\173\047\376\015\312\304\047\107\045\227\171\207"
	"\012\124\072\040\211\142\337\341\056\055\231\141\256\133\250\021"
	"\165\271\337\345\153\206\315\264\041\245\304\203\171\161\141\033"
	"\071\366\272\223\334\150\336\335\057\224\013\347\007\117\251\064"
	"\045\057\061\111\313\165\366\163\216\206\366\060\051\272\166\255"
	"\121\244\277\255\337\002\311\302\164\327\210\332\367\347\117\151"
	"\000\202\244\236\064\352\154\257\270\201\142\346\315\027\176\100"
	"\025\301\334\050\242\226\047\267\372\063\221\361\032\341\133\032"
	"\144\377\271\230\351\046\110\241\247\253\207\165\302\006\265\330"
	"\310\222\000\153\050\047\042\043\132\264\024\165\225\160\217\371"
	"\157\111\222\131\157\333\372\026\206\202\214\110\211\101\041\121"
	"\324\041\275\374\110\340\040\243\224\064\030\052\244\250\044\024"
	"\362\267\155\141\222\150\170\030\352\004\141\164\106\202\306\032"
	"\244\203\027\354\143\067\220\370\154\251\042\020\122\106\045\104"
	"\376"
#define      msg2_z	19
#define      msg2	((&data[1378]))
	"\373\035\251\225\260\337\000\354\301\257\076\214\275\323\201\375"
	"\340\146\223\336\363\031\346\042"
#define      shll_z	8
#define      shll	((&data[1400]))
	"\215\043\145\136\340\046\250\331\270\040"
#define      tst1_z	22
#define      tst1	((&data[1410]))
	"\231\370\071\373\340\223\317\314\321\341\070\103\124\154\053\156"
	"\335\214\111\355\033\351\003\036\007\320"
#define      rlax_z	1
#define      rlax	((&data[1435]))
	"\325"
#define      lsto_z	1
#define      lsto	((&data[1436]))
	"\060"
#define      opts_z	1
#define      opts	((&data[1437]))
	"\004"/* End of data[] */;
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
