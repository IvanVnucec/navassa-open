
void FUN_0103a568(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined1 *local_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined1 auStack_424 [516];
  undefined1 auStack_220 [512];
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  FUN_0101206c(auStack_220,&DAT_0103a6dc,0x200);
  local_43c = auStack_220;
  uStack_438 = DAT_0103a8f8;
  uStack_434 = DAT_0103a8fc;
  FUN_0101206c(auStack_424,&DAT_0103a900,0x204);
  uVar2 = DAT_0103a6bc;
  uVar1 = DAT_0103a6b8;
  local_430 = DAT_0103a8dc;
  uStack_42c = DAT_0103a8e0;
  uStack_428 = DAT_0103a8e4;
  local_448 = DAT_0103a8e8;
  uStack_444 = DAT_0103a8ec;
  uStack_440 = DAT_0103a8f0;
  uVar3 = 2;
  uVar4 = 4;
  if (param_1 == 2) {
    uVar3 = 0;
    uVar4 = 2;
    local_448 = DAT_0103a8e8 & 0xffffff00;
  }
  pin_update(DAT_0103a6b4,0x10,0x10);
  pin_update(uVar1,2,2);
  pin_update(DAT_0103a6c0,1,0);
  pin_update(uVar2,1,1);
  FUN_0103a450(DAT_0103a690,24000);
  FUN_01002c90(0,0,auStack_424);
  FUN_0103a6d0();
  pin_update(uVar2,4,4);
  FUN_0103b910(0,local_43c,uStack_438,uStack_434);
  FUN_0103a6d0();
  pin_update(uVar2,2,uVar3);
  FUN_01029b3c(0,&local_430);
  FUN_0103a6d0();
  pin_update(DAT_0103a6c4,6,uVar4);
  *DAT_0103a6c8 = (undefined1)local_448;
  FUN_01029c0a(0,&local_448);
  FUN_01029a98(0,30000,1);
  pin_update(DAT_0103a6cc,0x40,0x40);
  pin_update(uVar1,1,1);
  FUN_01029c52(0,0);
  FUN_0103a6d0();
  return;
}

