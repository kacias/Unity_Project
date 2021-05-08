﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace Language.Lua.Library
{
    public static class FileLib
    {
        public static void RegisterModule(LuaTable enviroment)
        {
            LuaTable module = new LuaTable();
            RegisterFunctions(module);
            enviroment.SetNameValue("file", module);
        }

        public static void RegisterFunctions(LuaTable module)
        {
            module.Register("close", close);
            module.Register("read", read);
            module.Register("write", write);
            module.Register("lines", lines);
            module.Register("flush", flush);
            module.Register("seek", seek);
        }

        public static LuaTable CreateMetaTable()
        {
            LuaTable metatable = new LuaTable();
            RegisterFunctions(metatable);
            metatable.SetNameValue("__index", metatable);
            return metatable;
        }

        public static LuaValue close(LuaValue[] values)
        {
            LuaUserdata data = values[0] as LuaUserdata;
            TextReader reader = data.Value as TextReader;
            if (reader != null)
            {
                //[PixelCrushers]reader.Close();
                return null;
            }

            TextWriter writer = data.Value as TextWriter;
            if (writer != null)
            {
				//[PixelCrushers]writer.Close();
            }

            return null;
        }

        public static LuaValue read(LuaValue[] values)
        {
            LuaUserdata data = values[0] as LuaUserdata;
            TextReader reader = data.Value as TextReader;

            LuaNumber number = values.Length > 1 ? values[1] as LuaNumber : null;

            if (number != null)
            {
                if (number.Number == 0)
                {
                    return LuaString.Empty;
                }

                if (reader.Peek() == -1)
                {
                    return LuaNil.Nil;
                }

                char[] block = new char[(int)number.Number];
                int chars = reader.ReadBlock(block, 0, block.Length);
                return new LuaString(new string(block, 0, chars));
            }

            LuaString param = values.Length > 1 ? values[1] as LuaString : null;
            string mode = param == null ? "*l" : param.Text;

            switch (mode)
            {
                case "*l":
                    if (reader.Peek() == -1)
                    {
                        return LuaNil.Nil;
                    }
                    return new LuaString(reader.ReadLine());
                case "*a":
                    return new LuaString(reader.ReadToEnd());
                case "*n":
                    List<char> buffer = new List<char>();
                    int ch = reader.Peek();
                    while (ch >= '0' && ch <= '9')
                    {
                        buffer.Add((char)reader.Read());
                        ch = reader.Peek();
                    }
                    return new LuaNumber(int.Parse(new string(buffer.ToArray())));
            }

            return null;
        }

        public static LuaValue lines(LuaValue[] values)
        {
            LuaUserdata data = values[0] as LuaUserdata;
			//[PixelCrushers]TextReader reader = data.Value as TextReader;

            LuaFunction func = new LuaFunction((LuaValue[] args) =>
                {
					//[PixelCrushers]LuaUserdata _data = values[0] as LuaUserdata;
                    TextReader _reader = data.Value as TextReader;

                    string line = _reader.ReadLine();

                    if (line != null)
                    {
                        return new LuaString(line);
                    }
                    else
                    {
                        return LuaNil.Nil;
                    }
                }
            );

            return new LuaMultiValue(new LuaValue[] { func, data, LuaNil.Nil });
        }

        public static LuaValue seek(LuaValue[] values)
        {
            LuaUserdata data = values[0] as LuaUserdata;
            Stream stream = null;

            StreamWriter writer = data.Value as StreamWriter;
            if (writer != null)
            {
                stream = writer.BaseStream;
            }
            else
            {
                StreamReader reader = data.Value as StreamReader;
                if (reader != null)
                {
                    stream = reader.BaseStream;
                }
            }

            if (stream != null)
            {
                LuaString whenceStr = values.Length > 1 ? values[1] as LuaString : null;
                string whence = whenceStr == null ? "cur" : whenceStr.Text;

                LuaNumber offsetNum = values.Length > 1 && whenceStr == null ? values[1] as LuaNumber : null;
                offsetNum = values.Length > 2 && offsetNum == null ? values[2] as LuaNumber : null;
                long offset = offsetNum == null ? 0 : (long)offsetNum.Number;

                stream.Seek(offset, GetSeekOrigin(whence));
            }

            return null;
        }

        static SeekOrigin GetSeekOrigin(string whence)
        {
            switch (whence)
            {
                case "set":
                    return SeekOrigin.Begin;
                case "end":
                    return SeekOrigin.End;
                case "cur":
                default:
                    return SeekOrigin.Current;
            }
        }

        public static LuaValue write(LuaValue[] values)
        {
            LuaUserdata data = values[0] as LuaUserdata;
            TextWriter writer = data.Value as TextWriter;

            for (int i = 1; i < values.Length; i++)
            {
                writer.Write(values[i].Value);
            }

            return null;
        }

        public static LuaValue flush(LuaValue[] values)
        {
            LuaUserdata data = values[0] as LuaUserdata;
            TextWriter writer = data.Value as TextWriter;
            writer.Flush();
            return null;
        }
    }
}
