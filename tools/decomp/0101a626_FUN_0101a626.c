
undefined4 FUN_0101a626(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  char local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_22;
  undefined1 local_21;
  
  pcVar2 = (char *)(DAT_0101a8ec + (uint)*(byte *)(DAT_0101a8f0 + param_1) * 8);
  uVar1 = 0;
  if (*pcVar2 != '\0') {
    if (param_2 != 0) {
      local_21 = 3;
      local_30 = pcVar2[1];
      local_2f = 2;
      local_22 = 1;
      local_40[0] = 0;
      local_2e = 0;
      local_3c = *(undefined4 *)(pcVar2 + 4);
      local_38 = *(undefined4 *)
                  (DAT_0101a8f4 + (uint)*(byte *)(DAT_0101a8f0 + param_1) * 0xbc + 0x28);
      local_34 = 0;
      local_32 = 0;
      FUN_0101c40c(local_40,param_1,1);
      param_2 = 1;
    }
    uVar1 = FUN_0101a8c2(param_1,param_2);
  }
  return uVar1;
}

