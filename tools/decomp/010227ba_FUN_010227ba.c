
void FUN_010227ba(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_20 [4];
  undefined1 local_1c;
  undefined1 local_1b;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if ((int)((param_1 >> (uVar2 & 0xff)) << 0x1f) < 0) {
      iVar1 = FUN_010227f0(iVar1);
      if (iVar1 != 0) {
        return;
      }
      local_1b = 1;
      local_1c = 1;
      iVar1 = FUN_01036cb2(uVar2 & 0xff,auStack_20);
      if (iVar1 != 0) {
        return;
      }
    }
    uVar2 = uVar2 + 1;
    if (1 < uVar2) {
      return;
    }
  } while( true );
}

