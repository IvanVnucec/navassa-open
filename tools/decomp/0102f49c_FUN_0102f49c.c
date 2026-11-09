
undefined8 FUN_0102f49c(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (-1 < (int)((3U >> (param_1 & 0xff)) << 0x1f)) {
    return CONCAT44(param_4,0xc801);
  }
  pcVar2 = DAT_0103b904;
  if (param_3 == 0) {
    pcVar2 = DAT_0103b8fc;
  }
  (*pcVar2)(param_3,*(int *)(DAT_0103b8f8 + param_1 * 4) + 0x4d,*(undefined1 *)(param_2 + 0x1c),7);
  uVar1 = FUN_0103b614(param_1,*(undefined1 *)(param_2 + 0x1f),param_2 + 0x20,param_2 + 0x2c);
  return CONCAT44(param_3,uVar1);
}

