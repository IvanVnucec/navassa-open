
undefined8 FUN_010391ac(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = DAT_01039254;
  uVar6 = *param_2;
  uVar3 = 0;
  if ((uVar6 & 3) != 0) {
    uVar4 = (uVar6 & 3) >> 1;
    cVar1 = *(char *)(DAT_0103926c + uVar4);
    iVar5 = DAT_0103925c + (short)uVar4 * 0xbc;
    if (cVar1 == '\0') {
      if (*(char *)(iVar5 + 0x1c6) != '\0') goto LAB_0103923c;
    }
    else {
      bVar7 = cVar1 == '\x01';
      if (bVar7) {
        cVar1 = *(char *)(iVar5 + 0x1c6);
      }
      if ((bVar7 && cVar1 == '\x01') && (((*(byte *)(DAT_01039254 + 1) ^ uVar6) & uVar6) != 0))
      goto LAB_0103923c;
    }
    if ((uVar6 & 3) < 3) {
      if (((*(byte *)(DAT_01039254 + 1) ^ uVar6) & 0xff & uVar6) != 0) {
        uVar4 = 0;
        do {
          if (((int)((uVar6 >> (uVar4 & 0xff)) << 0x1f) < 0) &&
             (-1 < (int)((uint)(*(byte *)(iVar2 + 1) >> (uVar4 & 0xff)) << 0x1f))) {
            *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) | (byte)(1 << (uVar4 & 0xff));
            iVar5 = iVar2 + 4 + (uVar4 & 0xff) * 0x58;
            FUN_01039514(uVar4 & 0xff,iVar5);
            uVar3 = FUN_0103967c(uVar4 & 0xff,iVar5);
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 2);
      }
LAB_0103923c:
      return CONCAT44(param_4,uVar3);
    }
  }
  return CONCAT44(param_4,0x2d00);
}

