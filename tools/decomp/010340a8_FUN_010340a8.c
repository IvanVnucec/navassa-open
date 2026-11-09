
undefined4 FUN_010340a8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_20;
  undefined1 local_1f;
  undefined2 local_1e;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 uStack_c;
  
  local_20 = 1;
  local_1f = 0;
  local_1e = 0;
  local_1a = 0;
  local_19 = 1;
  if (param_2 == 0) {
    local_1c = 0;
  }
  else {
    if (param_2 == 2) {
      local_1b = 0;
    }
    else {
      if (1 < param_2) {
        return 0x4400;
      }
      local_1b = 1;
    }
    local_1c = 1;
  }
  local_10 = 0;
  iVar2 = DAT_0103472c + param_1 * 0x5c;
  local_18 = *(undefined4 *)(iVar2 + 900);
  local_14 = *(undefined4 *)(iVar2 + 0x388);
  uStack_c = param_4;
  uVar1 = FUN_010250d2(param_1,&local_20);
  return uVar1;
}

