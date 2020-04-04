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

const char HTTP_ROOT_MAIN[]        PROGMEM = "<img src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAcAAAABpCAIAAAAiI2S2AAAACXBIWXMAAAsTAAALEwEAmpwYAAAFFmlUWHRYTUw6Y29tLmFkb2JlLnhtcAAAAAAAPD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNi4wLWMwMDIgNzkuMTY0MzUyLCAyMDIwLzAxLzMwLTE1OjUwOjM4ICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOmRjPSJodHRwOi8vcHVybC5vcmcvZGMvZWxlbWVudHMvMS4xLyIgeG1sbnM6cGhvdG9zaG9wPSJodHRwOi8vbnMuYWRvYmUuY29tL3Bob3Rvc2hvcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RFdnQ9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZUV2ZW50IyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgMjEuMSAoV2luZG93cykiIHhtcDpDcmVhdGVEYXRlPSIyMDIwLTA0LTA0VDIzOjQxOjQxKzAyOjAwIiB4bXA6TW9kaWZ5RGF0ZT0iMjAyMC0wNC0wNFQyMzo0MjoyNCswMjowMCIgeG1wOk1ldGFkYXRhRGF0ZT0iMjAyMC0wNC0wNFQyMzo0MjoyNCswMjowMCIgZGM6Zm9ybWF0PSJpbWFnZS9wbmciIHBob3Rvc2hvcDpDb2xvck1vZGU9IjMiIHBob3Rvc2hvcDpJQ0NQcm9maWxlPSJzUkdCIElFQzYxOTY2LTIuMSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDoyMGIzMDA3ZS0yZmJmLWIw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'/><h1>LOXpixel! Setup</h1><br><h3>Setup</h3><a href='https://unser-smartes-zuhause.de'>https://unser-smartes-zuhause.de</a><br>";

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


