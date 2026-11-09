
undefined8 FUN_01008088(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  byte *in_r3;
  int iVar4;
  byte bVar5;
  byte *local_18;
  
  iVar4 = 0;
  local_18 = in_r3;
  if (*in_r3 < 2) {
    bVar5 = 0;
    do {
      if ((((int)((0xfU >> (uint)bVar5) << 0x1f) < 0) &&
          (iVar4 = FUN_01014702(bVar5,&local_18), iVar4 == 0)) &&
         (((uint)local_18 & 0xff) == 2 || ((uint)local_18 & 0xff) == 3)) {
        iVar4 = 0xe704;
      }
      puVar2 = DAT_0100813c;
      uVar1 = DAT_01008138;
      bVar5 = bVar5 + 1;
    } while (bVar5 < 4);
    if (iVar4 == 0) {
      if (*(char *)(DAT_01008130 + 0x77d) == '\x01') {
        iVar4 = 0xff21;
      }
      else {
        *DAT_01008134 = *in_r3;
        uVar3 = DAT_01008140;
        if (*in_r3 == 1) {
          *puVar2 = 0xf;
          pin_update(uVar3,0x3f,8);
          pin_update(uVar1,0x3f,9);
          puVar2[2] = 0;
        }
        else {
          puVar2[2] = 0;
          *puVar2 = 0;
          pin_update(uVar3,0x3f);
          pin_update(uVar1,0x3f,1);
        }
      }
    }
  }
  else {
    iVar4 = 0xe502;
  }
  return CONCAT44(local_18,iVar4);
}

