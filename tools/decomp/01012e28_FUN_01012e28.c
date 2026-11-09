
undefined8 FUN_01012e28(uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  
  uVar3 = 0;
  if ((int)((0xcU >> (param_1 & 0xff)) << 0x1f) < 0) {
    iVar5 = *(int *)(DAT_01013084 + param_1 * 4);
    switch(*(undefined1 *)((int)param_2 + 0x11)) {
    case 0:
    case 4:
      iVar1 = 0;
      iVar2 = 3;
      break;
    case 1:
    case 5:
      iVar1 = 0;
      iVar2 = 0;
      break;
    case 2:
    case 6:
      iVar1 = 0;
      iVar2 = 1;
      break;
    case 3:
    case 7:
      iVar1 = 1;
      iVar2 = 2;
      break;
    default:
      uVar3 = 0xc800;
      goto LAB_01012ee6;
    }
    *(byte *)(iVar5 + 0x32) = (byte)(iVar2 << 5) | (byte)(iVar1 << 4) | 0x80;
    pin_update(iVar5 + 0x5a,8,0);
    FUN_0100285a(iVar5 + 0x4c,param_2[3]);
    FUN_0100285a(iVar5 + 0x49,param_2[2]);
    FUN_0100285a(iVar5 + 0x46,param_2[1]);
    FUN_0100285a(iVar5 + 0x4c,*param_2);
    pin_update(iVar5 + 0x33,0x1f,*(char *)(param_2 + 4) + -1);
    if ((int)((uint)*(byte *)((int)param_2 + 0x11) << 0x1d) < 0) {
      uVar4 = 3;
    }
    else {
      uVar4 = 0;
    }
    FUN_010027d8(iVar5 + 0x34,uVar4);
    *(undefined1 *)(iVar5 + 0x1b5) = uVar4;
  }
  else {
    uVar3 = 0xc801;
  }
LAB_01012ee6:
  return CONCAT44(param_4,uVar3);
}

