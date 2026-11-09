
int FUN_01041f36(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_40;
  int iStack_3c;
  int local_38;
  byte local_34;
  undefined1 local_33;
  undefined1 local_32;
  uint *local_20;
  undefined4 uStack_1c;
  
  iVar2 = DAT_010423e0;
  iVar1 = DAT_010423dc;
  local_38 = DAT_010423dc + 4;
  iVar3 = 0;
  uVar4 = 2;
  local_20 = param_2;
  uStack_1c = param_4;
  do {
    if ((int)((*param_2 >> (uVar4 & 0xff)) << 0x1f) < 0) {
      local_34 = (char)uVar4 - 2;
      FUN_0100929c(&local_40,*(undefined4 *)(iVar2 + (uint)local_34 * 4 + 0x34));
      if ((iStack_3c == 0) && (local_40 < DAT_010423e4)) {
        return iVar3;
      }
      iVar3 = FUN_01041fac(&local_38);
      if (iVar3 == 0) {
        *(undefined1 *)(iVar1 + (uint)local_34 * 2) = local_33;
        *(undefined1 *)(iVar1 + (uint)local_34 * 2 + 1) = local_32;
      }
    }
    uVar4 = uVar4 + 1;
    if (3 < (int)uVar4) {
      return iVar3;
    }
  } while( true );
}

