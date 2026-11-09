
longlong FUN_010299b0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int unaff_r4;
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = param_1 == 2;
  if (1 < param_1) {
    return CONCAT44(param_4,0xc800);
  }
  uVar3 = FUN_010299f4(param_3);
  pcVar1 = DAT_01029c68;
  if (cVar2 != '\0') {
    pcVar1 = DAT_01029c7c;
  }
  (*pcVar1)((int)uVar3,unaff_r4 + 0xac,(uint)((int)((ulonglong)uVar3 >> 0x20) << 0x1c) >> 0x18,0x10)
  ;
  return (ulonglong)param_4 << 0x20;
}

