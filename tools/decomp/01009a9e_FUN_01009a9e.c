
longlong FUN_01009a9e(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int extraout_r1;
  
  iVar1 = DAT_0100a1bc;
  FUN_01009054(param_1,DAT_0100a1bc);
  FUN_01007326(iVar1 + 0x60,param_2,param_3);
  FUN_010071b4(param_1,0);
  FUN_01009ad6();
  if (*(char *)(extraout_r1 + 0x10) == '\0') {
    *(undefined1 *)(extraout_r1 + 0x35) = 0xff;
  }
  return (ulonglong)param_4 << 0x20;
}

