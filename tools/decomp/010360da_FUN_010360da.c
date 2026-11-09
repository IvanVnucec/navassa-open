
void FUN_010360da(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar5 = DAT_010364d0;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10) + 1);
  FUN_01015d2e(1);
  FUN_01015c54(1);
  iVar3 = FUN_01006cb8(5,*(undefined1 *)(*(int *)(param_1 + 0x10) + 1));
  iVar6 = DAT_010364d4;
  *(int *)(param_1 + 8) = iVar3;
  iVar7 = iVar5 + (uint)*(byte *)(*(int *)(param_1 + 0x10) + 2);
  iVar6 = iVar6 + (short)(ushort)bVar1 * 0xbc;
  FUN_01009cf0(iVar3,*(undefined1 *)(iVar6 + 0x3c),*(undefined1 *)(iVar7 + 0xb8),
               *(undefined1 *)(iVar5 + iVar3 + 0xbf));
  puVar2 = DAT_010364d8;
  uVar4 = FUN_01009cf0(2,*(undefined1 *)(iVar6 + 0x3c),*(undefined1 *)(iVar7 + 0xb8),
                       *(undefined1 *)(iVar5 + 0xc1));
  uVar8 = FUN_010364a2(uVar4,5,bVar1);
  iVar5 = FUN_01009d6a((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),*(undefined4 *)(param_1 + 8));
  if (iVar5 == 0) {
    iVar5 = 0;
    if (((uint)*puVar2 & 1 << (uint)(byte)(bVar1 + 6)) != 0) {
      uVar8 = FUN_010364a2(0,2,bVar1);
      FUN_01009d6a((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),2);
      iVar5 = FUN_010364a8(param_1,2);
      if (iVar5 != 0) {
        return;
      }
    }
    if (((uint)*puVar2 & 1 << (uint)(byte)(bVar1 + 8)) != 0) {
      uVar8 = FUN_010364a2(iVar5,3,bVar1);
      FUN_01009d6a((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),2);
      FUN_010364a8(param_1,3);
      return;
    }
  }
  return;
}

