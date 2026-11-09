
undefined8 FUN_0101c27c(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  uVar5 = 0;
  iVar3 = *(int *)(DAT_0101cf24 + param_3 * 4);
  uVar7 = param_4 << 1;
  uVar6 = param_4 << 2;
  iVar1 = iVar3 + 0x9d;
  iVar9 = iVar3 + 0x9b;
  iVar8 = iVar3 + 0x9c;
  uVar4 = param_4;
  switch(param_1) {
  case 0:
    bVar10 = param_2 == 0;
    if (bVar10) {
      uVar2 = 1;
    }
    else {
LAB_0101c312:
      if (!bVar10) goto LAB_0101c3f4;
      FUN_0101c3fe(iVar1,param_2,0x20);
      uVar2 = 4;
      uVar4 = uVar6 & 0xff;
    }
    break;
  case 1:
    if (param_2 < 5) {
      FUN_0101c404();
      uVar2 = 2;
      uVar4 = uVar7 & 0xff;
    }
    else if (param_2 == 6) {
      FUN_0101c406(iVar1,6,3);
      uVar2 = 2;
      uVar4 = uVar7 & 0xff;
    }
    else {
      bVar10 = param_2 == 5;
      if (!bVar10) goto LAB_0101c312;
      FUN_0101c406(iVar1,5,2);
      uVar2 = 2;
      uVar4 = uVar7 & 0xff;
    }
    break;
  case 2:
    if (param_2 < 5) {
      FUN_0101c3fc();
      uVar2 = 4;
      uVar4 = uVar6 & 0xff;
    }
    else {
      if (param_2 != 6) {
        bVar10 = param_2 == 5;
        goto LAB_0101c312;
      }
      FUN_0101c3fe(iVar1,6,0x30);
      uVar2 = 4;
      uVar4 = uVar6 & 0xff;
    }
    break;
  case 3:
    uVar4 = param_4 << 3;
    if (param_2 < 5) {
      FUN_0101c404();
      uVar2 = 8;
      uVar4 = uVar4 & 0xff;
    }
    else if (param_2 == 6) {
      FUN_0101c406(iVar3 + 0x9e,6,3);
      uVar2 = 8;
      uVar4 = uVar4 & 0xff;
    }
    else {
      if (param_2 != 5) goto LAB_0101c3f4;
      FUN_0101c406(iVar3 + 0x9e,5,2);
      uVar2 = 8;
      uVar4 = uVar4 & 0xff;
    }
    break;
  case 4:
    if (3 < param_2) {
LAB_0101c3f4:
      uVar5 = 0xff00;
      goto switchD_0101c2ac_default;
    }
    pin_update(iVar3 + 0x9e,0x30,param_2 << 4 & 0xff);
    uVar2 = 0x10;
    uVar4 = (param_4 << 0x1c) >> 0x18;
    break;
  case 5:
    uVar4 = param_4 << 6;
    if (param_2 < 5) {
      FUN_0101c3fc();
      uVar2 = 0x40;
      uVar4 = uVar4 & 0xff;
    }
    else if (param_2 == 6) {
      FUN_0101c3fe(iVar3 + 0x9f,6,0x30);
      uVar2 = 0x40;
      uVar4 = uVar4 & 0xff;
    }
    else {
      if (param_2 != 5) goto LAB_0101c3f4;
      FUN_0101c3fe(iVar3 + 0x9f,5,0x20);
      uVar2 = 0x40;
      uVar4 = uVar4 & 0xff;
    }
    break;
  case 6:
    iVar1 = param_2;
    if (4 < param_2) {
      if (param_2 == 6) {
        iVar1 = 3;
      }
      else {
        if (param_2 != 5) goto LAB_0101c3f4;
        iVar1 = 2;
      }
    }
    FUN_0101c406(iVar3 + 0xa0,param_2,iVar1);
    uVar2 = 0x80;
    uVar4 = (param_4 & 1) << 7;
    break;
  case 7:
    if (2 < param_2) goto LAB_0101c3f4;
    pin_update(iVar3 + 0xa0,0x30,param_2 << 4 & 0xff);
    uVar2 = 1;
    iVar9 = iVar8;
    break;
  case 8:
    if (param_2 != 2) goto LAB_0101c3f4;
    uVar2 = 2;
    iVar9 = iVar8;
    uVar4 = uVar7 & 0xff;
    break;
  case 9:
    if (param_2 != 0) goto LAB_0101c3f4;
    uVar2 = 4;
    iVar9 = iVar8;
    uVar4 = uVar6 & 0xff;
    break;
  default:
    goto switchD_0101c2ac_default;
  }
  pin_update(iVar9,uVar2,uVar4);
switchD_0101c2ac_default:
  return CONCAT44(param_4,uVar5);
}

