/* Wifiアクセスポイントの設定 */
#define WIFI_AP_SSID "xxxxxx"       // アクセスポイントのWIFI_AP_SSID -- 2024/01/14 使用しない
#define WIFI_AP_PASS "xxxxxx"       // アクセスポイントのパスワード -- 2024/01/14 使用しない
#define WIFI_SEND_IP "192.168.7.18" // 送り先のPCのIPアドレス（PCのIPアドレスを調べておく）
#define UDP_SEND_PORT 22222         // 送り先のポート番号
#define UDP_RESV_PORT 22224         // このESP32のポート番号

/* ESP32のIPアドレスを固定する場合は下記の5項目を設定 */
#define FIXED_IP_ADDR "192. 168. 1. xx"    // ESP32のIPアドレスを固定する場合のESPのIPアドレス -- 2024/01/14 使用しない
#define FIXED_IP_GATEWAY "192. 168. 1. xx" // ESP32のIPアドレスを固定する場合のルーターのゲートウェイ -- 2024/01/14 使用しない
#define FIXED_IP_SUBNET "255. 255. 255. 0" // ESP32のIPアドレスを固定する場合のサブネット -- 2024/01/14 使用しない

/* リモコンの設定 */
#define BT_MAC_ADDR "xx:xx:xx:xx:xx:xx" // ESP32自身のBluetoothMACアドレス（本プログラムを実行しシリアルモニタで確認）
                                        // PS4リモコン(Bluetooth)を使わない場合は不要.