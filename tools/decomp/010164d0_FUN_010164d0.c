
longlong FUN_010164d0(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4,
                     undefined1 *param_5,undefined1 *param_6,undefined4 param_7,int param_8,
                     int param_9)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  
  uVar1 = FUN_0101369c(param_1,param_2,DAT_01016e3c);
  if (*(char *)(*(int *)(DAT_01016e30 + param_8 * 8 + param_9 * 4) + 0x12) == '\x01') {
    puVar3 = (uint *)0x1016e68;
  }
  else {
    puVar3 = (uint *)0x1016e78;
  }
  uVar2 = *puVar3;
  bVar5 = uVar1 < uVar2;
  uVar4 = (uint)bVar5;
  if (bVar5) {
    uVar2 = puVar3[2];
  }
  if (bVar5 && uVar1 < uVar2) {
    uVar4 = 2;
  }
  *param_3 = (char)uVar4;
  *param_5 = (char)puVar3[uVar4 * 2 + 1];
  *param_4 = 0;
  *param_6 = 0x30;
  *(bool *)param_7 = 500 < uVar1;
  return ZEXT48(param_4) << 0x20;
}

