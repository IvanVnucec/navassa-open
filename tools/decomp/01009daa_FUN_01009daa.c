
undefined4 FUN_01009daa(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  
  iVar3 = DAT_0100a1c4;
  bVar2 = *(byte *)(DAT_0100a02c + param_1);
  uVar8 = (uint)bVar2;
  puVar6 = (undefined8 *)(DAT_01009ee4 + param_3 * 0x60);
  if (param_4 != 0) {
    iVar7 = DAT_0100a1c4 + param_3;
    if (param_1 < 2) {
      bVar1 = *(byte *)(*(int *)(DAT_0100a1d0 + param_1 * 4) + 0x1ab);
    }
    else {
      bVar1 = *(byte *)(*(int *)(DAT_0100a1d4 + param_1 * 4) + 0x1b6);
    }
    if (((bVar1 & 3) != 0) && (*(char *)(iVar7 + 2) == '\0')) {
      uVar5 = 0;
      if (param_2 == 5) {
        uVar5 = *(undefined1 *)((short)(ushort)bVar2 * 0xbc + DAT_0100a1a0 + 0x3c);
      }
      FUN_01009cf0(param_3,uVar5,*(undefined1 *)(DAT_0100a1c4 + param_1 + 0xb8),
                   *(undefined1 *)(iVar7 + 0xbf));
    }
    if (*(char *)(iVar7 + 2) != '\0') {
      uVar9 = FUN_01006dfc(0,param_2,uVar8);
      *puVar6 = uVar9;
    }
    *(byte *)((int)puVar6 + 0x35) = bVar2;
    *(int *)(iVar3 + uVar8 * 4 + 0xb0) = param_2;
    if (*(char *)((int)puVar6 + 0x11) == '\0') {
      *(undefined1 *)((int)puVar6 + 0x11) = 1;
    }
    uVar4 = FUN_010085e4(param_3,param_2,uVar8,1);
    return uVar4;
  }
  FUN_010085e4(param_3,param_2,uVar8);
  if (*(char *)(puVar6 + 2) == '\0') {
    *(undefined1 *)((int)puVar6 + 0x11) = 0;
  }
  return 0;
}

