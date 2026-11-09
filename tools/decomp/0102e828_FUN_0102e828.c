
void FUN_0102e828(int param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_010172dc();
    FUN_010172cc(param_1,0x7f);
    pin_update(*(int *)(&DAT_0101751c + param_1 * 4) + 0xe2,0x80,0);
    return;
  }
  FUN_01039750();
  return;
}

