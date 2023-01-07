# ラズパイでのセンサー読み取り

## 実行についてメモ

センサーのデバイスファイルを読み込みできる権限に調整する。

```
$ ls -l /dev/i2c-1
crw-rw---- 1 root i2c 89, 1 Dec 20 12:20 /dev/i2c-1
```

実行ユーザをi2cグループに入れるか、Rootで実行する。

```
sudo usermod -aG i2c ${whoami}
```

## cron設定例

ログの吐き出し場所を作成する（以下では`/var/log/sensors`を想定）。

以下を`/etc/cron.d/sensors`に作成する。

```
SHELL=/bin/bash
PATH=/usr/local/sbin:/usr/local/bin:/sbin:/bin:/usr/sbin:/usr/bin
SCRIPT_PATH=/<任意の場所>/iot-works/raspi/

*/10 * * * * root ${SCRIPT_PATH}/.venv/bin/python ${SCRIPT_PATH}/temp.py >> /var/log/sensors/log.csv
```
