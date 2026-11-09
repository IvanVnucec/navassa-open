
undefined8 FUN_010016a2(uint param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = DAT_010018e0;
  bVar1 = *(byte *)(DAT_0100174c + (uint)*(byte *)(DAT_01002154 + param_1));
  iVar7 = (short)(ushort)bVar1 * 0xb0 + DAT_010018e0 + 0x630 + param_1 * 4;
  iVar6 = DAT_01001748 + (uint)bVar1 * 4;
  uVar3 = param_1;
  iVar5 = param_2;
  if (*(int *)(iVar7 + 0x88) != 0) {
    FUN_01004246(param_1);
    FUN_0100541a(param_1);
    FUN_01005e34(param_1);
    if ((*(uint *)(iVar2 + 0x2c) & (param_1 + 1) * 0x100) != 0) {
      uVar3 = -(uint)(*(char *)(*(int *)(iVar6 + 0xc) + 0x2d) == '\0') >> 0x1f;
      iVar5 = *(int *)(iVar7 + 0x88);
      FUN_01003652(param_1,0,*(undefined4 *)(DAT_010019f4 + param_1 * 4),
                   *(undefined4 *)(DAT_010019f0 + param_1 * 4),uVar3,iVar5,param_3);
    }
  }
  if (param_2 != 0) {
    FUN_010038c2(param_1,*(undefined4 *)(iVar6 + 0xc),param_3);
  }
  uVar4 = *(uint *)(iVar2 + 0x2c);
  if (param_3 != 0) {
    uVar4 = uVar4 & ~((param_1 + 1) * 0x100);
  }
  if (param_3 == 0) {
    uVar4 = uVar4 | (param_1 + 1) * 0x100;
  }
  *(uint *)(iVar2 + 0x2c) = uVar4;
  return CONCAT44(iVar5,uVar3);
}

