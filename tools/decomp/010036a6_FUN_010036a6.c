
undefined8 FUN_010036a6(int param_1,int param_2,char param_3,int param_4)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  byte bVar11;
  
  iVar3 = DAT_01003a8c;
  iVar8 = *(int *)(DAT_01003a84 + param_1 * 4);
  iVar7 = *(int *)(DAT_01003a88 + param_1 * 4);
  iVar5 = *(int *)(DAT_01003a8c + param_4 * 4);
  uVar2 = *(undefined2 *)(iVar5 + param_1 * 2 + 0x22);
  piVar9 = (int *)(iVar5 + 0x28);
  bVar11 = (byte)(-(uint)(*(char *)(iVar5 + 0x2d) == '\0') >> 0x1f);
  *piVar9 = param_2;
  if (param_2 == 1) {
    if (*(char *)(iVar5 + 0x2d) == '\0') {
      uVar4 = *(undefined1 *)(iVar7 + 0x5d);
    }
    else {
      uVar4 = *(undefined1 *)(iVar7 + 0x5e);
    }
    *(undefined1 *)(iVar5 + param_1 + 0x20) = uVar4;
  }
  pcVar10 = (char *)(iVar8 + 0x3c);
  if (*pcVar10 == '\0') {
    *pcVar10 = '\x01';
  }
  iVar7 = param_4;
  uVar6 = FUN_01004238(param_1,iVar5);
  *(undefined4 *)(DAT_01003a90 + param_1 * 4) = uVar6;
  FUN_01004288(bVar11,uVar6,param_1);
  uVar6 = FUN_01005386(iVar5,param_1);
  *(undefined4 *)(DAT_01003a94 + param_1 * 4) = uVar6;
  FUN_01005498(bVar11,uVar6,param_1,*piVar9,bVar11,iVar5,iVar7);
  uVar6 = FUN_01005c82(iVar5,param_1);
  *(undefined4 *)(DAT_01003a98 + param_1 * 4) = uVar6;
  FUN_01005e78(bVar11,uVar6,param_2,param_1);
  if (param_3 != '\0') {
    puVar1 = (undefined1 *)(iVar8 + 0x3b);
    *puVar1 = 1;
    *puVar1 = 0;
    *pcVar10 = '\0';
  }
  *(undefined2 *)(*(int *)(iVar3 + param_4 * 4) + param_1 * 2 + 0x22) = uVar2;
  return CONCAT44(iVar5,CONCAT22(uVar2,CONCAT11(param_3,bVar11)));
}

