
longlong FUN_010298b6(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  uVar1 = DAT_01029994;
  puVar2 = DAT_01029998;
  if ((param_1 != 0) && (uVar1 = DAT_0102999c, puVar2 = DAT_010299a0, param_1 != 1)) {
    return CONCAT44(param_4,0xc509);
  }
  FUN_0100f762(DAT_0102996c,uVar1,param_2);
  *(undefined1 *)(param_2 + 0x14) = *puVar2;
  return (ulonglong)param_4 << 0x20;
}

