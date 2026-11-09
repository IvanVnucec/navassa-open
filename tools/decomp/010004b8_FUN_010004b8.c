
undefined4 FUN_010004b8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if ((param_1 & 1 << (uVar2 & 0xff)) != 0) {
      switch(uVar2) {
      case 0:
        uVar1 = 0xd5;
        break;
      case 1:
        uVar1 = 0xd7;
        break;
      case 2:
        uVar1 = 0xd1;
        break;
      case 3:
        uVar1 = 0xd3;
        break;
      default:
        goto switchD_010004ca_default;
      }
      FUN_01002880(uVar1);
    }
switchD_010004ca_default:
    uVar2 = uVar2 + 1;
    if (3 < (int)uVar2) {
      return param_4;
    }
  } while( true );
}

