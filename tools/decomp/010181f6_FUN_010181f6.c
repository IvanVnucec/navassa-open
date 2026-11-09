
int FUN_010181f6(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (*(char *)(DAT_01018e2c + 0x10) == '\0') {
    *DAT_01018e30 = 0;
    iVar7 = 3;
  }
  else {
    *DAT_01018e34 = 0;
    iVar7 = 4;
  }
  iVar9 = *(int *)(DAT_01018f64 + iVar7 * 4);
  puVar1 = (undefined1 *)(iVar9 + 0x3b);
  puVar5 = (undefined1 *)(iVar9 + 0x3c);
  *puVar1 = 0;
  *puVar5 = 0x40;
  uVar2 = FUN_0101954a(puVar1,0,0x80,puVar5,param_4);
  uVar2 = FUN_0101954c(uVar2,0x70,0);
  FUN_0101954c(uVar2,3,0);
  if (iVar7 == 3 || iVar7 == 4) {
    uVar3 = *DAT_01009910;
    plVar4 = (longlong *)(DAT_01009ee4 + iVar7 * 0x60);
    *(ulonglong *)(DAT_01009ee4 + iVar7 * 0x60 + 8) = (ulonglong)uVar3 * 10;
    *plVar4 = (ulonglong)uVar3 * 10;
    iVar9 = FUN_010089cc(iVar7);
    if (iVar9 == 0) {
      iVar9 = FUN_01008b46(iVar7,0);
    }
    if (iVar9 == 0) {
      if (param_1 == 1) {
        iVar8 = 0;
        do {
          if (*DAT_01009eec < '\0') {
            if (iVar8 != 30000) goto LAB_01009502;
            break;
          }
          FUN_01015e2c(1);
          iVar8 = iVar8 + 1;
        } while (iVar8 != 30000);
        iVar9 = 0xc90b;
LAB_01009502:
        if (iVar9 == 0) {
          FUN_0100b060();
        }
        else if (iVar9 != 0) {
          return iVar9;
        }
      }
      if (param_2 == 1) {
        iVar9 = FUN_01008790(iVar7,0);
      }
      else {
        iVar6 = *(int *)(DAT_01009ebc + iVar7 * 4);
        iVar8 = FUN_0100b008();
        pin_update(iVar6 + 0x8a,1,0);
        *(char *)(iVar6 + 0x8b) = (char)iVar8;
        pin_update(iVar6 + 0x8c,0xf,(uint)(iVar8 << 0x10) >> 0x18);
        pin_update(iVar6 + 0x8a,2,2);
        FUN_010097d0(iVar7);
        pin_update(iVar6 + 0x33,1,1);
      }
    }
  }
  else {
    iVar9 = 0xc904;
  }
  return iVar9;
}

