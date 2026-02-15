# midimittr 使い方ガイド

このドキュメントは、midimittr の使い方を初心者の方にもわかりやすく説明するガイドです。

---

## 目次

1. [BLEとは？](#bleとは)
2. [MIDI over BLEとは？](#midi-over-bleとは)
3. [midimittr について](#midimittr-について)
4. [必要な環境・機材](#必要な環境機材)
5. [インストール](#インストール)
6. [基本的な使い方](#基本的な使い方)
7. [詳細な機能](#詳細な機能)
8. [トラブルシューティング](#トラブルシューティング)
9. [よくある質問（FAQ）](#よくある質問faq)

---

## BLEとは？

**BLE（Bluetooth Low Energy）** は、Bluetoothの一種で、従来のBluetooth（Classic Bluetooth）よりも**消費電力が非常に少ない**通信規格です。

### 従来のBluetoothとの違い

| 項目 | Classic Bluetooth | BLE (Bluetooth Low Energy) |
|------|-------------------|---------------------------|
| 消費電力 | 高い | 非常に低い |
| 接続速度 | 速い | やや遅い |
| データ転送量 | 大量のデータ転送に適する | 小さなデータを断続的に送るのに適する |
| 用途 | 音楽ストリーミング、ヘッドセットなど | フィットネストラッカー、スマートウォッチ、IoTデバイスなど |

### なぜMIDI通信にBLEが使われるのか？

MIDI（Musical Instrument Digital Interface）は、楽器や音楽機器を制御するための通信規格です。MIDIで送られるデータは非常に小さく（音符のオン/オフ、音の強さなど）、リアルタイム性が重視されます。

BLEは以下の理由でMIDI通信に適しています：

- **データ量が少ない**: MIDIメッセージは数バイト程度の小さなデータ
- **低消費電力**: バッテリー駆動のモバイルデバイスでも長時間使える
- **ワイヤレス**: ケーブル不要で楽器と機器をつなげる

---

## MIDI over BLEとは？

**MIDI over BLE**（または **BLE-MIDI**）は、BLE通信を使ってMIDIデータをワイヤレスで送受信する技術です。

### 従来のMIDI接続との違い

#### 従来のMIDI接続
- 物理的なMIDIケーブル（5ピンDINケーブル）が必要
- 機器同士をケーブルで直接接続
- ケーブルの長さに制限がある

#### MIDI over BLE
- ケーブル不要（ワイヤレス）
- Bluetooth対応機器同士なら自由に接続可能
- 複数のデバイスを柔軟につなげる

### 使用例

- **スマホ/タブレットと電子楽器をワイヤレス接続**: iPad上の音楽制作アプリと電子ピアノを接続して演奏
- **MIDIコントローラーとPC/Macをワイヤレス接続**: ワイヤレスのMIDIコントローラーでDAW（音楽制作ソフト）を操作
- **複数の機器間でMIDI信号をルーティング**: ハブとして機能し、複数のMIDI機器を中継

---

## midimittr について

**midimittr（ミディミッター）** は、iOSデバイス（iPhoneやiPad）をMIDIハブとして機能させるアプリです。

### 主な機能

- **MIDI over BLE接続**: BLE対応のMIDI機器とワイヤレスで接続
- **USB-Lightning接続**: Lightningケーブルを使ったMIDI接続（[midimittrusb デスクトップアプリ](https://github.com/sieren/midimittrusb) と連携）
- **柔軟なルーティング**: 複数のMIDI入力と出力を自由につなぎ変えられる
- **バックグラウンド動作**: アプリを閉じても接続が維持される
- **設定の記憶**: 前回のルーティング設定を自動的に復元

### どんなときに使うのか？

- ワイヤレスMIDIキーボードとiPadの音楽アプリをつなぐ
- iPhone/iPadをMIDIハブとして、複数の機器を中継する
- PC/MacとiOSデバイス間でMIDI信号をやり取りする

---

## 必要な環境・機材

### iOSデバイス

- **対応OS**: iOS 9.0以上
- **対応デバイス**: iPhone、iPad（iPhone Xにも対応）

### MIDI機器

以下のいずれかの接続方法に対応したMIDI機器が必要です：

1. **BLE-MIDI対応機器**
   - BLE-MIDIに対応した電子楽器、MIDIコントローラーなど
   - 例: KORG microKEY Air、YAMAHA MD-BT01、Roland Aerophone mini など

2. **USB-MIDI機器（Lightning-USBアダプタ経由）**
   - Apple Lightning - USBカメラアダプタを使用
   - USB接続のMIDIキーボード、音源モジュールなど

3. **PC/Mac（midimittrusb経由）**
   - [midimittrusb デスクトップアプリ](https://github.com/sieren/midimittrusb)をインストール
   - LightningケーブルでiOSデバイスとPC/Macを接続

---

## インストール

### App Storeからインストール

1. App Storeで「**midimittr**」を検索
2. ダウンロード＆インストール

[![App Store](https://linkmaker.itunes.apple.com/assets/shared/badges/en-us/appstore-lrg.svg)](https://itunes.apple.com/us/app/midimittr/id925495245?mt=8)

### 初回起動時の設定

1. **Bluetooth許可**: BLE接続を使用する場合、Bluetoothへのアクセス許可を求められます。**「許可」** をタップしてください。
2. **バックグラウンド動作許可**: アプリがバックグラウンドで動作するため、通知や位置情報に関する許可を求められる場合があります。必要に応じて許可してください。

---

## 基本的な使い方

### 1. BLEデバイスへの接続

#### 手順

1. **MIDI機器の電源を入れる**
   - BLE-MIDI対応のMIDI機器（キーボード、コントローラーなど）の電源を入れます。
   - 機器のBluetooth接続モードをオンにします（機器の説明書を参照）。

2. **midimittrを起動**
   - アプリを起動すると、自動的に近くのBLEデバイスをスキャンします。

3. **デバイスを選択**
   - 画面上に検出されたBLEデバイスの一覧が表示されます。
   - 接続したいデバイスをタップします。

4. **接続完了**
   - デバイス名の横に「接続済み」のマークが表示されれば接続成功です。

#### ヒント

- デバイスが見つからない場合は、MIDI機器のBluetooth設定を確認してください。
- iOSの設定アプリで、Bluetoothがオンになっているか確認してください。

---

### 2. USB-Lightning接続（PC/Mac連携）

midimittr は、Lightningケーブルを使ってPC/Macと接続し、MIDI信号をやり取りできます。

#### 必要なもの

- PC/Macに [midimittrusb デスクトップアプリ](https://github.com/sieren/midimittrusb) をインストール
- Lightningケーブル

#### 手順

1. **midimittrをiOSデバイスで起動**
2. **midimittrusbをPC/Macで起動**
3. **LightningケーブルでiOSデバイスとPC/Macを接続**
4. **自動的に接続されます**
   - midimittr画面にPC/Macからの接続が表示されます。

---

### 3. ルーティング設定

midimittr の強力な機能の一つが、**MIDI入力と出力を自由につなぎ変えられる**ことです。

#### 基本操作

1. **MIDI入力デバイスを選択**
   - 画面上部の「入力」セクションから、MIDI信号を受信したいデバイスを選択します。

2. **MIDI出力デバイスを選択**
   - 画面下部の「出力」セクションから、MIDI信号を送信したいデバイスを選択します。

3. **接続ラインを確認**
   - 選択した入力と出力が線でつながり、MIDIデータが流れるルートが表示されます。

#### 複数デバイスのルーティング

- 1つの入力を複数の出力に送ることも可能です（例: 1台のキーボードで複数の音源を鳴らす）
- 設定は自動的に保存され、次回起動時に復元されます。

---

## 詳細な機能

### バックグラウンド動作

midimittr は、アプリを閉じた状態でもMIDI接続を維持します。

- 他のアプリ（音楽制作アプリなど）を使用中でも、MIDI接続が途切れません。
- iOSのバックグラウンド処理により、省電力で動作します。

### 設定の自動保存

- 前回のルーティング設定は自動的に保存されます。
- 次回起動時に、同じMIDI機器が接続されていれば、自動的に前回の設定で接続されます。

---

## トラブルシューティング

### BLEデバイスが見つからない

#### 原因と対策

1. **MIDI機器のBluetooth設定を確認**
   - MIDI機器のBluetooth機能がオンになっているか確認してください。
   - 機器によっては、ペアリングモードに切り替える必要があります。

2. **iOSのBluetooth設定を確認**
   - iOSの設定 > Bluetooth がオンになっているか確認してください。

3. **再起動**
   - MIDI機器とiOSデバイスの両方を再起動してみてください。

4. **距離を近づける**
   - BLEの通信範囲は約10m程度です。デバイス同士を近づけてみてください。

5. **他のBluetooth接続を解除**
   - 他のBluetooth機器（ヘッドフォンなど）が接続されていると、干渉する場合があります。

---

### 音が出ない

#### 原因と対策

1. **ルーティング設定を確認**
   - midimittr上で、正しい入力と出力が接続されているか確認してください。

2. **MIDI機器の音量を確認**
   - MIDI機器や音源アプリの音量がゼロになっていないか確認してください。

3. **MIDIチャンネルを確認**
   - 送信側と受信側のMIDIチャンネルが一致しているか確認してください。
   - 一般的には、チャンネル1に設定するのが無難です。

4. **他のアプリとの競合**
   - 他の音楽アプリがMIDI入力を占有していないか確認してください。

---

### 接続が頻繁に切れる

#### 原因と対策

1. **バッテリー残量を確認**
   - BLE機器のバッテリーが少ないと、接続が不安定になります。

2. **距離と障害物**
   - デバイス間の距離を近づけ、間に障害物がないようにしてください。

3. **iOSのバックグラウンド制限**
   - iOSのバッテリー節約機能により、バックグラウンドアプリが制限される場合があります。
   - 設定 > バッテリー > 低電力モード をオフにしてみてください。

4. **アプリを再起動**
   - midimittr を一度終了して、再起動してみてください。

---

## よくある質問（FAQ）

### Q1. midimittr は無料ですか？

A. App Storeでの価格をご確認ください。開発者への寄付も受け付けています。

---

### Q2. 複数のBLEデバイスを同時に接続できますか？

A. はい、可能です。midimittr は複数のBLE-MIDI機器を同時に接続し、柔軟にルーティングできます。

---

### Q3. PC/MacとiOSデバイスを同時にBLE接続できますか？

A. 一般的に、Bluetooth接続は1対1の接続です。ただし、midimittrusb経由でPC/Macと接続しながら、BLE-MIDI機器とも接続することは可能です。

---

### Q4. Android版はありますか？

A. 現在のところ、midimittr はiOS専用アプリです。Android版は提供されていません。

---

### Q5. バックグラウンドで動作しますか？

A. はい、midimittr はバックグラウンドで動作し、他のアプリ（音楽制作アプリなど）を使用中でもMIDI接続を維持します。

---

### Q6. どのDAW（音楽制作ソフト）と互換性がありますか？

A. MIDI入力に対応しているほぼすべてのDAWやアプリと互換性があります。代表的なものとして：

- **iOS**: GarageBand、Cubasis、Auria、KORG Gadget など
- **PC/Mac**: Ableton Live、FL Studio、Logic Pro、Cubase など（midimittrusb経由）

---

### Q7. MIDIタイムコード（MTC）やMIDIクロックに対応していますか？

A. midimittr は主にMIDIノートとコントロールチェンジの転送に特化しています。MIDIタイムコードやクロック同期については、ご使用の環境で動作確認することをお勧めします。

---

### Q8. midimittrusb デスクトップアプリはどこでダウンロードできますか？

A. [GitHub - midimittrusb](https://github.com/sieren/midimittrusb) からダウンロードできます。

---

## サポート・お問い合わせ

### 公式情報

- **公式サイト**: [http://www.s-r-n.de/midimittr](http://www.s-r-n.de/midimittr)
- **GitHubリポジトリ**: [https://github.com/sieren/midimittr](https://github.com/sieren/midimittr)（オリジナル版）
- **このFork**: [https://github.com/hakaru/midimittr](https://github.com/hakaru/midimittr)

### 機能リクエスト・バグ報告

もし midimittr に追加してほしい機能やバグを見つけた場合は、[GitHub Issues](https://github.com/sieren/midimittr/issues) に報告してください。

---

## ライセンス

midimittr は Apache 2.0 ライセンスのもとで提供されています。詳細は [LICENSE](../LICENSE) ファイルをご確認ください。

---

## 開発者

- **オリジナル開発者**: Matthias Frick
- **Forkメンテナー**: hakaru

---

**楽しいMIDI体験を！** 🎹🎶
