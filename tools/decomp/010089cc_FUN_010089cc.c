
longlong FUN_010089cc(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar4 = DAT_010091f0 + param_1 * 0x60;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  uVar2 = FUN_01008748(param_1);
  *(undefined4 *)(iVar4 + 0x1c) = uVar2;
  if (*(char *)(iVar4 + 0x46) == '\x01') {
    *(undefined4 *)(iVar4 + 0x24) = 0x11d1;
    uVar1 = (&DAT_01008aa8)[*(byte *)(iVar4 + 0x45)];
  }
  else {
    *(undefined4 *)(iVar4 + 0x24) = DAT_01009514;
    uVar1 = (&DAT_01008ab4)[*(byte *)(iVar4 + 0x45)];
  }
  *(undefined1 *)(iVar4 + 0x22) = uVar1;
  FUN_01015624(param_1,iVar4,&local_20);
  *(undefined1 *)(iVar4 + 0x4c) = (undefined1)local_20;
  *(undefined1 *)(iVar4 + 0x4d) = local_20._1_1_;
  *(undefined1 *)(iVar4 + 0x4e) = local_20._2_1_;
  *(undefined1 *)(iVar4 + 0x4f) = local_20._3_1_;
  *(undefined1 *)(iVar4 + 0x50) = (undefined1)local_1c;
  *(undefined1 *)(iVar4 + 0x51) = local_1c._1_1_;
  iVar5 = 0;
  *(undefined4 *)(iVar4 + 0x54) = local_18;
  FUN_010086e6(param_1);
  uVar6 = FUN_01008ada(*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc),DAT_0100963c);
  iVar3 = (int)((ulonglong)uVar6 >> 0x20);
  do {
    if (((iVar3 != 0) || ((uint)(ushort)(&DAT_01008ac0)[iVar5 * 4] <= (uint)uVar6)) &&
       (iVar3 == 0 && (uint)uVar6 <= (uint)(ushort)(&DAT_01008ac2)[iVar5 * 4])) break;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  iVar5 = iVar5 * 8;
  *(undefined1 *)(iVar4 + 0x31) = (&DAT_01008ac4)[iVar5];
  *(undefined1 *)(iVar4 + 0x32) = (&DAT_01008ac5)[iVar5];
  *(undefined1 *)(iVar4 + 0x33) = (&DAT_01008ac6)[iVar5];
  if (param_1 == 3 || param_1 == 4) {
    *(undefined1 *)(iVar4 + 0x31) = 5;
    *(undefined1 *)(iVar4 + 0x32) = 6;
  }
  return (ulonglong)local_20 << 0x20;
}

