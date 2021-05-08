﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace Language.Lua.Library
{
    public static class TableLib
    {
        public static void RegisterModule(LuaTable enviroment)
        {
            LuaTable module = new LuaTable();
            RegisterFunctions(module);
            enviroment.SetNameValue("table", module);
        }

        public static void RegisterFunctions(LuaTable module)
        {
            module.Register("concat", concat);
            module.Register("insert", insert);
            module.Register("remove", remove);
            module.Register("removeitem", removeitem);
            module.Register("maxn", maxn);
			module.Register("getn", getn); //[PixelCrushers]
			module.Register("setn", getn); //[PixelCrushers]
			module.Register("sort", sort);
        }

        public static LuaValue concat(LuaValue[] values)
        {
            LuaTable table = values[0] as LuaTable;
            LuaString separator = values.Length > 1 ? values[1] as LuaString : LuaString.Empty;
            LuaNumber startNumber = values.Length > 2 ? values[2] as LuaNumber : null;
            LuaNumber endNumber = values.Length > 3 ? values[3] as LuaNumber : null;

            int start = startNumber == null ? 1 : (int)startNumber.Number;
            int end = endNumber == null ? table.Length : (int)endNumber.Number;

            if (start > end)
            {
                return LuaString.Empty;
            }
            else
            {
                StringBuilder text = new StringBuilder();

                for (int index = start; index < end; index++)
                {
                    text.Append(table.GetValue(index).ToString());
                    text.Append(separator.Text);
                }
                text.Append(table.GetValue(end).ToString());

                return new LuaString(text.ToString());
            }
        }

        public static LuaValue insert(LuaValue[] values)
        {
            LuaTable table = values[0] as LuaTable;
            if (values.Length == 2)
            {
                LuaValue item = values[1];
                table.AddValue(item);
            }
            else if (values.Length == 3)
            {
                LuaNumber number = values[1] as LuaNumber;
                LuaValue item = values[2];
                int index = (int)number.Number;
                table.InsertValue(index, item);
            }
            return null;
        }

        public static LuaValue remove(LuaValue[] values)
        {
            LuaTable table = values[0] as LuaTable;
            int index = table.Length;
            if (values.Length == 2)
            {
                LuaNumber number = values[1] as LuaNumber;
                index = (int)number.Number;
            }

            LuaValue item = table.GetValue(index);
            table.RemoveAt(index);
            return item;
        }

        public static LuaValue removeitem(LuaValue[] values)
        {
            LuaTable table = values[0] as LuaTable;
            LuaValue item = values[1];

            bool removed = table.Remove(item);
            return LuaBoolean.From(removed);
        }

        public static LuaValue maxn(LuaValue[] values)
        {
            LuaTable table = values[0] as LuaTable;
            double maxIndex = double.MinValue;
            foreach (var key in table.Keys)
            {
                LuaNumber number = key as LuaNumber;
                if (number != null && number.Number >0)
                {
                    if (number.Number > maxIndex)
                    {
                        maxIndex = number.Number;
                    }
                }
            }
            return new LuaNumber(maxIndex);
        }

        public static LuaValue sort(LuaValue[] values)
        {
            LuaTable table = values[0] as LuaTable;
            if (values.Length == 2)
            {
                LuaFunction comp = values[1] as LuaFunction;
                table.Sort(comp);
            }
            else
            {
                table.Sort();
            }
            return null;
        }

		public static LuaValue getn(LuaValue[] values) //[PixelCrushers]
		{
			int count = 0;
			if (values.Length >= 1)
			{
				LuaTable table = values[0] as LuaTable;
				if (table != null) 
				{
					if (table.Count > 0) // dictionary
					{
						foreach (KeyValuePair<LuaValue, LuaValue> kvp in table.KeyValuePairs) 
						{
							LuaString key = kvp.Key as LuaString;
							LuaValue value = kvp.Value;
							if ((key != null) && string.Equals(key.Text, "n"))
							{
								if (value is LuaNumber) return (value as LuaNumber);
							}
							else if (value == LuaNil.Nil)
							{
								return new LuaNumber(count);
							} 
							else
							{
								count++;
							}
						}
					}
					else
					{
						foreach (LuaValue listValue in table.ListValues) 
						{
							if (listValue == LuaNil.Nil)
							{
								return new LuaNumber(count);
							} 
							else
							{
								count++;
							}
						}
					}
				}
			}
			return new LuaNumber(count);
		}
		
		public static LuaValue setn(LuaValue[] values) //[PixelCrushers]
		{
			if (values.Length >= 2)
			{
				LuaTable table = values[0] as LuaTable;
				LuaNumber number = values[1] as LuaNumber;
				if (table != null && number != null)
				{
					table.SetNameValue("n", number);
				}
			}
			return LuaNil.Nil;
		}
		
	}
}
