#include<stdio.h>
int main()
{
int 	_Total=0,_Coin_Value_50=0,_Coin_Value_20=0,_Coin_Value_10=0,_Coin_Value_5=0,_Coin_Value_2=0,cn_count=0;
int 	_Total_value=300;
	printf( " 50	   20       10       5      2");
	int _No_of_Coin_50,_No_of_Coin_20,_No_of_Coin_10,_No_of_Coin_5,_No_of_Coin_2;
	for(_No_of_Coin_50=0; _No_of_Coin_50<=_Total_value /50; _No_of_Coin_50++)
	{
		int _Total50=_Total_value-_No_of_Coin_50*50;
		if(_No_of_Coin_50>0)
		_Coin_Value_50=1;
		for( _No_of_Coin_20=0; _No_of_Coin_20<=_Total50 /20; _No_of_Coin_20++)
		{
			int _Total20=_Total50-_No_of_Coin_20*20;
			if(_No_of_Coin_20>0)
			_Coin_Value_20=1;
			for( _No_of_Coin_10=0; _No_of_Coin_10<=_Total20 /10; _No_of_Coin_10++)
			{
				int _Total10=_Total20-_No_of_Coin_10*10;
				if(_No_of_Coin_10>0)
				_Coin_Value_10=1;
				for( _No_of_Coin_5=0; _No_of_Coin_5<=_Total10 /5; _No_of_Coin_5++)
				{
					int _Total5=_Total10-_No_of_Coin_5*5;
					if(_No_of_Coin_5>0)
					_Coin_Value_5=1;
					for( _No_of_Coin_2=0; _No_of_Coin_2<=_Total5 /2; _No_of_Coin_2++)
					{
						int _Total2=_Total5-_No_of_Coin_2*2;
						if(_No_of_Coin_2>0)
						_Coin_Value_2=1;
						if(_Total2==0)
						printf("%d      %d       %d        %d        %d\n",_No_of_Coin_50,_No_of_Coin_20,_No_of_Coin_10,_No_of_Coin_5,_No_of_Coin_2);
						_Total++;
						if((_Coin_Value_50+_Coin_Value_20+_Coin_Value_10+_Coin_Value_5+_Coin_Value_2)<=2)
						cn_count++;
					}
				}
			}
		}
	}
	printf("\ntotal combination %d",_Total);
	printf("\ntotal combination which is less then 3 coins is %d ",cn_count);
}
