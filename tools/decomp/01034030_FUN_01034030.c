
void FUN_01034030(undefined4 param_1,undefined1 *param_2)

{
  FUN_01022c68(param_1,1,1,0,0,0,1,*param_2,0);
  if (param_2[2] != '\0') {
    FUN_0101d740(param_1,1,0,*(undefined4 *)(param_2 + 4),(char)*(undefined2 *)(param_2 + 8));
    FUN_0101d826(param_1,1,1);
    return;
  }
  FUN_0101d676(param_1,1,1,param_2[1]);
  FUN_0101d7c8(param_1,1,1);
  return;
}

