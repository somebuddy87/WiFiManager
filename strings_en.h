/**
 * strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 * 
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_H_
#define _WM_STRINGS_H_

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! THIS DOES NOT WORK, you cannot define in a sketch, if anyone one knows how to order includes to be able to do this help!

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html><html lang='en'><head><meta name='format-detection' content='telephone=no'><meta charset='UTF-8'><meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/><title>LOXpixel! Setup</title>";
const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"alert(p);"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();}</script>";

const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><div class='wrap'>";

const char HTTP_ROOT_MAIN[]        PROGMEM = "<img src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAASwAAABFCAMAAADHLythAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyZpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNi1jMTM4IDc5LjE1OTgyNCwgMjAxNi8wOS8xNC0wMTowOTowMSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTcgKFdpbmRvd3MpIiB4bXBNTTpJbnN0YW5jZUlEPSJ4bXAuaWlkOkU4QTJFMEY4RjhFNDExRTlCM0QzODcxMDgwMkNFQjM2IiB4bXBNTTpEb2N1bWVudElEPSJ4bXAuZGlkOkU4QTJFMEY5RjhFNDExRTlCM0QzODcxMDgwMkNFQjM2Ij4gPHhtcE1NOkRlcml2ZWRGcm9tIHN0UmVmOmluc3RhbmNlSUQ9InhtcC5paWQ6RThBMkUwRjZGOEU0MTFFOUIzRDM4NzEwODAyQ0VCMzYiIHN0UmVmOmRvY3VtZW50SUQ9InhtcC5kaWQ6RThBMkUwRjdGOEU0MTFFOUIzRDM4NzEwODAyQ0VCMzYiLz4gPC9yZGY6RGVzY3JpcHRpb24+IDwvcmRmOlJERj4gPC94OnhtcG1ldGE+IDw/eHBhY2tldCBlbmQ9InIiPz47PiWoAAAAwFBMVEWgtpUXZqeKpSv6+/mtR438zRjpGyo6ZSFye1YhYnGepnwkldeO1fbO2skuWRH2hEpFcjQiq1ayxKmz00RnilWKS2vErRcnZht8mSZoo5bZ49ZLaxYlf5YuWyZzlWOkdjVwaiRUUjNDUxjn7OTD0b26LyTh592kxz9Xf0QaTw4lhjfDsJ+DpHvt8epjfRbx9PC6x8jdfkJPh2aZ4v/p28xtQBcbXQh0srGMNBu+fzvz6eGIzedqT0siYkJ9wM/////CrG7yAAAAQHRSTlP///////////////////////////////////////////////////////////////////////////////////8AwnuxRAAAFLRJREFUeNrsXIFbm8jTpkHdhoZ1S4ikUDABJJBCOLWinon5//+rb2Z3gYUQo73rd/d7nhuitUsk4c07787OzKrFdtCauX/LdEt9LpptKaejvD1tG7octdTnx/t/nfVuytbaU5ZtB/KwgwgGtM/+blwfVHvzun8usl3XfFs5/SNctsZKOWrTdpAG/z6wSuaslcNJ21M5uWuMmhys3ZfGdm+DVS7Gn7q264BFzxqbkUiOBst2NPxXgrX+qlrzKQNYd/e1TZhVg/UdbQz/2vpb100Wu0+fxo3hfz7vdYVZs7PZFm12dkZrB7WXcnB7dra1/4VgpQDWWpgDP9FYBev17u4bPF7umSHB+k43drqh37+MaXH8qnGQ0t2nHUltmz9SOv40JoHtqmCFDE45IYCVt8zaVjaMVtuzbar/K5m1DuF+Pqc2A7QUKQKwvlE4w+jrPUtrsBhi4X8H1NzjV83pbjdGLtUWArVAtqwOWOja1/7Z2TJvmbXF6+8BrLO3rv+PMcv5upbykANYnEItWOgLJnu9vyMNWOCnfwBYX/w3piuNokqNG08qQ65gvtYBCy6gfwaZ2gYKs/D6RQVOemIG+afccG23YK1bKUKwkFCm83r/yA7A2hnHJljTDSgKlt/MFqXvjwGuHTPN8hCsGYsTeE7spn4NFjAr/CBYrhHk0oI8/n1uqDBrLaem0k0CCVZMXievxEr0d4L1g2S+/2lM06B5hm4I2aK+FPMWLNCsGaXwWRg0pNszHkcU8EPrnO80I/QWC/FY0PT3xFkAFlOZRSPpSJQqYL0wyor3guWjz42zpDNqSU/sgXXNo4UlgPW8hIlRMKtE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'/><h1>LOXpixel! Setup</h1><br><h3>Setup</h3><a href='https://unser-smartes-zuhause.de'>https://unser-smartes-zuhause.de</a><br>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Configure WiFi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configure WiFi (No Scan)</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>Chip Info</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>Setup LOXpixel! Parameters</button></form><br/>\n",//MENU_PARAM
"<form action='/close'   method='get'><button>Close</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>Restart</button></form><br/>\n",// MENU_RESTART
"<form action='/exit'    method='get'><button>Exit</button></form><br/>\n",  // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>Erase</button></form><br/>\n", // MENU_ERASE
"<hr><br/>" // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage
const char HTTP_ITEM[]             PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a>{qi}{qp}</div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Password</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'>";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Save</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>";

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Refresh</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Saving Credentials<br/>Trying to connect LOXpixel! to network.<br />If it fails reconnect to AP to try again</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg'>Saved<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Erase WiFi Config</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg P'><strong>Connected</strong> to {v}<br/><em><small>with IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>Not Connected</strong> to {v}{r}</div>";
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Authentication Failure"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>AP not found";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>Could not Connect"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>No AP set</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
".c,body{text-align:center;font-family:verdana}div,input{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box;}"
"input,button,.msg{border-radius:.3rem;width: 100%}"
"button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#69c350;color:#333333;line-height:2.4rem;font-size:1.2rem;width:100%}"
"input[type='file']{border:1px solid #1fa3ec}"
".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
// links
"a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#ffffff;text-decoration:underline}"
// quality icons
".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
// icons @2x media query (32px rescaled)
"@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
"background-size: 95px 16px;}}"
// msg callouts
".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}"
// lists
"dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
"td{vertical-align: top;}"
".h{display:none}"
"button.D{background-color:#dc3630}"
// invert
"body.invert,body.invert a,body.invert h1 {background-color:#333333;color:#fff;}"
"body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
"body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
"input:disabled {opacity: 0.5;}"
"</style>";

const char HTTP_HELP[]             PROGMEM =
 "";

#ifdef JSTEST
const char HTTP_JS[] PROGMEM = 
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Chip Rev</dt><dd>{1}</dd>";
  const char HTTP_INFO_lastreset[]    PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  const char HTTP_INFO_aphost[]       PROGMEM = "<dt>Acccess Point Hostname</dt><dd>{1}</dd>";  
#else 
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Real Flash Size</dt><dd>{1} bytes</dd>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>Flash Chip ID</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>Core Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Memory - Sketch Size</dt><dd>Used / Total bytes<br/>{1} / {2}";
	const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
#endif

const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Memory - Free Heap</dt><dd>{1} bytes available</dd>"; 
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Uptime</dt><dd>{1} Mins {2} Secs</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Flash Size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK Version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU Frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>Access Point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>Access Point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Station Gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Station Subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";
const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd>";

// Strings
const char S_y[]                  PROGMEM = "Yes";
const char S_n[]                  PROGMEM = "No";
const char S_enable[]             PROGMEM = "Enabled";
const char S_disable[]            PROGMEM = "Disabled";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Unknown";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "Credentials Saved";
const char S_titlewifisettings[]  PROGMEM = "Settings Saved";
const char S_titlewifi[]          PROGMEM = "Config ESP";
const char S_titleinfo[]          PROGMEM = "Info";
const char S_titleparam[]         PROGMEM = "Setup";
const char S_titleparamsaved[]    PROGMEM = "Setup Saved";
const char S_titleexit[]          PROGMEM = "Exit";
const char S_titlereset[]         PROGMEM = "Reset";
const char S_titleerase[]         PROGMEM = "Erase";
const char S_titleclose[]         PROGMEM = "Close";
const char S_options[]            PROGMEM = "options";
const char S_nonetworks[]         PROGMEM = "No networks found. Refresh to scan again.";
const char S_staticip[]           PROGMEM = "Static IP";
const char S_staticgw[]           PROGMEM = "Static Gateway";
const char S_staticdns[]          PROGMEM = "Static DNS";
const char S_subnet[]             PROGMEM = "Subnet";
const char S_exiting[]            PROGMEM = "Exiting";
const char S_resetting[]          PROGMEM = "Module will reset in a few seconds.";
const char S_closing[]            PROGMEM = "You can close the page, portal will continue to run";
const char S_error[]              PROGMEM = "An Error Occured";
const char S_notfound[]           PROGMEM = "File Not Found\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMethod: ";
const char S_args[]               PROGMEM = "\nArguments: ";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

// -----------------------------------------------------------------------------------------------
// DO NOT EDIT BELOW THIS LINE

const uint8_t _nummenutokens = 9;
const char * const _menutokens[9] PROGMEM = {
    "wifi",
    "wifinoscan",
    "info",
    "param",
    "close",
    "restart",
    "exit",
    "erase",
    "sep"
};

const char R_root[]               PROGMEM = "/";
const char R_wifi[]               PROGMEM = "/wifi";
const char R_wifinoscan[]         PROGMEM = "/0wifi";
const char R_wifisave[]           PROGMEM = "/wifisave";
const char R_info[]               PROGMEM = "/info";
const char R_param[]              PROGMEM = "/param";
const char R_paramsave[]          PROGMEM = "/paramsave";
const char R_restart[]            PROGMEM = "/restart";
const char R_exit[]               PROGMEM = "/exit";
const char R_close[]              PROGMEM = "/close";
const char R_erase[]              PROGMEM = "/erase"; 
const char R_status[]             PROGMEM = "/status";


//Strings
const char S_ip[]                 PROGMEM = "ip";
const char S_gw[]                 PROGMEM = "gw";
const char S_sn[]                 PROGMEM = "sn";
const char S_dns[]                PROGMEM = "dns";

// softap ssid default prefix
#ifdef ESP8266
	const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
	const char S_ssidpre[]        PROGMEM = "ESP32";
#else
	const char S_ssidpre[]        PROGMEM = "WM";
#endif

//Tokens
//@todo consolidate and reduce
const char T_ss[]                 PROGMEM = "{"; // token start sentinel
const char T_es[]                 PROGMEM = "}"; // token end sentinel
const char T_1[]                  PROGMEM = "{1}"; // @token 1
const char T_2[]                  PROGMEM = "{2}"; // @token 2
const char T_v[]                  PROGMEM = "{v}"; // @token v
const char T_I[]                  PROGMEM = "{I}"; // @token I
const char T_i[]                  PROGMEM = "{i}"; // @token i
const char T_n[]                  PROGMEM = "{n}"; // @token n
const char T_p[]                  PROGMEM = "{p}"; // @token p
const char T_t[]                  PROGMEM = "{t}"; // @token t
const char T_l[]                  PROGMEM = "{l}"; // @token l
const char T_c[]                  PROGMEM = "{c}"; // @token c
const char T_e[]                  PROGMEM = "{e}"; // @token e
const char T_q[]                  PROGMEM = "{q}"; // @token q
const char T_r[]                  PROGMEM = "{r}"; // @token r
const char T_R[]                  PROGMEM = "{R}"; // @token R
const char T_h[]                  PROGMEM = "{h}"; // @token h

// http
const char HTTP_HEAD_CL[]         PROGMEM = "Content-Length";
const char HTTP_HEAD_CT[]         PROGMEM = "text/html";
const char HTTP_HEAD_CT2[]        PROGMEM = "text/plain";
const char HTTP_HEAD_CORS[]       PROGMEM = "Access-Control-Allow-Origin";
const char HTTP_HEAD_CORS_ALLOW_ALL[]  PROGMEM = "*";

const char * const WIFI_STA_STATUS[] PROGMEM
{
  "WL_IDLE_STATUS",     // 0 STATION_IDLE
  "WL_NO_SSID_AVAIL",   // 1 STATION_NO_AP_FOUND
  "WL_SCAN_COMPLETED",  // 2
  "WL_CONNECTED",       // 3 STATION_GOT_IP
  "WL_CONNECT_FAILED",  // 4 STATION_CONNECT_FAIL, STATION_WRONG_PASSWORD(NI)
  "WL_CONNECTION_LOST", // 5
  "WL_DISCONNECTED",    // 6 
  "WL_STATION_WRONG_PASSWORD" // 7 KLUDGE 
};

#ifdef ESP32
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "OPEN",
    "WEP",             
    "WPA_PSK",         
    "WPA2_PSK",        
    "WPA_WPA2_PSK",    
    "WPA2_ENTERPRISE", 
    "MAX"
};
#elif defined(ESP8266)
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "",
    "",
    "WPA_PSK",      // 2 ENC_TYPE_TKIP
    "",
    "WPA2_PSK",     // 4 ENC_TYPE_CCMP
    "WEP",          // 5 ENC_TYPE_WEP
    "",
    "OPEN",         //7 ENC_TYPE_NONE
    "WPA_WPA2_PSK", // 8 ENC_TYPE_AUTO
};
#endif

const char* const WIFI_MODES[] PROGMEM = { "NULL", "STA", "AP", "STA+AP" };


#ifdef ESP32
// as 2.5.2
// typedef struct {
//     char                  cc[3];   /**< country code string */
//     uint8_t               schan;   /**< start channel */
//     uint8_t               nchan;   /**< total channel number */
//     int8_t                max_tx_power;   /**< This field is used for getting WiFi maximum transmitting power, call esp_wifi_set_max_tx_power to set the maximum transmitting power. */
//     wifi_country_policy_t policy;  /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US",1,11,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
#elif defined(ESP8266)
// typedef struct {
//     char cc[3];               /**< country code string */
//     uint8_t schan;            /**< start channel */
//     uint8_t nchan;            /**< total channel number */
//     uint8_t policy;           /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US",1,11,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,WIFI_COUNTRY_POLICY_AUTO};
#endif

#endif

