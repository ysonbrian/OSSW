void GenerateNextBlock(Block_Info *block_info)
{
	
	int i = 1;
	int j = 0;
	int nextBlock = (*block_info).b_type_next; //다음 블록의 행렬에 '1'값 위치확인하여 다음블록을 찾는다
	for (i = 1; i < 3; i++) 
	{
		for (j = 0; j < 4; j++) 
		{
			if (blocks[nextBlock][0][i][j] == EXISTING_BLOCK) //블록의 다음 위치 값 1을 찾는다
			{ 
				Gotoxy(MAIN_X + MAIN_X_ADJ + 3 + j, i + 6); //'1' 값을 찾으면 블록을 채워준다
				printf("■");
			}
			else // '1' 값이 아니면 아무것도 생성 안한다
			{
				Gotoxy(MAIN_X + MAIN_X_ADJ + 3 + j, i + 6);
				printf("  ");
			}
		}
	}
}


























































