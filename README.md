# iot-works

## Set-up

事前作業

```
sudo usermod -a -G dialout `whoami`
```

[Arduio IDE](https://www.arduino.cc/en/software)をダウンロード。  
解凍後に実行ファイル起動。

書き込みできない場合は以下を実行。
```
sudo chmod a+rw /dev/ttyACM0
```

ArduinoIDE起動後にToolsよりPortとBoardを環境に合わせて選択。

## Sensors

- [LM60BIZ](https://akizukidenshi.com/catalog/g/gI-02490/)

