
undefined4 FUN_0100d704(int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined2 *)(param_1 + 6) = 0;
  uVar2 = 0;
  while( true ) {
    uVar1 = *(ushort *)(param_1 + uVar2 * 2);
    if (uVar1 == 0) {
      return 0x3401;
    }
    if (0xfa < uVar1) break;
    uVar2 = uVar2 + 1;
    uVar1 = uVar1 + *(short *)(param_1 + 6);
    *(ushort *)(param_1 + 6) = uVar1;
    if (2 < uVar2) {
      *(ushort *)(param_1 + 6) = uVar1 / 3;
      uVar2 = 0;
      while( true ) {
        uVar3 = (uint)*(ushort *)(param_1 + uVar2 * 2) - (uint)*(ushort *)(param_1 + 6);
        if ((int)uVar3 < 0) {
          uVar3 = -uVar3;
        }
        if (3 < uVar3) break;
        uVar2 = uVar2 + 1;
        if (2 < uVar2) {
          return 0;
        }
      }
      return 0x3403;
    }
  }
  return 0x3402;
}

