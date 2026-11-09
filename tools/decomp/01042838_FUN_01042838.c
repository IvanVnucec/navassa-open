
void FUN_01042838(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int local_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  undefined4 uStack_18;
  
  *(undefined1 *)(param_1 + 0x5f) = 0;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) {
    *(undefined1 *)(param_1 + 0x5f) = 1;
    uStack_18 = param_4;
    FUN_0101206c(auStack_2c,&DAT_010429fc,0x14);
    FUN_0101c0c0(auStack_2c,param_3,param_2,0);
    FUN_0101206c(auStack_3c,&DAT_01042a10,0x10);
    FUN_0101c154(auStack_3c,param_3,0,0);
    local_44 = DAT_01042a20;
    uStack_40 = DAT_01042a24;
    FUN_01025880(param_3,&local_44);
    if (param_3 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 3;
    }
    local_4c = DAT_010429f0 + param_3 * 0x58;
    if (*(char *)(param_1 + 0xd) == '\0') {
      local_4c = local_4c + 0x16ec;
    }
    else {
      local_4c = local_4c + 0x14dc;
    }
    FUN_0102f63c(0,uVar1,local_4c,0x15);
    FUN_0103b7bc(param_3,*(undefined4 *)(param_1 + 0x3c),2);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}

