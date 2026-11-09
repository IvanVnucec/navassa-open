
longlong FUN_0101e884(undefined1 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  
  if (param_1[0x10e] == '\x01') {
    if ((uint)(byte)param_1[0x10f] == (int)**(char **)(param_1 + 0x14)) {
      FUN_0100c50c(*param_1);
      if (*DAT_0101e988 != '\0') {
        FUN_0100cce8(param_1);
      }
    }
    else {
      *(undefined2 *)(*(char **)(param_1 + 0x14) + 0xc) =
           *(undefined2 *)(*(int *)(param_1 + 0xc) + 0xa2);
      *(undefined2 *)(*(int *)(param_1 + 0x14) + 0xe) =
           *(undefined2 *)(*(int *)(param_1 + 0xc) + 0xa4);
    }
    param_1[0x10e] = '\0';
  }
  pcVar1 = DAT_0101e98c;
  if (*DAT_0101e98c != '\0') {
    FUN_0100c3a2(param_1);
    *pcVar1 = '\0';
  }
  *(short *)(*(int *)(param_1 + 0x10) + 0x38) = *(short *)(*(int *)(param_1 + 0x10) + 0x38) + 1;
  FUN_010231a0(param_1 + 0x70);
  return (ulonglong)param_4 << 0x20;
}

