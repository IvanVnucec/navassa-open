
undefined8 FUN_0102e846(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 local_18;
  
  uVar6 = 0;
  local_18 = param_4;
  if (param_2 < 2) {
    iVar5 = DAT_0102f220 + param_2 * 0xbc;
    puVar2 = (undefined4 *)(iVar5 + 0x1bc);
    puVar7 = (undefined1 *)(iVar5 + 0x1ae);
    if (param_1 == 0) {
      if (*(char *)(iVar5 + 0x1c6) == '\x01') {
        uVar4 = *puVar7;
        uVar3 = *puVar2;
      }
      else {
        uVar4 = *(undefined1 *)(iVar5 + 0x1af);
        uVar3 = *(undefined4 *)(iVar5 + 0x1c0);
      }
      uVar1 = 3;
    }
    else if (param_1 == 4) {
      if (*(char *)(DAT_0102f224 + 0x15) == '\x01') {
        uVar4 = *puVar7;
        uVar3 = *puVar2;
      }
      else {
        uVar4 = *(undefined1 *)(iVar5 + 0x1af);
        uVar3 = *(undefined4 *)(iVar5 + 0x1c0);
      }
      uVar1 = 1;
    }
    else if (param_1 == 1) {
      if (*(char *)(DAT_0102f228 + 0x20) == '\0') {
        if (*(char *)(iVar5 + 0x33e) == '\x01') {
          uVar4 = *(undefined1 *)(iVar5 + 0x326);
          uVar3 = *(undefined4 *)(iVar5 + 0x334);
        }
        else {
          uVar4 = *(undefined1 *)(iVar5 + 0x327);
          uVar3 = *(undefined4 *)(iVar5 + 0x338);
        }
      }
      else if (*(char *)(DAT_0102f224 + 0x15) == '\x01') {
        uVar4 = *puVar7;
        uVar3 = *puVar2;
      }
      else {
        uVar4 = *(undefined1 *)(iVar5 + 0x1af);
        uVar3 = *(undefined4 *)(iVar5 + 0x1c0);
      }
      uVar1 = 4;
    }
    else if (param_1 == 2) {
      if (*(char *)(iVar5 + 0x4b6) == '\x01') {
        uVar4 = *(undefined1 *)(iVar5 + 0x49e);
        uVar3 = *(undefined4 *)(iVar5 + 0x4ac);
      }
      else {
        uVar4 = *(undefined1 *)(iVar5 + 0x49f);
        uVar3 = *(undefined4 *)(iVar5 + 0x4b0);
      }
      uVar1 = 6;
    }
    else {
      if (param_1 != 3) {
        uVar6 = 0xe700;
        goto LAB_0102e93c;
      }
      if (*(char *)(DAT_0102f228 + 0x20) == '\0') {
        if (*(char *)(iVar5 + 0x62e) == '\x01') {
          uVar4 = *(undefined1 *)(iVar5 + 0x616);
          uVar3 = *(undefined4 *)(iVar5 + 0x624);
        }
        else {
          uVar4 = *(undefined1 *)(iVar5 + 0x617);
          uVar3 = *(undefined4 *)(iVar5 + 0x628);
        }
      }
      else if (*(char *)(iVar5 + 0x1c6) == '\x01') {
        uVar4 = *puVar7;
        uVar3 = *puVar2;
      }
      else {
        uVar4 = *(undefined1 *)(iVar5 + 0x1af);
        uVar3 = *(undefined4 *)(iVar5 + 0x1c0);
      }
      uVar1 = 5;
    }
    local_18 = 0x14;
    FUN_0102e988(uVar1,param_2,uVar3,uVar4);
  }
  else {
    uVar6 = 0xe701;
  }
LAB_0102e93c:
  return CONCAT44(local_18,uVar6);
}

