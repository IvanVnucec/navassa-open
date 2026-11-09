
undefined8 FUN_01019960(void)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 in_r3;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  undefined4 uVar11;
  
  puVar1 = DAT_01019bc8;
  uVar8 = 1;
  uVar3 = 0;
  uVar4 = 0;
LAB_01019972:
  uVar5 = 0;
  iVar9 = DAT_01019bcc + uVar4 * 0xbc;
  iVar7 = DAT_01019bd0 + uVar4 * 0x54;
  uVar2 = DAT_01019bcc;
switchD_01019a1c_caseD_ffffffff:
  if (((uint)*puVar1 & 1 << (uVar4 & 0xff)) == 0) goto switchD_01019a1c_default;
  uVar11 = FUN_01019a74(*(undefined4 *)(iVar7 + 0xf8),*(undefined4 *)(iVar9 + 0x1a4),uVar2);
  uVar2 = (uint)*(byte *)(iVar9 + 0x1e5);
  uVar3 = VectorFloatToUnsigned(uVar11,3);
  if (uVar2 != 1) {
    uVar2 = 2;
  }
LAB_010199ec:
  uVar3 = uVar3 / uVar2;
switchD_01019a1c_default:
  uVar6 = uVar5;
  if (uVar3 != 0) {
    uVar8 = FUN_01016116(uVar8,uVar3);
  }
  uVar5 = uVar6 + 1;
  if (5 < uVar5) {
    uVar4 = uVar4 + 1;
    if (1 < (int)uVar4) {
      return CONCAT44(in_r3,uVar8);
    }
    goto LAB_01019972;
  }
  uVar2 = (uint)*puVar1;
  cVar10 = uVar5 == 5;
  switch(uVar6) {
  case 0:
    cVar10 = uVar4 == 0xfffffffc;
    FUN_01019a68();
    if (cVar10 == '\0') {
      uVar11 = FUN_01019a74(*(undefined4 *)(iVar7 + 0x1a0),*(undefined4 *)(iVar9 + 0x31c));
      uVar3 = VectorFloatToUnsigned(uVar11,3);
      uVar2 = (uint)*(byte *)(iVar9 + 0x35d);
      goto LAB_010199e2;
    }
    goto switchD_01019a1c_default;
  case 1:
    cVar10 = uVar4 == 0xfffffffa;
    FUN_01019a68();
    if (cVar10 == '\0') {
      uVar11 = FUN_01019a70(*(undefined4 *)(iVar7 + 0x248),*(undefined4 *)(iVar9 + 0x494));
      uVar3 = VectorFloatToUnsigned(uVar11,3);
      uVar2 = (uint)*(byte *)(iVar9 + 0x4d5);
      goto LAB_010199e2;
    }
    goto switchD_01019a1c_default;
  case 2:
    break;
  case 4:
    cVar10 = uVar4 == 0xfffffffe;
    FUN_01019a68();
    if (cVar10 == '\0') {
      uVar3 = (uint)*(byte *)(iVar7 + 0x80) * *(int *)(iVar7 + 0x3c);
    }
    goto switchD_01019a1c_default;
  case 0xffffffff:
  case 3:
    goto switchD_01019a1c_caseD_ffffffff;
  default:
    goto switchD_01019a1c_default;
  }
  FUN_01019a68(uVar2,uVar4 + 8);
  if (cVar10 == '\0') goto code_r0x010199b0;
  goto switchD_01019a1c_default;
code_r0x010199b0:
  uVar11 = FUN_01019a70(*(undefined4 *)(iVar7 + 0x2f0),*(undefined4 *)(iVar9 + 0x60c));
  uVar3 = VectorFloatToUnsigned(uVar11,3);
  uVar2 = (uint)*(byte *)(iVar9 + 0x64d);
LAB_010199e2:
  if (uVar2 != 1) {
    uVar2 = 2;
  }
  goto LAB_010199ec;
}

