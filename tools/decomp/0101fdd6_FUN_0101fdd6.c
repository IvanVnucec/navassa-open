
undefined8 FUN_0101fdd6(uint param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  
  puVar1 = DAT_0101ff84;
  iVar10 = DAT_0101ff78 + param_3 * 8;
  uVar2 = *(uint *)(iVar10 + 0x60);
  iVar3 = *(int *)(iVar10 + 100);
  uVar4 = *DAT_0101ff84;
  uVar8 = DAT_0101ff84[1];
  lVar14 = (ulonglong)uVar4 * (ulonglong)DAT_0101ff84[4];
  uVar13 = FUN_01013658((int)lVar14,
                        uVar8 * DAT_0101ff84[4] +
                        uVar4 * DAT_0101ff84[5] + (int)((ulonglong)lVar14 >> 0x20),
                        *(undefined4 *)(param_1 + 0x14),0);
  uVar7 = uVar2 - (uint)uVar13;
  iVar12 = (iVar3 - (int)((ulonglong)uVar13 >> 0x20)) - (uint)(uVar2 < (uint)uVar13);
  uVar2 = *(uint *)(iVar10 + 0x78);
  iVar3 = *(int *)(iVar10 + 0x7c);
  lVar14 = (ulonglong)uVar4 * (ulonglong)puVar1[6];
  uVar13 = FUN_0101ff22((int)lVar14,
                        uVar8 * puVar1[6] + uVar4 * puVar1[7] + (int)((ulonglong)lVar14 >> 0x20));
  uVar5 = uVar2 - (uint)uVar13;
  iVar10 = DAT_0101ff78 + param_3 * 8;
  iVar9 = (iVar3 - (int)((ulonglong)uVar13 >> 0x20)) - (uint)(uVar2 < (uint)uVar13);
  uVar2 = *(uint *)(iVar10 + 0x90);
  iVar3 = *(int *)(iVar10 + 0x94);
  lVar14 = (ulonglong)puVar1[2] * (ulonglong)puVar1[4];
  uVar13 = FUN_0101ff22((int)lVar14,
                        puVar1[3] * puVar1[4] +
                        puVar1[2] * puVar1[5] + (int)((ulonglong)lVar14 >> 0x20));
  uVar6 = uVar2 - (uint)uVar13;
  iVar11 = (iVar3 - (int)((ulonglong)uVar13 >> 0x20)) - (uint)(uVar2 < (uint)uVar13);
  uVar2 = *(uint *)(iVar10 + 0xa8);
  iVar3 = *(int *)(iVar10 + 0xac);
  uVar8 = puVar1[7];
  lVar14 = (ulonglong)puVar1[2] * (ulonglong)puVar1[6];
  uVar13 = FUN_0101ff22((int)lVar14,
                        puVar1[3] * puVar1[6] + puVar1[2] * uVar8 + (int)((ulonglong)lVar14 >> 0x20)
                       );
  uVar4 = uVar2 - (uint)uVar13;
  iVar3 = (iVar3 - (int)((ulonglong)uVar13 >> 0x20)) - (uint)(uVar2 < (uint)uVar13);
  if (*(int *)(param_1 + 0x60) < 0) {
    FUN_01035f68(uVar7 - uVar4,(iVar12 - iVar3) - (uint)(uVar7 < uVar4),param_2);
    FUN_0101ff14();
    lVar14 = FUN_01035f68(uVar5 + uVar6,iVar9 + iVar11 + (uint)CARRY4(uVar5,uVar6),param_2);
    uVar2 = (uint)(lVar14 * lVar14);
    iVar3 = (int)((ulonglong)(lVar14 * lVar14) >> 0x20) + (uint)CARRY4(param_1,uVar2);
  }
  else {
    FUN_01035f68(uVar7 + uVar4,iVar12 + iVar3 + (uint)CARRY4(uVar7,uVar4),param_2);
    FUN_0101ff14();
    lVar14 = FUN_01035f68(uVar5 - uVar6,(iVar9 - iVar11) - (uint)(uVar5 < uVar6),param_2);
    uVar2 = (uint)(lVar14 * lVar14);
    iVar3 = (int)((ulonglong)(lVar14 * lVar14) >> 0x20) + (uint)CARRY4(param_1,uVar2);
  }
  return CONCAT44(uVar8 + iVar3,param_1 + uVar2);
}

