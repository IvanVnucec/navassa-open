
int FUN_01009518(uint param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  sbyte local_28;
  
  iVar8 = 0;
  bVar1 = *(byte *)(DAT_0100a02c + param_3);
  uVar5 = (uint)bVar1;
  uVar6 = (uint)bVar1;
  if ((param_4 != 1) || (iVar8 = FUN_010079a4(param_1,param_2,uVar5), iVar8 == 0)) {
    FUN_01009a7e(param_1);
    iVar3 = DAT_01009ee4;
    iVar2 = DAT_0100980c;
    iVar9 = DAT_01009ee4 + param_1 * 0x60;
    iVar7 = DAT_0100980c + uVar5 * 4;
    *(byte *)(iVar9 + 0x35) = bVar1;
    *(int *)(iVar7 + 0xb0) = param_2;
    if (*(char *)(iVar9 + 0x11) == '\0') {
      *(undefined1 *)(iVar9 + 0x11) = 1;
      if ((*(char *)(iVar2 + param_1 + 2) == '\0' || param_4 == 0) &&
         (*(undefined1 *)(iVar2 + param_1 + 2) = 0, *(char *)(DAT_01009cec + param_1 + 6) == '\x01')
         ) {
        FUN_01009094(param_1,0);
      }
      FUN_010071b4(param_1,0);
      FUN_01007728(param_1,uVar5,0);
    }
    if (*(byte *)(*(int *)(DAT_0100a030 + param_3 * 4) + 0x10) < 2) {
      FUN_010085e4(param_1,param_2,uVar6 & 0xff,1);
    }
    if (param_1 < 2) {
      if (param_2 == 2) {
        uVar6 = uVar5 + 2 & 0xff;
      }
      else {
        uVar6 = param_3 & 0xff;
      }
      FUN_010078f8(param_1,uVar6,0);
    }
    if (param_4 == 0) {
      FUN_010074ac(param_1,param_2,uVar5,0);
    }
    else {
      FUN_01007518(param_1,param_2,uVar5,0);
      local_28 = (sbyte)param_3;
      if (((int)((3U >> local_28) << 0x1f) < 0) &&
         (puVar4 = (undefined4 *)(param_1 * 0x60 + iVar3),
         iVar8 = FUN_010092d0(param_2,uVar5,*puVar4,puVar4[1],param_1,0), iVar8 != 0)) {
        return iVar8;
      }
    }
    *(char *)(iVar9 + 0x58) = (char)param_4;
  }
  return iVar8;
}

