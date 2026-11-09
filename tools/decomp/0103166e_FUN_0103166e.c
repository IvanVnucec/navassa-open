
undefined8 FUN_0103166e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  char cVar11;
  undefined8 uVar12;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar8 = DAT_010320b8;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  iVar4 = FUN_0103ae90(param_1,2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar9 = DAT_010320bc;
  uVar10 = *(undefined4 *)(iVar8 + (uint)*(byte *)(param_1 + 1) * 4 + 0x4c);
  uVar12 = FUN_01006dfc(1,*(undefined4 *)(param_1 + 4));
  uVar7 = (undefined4)((ulonglong)uVar12 >> 0x20);
  FUN_01008334(*(undefined1 *)(param_1 + 2),iVar9 + (uint)*(byte *)(param_1 + 1) * 0xbc + 0x23c);
  FUN_0102dd0e(*(char *)(param_1 + 1) + '\x02');
  if (*(char *)(param_1 + 0x2d) != '\0') {
    if (*(char *)(param_1 + 1) == '\0') {
      uVar5 = 0x77;
    }
    else {
      uVar5 = 0x7b;
    }
    FUN_01031650(uVar5,5);
  }
  if (iVar4 == 0) {
    FUN_010085e4(uVar10,0,*(undefined1 *)(param_1 + 1),0);
    FUN_0102dc18(*(undefined1 *)(param_1 + 2));
    local_2c = 0;
    local_30 = uVar10;
    iVar4 = FUN_010092d0(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 1),(int)uVar12,uVar7
                        );
    if (iVar4 == 0) {
      FUN_0102d02a(*(undefined1 *)(param_1 + 1));
      FUN_010209a0(1 << *(sbyte *)(param_1 + 1));
      if (*(char *)(param_1 + 2) == '\0') {
        if ((((uint)*(ushort *)(iVar9 + 0x22) & 1 << (uint)*(byte *)(param_1 + 1)) != 0) &&
           (FUN_0103b566(), *(char *)(param_1 + 0x2d) == '\0')) {
          FUN_0103bb1c();
          FUN_0103bb3c();
        }
      }
      else if (*(char *)(param_1 + 2) == '\x01') {
        if ((((uint)*(ushort *)(iVar9 + 0x22) & 1 << (uint)*(byte *)(param_1 + 1)) != 0) &&
           (FUN_0103b57c(), *(char *)(param_1 + 0x2d) == '\0')) {
          FUN_0103bb62();
        }
      }
      else {
        iVar4 = 0xe702;
      }
    }
  }
  iVar1 = DAT_010320c4;
  if ((*(char *)(iVar9 + 0x77d) == '\0') && (*(char *)(DAT_010320c0 + 0x20) != '\0')) {
    if (*(char *)(param_1 + 1) == '\0') {
      iVar9 = 0;
    }
    else {
      iVar9 = 4;
    }
    puVar6 = *(undefined8 **)(DAT_010320c4 + iVar9);
    *(undefined4 *)(puVar6 + 5) = 0;
    *(undefined4 *)(puVar6 + 6) = uVar10;
    *puVar6 = uVar12;
    uVar3 = FUN_01001950((int)uVar12,uVar7);
    iVar2 = DAT_0103243c;
    *(undefined1 *)(*(int *)(iVar1 + iVar9) + 0x2c) = uVar3;
    pin_update(*(int *)(iVar2 + (uint)*(byte *)(param_1 + 1) * 4) + 0x3c,1,1);
    iVar4 = FUN_0101026a(*(undefined1 *)(param_1 + 2),0,*(int *)(iVar1 + iVar9) + 0x20);
    uVar7 = FUN_01004238(*(undefined1 *)(param_1 + 1),*(undefined4 *)(iVar1 + iVar9));
    FUN_01004288(1,uVar7,*(undefined1 *)(param_1 + 1));
    uVar7 = FUN_01005386(*(undefined4 *)(iVar1 + iVar9),*(undefined1 *)(param_1 + 1));
    FUN_01005498(1,uVar7,*(undefined1 *)(param_1 + 1),0);
    pin_update(*(int *)(iVar2 + (uint)*(byte *)(param_1 + 1) * 4) + 0x3c,1,0);
  }
  if (iVar4 == 0) {
    iVar8 = iVar8 + (uint)*(byte *)(param_1 + 2) * 8;
    iVar4 = FUN_01005ed8(param_1,iVar8,*(undefined4 *)(iVar8 + 0x90),*(undefined4 *)(iVar8 + 0x94));
  }
  if (*(char *)(param_1 + 2) == '\0') {
    cVar11 = '\0';
    FUN_01008070(0x34,&local_30);
    FUN_010318b2();
    if (cVar11 != '\0') goto LAB_01031838;
    uVar7 = 0x34;
  }
  else {
    if (*(char *)(param_1 + 2) != '\x01') goto LAB_01031838;
    cVar11 = '\0';
    FUN_01008070(0x35,&local_30);
    FUN_010318b2();
    if (cVar11 != '\0') goto LAB_01031838;
    uVar7 = 0x35;
  }
  FUN_0100a2b4(uVar7,2,6);
LAB_01031838:
  return CONCAT44(local_30,iVar4);
}

