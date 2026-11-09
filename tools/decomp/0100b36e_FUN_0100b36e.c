
undefined8 FUN_0100b36e(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(DAT_0100b544 + param_1 * 4);
  iVar1 = DAT_0100b550 + param_1 * 2;
  uVar4 = (uint)*(ushort *)(iVar1 + 10) << 1;
  FUN_0100b4fc(iVar1,DAT_0100b550,uVar4 >> 8 & 1);
  uVar5 = 0;
  *(char *)(iVar2 + 0x54) = (char)uVar4;
  iVar1 = 8;
  do {
    if ((int)(param_3 << 0x1f) < 0) break;
    param_3 = (param_3 << 0x18) >> 0x19;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  pin_update(iVar2 + 0x53,0x80,0);
  pin_update(iVar2 + 0x53,0x70,0);
  puVar3 = (undefined1 *)(iVar2 + 0x4f);
  if (param_2 == 1) {
    *puVar3 = 3;
    FUN_0100b472(param_1,54000);
    uVar4 = (uint)*(ushort *)(iVar2 + 0xe6) | (*(byte *)(iVar2 + 0xe8) & 0x7f) << 0x10;
    if ((((uint)*(ushort *)(iVar2 + 0x66) | (*(byte *)(iVar2 + 0x68) & 0xf) << 0x10) == 0x800) &&
       (uVar4 = DAT_0100b554 + uVar4, 1 < (int)uVar4)) {
      uVar4 = uVar4 - 3;
    }
    *(char *)(iVar2 + 0x57) = (char)uVar4;
    *(char *)(iVar2 + 0x58) = (char)(uVar4 >> 8);
    *(byte *)(iVar2 + 0x59) = (byte)(uVar4 >> 0x10) & 0x7f;
    *puVar3 = 9;
    uVar5 = FUN_0100b472(param_1,54000);
  }
  else if (param_2 == 2) {
    pin_update(puVar3,0xe,0xe);
  }
  else {
    uVar5 = 0xc90d;
  }
  return CONCAT44(param_4,uVar5);
}

