
undefined8 FUN_01004676(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar1 = DAT_010050cc;
  uVar8 = 0;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  do {
    uVar5 = (uint)*DAT_010050dc;
    if ((uVar5 & 1 << (uVar8 & 0xff)) == 0) {
      uVar7 = uVar8 & 0xff;
      if ((uVar5 & 1 << (uVar8 + 4 & 0xff)) == 0) {
        if ((uVar5 & 1 << (uVar8 + 8 & 0xff)) == 0) {
          if ((uVar5 & 1 << (uVar8 + 6 & 0xff)) == 0) goto LAB_010047ec;
          FUN_0101026a(uVar7,2,&local_30);
          FUN_01004b7e();
          uVar4 = 2;
        }
        else {
          FUN_0101026a(uVar7,3,&local_30);
          FUN_01004f4c(local_30 & 0xff);
          FUN_01004b7c();
          uVar4 = 3;
        }
      }
      else {
        FUN_0101026a(uVar7,1,&local_30);
        FUN_01004f4c(local_30 & 0xff);
        FUN_01004b7c();
        uVar4 = 1;
      }
      FUN_01010cc4(uVar7,uVar4);
    }
    else {
      cVar9 = '\x01';
      iVar2 = FUN_01006cb8(0,uVar8 & 0xff);
      FUN_01004b7e();
      if (cVar9 == '\0') {
        cVar9 = *(char *)(iVar1 + 0x20) == '\x01';
      }
      if (cVar9 == '\0') {
        iVar3 = uVar8 * 0xde0 + DAT_010050d8;
        iVar6 = 0x250;
      }
      else {
        iVar3 = uVar8 * 0x3450 + DAT_010050d4;
        iVar6 = 0x90;
      }
      local_2c = 1;
      local_30 = 2;
      FUN_01010aa8(uVar8 & 0xff,iVar3 + iVar2 * iVar6,0,0x7f);
    }
LAB_010047ec:
    uVar8 = uVar8 + 1;
    if (1 < (int)uVar8) {
      return CONCAT44(local_2c,local_30);
    }
  } while( true );
}

