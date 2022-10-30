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

### 温度

- [LM60BIZ](https://akizukidenshi.com/catalog/g/gI-02490/)
  - 100円
- [LM61BIZ](https://akizukidenshi.com/catalog/g/gI-11160/)
  - 60円
- [DS18B20](https://akizukidenshi.com/catalog/g/gI-05276/)
  - 690円
  - [988円(Amazon) 5個セット防水加工](https://www.amazon.co.jp/dp/B083TTCB9Q)

### 温度・湿度センサー

- [BM**E**280](https://akizukidenshi.com/catalog/g/gK-09421/)
  - 1,380円
  - ボッシュ社
  - 温度、湿度、気圧の3種類を測定
- [BM**P**280](https://www.amazon.co.jp/dp/B074KBWYX8)
  - 598円 (Amazon)
  - ボッシュ社
  - 温度、気圧の2種類を測定（湿度は測れないので注意）
- [HTU21D](https://www.te.com/jpn-ja/product-CAT-HSC0004.html)
  - [900円 (Amazon） 2個セット](https://www.amazon.co.jp/dp/B08R5Z5DQM)
  - 温度、湿度の2種類を測定

### CO2

- [MG812](https://akizukidenshi.com/catalog/g/gM-16496/)
  - 1,200円
  - 固体電解質型
  - 検出範囲：350～10000ppm
- [MH-Z19**C**](https://akizukidenshi.com/catalog/g/gM-16142/)
  - 2,480円
  - NDIR(非分散型赤外)方式
  - 検出範囲：400～5000ppm
- [MH-Z19**D**](https://www.amazon.co.jp/dp/B09SD844SH)
  - 2,814円 (Amazon)
  - MH-Z19Cの後継機（AからEまであるらしい）
