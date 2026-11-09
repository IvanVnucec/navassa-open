
void FUN_0100f5be(undefined4 param_1,int param_2,byte *param_3,undefined4 param_4,int param_5)

{
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  byte local_2c;
  byte local_2b;
  uint local_28;
  undefined4 uStack_18;
  
  local_58 = 0;
  uStack_54 = 0;
  local_2c = param_3[0x1e4] - 1;
  uStack_18 = param_4;
  auStack_38[*param_3] = *(undefined1 *)((uint)param_3[0x3c] + param_2 + 0xf5);
  local_28 = (uint)param_3[0x1e5];
  local_2b = param_3[0x1e5];
  if (local_2b != 0) {
    local_2b = 1;
  }
  local_5c = 8;
  local_30 = *(undefined4 *)(param_3 + 0x28);
  FUN_01004158(*param_3,&local_58,&local_60,&local_5c);
  local_58 = *(undefined4 *)(param_5 + 8);
  uStack_54 = *(undefined4 *)(param_5 + 0xc);
  local_2c = param_3[0x1e4];
  FUN_010040ce(*param_3,&local_58,local_60,&local_5c);
  return;
}

