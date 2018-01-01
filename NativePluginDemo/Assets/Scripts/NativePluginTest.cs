using System;
using UnityEngine;
using System.Runtime.InteropServices;

public class NativePluginTest : MonoBehaviour {

#if UNITY_IOS
    public const string LibName = "__Internal";
#else
    public const string LibName = "MathLibrary";
#endif

    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl)]
    static extern void CreateInstance();
    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl)]
    static extern void ReleaseInstance();
    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl)]
    static extern double Add(double a, double b);
    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl)]
    static extern double Multiply(double a, double b);
    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl)]
    static extern double AddMultiply(double a, double b);

    void Start()
    {
        double a = 7.4;
        double b = 99;

        CreateInstance();
        Debug.Log(Add(a, b));
        Debug.Log(Multiply(a, b));
        Debug.Log(AddMultiply(a, b));
    }

    void OnDestroy()
    {
        ReleaseInstance();
    }
}
