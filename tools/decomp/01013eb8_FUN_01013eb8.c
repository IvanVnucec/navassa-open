
undefined4 FUN_01013eb8(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  switch(param_1) {
  case 0:
    uVar2 = (uint)DAT_010143c0[4];
    break;
  case 1:
    uVar2 = (uint)DAT_010143c0[8];
    break;
  case 2:
    if (*(char *)(DAT_010144f0 + 2) != '\x04') {
      bVar1 = (byte)(((uint)*DAT_01014508 << 0x19) >> 0x1d);
      goto LAB_01013f98;
    }
    bVar1 = DAT_01014508[0x16];
    goto LAB_01013f78;
  case 3:
    if (*(char *)(DAT_010144f0 + 3) != '\x04') {
      bVar1 = DAT_01014508[0xe];
      goto LAB_01013f98;
    }
    bVar1 = DAT_01014508[0x16] >> 5;
    goto LAB_01013f7c;
  case 4:
    if (*(char *)(DAT_010144f0 + 4) == '\x04') {
      bVar1 = DAT_01014508[0x16];
    }
    else {
      bVar1 = *DAT_01014510;
    }
    uVar2 = (uint)bVar1;
    break;
  case 5:
    uVar2 = (uint)DAT_010143c0[5];
    break;
  case 6:
    if (*(char *)(DAT_010144f0 + 6) == '\x04') {
      bVar1 = DAT_01014508[0x16] >> 6;
      goto LAB_01013f7c;
    }
    bVar1 = DAT_01014508[0xe] >> 3;
    goto LAB_01013f98;
  case 7:
    if (*(char *)(DAT_010144f0 + 7) == '\x04') {
      bVar1 = DAT_01014508[0x16] >> 4;
      goto LAB_01013f78;
    }
    uVar2 = (uint)*DAT_01014518;
    break;
  case 8:
    uVar2 = (uint)DAT_010143c0[2];
    break;
  case 9:
    pbVar3 = DAT_0101451c;
    goto LAB_01013f86;
  case 10:
    uVar2 = (uint)DAT_010143c0[10];
    break;
  case 0xb:
    pbVar3 = DAT_01014520;
    goto LAB_01013f86;
  case 0xc:
    uVar2 = (uint)*DAT_010143b0;
    break;
  case 0xd:
    bVar1 = *DAT_01014534;
    goto LAB_01013f94;
  case 0xe:
    uVar2 = (uint)DAT_010143b0[2];
    break;
  case 0xf:
    bVar1 = DAT_01014534[3];
    goto LAB_01013f94;
  case 0x10:
    uVar2 = (uint)*DAT_010143c0;
    break;
  case 0x11:
    pbVar3 = DAT_0101452c;
LAB_01013f86:
    bVar1 = (byte)(((uint)*pbVar3 << 0x19) >> 0x1d);
    goto LAB_01013f98;
  case 0x12:
    bVar1 = *DAT_01014538;
LAB_01013f94:
    bVar1 = bVar1 & 7;
    goto LAB_01013f98;
  default:
    bVar1 = 0;
    uVar4 = 0xce00;
    goto LAB_01013fa4;
  }
  bVar1 = (byte)(uVar2 >> 3);
LAB_01013f78:
  bVar1 = bVar1 & 2;
LAB_01013f7c:
  bVar1 = bVar1 | 5;
LAB_01013f98:
  bVar1 = bVar1 & 7;
LAB_01013fa4:
  *param_2 = bVar1;
  return uVar4;
}

