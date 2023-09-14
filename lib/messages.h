! Part of PunyInform: A small stdlib and parser for interactive fiction
! suitable for old-school computers such as the Commodore 64.
! Designed to be similar, but not identical, to the Inform 6 library.
!
System_file;

!
! Simple string messages
!

#Ifndef MSG_TAKE_YOURSELF;
Constant MSG_TAKE_YOURSELF "Du er noget selvoptaget.";
#EndIf;
#Ifndef MSG_TAKE_NO_CAPACITY;
Constant MSG_TAKE_NO_CAPACITY "Du bærer allerede på for meget.";
#EndIf;
#Ifndef MSG_TAKE_DEFAULT;
Constant MSG_TAKE_DEFAULT "Taget.";
#EndIf;
#Ifndef MSG_DRINK_NOTHING_SUITABLE;
Constant MSG_DRINK_NOTHING_SUITABLE "Der er intet værd at drikke her.";
#EndIf;
#Ifndef MSG_DROP_DROPPED;
Constant MSG_DROP_DROPPED "Smidt.";
#EndIf;
#Ifndef MSG_THROW_ANIMATE;
Constant MSG_THROW_ANIMATE "Meningsløst.";
#Endif;
#Ifndef MSG_THROW_DEFAULT;
Constant MSG_THROW_DEFAULT "Da det kommer til stykket, tør du ikke.";
#Endif;
#Ifndef MSG_SMELL_DEFAULT;
Constant MSG_SMELL_DEFAULT "Du lugter ikke noget uventet.";
#Endif;
#Ifndef MSG_LISTEN_DEFAULT;
Constant MSG_LISTEN_DEFAULT "Du hører ikke noget uventet.";
#Endif;
#Ifndef MSG_TELL_PLAYER;
Constant MSG_TELL_PLAYER "Du taler lidt med dig selv.";
#Endif;
#Ifndef MSG_TELL_DEFAULT;
Constant MSG_TELL_DEFAULT "Ingen reaktion.";
#Endif;
#Ifndef MSG_ENTER_ALREADY;
Constant MSG_ENTER_ALREADY "Men du er der jo allerede!";
#Endif;
#Ifndef MSG_EXIT_ALREADY;
Constant MSG_EXIT_ALREADY "Men du er ikke inde i noget lige nu!";
#Endif;
#Ifndef MSG_EXIT_NOT_ON;
Constant MSG_EXIT_NOT_ON "Du er ikke på noget lige nu.";
#Endif;
#Ifndef MSG_EXIT_NOT_IN;
Constant MSG_EXIT_NOT_IN "Du er ikke inde i noget lige nu.";
#Endif;
#Ifndef MSG_INVENTORY_EMPTY;
Constant MSG_INVENTORY_EMPTY "Du er tomhændet.";
#Endif;
#Ifndef MSG_GO_CANT_GO;
Constant MSG_GO_CANT_GO "Du kan ikke gå den vej.";
#Endif;
#Ifndef MSG_SAVE_DEFAULT;
Constant MSG_SAVE_DEFAULT "OK.";
#Endif;
#Ifndef MSG_INSERT_ITSELF;
Constant MSG_INSERT_ITSELF "Du kan ikke lægge noget inden i sig selv.";
#Endif;
#Ifndef MSG_PUTON_ITSELF;
Constant MSG_PUTON_ITSELF "Du kan ikke lægge noget oven på sig selv.";
#Endif;
#Ifndef MSG_ATTACK_DEFAULT;
Constant MSG_ATTACK_DEFAULT "Vold er ikke løsningen her.";
#Endif;
#Ifndef MSG_FILL_NO_WATER;
Constant MSG_FILL_NO_WATER "Men der er intet vand her.";
#EndIf;
#Ifndef MSG_DIG_NO_USE;
Constant MSG_DIG_NO_USE "Det har ikke noget formål at grave her.";
#EndIf;
#Ifndef MSG_WAIT_DEFAULT;
Constant MSG_WAIT_DEFAULT "Der sker intet.";
#EndIf;
#Ifndef MSG_TOUCH_DEFAULT;
Constant MSG_TOUCH_DEFAULT "Du føler intet uventet.";
#EndIf;
#Ifndef MSG_PUSHDIR_DEFAULT;
Constant MSG_PUSHDIR_DEFAULT "Er det det bedste du kan komme på?";
#EndIf;
#Ifndef MSG_JUMP;
Constant MSG_JUMP "Du hopper lidt på stedet.";
#EndIf;
#Ifndef MSG_REMOVE_DEFAULT;
Constant MSG_REMOVE_DEFAULT "Fjernet.";
#EndIf;
#Ifndef MSG_SEARCH_NOTHING_SPECIAL;
Constant MSG_SEARCH_NOTHING_SPECIAL "Du finder ingenting af interesse.";
#EndIf;
#Ifndef MSG_PARSER_ONLY_TO_ANIMATE;
Constant MSG_PARSER_ONLY_TO_ANIMATE "Det giver mest mening med noget levende.";
#EndIf;
#Ifndef MSG_PARSER_NOT_MULTIPLE_VERB;
Constant MSG_PARSER_NOT_MULTIPLE_VERB "Du kan ikke bruge det verbum på flere ting.";
#EndIf;
#Ifndef MSG_PARSER_NOT_MULTIPLE_DIRS;
Constant MSG_PARSER_NOT_MULTIPLE_DIRS "Du kan ikke bruge flere retninger.";
#EndIf;
#Ifndef MSG_PARSER_BAD_NUMBER;
Constant MSG_PARSER_BAD_NUMBER "Jeg forstod ikke det tal.";
#EndIf;
#Ifndef MSG_PARSER_NO_INPUT;
Constant MSG_PARSER_NO_INPUT "Undskyld mig?";
#EndIf;
#Ifndef MSG_PARSER_UNKNOWN_SENTENCE;
Constant MSG_PARSER_UNKNOWN_SENTENCE "Jeg forstod ikke den sætning.";
#EndIf;
#Ifndef MSG_PARSER_UNKNOWN_VERB;
Constant MSG_PARSER_UNKNOWN_VERB "Det verbum kender jeg ikke.";
#EndIf;
#Ifndef MSG_PARSER_CANT_DISAMBIGUATE;
Constant MSG_PARSER_CANT_DISAMBIGUATE "Jeg forstår stadig ikke, hvad du henviser til.";
#EndIf;
#Ifndef MSG_PARSER_UNKNOWN_PERSON;
Constant MSG_PARSER_UNKNOWN_PERSON "Jeg kan ikke se, hvem du henviser til.";
#EndIf;
#Ifndef MSG_PARSER_NOSUCHTHING;
Constant MSG_PARSER_NOSUCHTHING "Du kan ikke se sådan en ting.";
#EndIf;
#Ifndef MSG_PARSER_CANT_OOPS;
Constant MSG_PARSER_CANT_OOPS "Undskyld, men det kan ikke rettes.";
#EndIf;
#Ifndef MSG_PARSER_COMPLEX_AGAIN;
Constant MSG_PARSER_COMPLEX_AGAIN "'Igen'-kommandoen må gives på en ny linje.^";
#EndIf;
#Ifndef MSG_PARSER_NOTHING_TO_AGAIN;
Constant MSG_PARSER_NOTHING_TO_AGAIN "Det kan du næppe gentage.";
#EndIf;
#Ifndef MSG_PARSER_BE_MORE_SPECIFIC;
Constant MSG_PARSER_BE_MORE_SPECIFIC "Du må være mere specifik.";
#EndIf;

#IfDef OPTIONAL_FULL_SCORE;
#IfDef OPTIONAL_SCORED;
#Ifndef MSG_FULLSCORE_OBJECTS;
Constant MSG_FULLSCORE_OBJECTS "finder forskellige ting";
#EndIf;
#Ifndef MSG_FULLSCORE_ROOMS;
Constant MSG_FULLSCORE_ROOMS "besøger forskellige steder";
#EndIf;
#EndIf;
#Ifndef MSG_FULLSCORE_ACTIONS;
Constant MSG_FULLSCORE_ACTIONS "udfører bemærkelsesværdige handlinger";
#EndIf;
#EndIf;

!
! complex messages (enumerated)
!

! Note, we can only use id 2-999
Default MSG_CLOSE_YOU_CANT = 2;
Default MSG_ENTER_YOU_CANT = 3;
Default MSG_EXAMINE_NOTHING_SPECIAL = 4;
Default MSG_TAKE_ANIMATE = 5;
Default MSG_TAKE_PLAYER_PARENT = 6;
Default MSG_EAT_ANIMATE = 7;
Default MSG_DROP_NOT_HOLDING = 8;
Default MSG_OPEN_DEFAULT = 9;
Default MSG_CLOSE_DEFAULT = 10;
Default MSG_LOOK_BEFORE_ROOMNAME  = 11;
Default MSG_SHOW_NOT_HOLDING = 12;
Default MSG_SHOW_DEFAULT = 13;
Default MSG_GIVE_NOT_HOLDING = 14;
Default MSG_GIVE_DEFAULT = 15;
Default MSG_ASKFOR_DEFAULT = 16;
Default MSG_ASKTO_DEFAULT = 17;
Default MSG_ENTER_DEFAULT = 18;
Default MSG_EXIT_FIRST_LEAVE = 19;
Default MSG_ENTER_NOT_OPEN = 20;
Default MSG_EXIT_NOT_OPEN = 21;
Default MSG_EXIT_DEFAULT = 22;
Default MSG_INVENTORY_DEFAULT = 23;
Default MSG_GO_FIRST_LEAVE = 24;
Default MSG_GIVE_PLAYER 25;
Default MSG_SAVE_FAILED 26;
Default MSG_RESTORE_FAILED 27;
Default MSG_RESTART_FAILED 28;
Default MSG_INSERT_DEFAULT 29;
Default MSG_INSERT_NOT_OPEN 30;
Default MSG_ASK_DEFAULT 31;
Default MSG_ANSWER_DEFAULT 32;
Default MSG_RESTART_RESTORE_OR_QUIT 33;
Default MSG_AREYOUSUREQUIT 34;
Default MSG_WEAR_ALREADY_WORN 35;
Default MSG_WEAR_NOT_CLOTHING 36;
Default MSG_WEAR_NOT_HOLDING 37;
Default MSG_WEAR_DEFAULT 38;
Default MSG_INSERT_ALREADY 39;
Default MSG_INSERT_NO_ROOM 40;
Default MSG_PUTON_ALREADY 41;
Default MSG_PUTON_NO_ROOM 42;
Default MSG_PUTON_DEFAULT 43;
Default MSG_GO_DOOR_CLOSED 44;
Default MSG_SWITCH_ON_NOT_SWITCHABLE 45;
Default MSG_SWITCH_OFF_NOT_SWITCHABLE 46;
Default MSG_SWITCH_ON_ON 47;
Default MSG_SWITCH_OFF_NOT_ON 48;
Default MSG_SWITCH_ON_DEFAULT 49;
Default MSG_SWITCH_OFF_DEFAULT 50;
Default MSG_PUSH_STATIC 51;
Default MSG_PULL_STATIC 52;
Default MSG_TURN_STATIC 53;
Default MSG_PUSH_SCENERY 54;
Default MSG_PULL_SCENERY 55;
Default MSG_TURN_SCENERY 56;
Default MSG_PUSH_ANIMATE 57;
Default MSG_PULL_ANIMATE 58;
Default MSG_TURN_ANIMATE 59;
Default MSG_TURN_DEFAULT 60;
Default MSG_PUSH_DEFAULT 61;
Default MSG_PULL_DEFAULT 62;
Default MSG_YOU_HAVE_WON 63;
Default MSG_YOU_HAVE_DIED 64;
Default MSG_OPEN_YOU_CANT = 65;
Default MSG_PARSER_NOTHING_TO_VERB 66;
Default MSG_TOUCHABLE_FOUND_CLOSED 67;
Default MSG_CONSULT_NOTHING_INTERESTING 68;
Default MSG_CUT_NO_USE 69;
Default MSG_SACK_PUTTING 70;
Default MSG_LOCK_NOT_A_LOCK 71;
Default MSG_LOCK_ALREADY_LOCKED 72;
Default MSG_LOCK_CLOSE_FIRST 73;
Default MSG_LOCK_KEY_DOESNT_FIT 74;
Default MSG_LOCK_DEFAULT 75;
Default MSG_DISROBE_NOT_WEARING 76;
Default MSG_DISROBE_DEFAULT 77;
Default MSG_REMOVE_CLOSED 78;
Default MSG_REMOVE_NOT_HERE 79;
Default MSG_SEARCH_IN_IT_ISARE 80;
Default MSG_SEARCH_ON_IT_ISARE 81;
Default MSG_SEARCH_EMPTY 82;
Default MSG_SEARCH_NOTHING_ON 83;
Default MSG_SEARCH_CANT_SEE_CLOSED 84;
Default MSG_EAT_DEFAULT = 85;
#Ifdef OPTIONAL_FULL_SCORE;
Default MSG_FULLSCORE_START 86;
Default MSG_FULLSCORE_END 87;
#Endif;
Default MSG_SCORE_DEFAULT 88;
Default MSG_UNLOCK_NOT_A_LOCK 89;
Default MSG_UNLOCK_ALREADY_UNLOCKED 90;
Default MSG_UNLOCK_KEY_DOESNT_FIT 91;
Default MSG_UNLOCK_DEFAULT 92;
Default MSG_ENTER_BAD_LOCATION 93;
Default MSG_PROMPT 94;
#Ifndef OPTIONAL_NO_DARKNESS;
Default MSG_EXAMINE_DARK 95;
Default MSG_SEARCH_DARK 96;
#Endif;
Default MSG_EXAMINE_ONOFF 97;
Default MSG_ORDERS_WONT 98;
Default MSG_AUTO_TAKE 99;
Default MSG_AUTO_DISROBE = 100;
Default MSG_PARSER_PARTIAL_MATCH = 101;
Default MSG_TAKE_BELONGS 102;
Default MSG_TAKE_PART_OF 103;
Default MSG_TAKE_NOT_AVAILABLE 104;
Default MSG_PARSER_CONTAINER_ISNT_OPEN 105;
Default MSG_PARSER_NOT_HOLDING 106;
Default MSG_PARSER_CANT_TALK 107;
Default MSG_WAVE_NOTHOLDING 108;
Default MSG_JUMP_OVER 109;
Default MSG_TIE_DEFAULT 110;
Default MSG_CLOSE_NOT_OPEN 111;
Default MSG_RUB_DEFAULT 112;
Default MSG_SQUEEZE_DEFAULT 113;
Default MSG_EXAMINE_CLOSED 114;
Default MSG_EMPTY_IS_CLOSED 115; ! Only used from extended verbset, but same message also used in basic set.
Default MSG_PARSER_NO_NEED_REFER_TO 116;
Default MSG_PARSER_DONT_UNDERSTAND_WORD 117;
Default MSG_INSERT_NOT_CONTAINER 118;
Default MSG_TRANSFER_ALREADY 119;
Default MSG_YES_OR_NO 120;
Default MSG_RESTART_CONFIRM 121;
#Ifndef NO_SCORE;
Default MSG_PARSER_NEW_SCORE 122;
#Endif;
Default MSG_CLIMB_ANIMATE 123;
Default MSG_CLIMB_DEFAULT 124;
Default MSG_PARSER_BAD_PATTERN_PREFIX 125;
Default MSG_PARSER_BAD_PATTERN_SUFFIX 126;
Default MSG_TAKE_ALREADY_HAVE 127;
Default MSG_SHOUT_DEFAULT 128;
Default MSG_SHOUTAT_DEFAULT 129;
Default MSG_INSERT_ANIMATE 130;
Default MSG_PUTON_ANIMATE 131;
Default MSG_LOOKMODE_NORMAL 132;
Default MSG_LOOKMODE_LONG 133;
Default MSG_LOOKMODE_SHORT 134;
Default MSG_AUTO_TAKE_NOT_HELD = 135;
Default MSG_AUTO_DISROBE_WORN = 136;
Default MSG_TAKE_SCENERY = 137;
Default MSG_TAKE_STATIC = 138;
Default MSG_EAT_INEDIBLE = 139;
Default MSG_OPEN_ALREADY = 140;
Default MSG_OPEN_LOCKED = 141;
Default MSG_PUTON_NOT_SUPPORTER = 142;
Default MSG_PARSER_NO_IT = 143;
Default MSG_PARSER_CANT_SEE_IT = 144;

#IfDef OPTIONAL_PROVIDE_UNDO_FINAL;
#Ifndef MSG_UNDO_NOTHING_DONE;
Constant MSG_UNDO_NOTHING_DONE "[Du kan ikke ~fortryde~ noget, som ikke er blevet gjort!]";
#EndIf;
#Ifndef MSG_UNDO_NOT_PROVIDED;
Constant MSG_UNDO_NOT_PROVIDED "[Din fortolker understøtter ikke ~fortryd~.]";
#EndIf;
#Ifndef MSG_UNDO_FAILED;
Constant MSG_UNDO_FAILED "~Fortryd~ mislykkedes.";
#EndIf;
#Ifndef MSG_UNDO_DONE;
Constant MSG_UNDO_DONE "Forrige træk er fortrudt.";
#EndIf;
#EndIf;


#IfDef OPTIONAL_EXTENDED_VERBSET;
#Ifndef MSG_BURN_DEFAULT;
Constant MSG_BURN_DEFAULT "Denne farlige handling ville udrette meget lidt.";
#EndIf;
#Ifndef MSG_BUY_DEFAULT;
Constant MSG_BUY_DEFAULT "Intet er til salg.";
#EndIf;
#Ifndef MSG_EMPTY_WOULDNT_ACHIEVE;
Constant MSG_EMPTY_WOULDNT_ACHIEVE "Det ville næppe tømme noget.";
#EndIf;
#Ifndef MSG_RHETORICAL_QUESTION;
Constant MSG_RHETORICAL_QUESTION "Det var et retorisk spørsmål.";
#EndIf;
#Ifndef MSG_PRAY_DEFAULT;
Constant MSG_PRAY_DEFAULT "Intet håndgribeligt kommer ud af din bøn.";
#EndIf;
#Ifndef MSG_SING_DEFAULT;
Constant MSG_SING_DEFAULT "Du har ikke meget af en sangstemme.";
#EndIf;
#Ifndef MSG_SLEEP_DEFAULT;
Constant MSG_SLEEP_DEFAULT "Du føler dig ikke særlig søvnig.";
#EndIf;
#Ifndef MSG_SORRY_DEFAULT;
Constant MSG_SORRY_DEFAULT "Åh, du behøver ikke at undskylde.";
#EndIf;
#Ifndef MSG_SQUEEZE_YOURSELF;
Constant MSG_SQUEEZE_YOURSELF "Hold dine hænder for dig selv.";
#EndIf;

#Ifndef MSG_SWIM_DEFAULT;
Constant MSG_SWIM_DEFAULT "Der er ikke nok vand at svømme i.";
#EndIf;
#Ifndef MSG_SWING_DEFAULT;
Constant MSG_SWING_DEFAULT "Der er ikke noget fornuftigt at svinge her.";
#EndIf;
#Ifndef MSG_TASTE_DEFAULT;
Constant MSG_TASTE_DEFAULT "Du smager intet uventet.";
#EndIf;
#Ifndef MSG_THINK_DEFAULT;
Constant MSG_THINK_DEFAULT "God idé.";
#EndIf;
#Ifndef MSG_WAVEHANDS_DEFAULT;
Constant MSG_WAVEHANDS_DEFAULT "Du vinker og føler dig lidt tåbelig.";
#EndIf;
#Ifndef MSG_WAKE_DEFAULT;
Constant MSG_WAKE_DEFAULT "Den frygtelige sandhed er, at dette ikke er en drøm.";
#Endif;
#Ifndef MSG_WAKEOTHER_DEFAULT;
Constant MSG_WAKEOTHER_DEFAULT "Det virker unødvendigt.";
#Endif;
#Ifndef MSG_KISS_PLAYER;
Constant MSG_KISS_PLAYER "Hvis du tror, det vil hjælpe.";
#Endif;
#Ifndef MSG_KISS_DEFAULT;
Constant MSG_KISS_DEFAULT "Fokuser i stedet på spillet.";
#Endif;
#Ifndef MSG_MILD_DEFAULT;
Constant MSG_MILD_DEFAULT "Så er det nok.";
#EndIf;
#Ifndef MSG_STRONG_DEFAULT;
Constant MSG_STRONG_DEFAULT "Ægte eventyrere taler ikke sådan.";
#EndIf;

Default MSG_BLOW_DEFAULT 200;
Default MSG_WAVE_DEFAULT 201;
Default MSG_EMPTY_ALREADY_EMPTY 202;
Default MSG_SET_DEFAULT 203;
Default MSG_SET_TO_DEFAULT 204;
#EndIf;


#Iffalse MSG_PUSH_DEFAULT < 1000;
#Iffalse MSG_PULL_DEFAULT < 1000;
#Iffalse MSG_TURN_DEFAULT < 1000;
Constant SKIP_MSG_PUSH_DEFAULT;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_PUSH_STATIC < 1000;
#Iffalse MSG_PULL_STATIC < 1000;
#Iffalse MSG_TURN_STATIC < 1000;
#Iffalse MSG_TAKE_STATIC < 1000;
Constant SKIP_MSG_PUSH_STATIC;
#Endif;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_PUSH_SCENERY < 1000;
#Iffalse MSG_PULL_SCENERY < 1000;
#Iffalse MSG_TURN_SCENERY < 1000;
Constant SKIP_MSG_PUSH_SCENERY;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_PUSH_ANIMATE < 1000;
#Iffalse MSG_PULL_ANIMATE < 1000;
#Iffalse MSG_TURN_ANIMATE < 1000;
#Iffalse MSG_CLIMB_ANIMATE < 1000;
Constant SKIP_MSG_PUSH_ANIMATE;
#Endif;
#Endif;
#Endif;
#Endif;


#Iffalse MSG_DROP_NOT_HOLDING < 1000;
#Iffalse MSG_SHOW_NOT_HOLDING < 1000;
#Iffalse MSG_GIVE_NOT_HOLDING < 1000;
#Iffalse MSG_WEAR_NOT_HOLDING < 1000;
Constant SKIP_MSG_DROP_NOT_HOLDING;
#Endif;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_OPEN_YOU_CANT < 1000;
#Iffalse MSG_CLOSE_YOU_CANT < 1000;
#Iffalse MSG_ENTER_YOU_CANT < 1000;
#Iffalse MSG_LOCK_NOT_A_LOCK < 1000;
#Iffalse MSG_UNLOCK_NOT_A_LOCK < 1000;
#Iffalse MSG_WEAR_NOT_CLOTHING < 1000;
Constant SKIP_MSG_OPEN_YOU_CANT;
#Endif;
#Endif;
#Endif;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_TAKE_ANIMATE < 1000;
#Iffalse MSG_EAT_ANIMATE < 1000;
Constant SKIP_MSG_TAKE_ANIMATE;
#Endif;
#Endif;

#Iffalse MSG_TAKE_PLAYER_PARENT < 1000;
#Iffalse MSG_GO_FIRST_LEAVE < 1000;
#Iffalse MSG_EXIT_FIRST_LEAVE < 1000;
Constant SKIP_MSG_TAKE_PLAYER_PARENT;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_CLOSE_DEFAULT < 1000;
#Iffalse MSG_ENTER_DEFAULT < 1000;
#Iffalse MSG_LOCK_DEFAULT < 1000;
#Iffalse MSG_UNLOCK_DEFAULT < 1000;
#Iffalse MSG_EXIT_DEFAULT < 1000;
Constant SKIP_MSG_CLOSE_DEFAULT;
#Endif;
#Endif;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_GIVE_DEFAULT < 1000;
#Iffalse MSG_SHOW_DEFAULT < 1000;
Constant SKIP_MSG_GIVE_DEFAULT;
#Endif;
#Endif;

#Iffalse MSG_ASKFOR_DEFAULT < 1000;
#Iffalse MSG_ASKTO_DEFAULT < 1000;
#Iffalse MSG_ORDERS_WONT < 1000;
Constant SKIP_MSG_ASKFOR_DEFAULT;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_ENTER_NOT_OPEN < 1000;
#Iffalse MSG_EXIT_NOT_OPEN < 1000;
#Iffalse MSG_INSERT_NOT_OPEN < 1000;
#Iffalse MSG_GO_DOOR_CLOSED < 1000;
#Iffalse MSG_EMPTY_IS_CLOSED < 1000;
#Iffalse MSG_REMOVE_CLOSED < 1000;
Constant SKIP_MSG_ENTER_NOT_OPEN;
#Endif;
#Endif;
#Endif;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_GIVE_PLAYER < 1000;
#Iffalse MSG_TAKE_ALREADY_HAVE < 1000;
Constant SKIP_MSG_GIVE_PLAYER;
#Endif;
#Endif;

#Iffalse MSG_SAVE_FAILED < 1000;
#Iffalse MSG_RESTORE_FAILED < 1000;
#Iffalse MSG_RESTART_FAILED < 1000;
Constant SKIP_MSG_SAVE_FAILED;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_INSERT_ALREADY < 1000;
#Iffalse MSG_PUTON_ALREADY < 1000;
#Iffalse MSG_TRANSFER_ALREADY < 1000;
Constant SKIP_MSG_INSERT_ALREADY;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_INSERT_ANIMATE < 1000;
#Iffalse MSG_PUTON_ANIMATE < 1000;
Constant SKIP_MSG_INSERT_ANIMATE;
#Endif;
#Endif;

#Iffalse MSG_INSERT_NO_ROOM < 1000;
#Iffalse MSG_PUTON_NO_ROOM < 1000;
Constant SKIP_MSG_INSERT_NO_ROOM;
#Endif;
#Endif;

#Iffalse MSG_ASK_DEFAULT < 1000;
#Iffalse MSG_ANSWER_DEFAULT < 1000;
#Iffalse MSG_SHOUT_DEFAULT < 1000;
#Iffalse MSG_SHOUTAT_DEFAULT < 1000;
Constant SKIP_MSG_ASK_DEFAULT;
#Endif;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_SWITCH_ON_NOT_SWITCHABLE < 1000;
#Iffalse MSG_SWITCH_OFF_NOT_SWITCHABLE < 1000;
Constant SKIP_MSG_SWITCH_ON_NOT_SWITCHABL;
#Endif;
#Endif;

#Iffalse MSG_SWITCH_ON_ON < 1000;
#Iffalse MSG_SWITCH_OFF_NOT_ON < 1000;
Constant SKIP_MSG_SWITCH_ON_ON;
#Endif;
#Endif;

#Iffalse MSG_SWITCH_ON_DEFAULT < 1000;
#Iffalse MSG_SWITCH_OFF_DEFAULT < 1000;
Constant SKIP_MSG_SWITCH_ON_DEFAULT;
#Endif;
#Endif;

#Iffalse MSG_PARSER_NOT_HOLDING < 1000;
#Iffalse MSG_AUTO_TAKE_NOT_HELD < 1000;
#Iffalse MSG_WAVE_NOTHOLDING < 1000;
Constant SKIP_MSG_PARSER_NOT_HOLDING;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_CLOSE_NOT_OPEN < 1000;
#Iffalse MSG_TOUCHABLE_FOUND_CLOSED < 1000;
#Iffalse MSG_PARSER_CONTAINER_ISNT_OPEN < 1000;
Constant SKIP_MSG_CLOSE_NOT_OPEN;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_CUT_NO_USE < 1000;
#Iffalse MSG_JUMP_OVER < 1000;
#Iffalse MSG_TIE_DEFAULT < 1000;
#Iffalse MSG_CLIMB_DEFAULT < 1000;
Constant SKIP_MSG_CUT_NO_USE;
#Endif;
#Endif;
#Endif;
#Endif;

#Iffalse MSG_LOCK_ALREADY_LOCKED < 1000;
#Iffalse MSG_UNLOCK_ALREADY_UNLOCKED < 1000;
Constant SKIP_MSG_LOCK_ALREADY_LOCKED;
#Endif;
#Endif;

#Iffalse MSG_LOCK_KEY_DOESNT_FIT < 1000;
#Iffalse MSG_UNLOCK_KEY_DOESNT_FIT < 1000;
Constant SKIP_MSG_LOCK_KEY_DOESNT_FIT;
#Endif;
#Endif;

#Iffalse MSG_RUB_DEFAULT < 1000;
#Iffalse MSG_SQUEEZE_DEFAULT < 1000;
Constant SKIP_MSG_RUB_DEFAULT;
#Endif;
#Endif;

#Iffalse MSG_LOOKMODE_NORMAL < 1000;
#Iffalse MSG_LOOKMODE_LONG < 1000;
#Iffalse MSG_LOOKMODE_SHORT < 1000;
Constant SKIP_MSG_LOOKMODE;
#Endif;
#Endif;
#Endif;


#Ifndef OPTIONAL_NO_DARKNESS;
#Iffalse MSG_EXAMINE_DARK < 1000;
#Iffalse MSG_SEARCH_DARK < 1000;
Constant SKIP_MSG_EXAMINE_DARK;
#Endif;
#Endif;
#Endif;

[ _PrintMsg p_msg p_arg_1 p_arg_2;
	if(p_msg ofclass String)
		print_ret (string) p_msg;

#Ifdef LibraryMessages;
	if(p_msg > 999) {
		return LibraryMessages(p_msg, p_arg_1, p_arg_2);
	}
#Endif;

	! Not a string, there should be code for the message here
	switch(p_msg) {
#Iftrue MSG_TAKE_SCENERY < 1000;
	MSG_TAKE_SCENERY:
		print_ret (CTheyreorThats) noun, " næppe bærbar.";
#EndIf;
#Ifndef SKIP_MSG_PUSH_DEFAULT;
	MSG_PUSH_DEFAULT, MSG_PULL_DEFAULT, MSG_TURN_DEFAULT:
		"Der sker intet åbenlyst.";
#Endif;
#Ifndef SKIP_MSG_PUSH_STATIC;
	MSG_PUSH_STATIC, MSG_PULL_STATIC, MSG_TURN_STATIC, MSG_TAKE_STATIC:
		print_ret (CTheyreorThats) noun, " sidder fast.";
#Endif;
#Ifndef SKIP_MSG_PUSH_SCENERY;
	MSG_PUSH_SCENERY, MSG_PULL_SCENERY, MSG_TURN_SCENERY:
		"Hvilket koncept!";
#Endif;
#IfDef SACK_OBJECT;
#IfTrue MSG_SACK_PUTTING < 1000;
	MSG_SACK_PUTTING:
	! p_arg_1 = the object being put into SACK_OBJECT.
		"(putting ", (the) p_arg_1, " i ", (the) SACK_OBJECT, " for at gøre plads)";
#EndIf;
#EndIf;
#IfTrue MSG_PROMPT < 1000;
	MSG_PROMPT:
		print "> ";
		rtrue;
#EndIf;
#IfTrue MSG_INVENTORY_DEFAULT < 1000;
	MSG_INVENTORY_DEFAULT:
		! return true if something listed to run afterroutines
		! or false if MSG_INVENTORY_EMPTY should be displayed
		p_arg_1 = "Du har ";
		if(inventory_style == 0) {
			p_arg_1 = "Du har:";
			p_arg_2 = NEWLINE_BIT;
		}
		if(PrintContents(p_arg_1, player, p_arg_2)) {
			if(inventory_style) print ".^";
			rtrue;
		}
		rfalse;
#EndIf;
#IfTrue MSG_EXAMINE_NOTHING_SPECIAL < 1000;
	MSG_EXAMINE_NOTHING_SPECIAL:
		"Der er ikke noget særligt ved ", (the) noun, ".";
#EndIf;
#Ifndef SKIP_MSG_PUSH_ANIMATE;
	MSG_PUSH_ANIMATE, MSG_PULL_ANIMATE, MSG_TURN_ANIMATE, MSG_CLIMB_ANIMATE:
		"Det ville være knapt så høfligt.";
#Endif;
#Ifndef SKIP_MSG_DROP_NOT_HOLDING;
	MSG_DROP_NOT_HOLDING, MSG_SHOW_NOT_HOLDING, MSG_GIVE_NOT_HOLDING,
	MSG_WEAR_NOT_HOLDING:
		"Du har ", (ItorThem) noun, " ikke.";
#Endif;
#Ifndef SKIP_MSG_OPEN_YOU_CANT;
	MSG_OPEN_YOU_CANT, MSG_CLOSE_YOU_CANT, MSG_ENTER_YOU_CANT,
	MSG_LOCK_NOT_A_LOCK, MSG_UNLOCK_NOT_A_LOCK, MSG_WEAR_NOT_CLOTHING:
	! p_arg_1 = the base verb for this action ('open', 'close' etc).
		"Du kan ikke ", (verbname) p_arg_1, " ", (ThatorThose) noun, ".";
#Endif;
#IfTrue MSG_EAT_INEDIBLE < 1000;
	MSG_EAT_INEDIBLE:
		print_ret (CTheyreorThats) noun, " helt klart uspiselig.";
#EndIf;
#IfTrue MSG_OPEN_ALREADY < 1000;
	MSG_OPEN_ALREADY:
		print_ret (CTheyreorIts) noun, " allerede åben.";
#EndIf;
#IfTrue MSG_OPEN_LOCKED < 1000;
	MSG_OPEN_LOCKED:
		print_ret (CTheyreorIts) noun, " låst.";
#EndIf;
#IfTrue MSG_PUTON_NOT_SUPPORTER < 1000;
	MSG_PUTON_NOT_SUPPORTER:
		"Du kan ikke putter ting oven på ", (ThatorThose) second, ".";
#EndIf;
#Ifndef SKIP_MSG_TAKE_ANIMATE;
	MSG_TAKE_ANIMATE, MSG_EAT_ANIMATE:
		"Jeg formoder ikke at ", (the) noun, " vil synes om det.";
#Endif;
#Ifndef SKIP_MSG_TAKE_PLAYER_PARENT;
	MSG_TAKE_PLAYER_PARENT, MSG_GO_FIRST_LEAVE, MSG_EXIT_FIRST_LEAVE:
	! p_arg_1 = the object the player has to leave to perform the action.
		"Først må du forlade ", (the) p_arg_1, ".";
#Endif;
#Iftrue MSG_OPEN_DEFAULT < 1000;
	MSG_OPEN_DEFAULT:
		print "Du åbner ", (the) noun;
		if(noun has container && noun hasnt transparent &&
				~~IndirectlyContains(noun, player)) {
			print ", og finder ";
			if(PrintContents(0, noun)==false) print "intet";
		}
		".";
#Endif;
#Iftrue MSG_LOOK_BEFORE_ROOMNAME < 1000;
	MSG_LOOK_BEFORE_ROOMNAME:
		! what to write at first when describing a room. Can be used to
		! add a newline, but default is to write nothing.
		!@new_line;
#Endif;
!DANISH
#Ifndef SKIP_MSG_CLOSE_DEFAULT;
	 MSG_CLOSE_DEFAULT:
            "Du lukker ", (the) noun, ".";
         MSG_LOCK_DEFAULT:
            "Du låser ", (the) noun, ".";
	 MSG_UNLOCK_DEFAULT:
            "Du låser ", (the) noun, " op.";
	MSG_ENTER_DEFAULT:
		print "Du går "; if (noun has container) print "ind i"; else print "i"; " ", (the) noun, ".";
	MSG_EXIT_DEFAULT:
		print "Du går "; if (noun has container) print "ud af"; else print "ned"; " ", (the) noun, ".";
#Endif;
#Ifndef SKIP_MSG_GIVE_DEFAULT;
	MSG_GIVE_DEFAULT, MSG_SHOW_DEFAULT:
		print_ret (The) second, " virker ikke interesseret.";
#Endif;
#Ifndef SKIP_MSG_ASKFOR_DEFAULT;
	MSG_ASKFOR_DEFAULT, MSG_ASKTO_DEFAULT, MSG_ORDERS_WONT:
	! p_arg_1 = the actor which the player has asked to do something.
		print_ret (The) p_arg_1, " har bedre ting at tage sig til.";
#Endif;
#Ifndef SKIP_MSG_ENTER_NOT_OPEN;
	MSG_ENTER_NOT_OPEN, MSG_EXIT_NOT_OPEN, MSG_INSERT_NOT_OPEN,
	MSG_GO_DOOR_CLOSED, MSG_EMPTY_IS_CLOSED, MSG_REMOVE_CLOSED:
	! p_arg_1 = the object which is closed, thus blocking the player's action.
		"Det kan du ikke, fordi ", (the) p_arg_1, " ", (isorare) p_arg_1, " lukket.";
#Endif;
#Ifndef SKIP_MSG_GIVE_PLAYER;
	MSG_GIVE_PLAYER, MSG_TAKE_ALREADY_HAVE:
		"Du har allerede ", (ItorThem) noun, ".";
#Endif;
#Ifndef SKIP_MSG_SAVE_FAILED;
	MSG_SAVE_FAILED, MSG_RESTORE_FAILED, MSG_RESTART_FAILED:
		"Kommandoen mislykkedes ", (verbname) verb_word, ".";
#Endif;
#Ifndef SKIP_MSG_INSERT_ALREADY;
	MSG_INSERT_ALREADY, MSG_PUTON_ALREADY, MSG_TRANSFER_ALREADY:
		"Er der allerede.";
#Endif;
#Ifndef SKIP_MSG_INSERT_ANIMATE;
	MSG_INSERT_ANIMATE, MSG_PUTON_ANIMATE:
		"Prøv at give ",(ItorThem) noun," i stedet for.";
#Endif;
#Ifndef SKIP_MSG_INSERT_NO_ROOM;
	MSG_INSERT_NO_ROOM, MSG_PUTON_NO_ROOM:
		"Der er ikke mere plads.";
#Endif;
#IfTrue MSG_INSERT_DEFAULT < 1000;
	MSG_INSERT_DEFAULT:
		"Du placerer ", (the) noun, " i ", (the) second, ".";
#EndIf;
#IfTrue MSG_PUTON_DEFAULT < 1000;
	MSG_PUTON_DEFAULT:
		"Du placerer ", (the) noun, " på ", (the) second, ".";
#EndIf;
#Ifndef SKIP_MSG_ASK_DEFAULT;
	MSG_ASK_DEFAULT, MSG_ANSWER_DEFAULT, MSG_SHOUT_DEFAULT, MSG_SHOUTAT_DEFAULT:
		"Der er intet svar.";
#Endif;
#IfTrue MSG_WEAR_ALREADY_WORN < 1000;
	MSG_WEAR_ALREADY_WORN:
		"Du har ", (ItorThem) noun, " allerede på.";
#EndIf;
#IfTrue MSG_WEAR_DEFAULT < 1000;
	MSG_WEAR_DEFAULT:
		"Du har nu ", (the) noun, " på.";
#EndIf;
#IfTrue MSG_DISROBE_NOT_WEARING < 1000;
	MSG_DISROBE_NOT_WEARING:
		"Du har ikke ", (the) noun, " på.";
#EndIf;
#IfTrue MSG_DISROBE_DEFAULT < 1000;
	MSG_DISROBE_DEFAULT:
		"Du taget ", (the) noun, " af.";
#EndIf;
#Ifndef SKIP_MSG_SWITCH_ON_NOT_SWITCHABL;
	MSG_SWITCH_ON_NOT_SWITCHABLE, MSG_SWITCH_OFF_NOT_SWITCHABLE:
		print_ret (CTheyreorThats) noun, " ikke noget som kan tænde eller slukke.";
#Endif;
#Ifndef SKIP_MSG_SWITCH_ON_ON;
	MSG_SWITCH_ON_ON, MSG_SWITCH_OFF_NOT_ON:
		print_ret (CTheyreorThats) noun, " allerede ", (OnOff) noun, ".";
#Endif;
#Ifndef SKIP_MSG_SWITCH_ON_DEFAULT;
	MSG_SWITCH_ON_DEFAULT, MSG_SWITCH_OFF_DEFAULT:
		"Du slår ", (the) noun, " ", (OnOff) noun, ".";
#Endif;
#Iftrue MSG_AUTO_TAKE < 1000;
	MSG_AUTO_TAKE:
	! p_arg_1 = the object the player automatically picks up
	print "(tager først ", (the) p_arg_1, ")^";
#Endif;
#Iftrue MSG_AUTO_DISROBE < 1000;
	MSG_AUTO_DISROBE:
	! p_arg_1 = the object the player automatically takes off.
		print "(tager først ", (the) p_arg_1, " af)^";
#Endif;
#Iftrue MSG_AUTO_DISROBE_WORN < 1000;
	MSG_AUTO_DISROBE_WORN:
	! p_arg_1 = the object the player would need to take off.
		print "Men du må først tage ", (the) p_arg_1, " af.^";
#Endif;
#IfTrue MSG_PARSER_NOTHING_TO_VERB < 1000;
	MSG_PARSER_NOTHING_TO_VERB:
	! p_arg_1 = the last word in player input + 1.
		if(action == ##Drop or ##Insert && (parse + 2 + (p_arg_1 - 2) *4)-->0 == ALL_WORD) {
			"Du holder ingenting.";
		}  else {
			print "Der er ikke nogle ting, som matcher ~";
			_PrintPartialMatch(verb_wordnum, p_arg_1 - 1);
			"~.";
		}
#EndIf;
#Ifndef SKIP_MSG_PARSER_NOT_HOLDING;
	MSG_PARSER_NOT_HOLDING, MSG_AUTO_TAKE_NOT_HELD, MSG_WAVE_NOTHOLDING:
	! p_arg_1 = the object which the player must be holding to perform the
	! action but isn't.
		print_ret "Men du holder ikke ", (the) p_arg_1, ".";
#Endif;
#IfTrue MSG_PARSER_PARTIAL_MATCH < 1000;
	MSG_PARSER_PARTIAL_MATCH:
	! p_arg_1 = the word number of the last word understood + 1.
		print "Jeg forstod dig kun indtil ~";
		_PrintPartialMatch(verb_wordnum, p_arg_1);
		"~ men herefter tabte du mig.";
#EndIf;
#IfTrue MSG_PARSER_CANT_TALK < 1000;
	MSG_PARSER_CANT_TALK:
	! p_arg_1 = the object which can't be talked to.
		print_ret "Du kan ikke tale med ", (the) p_arg_1, ".";
#EndIf;
#IfTrue MSG_PARSER_NO_NEED_REFER_TO < 1000;
	MSG_PARSER_NO_NEED_REFER_TO:
		print "Du behøves ikke at referede til ~";
		_PrintUnknownWord();
		print_ret "~ i dette spil.";
#EndIf;
#IfTrue MSG_PARSER_DONT_UNDERSTAND_WORD < 1000;
	MSG_PARSER_DONT_UNDERSTAND_WORD:
			print "Undskyld, jeg forstår ikke hvad ~";
			_PrintUnknownWord();
			print_ret "~ betyder.";
#EndIf;
#IfTrue MSG_PARSER_BAD_PATTERN_PREFIX < 1000;
	MSG_PARSER_BAD_PATTERN_PREFIX:
		print "Jeg tror, du ville sige ~";
		rtrue;
#EndIf;
#IfTrue MSG_PARSER_BAD_PATTERN_SUFFIX < 1000;
	MSG_PARSER_BAD_PATTERN_SUFFIX:
		"~. Prøv venligst igen.";
#EndIf;
#IfTrue MSG_PARSER_NO_IT < 1000;
	MSG_PARSER_NO_IT:
		"Jeg ved ikke hvad ~",(address) p_arg_1, "~ refererer til.";
#EndIf;
#IfTrue MSG_PARSER_CANT_SEE_IT < 1000;
	MSG_PARSER_CANT_SEE_IT:
		"Du kan ikke se ~",(address) p_arg_1, "~ (", (name) p_arg_2, ") i øjeblikket.";
#EndIf;
#Ifndef SKIP_MSG_CLOSE_NOT_OPEN;
	MSG_CLOSE_NOT_OPEN, MSG_TOUCHABLE_FOUND_CLOSED,
	MSG_PARSER_CONTAINER_ISNT_OPEN:
	! p_arg_1 = the object which isn't open.
		print_ret (CObjIs) p_arg_1, " er ikke åben.";
#Endif;
#IfTrue MSG_CONSULT_NOTHING_INTERESTING < 1000;
	MSG_CONSULT_NOTHING_INTERESTING:
		"Du finder intet af interesse i ", (the) noun, ".";
#EndIf;
#Ifndef SKIP_MSG_CUT_NO_USE;
	MSG_CUT_NO_USE, MSG_JUMP_OVER, MSG_TIE_DEFAULT, MSG_CLIMB_DEFAULT:
		"Du ville opnå intet ved det.";
#Endif;
#Ifndef SKIP_MSG_LOCK_ALREADY_LOCKED;
	MSG_LOCK_ALREADY_LOCKED, MSG_UNLOCK_ALREADY_UNLOCKED:
	! p_arg_1 = the base verb for this action ('open', 'close' etc).
		print_ret (CObjIs) noun, " allerede låst.";
#Endif;
#IfTrue MSG_LOCK_CLOSE_FIRST < 1000;
	MSG_LOCK_CLOSE_FIRST:
		"Først må du lukke ", (the) noun, ".";
#EndIf;
#Ifndef SKIP_MSG_LOCK_KEY_DOESNT_FIT;
	MSG_LOCK_KEY_DOESNT_FIT, MSG_UNLOCK_KEY_DOESNT_FIT:
		print_ret (The) second, " passer ikke i låsen.";
#Endif;
#IfTrue MSG_EXAMINE_CLOSED < 1000;
	MSG_EXAMINE_CLOSED:
	! p_arg_1 = the examines object (which is closed).
		print_ret (The) p_arg_1, " ", (isorare) p_arg_1, " lukket.";
#Endif;
#IfTrue MSG_REMOVE_NOT_HERE < 1000;
	MSG_REMOVE_NOT_HERE:
		"Men ", (the) noun, " er der ikke nu.";
#EndIf;
#IfTrue MSG_SEARCH_IN_IT_ISARE < 1000;
	MSG_SEARCH_IN_IT_ISARE:
		print (The) noun, " indeholder ";
		PrintContents(0, noun);
		".";
#EndIf;
#IfTrue MSG_SEARCH_ON_IT_ISARE < 1000;
	MSG_SEARCH_ON_IT_ISARE:
		print "På ", (the) noun;
		PrintContents(" ", noun, ISARE_BIT);
		".";
#EndIf;
#IfTrue MSG_SEARCH_EMPTY < 1000;
	MSG_SEARCH_EMPTY:
		print_ret (CObjIs) noun, " tom.";
#EndIf;
#IfTrue MSG_SEARCH_NOTHING_ON < 1000;
	MSG_SEARCH_NOTHING_ON:
		"Der er ingenting på ", (the) noun, ".";
#EndIf;
#IfTrue MSG_SEARCH_CANT_SEE_CLOSED < 1000;
	MSG_SEARCH_CANT_SEE_CLOSED:
		"Du kan ikke se ind, fordi ", (the) noun, " ", (IsorAre) noun, " lukket.";
#EndIf;
#IfTrue MSG_EXAMINE_ONOFF < 1000;
	MSG_EXAMINE_ONOFF:
		print_ret (The) noun, " ", (IsOrAre) noun, " lige nu indstillet ", (onoff) noun, ".";
#EndIf;
#IfTrue MSG_EAT_DEFAULT < 1000;
	MSG_EAT_DEFAULT:
		"Du spiser ", (the) noun, ". Ikke dårligt.";
#EndIf;
#Ifndef SKIP_MSG_RUB_DEFAULT;
MSG_RUB_DEFAULT, MSG_SQUEEZE_DEFAULT:
	"Du opnår intet ved det.";
#Endif;
#IfTrue MSG_TAKE_NOT_AVAILABLE < 1000;
	MSG_TAKE_NOT_AVAILABLE:
		print_ret (CObjIs) noun, " ikke tilgængelig.";
#EndIf;
#IfTrue MSG_TAKE_BELONGS < 1000;
	MSG_TAKE_BELONGS:
		! p_arg_1 = the object that is held by p_arg_2
		print_ret (The) p_arg_1, " ser ud til at høre til ", (the) p_arg_2, ".";
#EndIf;
#IfTrue MSG_TAKE_PART_OF < 1000;
	MSG_TAKE_PART_OF:
		! p_arg_1 = the object that is part of p_arg_2
		print_ret (The) p_arg_1, " ser ud til at være en del af ", (the) p_arg_2, ".";
#EndIf;
#Ifndef OPTIONAL_NO_DARKNESS;
#Ifndef SKIP_MSG_EXAMINE_DARK;
	MSG_EXAMINE_DARK, MSG_SEARCH_DARK:
		"Men det er mørkt.";
#Endif;
#Endif;
#Iftrue MSG_SCORE_DEFAULT < 1000;
	MSG_SCORE_DEFAULT:
#Ifdef NO_SCORE;
		"Der er ingen point i dette spil.";
#Ifnot;
		if (deadflag) print "I dette spil fik du"; else print "Du har indtil nu";
		print score, " ud af ", MAX_SCORE, ", mulige i ", turns, " træk";
		rtrue;
#Endif;
#Endif;
#IfDef OPTIONAL_FULL_SCORE;
#IfTrue MSG_FULLSCORE_START < 1000;
	MSG_FULLSCORE_START:
		print "Scoren ";
		if(deadflag) print "va"; else print "e";
		"r opgjort således:";
#EndIf;
#IfTrue MSG_FULLSCORE_END < 1000;
	MSG_FULLSCORE_END:
		"total (ud af ", MAX_SCORE, ")";
#EndIf;
#EndIf;
#Ifndef SKIP_MSG_LOOKMODE;
	MSG_LOOKMODE_NORMAL, MSG_LOOKMODE_LONG, MSG_LOOKMODE_SHORT:
		print "Dette spil er nu i ";
		if(lookmode==1) print "normal ~";
		if(lookmode==2) print "~verbose";
		else {
			if(lookmode==3) print "~super";
			print "brief";
		}
		print "~ mode, som ";
		if(lookmode ~= 1) print "altid ";
		print "giver ";
		if(lookmode == 3) print "korte";
		else print "lange";
		print " beskrivelser af steder ";
		if(lookmode == 1)
			",som ikke er besøgt før og ellers korte beskrivelser.";
		print "(selvom du";
		if(lookmode == 2) print "har";
		else print " ikke har";
		" været der før).";
#Endif;
#IfTrue MSG_RESTART_RESTORE_OR_QUIT < 1000;
	MSG_RESTART_RESTORE_OR_QUIT:
		print "^Du kan vælge: GENSTART, HENT et spil";
#Ifdef OPTIONAL_PROVIDE_UNDO_FINAL;
	#Ifdef DEATH_MENTION_UNDO;
			if(((HDR_GAMEFLAGS->1) & 16) ~= 0)
				print ", FORTRYD det seneste træk";
	#Ifnot;
			if(((HDR_GAMEFLAGS->1) & 16) ~= 0 && deadflag ~= GS_WIN)
				print ", FORTRYD det seneste træk";
	#Endif;
#Endif;
#IfDef OPTIONAL_FULL_SCORE;
		print ", vis TOTAL information om din score";
#EndIf;
		if(deadflag == 2 && AMUSING_PROVIDED == 0) print ", se nogle foreslag til BONUS-ting at gøre";
		print " eller AFSLUT? ";
		rtrue;
#EndIf;
#IfTrue MSG_AREYOUSUREQUIT < 1000;
	MSG_AREYOUSUREQUIT: ! print and rtrue to avoid newline
		print "Er du sikker på, at du vil afslutte? ";
		rtrue;
#EndIf;
#IfTrue MSG_YOU_HAVE_WON < 1000;
	MSG_YOU_HAVE_WON: ! print and rtrue to avoid newline
 		print "Du har vundet";
 		rtrue;
#EndIf;
#IfTrue MSG_YOU_HAVE_DIED < 1000;
	MSG_YOU_HAVE_DIED: ! print and rtrue to avoid newline
		print "Du er død";
		rtrue;
#EndIf;
#IfTrue MSG_ENTER_BAD_LOCATION < 1000;
	MSG_ENTER_BAD_LOCATION:
		print "Du må ";
		if(player notin location && ~~IndirectlyContains(parent(player), noun))
			print "forlade ", (the) parent(player);
		else
			print "gå ind i ", (the) parent(noun);
		" først.";
#EndIf;
#IfTrue MSG_INSERT_NOT_CONTAINER < 1000;
	MSG_INSERT_NOT_CONTAINER:
		! p_arg_1 = the object that can't contain things
		print_ret (The) p_arg_1, " kan ikke indeholde ting.";
#Endif;
#IfTrue MSG_YES_OR_NO < 1000;
	MSG_YES_OR_NO:
		print "Svar ja eller nej: ";
#EndIf;
#IfTrue MSG_RESTART_CONFIRM < 1000;
	MSG_RESTART_CONFIRM:
		print "Er du sikker på at du vil genstarte? ";
#Endif;
#Ifndef NO_SCORE;
#Iftrue MSG_PARSER_NEW_SCORE < 1000;
	MSG_PARSER_NEW_SCORE:
		! p_arg_1 = the old score
		print "^[Scoren er gået ";
		if(p_arg_1 < score) {
			p_arg_2 = score - p_arg_1;
			print "op";
		} else {
			p_arg_2 = p_arg_1 - score;
			print "ned";
		}
		print " med ", p_arg_2, " point.]^";
#Endif;
#Endif;




#IfDef OPTIONAL_EXTENDED_VERBSET;
#IfTrue MSG_BLOW_DEFAULT < 1000;
	MSG_BLOW_DEFAULT:
		"Det er meningsløst at blæse ", (the) noun, ".";
#EndIf;
#IfTrue MSG_EMPTY_ALREADY_EMPTY < 1000;
	MSG_EMPTY_ALREADY_EMPTY:
		! p_arg_1 = the object that is already empty
		print_ret (The) p_arg_1, " ", (isorare) p_arg_1, " tom allerede.";
#EndIf;
#IfTrue MSG_SET_DEFAULT < 1000;
	MSG_SET_DEFAULT:
		"Nej, du kan ikke sætte ", (thatorthose) noun, ".";
#EndIf;
#IfTrue MSG_SET_TO_DEFAULT < 1000;
	MSG_SET_TO_DEFAULT:
		"Nej, du kan ikke sætte ", (thatorthose) noun, " til noget som helst.";
#EndIf;
#IfTrue MSG_WAVE_DEFAULT < 1000;
	MSG_WAVE_DEFAULT:
		"Du ser fjollet ud, som du vifter med ", (the) noun, ".";
#EndIf;
#EndIf;

default:
		! No code found. Print an error message.
		_RunTimeError(ERR_UNKNOWN_MSGNO);
	}
];

[ ThatorThose obj;
	if (obj has pluralname) print "dem"; else print "den";
];

[ ItorThem obj;
	if (obj == player) { print "dig selv"; rtrue; }
	if (obj has pluralname) { print "dem"; rtrue; }
	if (obj has animate) {
		if (obj has female) { print "hende"; rtrue; }
		if (obj hasnt neuter) { print "ham"; rtrue; }
	}
	print "den";
];

[ CObjIs p_obj;
    print "De";
    if (p_obj has neuter) print "t";
    else print "n";
    print " er";
    !print (The) p_obj, " ", (isorare) p_obj;
];

[ IsorAre obj;
	if (obj has pluralname || obj == player) print "er"; else print "er";
];

[ CTheyreorThats obj;
	if (obj == player)			 { print "Du er"; return; }
	if (obj has pluralname)		{ print "De er"; return; }
	if (obj has animate) {
		if (obj has female)		{ print "Hun er"; return; }
		if (obj hasnt neuter) { print "Han er"; return; }
	}
	print "Det er";
];

[ CTheyreorIts p_obj;
	if(p_obj ~= player && p_obj hasnt pluralname && p_obj hasnt animate) {
		print "Det er";
		return;
	}
	CTheyreorThats(p_obj);
];

[OnOff obj;
	if(obj has on) print "tændt";
	else print "slukket";
	return;
];


!
! Error messages
!
Constant ERR_TOO_MANY_TIMERS_DAEMONS 1;
Constant ERR_OBJECT_HASNT_PROPERTY 2;
Constant ERR_SCOPE_FULL 3;
Constant ERR_UNKNOWN_MSGNO 4;
Constant ERR_INVALID_DIR_PROP 5;
Constant ERR_TOO_MANY_FLOATING 6;
Constant ERR_NOT_DIR_PROP 7;
Constant ERR_NOT_FAKE_OBJ 8;
Constant ERR_ILLEGAL_CHOOSEOBJNO 9;

[_RunTimeError p_err p_obj _parent;
	print "^[PunyInform error: ";
	if(p_err ofclass string)
		print (string) p_err;
	else {
		print p_err;
#IfTrue RUNTIME_ERRORS == RTE_VERBOSE;
		print " - ";
		switch(p_err) {
		ERR_TOO_MANY_TIMERS_DAEMONS:
			print "Too many timers/daemons";
		ERR_OBJECT_HASNT_PROPERTY:
			print "Object lacks required property";
		ERR_SCOPE_FULL:
			print "Scope full";
		ERR_UNKNOWN_MSGNO:
			print "Unknown message#";
		ERR_INVALID_DIR_PROP:
			print "GoSub called with invalid direction property";
		ERR_TOO_MANY_FLOATING:
			print "Too many floating objects";
		ERR_NOT_DIR_PROP:
			print "DirPropToFakeObj called with non-dirprop";
		ERR_NOT_FAKE_OBJ:
			print "FakeObjToDirProp called with non-fakeobj";
		ERR_ILLEGAL_CHOOSEOBJNO:
			print "ChooseObjectsFinal_(Pick or Discard) called with nonexistent array index";
		default:
			print "Unknown error";
		}
#EndIf;
	}
	print "]^";
#IfTrue RUNTIME_ERRORS == RTE_VERBOSE;
	if(p_obj ofclass object) {
		_parent = parent(p_obj);
		print "Offending object: ", (the) p_obj, " (", p_obj, ") in ", (name) _parent, " (", _parent, ")^"; 
	}
#Ifnot;
	_parent = p_obj; ! Avoid compiler warning
#EndIf;
	rtrue;
];
