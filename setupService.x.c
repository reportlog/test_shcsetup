#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -e 31/12/2222 -r -f setupService 
#endif

static  char data [] = 
#define      chk2_z	19
#define      chk2	((&data[3]))
	"\370\052\373\104\036\277\177\162\366\245\312\117\306\267\061\151"
	"\020\175\212\142\026\047\040\003\133"
#define      chk1_z	22
#define      chk1	((&data[25]))
	"\113\135\032\330\200\321\265\174\172\044\245\336\124\244\007\257"
	"\055\367\356\341\313\151\161\056\322\022"
#define      tst1_z	22
#define      tst1	((&data[55]))
	"\351\267\063\311\251\276\232\275\331\042\013\172\213\246\254\361"
	"\341\257\224\060\206\306\137\001\255\063\161\175\253"
#define      msg2_z	19
#define      msg2	((&data[80]))
	"\031\305\061\056\357\107\370\243\330\324\172\152\111\206\303\201"
	"\307\230\205\307\302\366\223"
#define      rlax_z	1
#define      rlax	((&data[103]))
	"\076"
#define      opts_z	1
#define      opts	((&data[104]))
	"\224"
#define      text_z	4856
#define      text	((&data[860]))
	"\214\020\031\137\042\222\057\245\173\346\330\105\130\126\360\332"
	"\171\356\242\074\345\065\276\323\363\074\342\264\025\202\237\242"
	"\222\271\002\264\113\062\132\307\030\063\014\161\211\375\113\003"
	"\354\356\100\321\044\376\245\030\073\207\315\121\011\155\363\234"
	"\046\365\121\162\050\253\071\100\336\106\262\150\103\376\153\057"
	"\354\254\001\021\253\246\051\346\055\366\067\067\143\053\324\212"
	"\041\045\374\111\320\066\212\257\174\074\030\300\072\204\360\046"
	"\060\361\070\333\227\141\301\305\127\371\375\273\044\321\106\105"
	"\366\102\217\307\171\031\167\365\125\217\266\217\023\246\266\103"
	"\227\356\036\057\120\340\364\250\331\361\143\376\303\252\104\272"
	"\354\323\201\145\354\371\133\102\210\021\321\234\270\210\340\120"
	"\167\376\177\307\337\164\157\271\145\323\267\051\175\374\343\152"
	"\317\145\317\274\136\053\376\347\075\320\204\365\131\144\105\320"
	"\143\304\230\102\070\007\374\236\333\264\307\130\260\253\303\200"
	"\020\223\074\157\276\073\126\373\013\333\361\145\077\066\065\242"
	"\373\316\345\064\325\341\323\261\225\233\012\105\106\315\306\126"
	"\140\002\305\037\075\034\033\111\367\014\256\067\103\344\331\076"
	"\262\277\163\210\240\106\072\066\341\104\174\047\022\102\176\162"
	"\104\104\222\202\141\255\314\130\272\173\217\375\137\151\074\022"
	"\050\257\233\311\366\325\377\327\032\173\377\054\275\175\237\002"
	"\302\062\204\043\340\120\174\232\313\013\227\053\165\324\076\236"
	"\203\332\147\171\260\146\121\312\341\120\367\237\316\227\241\221"
	"\311\045\264\251\166\060\104\102\074\333\155\261\260\254\117\064"
	"\206\267\256\066\035\377\001\377\120\370\237\037\217\100\260\131"
	"\146\144\003\335\225\107\037\321\043\215\203\323\071\323\007\300"
	"\212\265\366\250\265\367\250\005\360\107\044\200\207\325\332\356"
	"\071\335\313\316\044\352\240\107\170\043\033\261\367\042\161\201"
	"\330\150\052\215\140\322\222\121\031\267\321\241\214\254\217\306"
	"\211\133\225\256\105\065\365\275\131\020\157\120\063\341\322\013"
	"\112\374\230\253\317\053\374\351\342\316\212\157\172\032\065\004"
	"\165\313\262\273\001\247\171\133\270\350\254\354\312\176\367\024"
	"\173\220\277\112\274\274\063\236\212\276\016\004\330\104\010\116"
	"\017\273\011\021\142\202\154\033\153\030\010\065\227\000\112\022"
	"\220\011\135\114\305\221\353\120\120\372\124\051\076\135\167\116"
	"\030\201\137\173\003\313\227\156\344\237\244\173\237\356\216\060"
	"\370\354\175\276\176\151\016\316\143\143\367\241\301\157\360\332"
	"\360\117\125\364\033\355\143\377\215\007\173\055\366\011\136\356"
	"\365\333\254\163\104\273\102\247\036\071\111\337\250\071\271\231"
	"\210\017\215\244\374\360\243\212\367\036\267\356\050\025\334\035"
	"\361\211\221\065\104\323\335\142\015\046\102\266\140\373\117\351"
	"\013\334\215\010\314\061\222\304\120\112\262\170\137\217\226\121"
	"\030\050\206\135\373\144\300\010\212\002\276\353\376\015\324\011"
	"\352\141\021\267\223\243\174\343\356\057\134\116\276\362\237\327"
	"\032\045\064\026\211\364\036\024\367\335\377\365\353\324\377\325"
	"\065\020\215\310\264\011\254\243\070\010\361\366\373\220\316\025"
	"\265\003\053\077\370\112\124\357\050\124\345\023\050\344\351\136"
	"\365\166\047\252\177\323\115\270\333\076\257\326\316\175\354\204"
	"\200\030\303\334\027\167\272\366\243\166\347\354\120\105\170\361"
	"\345\055\073\172\313\236\152\013\351\212\257\367\051\111\110\124"
	"\373\010\155\175\253\132\357\171\257\137\134\370\057\312\375\221"
	"\050\267\052\065\311\062\211\352\162\033\172\032\053\125\253\247"
	"\356\045\176\124\152\072\031\227\110\215\316\015\046\260\044\104"
	"\023\366\205\010\202\231\355\300\277\073\072\205\305\040\154\215"
	"\252\347\113\306\235\034\346\122\033\052\060\266\050\274\036\145"
	"\240\106\337\007\056\353\277\233\011\112\375\173\114\225\045\176"
	"\311\060\332\276\313\324\073\175\300\126\020\033\160\112\042\073"
	"\336\017\023\216\266\251\236\341\234\330\204\020\016\077\146\050"
	"\211\136\021\350\163\034\100\264\130\251\363\057\327\024\331\244"
	"\243\107\332\156\257\300\253\360\232\224\115\005\224\270\321\054"
	"\312\334\232\034\015\111\113\351\324\305\325\061\022\321\147\157"
	"\352\031\367\237\030\224\256\022\306\327\044\005\222\112\235\045"
	"\271\064\302\353\001\056\201\303\330\201\143\043\052\116\165\224"
	"\200\137\015\007\325\342\305\170\017\076\217\017\001\370\176\320"
	"\307\260\365\173\032\121\314\146\232\300\354\121\075\161\275\265"
	"\240\225\152\366\214\006\062\063\033\312\014\010\127\215\075\234"
	"\376\126\356\227\143\251\027\011\315\104\073\130\334\057\057\310"
	"\161\227\031\113\273\021\031\117\302\267\054\252\076\041\247\022"
	"\377\142\317\230\031\227\153\055\312\061\343\023\341\370\014\220"
	"\202\036\161\357\141\105\070\041\043\100\171\115\217\275\155\360"
	"\254\176\101\264\043\210\331\342\321\175\320\040\146\240\173\252"
	"\275\045\217\351\277\153\130\116\162\352\261\143\254\254\060\175"
	"\223\327\323\140\321\050\371\112\242\136\043\321\146\114\040\121"
	"\215\164\220\224\374\251\166\123\133\273\027\304\161\065\043\243"
	"\225\130\245\303\217\354\001\263\247\374\270\041\264\354\310\171"
	"\122\323\215\350\267\005\166\233\211\250\127\307\102\244\064\050"
	"\206\355\370\252\340\110\164\164\107\120\260\113\202\271\240\023"
	"\037\014\025\363\101\324\244\034\305\105\121\243\050\150\232\301"
	"\044\120\130\361\175\027\130\326\323\372\345\173\163\216\147\110"
	"\125\344\050\062\153\316\011\304\206\025\116\127\212\217\205\346"
	"\104\170\160\325\151\377\020\321\044\127\304\106\215\047\077\127"
	"\371\042\362\230\275\163\223\201\060\156\203\155\337\346\316\274"
	"\275\105\301\105\227\010\156\315\070\376\135\150\017\367\127\017"
	"\164\267\203\040\353\165\171\301\014\353\345\045\236\163\115\056"
	"\215\001\251\311\250\330\135\042\132\245\223\120\363\033\165\241"
	"\155\144\223\361\135\157\317\104\170\273\323\345\041\337\047\322"
	"\103\100\007\026\212\153\003\025\136\155\071\230\144\230\251\334"
	"\246\376\301\105\115\152\303\301\151\335\362\071\337\155\105\271"
	"\202\050\211\167\267\005\007\304\146\031\245\170\332\170\152\131"
	"\033\225\123\066\347\362\325\331\220\113\057\112\140\225\224\357"
	"\357\103\072\364\031\233\203\102\165\024\322\344\142\174\343\014"
	"\326\050\364\374\001\061\265\257\150\112\120\244\125\066\241\210"
	"\203\312\173\217\200\261\210\374\060\224\101\322\046\211\065\377"
	"\324\047\215\140\174\353\127\073\114\227\300\314\053\033\224\371"
	"\052\177\263\062\321\027\027\305\164\266\164\151\114\225\172\330"
	"\231\171\204\373\034\267\210\316\103\111\146\173\046\161\101\054"
	"\204\371\307\216\067\204\366\236\027\216\236\172\050\135\155\065"
	"\314\132\253\163\363\276\300\214\370\107\066\204\331\245\002\055"
	"\224\313\146\357\040\342\367\150\043\212\266\340\044\073\016\172"
	"\031\016\154\125\247\271\110\012\275\135\141\005\214\075\040\335"
	"\323\030\267\152\343\014\372\116\130\223\024\025\044\170\356\153"
	"\164\122\121\004\035\117\342\370\246\031\115\242\125\221\231\200"
	"\236\163\373\066\044\155\005\124\065\212\070\364\241\236\227\046"
	"\135\146\131\042\057\017\021\331\333\104\340\203\075\247\216\226"
	"\050\226\154\120\266\164\327\001\276\224\226\013\106\220\374\262"
	"\050\047\200\214\323\240\170\361\353\357\306\210\017\207\252\146"
	"\275\022\265\042\033\324\306\010\232\272\047\245\156\225\120\214"
	"\312\263\265\055\224\216\330\304\210\277\317\260\236\335\266\344"
	"\120\121\231\250\002\352\030\311\122\225\134\253\123\371\321\313"
	"\105\103\245\217\050\263\146\075\233\367\135\352\131\345\273\160"
	"\020\313\234\215\153\077\223\352\344\320\277\136\343\121\141\022"
	"\117\157\064\252\223\011\144\037\354\010\344\171\354\046\123\277"
	"\163\371\162\256\205\026\145\210\224\271\213\233\214\354\126\372"
	"\353\324\367\370\113\100\103\141\007\013\316\165\154\227\032\275"
	"\057\146\141\076\312\350\163\130\275\010\070\134\020\256\332\277"
	"\115\253\322\313\065\107\245\050\267\066\175\324\274\143\056\100"
	"\045\130\320\114\077\171\014\212\264\050\216\076\232\051\024\153"
	"\017\003\014\352\130\200\231\144\345\233\340\373\145\216\055\244"
	"\262\034\123\260\034\363\323\335\013\251\161\143\057\341\102\241"
	"\201\103\111\102\051\033\364\001\336\370\356\304\367\035\132\104"
	"\025\213\364\066\364\062\324\331\335\037\063\316\335\050\351\123"
	"\043\266\112\331\265\264\131\265\302\107\330\355\375\154\153\064"
	"\051\036\057\161\204\201\240\216\250\230\143\126\216\165\005\067"
	"\011\114\273\264\011\110\211\145\071\125\133\304\142\174\045\170"
	"\315\126\226\201\061\062\117\022\311\176\177\121\104\306\163\343"
	"\243\145\071\354\010\320\320\103\310\142\350\300\005\046\332\240"
	"\306\267\061\320\005\042\142\167\231\374\053\145\111\163\040\107"
	"\152\347\117\357\113\161\304\374\263\363\142\333\030\331\311\211"
	"\277\363\161\006\342\163\363\331\101\355\330\151\313\065\170\375"
	"\024\230\257\242\243\233\125\373\141\213\066\267\005\063\234\141"
	"\227\123\345\235\355\211\334\014\364\005\022\203\056\223\253\227"
	"\360\072\311\315\070\111\101\327\123\022\355\030\047\231\311\072"
	"\127\002\147\163\177\346\020\252\055\305\227\153\126\045\207\021"
	"\336\307\040\210\342\231\003\340\223\172\246\047\244\371\377\103"
	"\362\364\021\073\200\136\332\245\056\054\310\173\146\122\157\337"
	"\316\370\242\221\162\062\150\311\324\155\231\335\031\256\250\042"
	"\230\203\307\036\012\203\063\130\223\071\125\250\014\207\362\357"
	"\105\062\154\032\377\052\232\211\074\177\320\167\133\325\042\352"
	"\040\176\012\076\234\336\076\060\255\035\147\022\303\247\232\134"
	"\203\144\160\217\015\003\237\035\370\222\315\207\161\241\105\373"
	"\117\236\013\252\011\231\121\216\323\135\174\227\307\100\235\150"
	"\245\255\145\104\004\162\364\047\014\075\157\221\140\370\365\133"
	"\125\046\326\162\213\271\161\041\245\137\313\371\315\003\054\366"
	"\101\021\123\070\306\327\277\250\345\257\112\135\155\347\133\203"
	"\156\277\045\002\222\206\265\072\034\263\236\240\331\076\205\210"
	"\243\127\136\362\337\305\363\015\173\144\373\005\135\107\152\223"
	"\045\257\340\333\140\366\305\162\240\353\335\256\351\200\026\270"
	"\065\046\374\012\242\070\075\207\306\374\262\333\236\335\151\116"
	"\235\350\300\250\313\040\065\103\252\214\315\270\124\036\356\156"
	"\342\341\271\202\053\321\251\235\037\356\161\147\047\164\226\131"
	"\241\115\034\027\141\173\101\211\143\173\342\310\163\227\232\071"
	"\237\116\273\124\365\062\256\130\201\261\037\103\236\115\111\001"
	"\222\260\327\063\317\376\361\226\244\355\113\104\360\316\106\175"
	"\060\153\346\065\003\057\006\176\162\263\154\200\336\040\244\314"
	"\155\070\210\101\166\130\341\272\176\335\133\122\002\003\324\232"
	"\256\317\310\377\310\357\150\256\263\264\305\371\341\150\170\225"
	"\273\011\341\121\240\213\136\233\302\051\111\312\135\051\042\016"
	"\370\251\033\355\165\017\160\310\224\214\361\146\105\227\075\376"
	"\042\305\202\152\127\007\133\146\161\226\231\236\105\216\244\174"
	"\012\333\060\335\340\070\015\204\366\175\172\274\074\071\261\163"
	"\240\051\122\125\245\347\327\305\057\006\137\037\064\371\260\262"
	"\176\131\040\244\112\105\350\275\016\337\216\052\231\062\071\344"
	"\051\074\163\063\241\246\267\107\113\260\340\042\304\271\340\352"
	"\355\253\241\311\040\152\170\262\204\346\250\104\327\132\242\274"
	"\127\022\245\213\103\274\076\262\312\260\350\174\266\011\260\315"
	"\371\235\210\324\247\100\212\123\074\032\353\211\050\250\223\101"
	"\041\372\202\011\047\055\111\034\313\356\321\007\227\300\144\033"
	"\043\132\234\103\145\005\211\161\105\251\142\277\121\323\274\134"
	"\251\105\364\333\230\133\076\076\346\031\115\153\372\376\175\260"
	"\164\125\302\112\033\017\307\244\151\142\351\333\073\325\202\271"
	"\040\324\044\144\237\166\340\355\312\001\057\265\306\242\355\051"
	"\145\357\310\105\001\175\124\007\100\001\241\276\014\364\223\222"
	"\124\175\300\351\214\021\143\066\261\235\352\121\247\226\201\131"
	"\145\106\042\310\072\035\021\023\167\227\364\224\144\326\153\251"
	"\115\014\335\270\276\135\307\101\236\047\175\215\107\031\362\253"
	"\056\312\357\220\335\212\104\344\333\041\074\041\102\055\150\206"
	"\010\121\137\074\323\204\275\147\036\253\236\175\137\246\310\021"
	"\175\313\337\307\246\041\105\261\263\327\267\356\211\013\053\113"
	"\242\220\354\166\070\256\134\135\163\336\124\120\376\134\162\125"
	"\267\325\053\213\170\164\077\150\152\164\164\237\076\065\000\307"
	"\142\274\003\052\353\174\202\354\310\113\235\053\055\246\022\302"
	"\176\036\250\300\371\260\162\203\001\307\037\353\313\036\371\123"
	"\022\202\145\200\021\000\245\233\063\110\274\215\346\164\236\335"
	"\341\214\115\207\257\037\333\154\171\011\031\073\312\317\100\372"
	"\200\142\271\354\165\224\317\216\130\026\103\256\215\254\153\317"
	"\054\070\304\271\160\256\047\136\170\077\327\075\245\131\223\255"
	"\226\244\116\124\136\271\371\152\206\340\053\041\127\377\277\374"
	"\332\206\307\354\335\201\064\313\310\354\257\024\252\155\020\021"
	"\331\257\326\315\220\256\144\074\127\206\051\014\311\204\141\322"
	"\120\137\051\276\253\115\300\253\264\071\052\033\011\034\047\306"
	"\271\252\161\022\007\251\344\133\316\170\145\326\076\253\160\241"
	"\267\103\245\022\354\041\340\166\327\340\141\350\360\143\112\146"
	"\236\063\312\002\070\037\037\360\165\266\320\061\341\310\302\336"
	"\166\177\123\341\225\064\027\140\222\205\131\066\017\247\215\254"
	"\113\357\016\201\320\307\155\367\211\317\053\127\201\072\051\324"
	"\317\210\270\346\353\360\162\074\114\032\270\040\331\240\230\243"
	"\047\065\015\253\021\145\127\127\072\344\223\050\034\000\344\363"
	"\112\220\157\330\103\321\211\130\143\365\212\322\024\040\241\206"
	"\012\071\347\172\001\271\035\043\206\233\324\041\033\110\377\075"
	"\356\362\270\335\361\371\060\337\051\154\213\022\347\253\220\135"
	"\031\205\263\001\240\012\072\013\160\353\147\214\324\236\354\076"
	"\112\332\177\245\226\213\141\154\271\040\256\022\267\053\266\312"
	"\003\017\055\050\337\036\101\277\246\211\174\251\234\115\313\120"
	"\311\045\111\352\012\001\330\067\250\360\213\131\133\064\265\374"
	"\354\135\315\131\207\307\164\047\266\370\210\061\330\031\231\007"
	"\071\153\303\350\273\001\302\173\364\344\005\116\132\023\115\103"
	"\245\347\370\310\325\074\160\152\276\237\046\374\045\027\124\322"
	"\302\231\235\123\120\131\307\133\016\056\107\372\033\157\312\056"
	"\361\355\343\251\277\114\100\167\314\274\363\221\004\316\366\103"
	"\261\255\315\051\107\373\032\047\013\130\131\230\106\007\136\322"
	"\152\130\172\374\137\265\363\053\127\340\244\254\311\155\263\333"
	"\340\235\265\024\033\237\047\037\012\020\123\231\307\265\316\171"
	"\344\114\157\163\351\204\047\375\061\112\356\347\366\164\237\140"
	"\001\325\305\266\122\123\252\262\271\351\151\331\342\363\046\140"
	"\032\272\311\127\073\017\317\352\370\110\174\265\006\165\064\371"
	"\027\363\013\130\300\107\271\165\267\145\227\006\050\263\031\200"
	"\076\044\067\066\170\167\252\326\262\033\123\131\042\310\324\123"
	"\010\022\332\227\157\037\260\314\267\237\323\306\164\135\306\352"
	"\046\151\057\106\142\153\317\251\075\153\373\364\017\230\220\257"
	"\374\276\113\236\342\361\242\346\210\314\122\124\144\314\110\227"
	"\370\275\164\107\135\240\043\136\374\362\071\130\057\334\261\073"
	"\367\255\205\060\077\236\325\032\231\357\002\146\034\013\365\127"
	"\333\372\076\376\161\353\232\075\007\166\040\266\051\323\137\353"
	"\166\325\202\266\030\326\326\337\201\200\306\234\027\330\320\306"
	"\234\205\053\366\220\322\330\240\251\366\275\027\146\344\230\052"
	"\266\357\101\363\216\235\370\363\074\140\067\266\024\033\027\231"
	"\221\167\147\232\162\111\352\067\005\354\346\161\027\353\074\042"
	"\070\373\161\061\377\260\007\274\335\031\252\104\050\332\360\033"
	"\052\215\124\240\320\333\234\336\055\000\341\114\063\073\114\022"
	"\237\145\262\344\171\153\265\250\212\075\057\266\204\074\265\353"
	"\314\250\141\275\157\132\247\016\066\217\164\205\100\056\246\214"
	"\020\103\034\066\027\343\160\176\003\152\363\252\221\362\200\370"
	"\327\304\374\344\126\153\063\031\046\263\273\240\355\142\202\210"
	"\274\026\230\031\331\246\173\320\135\322\336\166\274\002\077\316"
	"\156\117\111\052\250\227\273\302\262\104\101\277\144\046\101\074"
	"\230\124\061\300\226\117\141\313\331\142\363\333\333\241\244\343"
	"\156\001\372\331\226\076\060\126\066\127\276\151\173\003\317\057"
	"\203\002\244\047\051\105\240\062\310\372\132\046\036\103\320\012"
	"\352\205\106\000\017\007\272\322\134\277\205\241\241\147\235\326"
	"\274\265\262\246\314\016\275\076\233\222\215\170\362\312\367\047"
	"\047\257\341\053\055\372\163\365\344\230\216\063\220\241\003\217"
	"\342\170\110\367\167\257\216\133\137\213\025\014\216\261\012\115"
	"\307\301\366\207\134\003\344\310\011\332\330\134\102\026\020\347"
	"\136\360\307\105\112\246\154\077\121\016\066\143\120\270\217\040"
	"\347\223\270\036\352\231\112\253\055\121\026\364\227\202\160\236"
	"\023\326\133\013\132\133\101\224\344\336\207\172\066\227\023\322"
	"\235\206\101\027\205\125\177\333\222\331\066\302\071\352\232\101"
	"\154\134\004\211\243\103\130\204\024\125\024\254\212\040\326\176"
	"\307\064\000\015\153\021\215\156\247\215\352\173\152\372\226\073"
	"\125\360\210\341\163\116\271\016\025\271\374\251\357\351\155\322"
	"\205\224\163\062\043\116\041\333\230\321\370\256\275\216\076\335"
	"\107\177\050\176\132\136\071\061\344\342\214\314\346\110\224\035"
	"\331\114\171\001\052\242\131\044\213\140\132\152\266\272\315\373"
	"\070\217\061\173\230\021\215\102\266\101\125\113\067\276\223\021"
	"\274\067\200\366\043\313\003\100\241\056\327\311\054\074\307\346"
	"\037\270\262\130\014\346\276\315\273\140\012\040\004\035\317\351"
	"\322\046\315\316\000\004\047\300\005\150\017\105\242\152\263\051"
	"\134\231\107\304\152\207\171\364\140\365\015\344\044\072\354\056"
	"\202\105\151\312\346\273\325\117\307\243\261\017\356\124\166\156"
	"\047\376\226\203\200\262\272\333\220\214\101\361\040\317\106\077"
	"\137\320\241\040\235\173\365\325\034\206\023\247\162\136\166\073"
	"\175\041\214\356\100\225\002\305\255\064\230\345\225\352\330\012"
	"\200\002\040\140\111\025\053\075\311\172\212\023\072\062\061\010"
	"\332\251\333\274\164\314\134\154\057\356\055\267\041\035\375\305"
	"\106\157\052\262\347\276\052\215\172\211\154\072\216\251\016\042"
	"\122\115\176\107\203\054\244\205\335\366\055\025\315\042\130\010"
	"\233\027\101\016\167\240\270\157\175\042\260\032\245\370\364\312"
	"\365\170\132\047\024\013\260\274\152\013\173\217\001\354\371\154"
	"\124\374\323\300\125\046\055\012\006\017\031\173\323\136\334\364"
	"\035\351\040\321\024\153\366\147\154\201\235\033\230\165\053\145"
	"\344\156\161\350\003\174\153\241\066\021\231\116\121\003\036\157"
	"\302\276\174\131\026\005\015\173\207\314\025\345\357\237\112\067"
	"\051\240\010\011\270\203\201\154\356\160\234\032\004\236\063\160"
	"\164\370\066\206\140\074\161\154\356\050\212\265\043\005\361\344"
	"\316\162\026\250\203\222\027\162\170\235\160\323\313\264\365\013"
	"\261\173\347\234\005\063\042\325\244\002\034\265\322\230\231\373"
	"\173\331\144\005\132\367\140\146\037\156\247\001\136\323\330\325"
	"\357\264\100\130\175\012\206\012\340\120\335\342\202\325\145\216"
	"\355\252\367\221\355\023\331\241\266\317\216\302\142\032\206\354"
	"\263\266\007\046\310\225\041\060\137\004\216\052\030\111\267\010"
	"\173\012\360\251\162\263\142\347\243\025\311\206\360\136\066\333"
	"\160\343\211\177\315\245\060\157\315\161\142\374\143\250\240\242"
	"\164\253\272\356\360\016\345\210\372\364\062\300\141\076\176\265"
	"\361\251\304\325\147\323\344\155\173\121\142\367\313\364\220\106"
	"\312\026\027\144\357\363\175\176\350\236\146\145\110\135\267\331"
	"\265\343\256\163\321\307\332\246\165\226\066\367\225\364\230\017"
	"\371\274\001\277\165\011\365\003\115\363\363\124\333\310\247\302"
	"\341\073\302\247\147\350\002\026\215\043\310\174\206\263\341\011"
	"\207\326\120\306\223\256\043\217\145\232\304\104\063\370\372\016"
	"\272\163\270\231\222\300\167\374\205\316\261\137\306\011\240\055"
	"\145\036\022\376\040\136\105\357\062\217\264\313\016\120\073\155"
	"\236\256\301\225\350\365\074\216\207\354\264\370\164\160\141\255"
	"\102\175\037\102\157\141\172\025\105\327\044\276\257\277\072\026"
	"\052\146\361\170\012\241\350\035\163\321\111\124\240\115\124\273"
	"\217\035\133\151\145\115\032\327\317\101\100\053\045\375\253\353"
	"\313\253\173\263\325\270\064\316\125\075\352\232\320\114\211\076"
	"\074\055\360\001\062\312\110\055\312\055\327\376\300\320\315\306"
	"\375\032\254\365\233\315\235\150\243\233\264\170\320\266\030\214"
	"\023\001\034\250\014\325\065\211\261\263\145\171\034\070\032\001"
	"\054\212\031\201\263\006\067\131\124\026\163\125\161\043\044\272"
	"\016\174\225\332\373\271\347\122\031\156\232\025\060\144\136\166"
	"\122\003\116\154\107\350\267\355\246\227\033\313\371\356\023\143"
	"\072\364\057\101\203\324\040\104\111\065\034\335\126\377\170\124"
	"\165\072\132\176\022\067\251\247\025\162\035\066\322\224\176\241"
	"\321\036\212\335\156\351\020\374\034\001\274\267\220\030\072\316"
	"\334\225\045\057\351\213\325\050\150\054\326\105\137\101\023\001"
	"\250\062\377\354\027\171\014\314\033\036\225\125\175\135\316\341"
	"\164\351\227\077\302\100\235\372\000\276\222\077\312\126\172\260"
	"\076\334\023\160\237\222\274\350\245\070\047\027\001\223\056\325"
	"\101\072\024\303\045\262\302\137\102\142\122\115\362\301\341\003"
	"\317\367\171\036\143\036\147\246\351\237\213\022\043\166\372\063"
	"\077\271\347\042\336\105\344\240\316\161\071\041\102\330\211\260"
	"\244\225\265\017\207\172\360\232\045\134\211\332\224\153\060\375"
	"\133\150\262\315\310\067\221\355\333\217\345\272\031\274\322\140"
	"\337\046\070\274\214\244\105\237\247\216\013\340\100\230\215\043"
	"\145\214\020\215\275\227\277\311\305\057\151\166\114\135\107\027"
	"\210\153\362\023\134\342\265\235\107\015\224\157\347\220\166\133"
	"\344\105\074\126\006\356\356\157\143\347\375\057\010\263\005\117"
	"\264\310\155\077\242\266\057\316\113\167\325\217\012\106\145\306"
	"\337\304\233\111\363\156\313\314\026\255\165\206\257\373\055\346"
	"\376\034\375\351\116\114\334\116\202\321\037\023\043\221\000\024"
	"\116\375\067\133\030\070\025\270\103\126\161\310\377\043\202\005"
	"\005\077\121\043\011\105\103\314\000\262\251\221\375\267\302\362"
	"\350\011\217\003\357\127\175\273\165\233\062\236\005\254\057\265"
	"\012\314\142\220\066\271\065\062\317\060\275\253\362\334\162\200"
	"\137\275\120\255\022\366\221\364\254\243\117\216\241\012\150\032"
	"\022\250\132\043\316\024\366\052\035\135\310\016\341\365\175\371"
	"\341\321\216\070\341\222\120\331\173\326\245\206\115\026\110\355"
	"\333\177\051\210\202\024\146\033\110\040\234\013\137\334\134\166"
	"\117\046\051\254\336\241\254\155\355\156\316\155\234\075\344\223"
	"\375\154\267\065\251\236\153\316\247\010\254\265\000\003\247\167"
	"\161\243\132\377\145\101\357\052\250\272\131\221\027\265\166\325"
	"\104\046\344\013\201\007\007\205\232\121\341\211\240\260\136\015"
	"\177\101\351\333\261\141\316\104\004\224\113\122\332\014\354\075"
	"\174\122\075\343\376\331\250\145\046\354\110\136\224\350\010\337"
	"\342\354\033\205\323\126\207\366\065\173\377\365\347\327\251\037"
	"\227\246\154\231\137\211\147\230\232\167\274\126\010\025\151\006"
	"\106\366\224\045\213\223\013\316\234\162\254\265\205\034\206\223"
	"\074\214\037\372\030\307\052\112\067\246\305\273\204\347\221\222"
	"\147\107\224\056\264\015\234\371\014\312\006\112\226\340\376\123"
	"\050\057\114\035\131\333\214\126\116\137\001\326\107\251\317\311"
	"\240\174\230\126\131\125\120\074\142\317\127\317\207\172\233\031"
	"\064\346\365\144\331\002\245\276\064\043\305\305\227\362\264\235"
	"\275\347\213\252\170\067\301\303\346\304\261\343\214\211\047\247"
	"\256\152\156\341\112\077\357\245\344\313\225\175\160\173\255\256"
	"\355\100\240\013\310\122\354\010\074\062\231\172\267\056\024\375"
	"\247\366\275\355\214\220\116\105\333\035\123\103\042\157\005\147"
	"\031\317\212\103\235\357\333\122\312\062\064\001\273\051\310\223"
	"\337\245\203\347\134\026\101\177\213\203\137\164\373\373\372\003"
	"\210\021\316\252\331\260\340\274\040\355\071\053\036\040\113\027"
	"\270\354\363\237\002\106\116\353\303\263\243\175\031\265\306\165"
	"\063\022\047\240\105\164\346\350\053\017\141\170\142\030\147\212"
	"\154\115\236\224\062\207\362\047\375\031\322\175\355\037\065\310"
	"\136\344\237\054\142\214\260\342\244\164\132\007\214\302\222\371"
	"\020\060\215\102\270\200\152\265\232\074\063\207\133\151\120\271"
	"\116\360\346\260\174\227\222\040\013\355\050\230\260\272\221\300"
	"\353\037\002\243\237\155\131\071\251\214\300\005\366\021\276\104"
	"\001\245\364\175\074\207\236\110\164\306\341\045\201\162\345\154"
	"\221\350\020\061\125\151\153\377\366\053\004\354\074\303\060\075"
	"\150\045\273\245\254\131\355\041\040\317\106\242\101\054\016\323"
	"\025\037\005\153\210\160\152\176\234\156\153\330\061\233\026\232"
	"\301\322\077\156\053\055\217\114\374\326\356\076\002\375\022\030"
	"\034\027\203\244\207\356\043\043\134\216\374\216\052\023\051\354"
	"\345\151\132\021\227\351\136\224\277\114\322\302\112\345\333\146"
	"\374\136\013\204\115\056\250\251\275\245\070\350\271\142\324\237"
	"\313\056\261\142\027\017\366\327\134\311\232\246\256\165\014\253"
	"\324\027\060\041\106\331\313\004\176\004\354\067\146\300\326\061"
	"\356\207\224\005\227\213\335\363\124\170\231\003\355\246\257\302"
	"\276\337\343\005\270\257\011\066\263\365\156\031\265\105\113\243"
	"\315\337\251\144\152\206\130\277\376\362\302\354\230\161\256\127"
	"\121\222\134\011\101\145\100\364\133\257\015\020\364\131\263\302"
	"\070\135\047\243\344\177\142\342\162\045\317\013\226\176\142\350"
	"\020\277\361\121\045\062\106\200\341\124\220\326\255\104\231\345"
	"\241\300\211\206\100\353\150\262\020\070\275\247\266\037\217\306"
	"\336\201\030\004\263\136\204\225\263\025\153\140\132\004\106\374"
	"\305\317\202\005\272\353\267\313\043\164\162\331\224\002\240\163"
	"\203\271\167\067\030\374\314\313\021\070\053\153\075\161\147\002"
	"\101\351\010\373\324\277\307\370\064\072\322\311\074\162\074\300"
	"\054\264\367\104\260\304\017\302\375\073\055\072\254\225\075\355"
	"\176\105\351\123\005\260\113\072\352\035\003\047\220\100\347\274"
	"\365\337\001\246\243\020\150\241\113\226\334\370\053\031\346\252"
	"\137\320\376\145\201\112\237\154\147\243\223\370\344\173\264\332"
	"\132\266\200\376\306\351\237\022\200\173\013\254\225\361\126\365"
	"\302\125\132\103\237\372\257\007\236\103\377\203\277\264\135\031"
	"\152\336\030\060\310\270\103\110\064\116\364\312\100\113\277\002"
	"\240\032\106\100\025\366\107\263\071\106\066\370\372\224\022\144"
	"\163\053\225\073\344\331\203\030\047\170\342\150\303\242\152\144"
	"\274\261\244\322\247\353\205\341\062\274\332\054\121\354\221\304"
	"\030\047\377\374\001\203\025\051\374\370\221\300\232\374\045\127"
	"\255\311\051\124\265\257\065\350\154\017\025\275\374\247\201\025"
	"\317\201\021\320\005\047\371\002\037\213\302\272\207\347\022\065"
	"\261\073\212\147\353\300\117\127\320\144\024\314\013\226\342\332"
	"\030\363\253\035\032\245\037\072\060\342\364\270\311\006\355\173"
	"\102\170\342\055\070\062\205\010\226\232\325\242\060\267\175\111"
	"\253\050\147\306\315\206\000\376\151\365\266\063\373\244\256\076"
	"\035\221\154\125\303\361\136\132\213\063\375\274\353\172\005\226"
	"\243\154\135\161\363\135\157\134\122\046\220\116\313\076\214\350"
	"\317\370\076\223\351\234\355\165\320\352\062\273\145\067\122\010"
	"\244\257\172\227\015\352\364\137\021\204\256\334\303\072\305\223"
	"\062\003\046\034\240\023\222\160\376\304\054\143\374\177\154\240"
	"\056\346\070\074\320\054\234\341\261\112\276\164\204\203\007\267"
	"\206\056\323\047\101\146\227\077\052\304\242\047\103\016\307\162"
	"\365\377\257\305\054\113\247\336\225\145\123\031\351\133\320\160"
	"\211\244\227\312\012\057\012\065\363\255\134\067\274\044\252\261"
	"\044\131\167\120\244\037\057\071\204\202\123\156\335\043\336\146"
	"\310\165\060\323\244\073\011\230\350\145\317\244\212\172\126\256"
	"\323\315\377\167\355\056\261\162\260\004\340\215\050\276\363\360"
	"\064\044\303\330\140\315\161\110\063\100\355\275\273\103\153\216"
	"\021\153\006\376\231\267\161\111\274\121\327\344\020\313\324\104"
	"\360\230\035\120\145\216\230\231\317\206\126\212\312\302\030\333"
	"\055\037\332\306\326\113\020\223\235\347\167\255\263\114\361\243"
	"\345\016\363\112\234\214\343\154\022\072\366\334\374\017\270\051"
	"\056\223\360\005\337\000\230\174\350\017\051\233\133\033\077\100"
	"\051\062\213\306\277\157\062\322\251\051\257\246\070\147\320\146"
	"\373\300\153\332\301\003\126\252\023\200\105\156\233\205\257\305"
	"\270\072\214\167\252\277\111\124\350\371\373\040\140\313\206\134"
	"\214\362\066\116\366\215\370\011\016\076\167\251\303\047\157\173"
	"\141\374\362\014\273\074\140\243\065\133\303\226\047\112\362\263"
	"\075\051\001\063\266\371\074\305\067\264\157\373\333\336\166\074"
	"\332\151\111\225\245\252\071\333\006\375\162\055\110\145\341\205"
	"\216\343\270\105\335\365\012\025\251\171\020\204\130\206\301\063"
	"\357\012\311\225\264\002"
#define      lsto_z	1
#define      lsto	((&data[6831]))
	"\021"
#define      tst2_z	19
#define      tst2	((&data[6836]))
	"\110\311\315\327\372\101\255\121\174\165\036\123\161\243\004\262"
	"\214\336\150\362\061\204\275\255"
#define      pswd_z	256
#define      pswd	((&data[6863]))
	"\173\047\237\044\241\257\250\045\351\067\372\317\003\001\330\045"
	"\151\037\025\110\127\304\001\260\145\255\050\150\124\377\210\267"
	"\136\314\347\210\156\275\255\130\364\250\050\367\251\001\035\023"
	"\040\063\134\170\367\136\051\135\013\121\306\140\121\116\030\260"
	"\032\377\070\211\274\346\341\261\216\012\251\070\013\306\114\054"
	"\371\251\244\361\007\315\116\023\037\025\163\161\143\214\041\175"
	"\213\132\006\110\101\350\372\317\362\243\010\376\151\124\052\143"
	"\375\316\125\004\234\243\030\274\271\214\055\034\030\117\232\243"
	"\251\240\354\352\211\346\272\173\211\302\172\363\027\244\127\024"
	"\163\254\031\020\120\061\314\011\275\372\046\326\111\300\171\363"
	"\140\146\336\352\115\231\145\327\133\340\312\162\204\042\207\367"
	"\316\241\007\037\323\324\051\221\316\117\147\027\017\341\013\160"
	"\107\351\132\224\202\300\154\336\240\066\121\044\131\330\034\050"
	"\172\044\107\115\370\161\336\306\300\105\336\317\046\351\077\156"
	"\323\232\003\126\132\157\064\372\246\206\037\377\136\073\050\331"
	"\140\157\046\130\340\004\036\241\112\375\160\160\347\260\337\272"
	"\112\342\020\245\122\105\237\372\066\151\055\045\164\366\273\050"
	"\371\054\343\371\017\314\102\127\226\017\057\103\226\114\315\021"
	"\164\155\066\025\035\336\020\123\110\075"
#define      msg1_z	42
#define      msg1	((&data[7162]))
	"\064\345\056\141\311\050\160\225\054\022\356\266\016\201\002\074"
	"\000\037\036\005\261\127\243\173\323\171\052\216\125\137\336\121"
	"\002\157\172\105\074\051\031\322\030\231\321\213\066\251\126\021"
	"\326\232\152\310"
#define      date_z	11
#define      date	((&data[7207]))
	"\157\307\175\252\310\022\252\211\300\257\271\371\020\104"
#define      shll_z	8
#define      shll	((&data[7220]))
	"\140\007\137\330\165\305\012\371\252\127"
#define      inlo_z	3
#define      inlo	((&data[7230]))
	"\030\175\203"
#define      xecc_z	15
#define      xecc	((&data[7233]))
	"\312\056\005\065\205\044\331\371\132\150\224\322\242\074\161\033"/* End of data[] */;
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
