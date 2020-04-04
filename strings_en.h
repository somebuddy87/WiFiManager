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

const char HTTP_ROOT_MAIN[]        PROGMEM = "<img src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAT8AAABKCAIAAABCXMQ6AAAACXBIWXMAAAsTAAALEwEAmpwYAAAFFmlUWHRYTUw6Y29tLmFkb2JlLnhtcAAAAAAAPD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNi4wLWMwMDIgNzkuMTY0MzUyLCAyMDIwLzAxLzMwLTE1OjUwOjM4ICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOmRjPSJodHRwOi8vcHVybC5vcmcvZGMvZWxlbWVudHMvMS4xLyIgeG1sbnM6cGhvdG9zaG9wPSJodHRwOi8vbnMuYWRvYmUuY29tL3Bob3Rvc2hvcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RFdnQ9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZUV2ZW50IyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgMjEuMSAoV2luZG93cykiIHhtcDpDcmVhdGVEYXRlPSIyMDIwLTA0LTA0VDIzOjQ3OjM1KzAyOjAwIiB4bXA6TW9kaWZ5RGF0ZT0iMjAyMC0wNC0wNFQyMzo0ODowOSswMjowMCIgeG1wOk1ldGFkYXRhRGF0ZT0iMjAyMC0wNC0wNFQyMzo0ODowOSswMjowMCIgZGM6Zm9ybWF0PSJpbWFnZS9wbmciIHBob3Rvc2hvcDpDb2xvck1vZGU9IjMiIHBob3Rvc2hvcDpJQ0NQcm9maWxlPSJzUkdCIElFQzYxOTY2LTIuMSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDo3ZTY4YWRlOC0zYjY0LTE0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'/><h3>Setup</h3><a href='https://unser-smartes-zuhause.de'>https://unser-smartes-zuhause.de</a><br><br>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Configure WiFi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configure WiFi (No Scan)</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>Chip Info</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>LOXpixel! Parameters</button></form><br/>\n",//MENU_PARAM
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
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Save</button><input type="button" value="Go back!" onclick="history.back()"></form>";
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
"input[type='file']{border:1px solid #69c350}"
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
".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#69c350}.msg.P h4{color:#69c350}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}"
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



