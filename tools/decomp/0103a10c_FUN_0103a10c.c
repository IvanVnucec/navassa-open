
undefined8 FUN_0103a10c(undefined4 param_1,uint *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  pbVar1 = DAT_0103a210;
  uVar5 = 0;
  uVar3 = *param_2;
  if ((uVar3 & 3) == 0) {
    iVar2 = 0;
  }
  else {
    uVar4 = uVar3 & 3;
    if (*(char *)(DAT_0103a214 + ((int)uVar4 >> 1)) == '\0') {
      if (*(char *)(DAT_0103a218 + ((int)uVar4 >> 1) * 0xbc + 0x1c6) != '\x01') {
        iVar2 = 0;
        goto LAB_0103a1f8;
      }
    }
    if (uVar4 < 3) {
      if (((*DAT_0103a210 & 3 ^ uVar4) & uVar3) == 0) {
        iVar2 = 0;
      }
      else {
        for (bVar6 = 0; bVar6 < 2; bVar6 = bVar6 + 1) {
          if ((int)((uVar3 >> (uint)bVar6) << 0x1f) < 0) {
            uVar5 = 1 << (uint)bVar6 | uVar5;
          }
        }
        if ((uVar5 & 0xff) == 0) {
          iVar2 = 0x2a02;
        }
        else if ((*DAT_0103a210 & 3) == (uVar5 & 0xff)) {
          iVar2 = 0;
        }
        else if (*(int *)*DAT_0103a220 == 0) {
          iVar2 = FUN_01039fae(uVar5 & 0xff,*DAT_0103a220 + 0x38);
          if (iVar2 == 0) {
            *pbVar1 = (byte)uVar5 | *pbVar1;
          }
        }
        else {
          iVar2 = 0x2a08;
        }
      }
    }
    else {
      iVar2 = 0x2a07;
    }
  }
LAB_0103a1f8:
  return CONCAT44(param_1,iVar2);
}

