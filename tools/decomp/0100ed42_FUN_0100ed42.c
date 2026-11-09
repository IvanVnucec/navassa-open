
undefined4 FUN_0100ed42(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined2 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  bVar2 = FUN_010026f0(*(undefined1 *)(param_4 + 0xb),param_4[1],*DAT_0100ee34,DAT_0100ee34[1],0x20,
                       param_2,*param_4,param_4[1]);
  uVar3 = (ushort)bVar2;
  if (*DAT_0100ee38 == '\0') {
    FUN_0100ef48(param_1,(char)*(undefined2 *)((int)param_4 + param_1 * 2 + 0x22),
                 param_4[0xc] & 0xffff,uVar3,0,param_3);
  }
  else {
    iVar7 = (short)param_1 * 0x24c;
    iVar6 = DAT_0100ee14 + iVar7;
    bVar8 = *(byte *)(iVar6 + 0x24a) != uVar3;
    if (bVar8) {
      uVar3 = *(ushort *)(DAT_0100ee14 + iVar7);
    }
    if (!bVar8 || uVar3 == 1) {
      uVar5 = 0;
      do {
        FUN_0100ee40();
        puVar1 = DAT_0100ee30;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x40);
      uVar5 = 0;
      do {
        uVar4 = FUN_010242e8(*(undefined4 *)(iVar6 + uVar5 * 4 + 0x144));
        *puVar1 = uVar4;
        FUN_0100ee40();
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x40);
    }
  }
  return 0;
}

