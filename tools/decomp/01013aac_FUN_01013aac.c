
undefined4 FUN_01013aac(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar2 = param_2 & 1 ^ 1;
  uVar4 = uVar2 << 3;
  switch(param_1) {
  case 0:
    uVar3 = 8;
    uVar1 = DAT_010142d0;
    break;
  case 1:
    uVar3 = 8;
    uVar1 = DAT_010142d4;
    break;
  case 2:
    uVar3 = 1;
    uVar1 = DAT_01014348;
    uVar4 = uVar2;
    break;
  case 3:
    uVar3 = 1;
    uVar1 = DAT_0101434c;
    uVar4 = uVar2;
    break;
  case 4:
    uVar3 = 1;
    uVar1 = DAT_01014350;
    uVar4 = uVar2;
    break;
  case 5:
    uVar3 = 8;
    uVar1 = DAT_01014368;
    break;
  case 6:
    uVar3 = 1;
    uVar1 = DAT_0101436c;
    uVar4 = uVar2;
    break;
  case 7:
    uVar3 = 1;
    uVar1 = DAT_01014384;
    uVar4 = uVar2;
    break;
  case 8:
    uVar3 = 8;
    uVar1 = DAT_01014388;
    break;
  case 9:
    uVar3 = 0x20;
    uVar1 = DAT_010143a4;
    uVar4 = uVar2 << 5;
    break;
  case 10:
    uVar3 = 8;
    uVar1 = DAT_010143a8;
    break;
  case 0xb:
    uVar3 = 0x20;
    uVar1 = DAT_010143ac;
    uVar4 = uVar2 << 5;
    break;
  case 0xc:
    uVar3 = 8;
    uVar1 = DAT_010143b0;
    break;
  case 0xd:
    uVar3 = 1;
    uVar1 = DAT_010143b4;
    uVar4 = uVar2;
    break;
  case 0xe:
    uVar3 = 8;
    uVar1 = DAT_010143b8;
    break;
  case 0xf:
    uVar3 = 1;
    uVar1 = DAT_010143bc;
    uVar4 = uVar2;
    break;
  case 0x10:
    uVar3 = 8;
    uVar1 = DAT_010143c0;
    break;
  case 0x11:
    uVar3 = 1;
    uVar1 = DAT_010143c4;
    uVar4 = uVar2;
    break;
  case 0x12:
    uVar3 = 0x40;
    uVar1 = DAT_010143c8;
    uVar4 = uVar2 << 6;
    break;
  default:
    return 0xce00;
  }
  pin_update(uVar1,uVar3,uVar4);
  return 0;
}

