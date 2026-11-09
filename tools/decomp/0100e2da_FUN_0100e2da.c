
void FUN_0100e2da(undefined1 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [40];
  
  FUN_0101206c(auStack_38,&DAT_0100ee50,0x28);
  cVar1 = param_1[0x34];
  if (cVar1 == '\x05') {
    uVar2 = 2;
  }
  else if (cVar1 == '\x06') {
    uVar2 = 1;
  }
  else {
    if (cVar1 != '\a') goto LAB_0100e30c;
    uVar2 = 0;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x40) + 1) = uVar2;
LAB_0100e30c:
  puVar3 = *(undefined1 **)(param_1 + 0x40);
  puVar3[0x40] = 1;
  *puVar3 = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 1;
  puVar3[9] = 0;
  puVar3[0x3c] = 1;
  puVar3[8] = 0;
  puVar3[0x39] = 0;
  puVar3[0x3b] = 0;
  puVar3[0x3a] = 1;
  puVar3[0x38] = 1;
  FUN_0101206c(puVar3 + 0x10,auStack_38,0x28);
  FUN_0101cb40(*(undefined4 *)(param_1 + 0x40),*param_1);
  return;
}

