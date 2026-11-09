
undefined8
FUN_01003f9a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_010044a8;
  uVar3 = 0;
  pbVar2 = (byte *)*param_1;
  if (pbVar2[0x14] == 0) {
    if (*pbVar2 == 1) {
      *(ushort *)param_1[1] = *(ushort *)param_1[1] | 0x8000;
    }
    FUN_0100ff12(*(undefined1 *)*param_1,param_1[1]);
    if (*(char *)*param_1 == '\x01') {
      *(ushort *)param_1[1] = (ushort)(((uint)*(ushort *)param_1[1] << 0x11) >> 0x11);
    }
    FUN_0100ff3c(*(undefined1 *)*param_1,1);
  }
  else if (pbVar2[0x14] == 1) {
    if (*(char *)(DAT_010044a8 + (uint)*pbVar2) == '\0') {
      FUN_0100fcae((uint)*pbVar2,param_1[2]);
      *(undefined1 *)(iVar1 + (uint)*(byte *)*param_1) = 1;
    }
    else {
      FUN_0100fb98();
    }
    FUN_010040c6(*(undefined4 *)(DAT_010044bc + (uint)*(byte *)*param_1 * 4));
    FUN_0100fd5c(*(undefined1 *)*param_1,*(undefined1 *)(param_1[2] + 0xb));
    FUN_0100fd48(*(undefined1 *)*param_1,*(undefined1 *)(param_1[2] + 0xc));
    FUN_0100fd1e(*(undefined1 *)*param_1,1);
  }
  else {
    FUN_01003f3a();
    uVar3 = 1;
  }
  return CONCAT44(param_4,uVar3);
}

