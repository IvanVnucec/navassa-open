
undefined4 FUN_010038c2(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  char *pcVar8;
  
  iVar7 = *(int *)(DAT_01003a84 + param_1 * 4);
  pcVar8 = (char *)(iVar7 + 0x3c);
  cVar1 = *pcVar8;
  uVar3 = -(uint)(*(char *)(param_2 + 0x2d) == '\0');
  if (cVar1 == '\0') {
    *pcVar8 = '\x01';
  }
  uVar4 = FUN_01004238(param_1,param_2);
  *(undefined4 *)(DAT_01003ab8 + param_1 * 4) = uVar4;
  FUN_01004288(uVar3 >> 0x1f,uVar4,param_1);
  uVar4 = FUN_01005386(param_2,param_1);
  *(undefined4 *)(DAT_01003abc + param_1 * 4) = uVar4;
  FUN_01005498(uVar3 >> 0x1f,uVar4,param_1,*(undefined4 *)(param_2 + 0x28));
  uVar4 = FUN_01005c82(param_2,param_1);
  *(undefined4 *)(DAT_01003ac0 + param_1 * 4) = uVar4;
  FUN_01005e78(uVar3 >> 0x1f,uVar4,*(undefined4 *)(param_2 + 0x28),param_1);
  FUN_01006628(param_1,*(undefined4 *)(param_2 + param_1 * 4 + 0x10));
  if ((param_3 != 0) || (iVar5 = FUN_010020bc(), iVar5 == 0)) {
    pbVar6 = (byte *)(iVar7 + 0x2c);
    bVar2 = *pbVar6;
    *pbVar6 = bVar2 & 0xfe;
    *pbVar6 = bVar2 & 0xfe | 1;
    if ((cVar1 == '\0') && (param_3 != 0)) {
      FUN_01003974();
    }
  }
  return param_4;
}

