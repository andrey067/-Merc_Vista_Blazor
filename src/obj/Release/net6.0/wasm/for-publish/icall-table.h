#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
187,
194,
195,
196,
197,
198,
199,
200,
201,
202,
205,
206,
372,
373,
375,
404,
405,
406,
426,
427,
428,
429,
430,
521,
522,
523,
526,
563,
564,
565,
568,
570,
572,
574,
579,
587,
588,
589,
590,
591,
592,
593,
594,
595,
596,
597,
598,
599,
600,
601,
602,
603,
604,
605,
606,
607,
608,
609,
610,
611,
612,
613,
697,
698,
699,
700,
701,
702,
703,
704,
705,
706,
707,
708,
709,
710,
711,
712,
713,
714,
715,
716,
717,
718,
719,
720,
721,
855,
856,
864,
867,
869,
875,
876,
878,
879,
883,
885,
886,
887,
888,
890,
891,
892,
895,
896,
899,
900,
901,
976,
977,
979,
987,
988,
989,
990,
991,
995,
996,
997,
998,
999,
1000,
1002,
1003,
1004,
1006,
1007,
1009,
1013,
1014,
1015,
1288,
1503,
1504,
7625,
7626,
7628,
7629,
7630,
7631,
7632,
7634,
7636,
7638,
7639,
7647,
7649,
7653,
7654,
7656,
7658,
7660,
7671,
7680,
7681,
7683,
7684,
7685,
7686,
7687,
7689,
7691,
8720,
8724,
8726,
8727,
8728,
8729,
8783,
8784,
8785,
8802,
8803,
8804,
8805,
8838,
8885,
8888,
8898,
8899,
8900,
8901,
9167,
9168,
9173,
9174,
9222,
9223,
9224,
9252,
9258,
9265,
9275,
9278,
9371,
9381,
9391,
9392,
9393,
9394,
9395,
9396,
9402,
9418,
9439,
9440,
9449,
9451,
9458,
9459,
9462,
9464,
9469,
9475,
9476,
9483,
9485,
9495,
9498,
9499,
9500,
9511,
9523,
9529,
9530,
9531,
9533,
9534,
9544,
9563,
9585,
9586,
9587,
9588,
9589,
9606,
9611,
9616,
9647,
9648,
10139,
10140,
10141,
10221,
10300,
10561,
10562,
10571,
10572,
10573,
10579,
10657,
10829,
10830,
11537,
11538,
12355,
12374,
12381,
12382,
12384,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
float ves_icall_System_Math_Abs_single (float);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
int ves_icall_System_Math_ILogB (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
int ves_icall_System_MathF_ILogB (float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 187,
ves_icall_System_Array_InternalCreate,
// token 194,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 195,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 196,
ves_icall_System_Array_CanChangePrimitive,
// token 197,
ves_icall_System_Array_FastCopy_raw,
// token 198,
ves_icall_System_Array_GetLength_raw,
// token 199,
ves_icall_System_Array_GetLowerBound_raw,
// token 200,
ves_icall_System_Array_GetGenericValue_icall,
// token 201,
ves_icall_System_Array_GetValueImpl_raw,
// token 202,
ves_icall_System_Array_SetGenericValue_icall,
// token 205,
ves_icall_System_Array_SetValueImpl_raw,
// token 206,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 372,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 373,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 375,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 404,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 405,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 406,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 426,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 427,
ves_icall_System_Enum_ToObject_raw,
// token 428,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 429,
ves_icall_System_Enum_get_underlying_type_raw,
// token 430,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 521,
ves_icall_System_Environment_get_ProcessorCount,
// token 522,
ves_icall_System_Environment_get_TickCount,
// token 523,
ves_icall_System_Environment_get_TickCount64,
// token 526,
ves_icall_System_Environment_FailFast_raw,
// token 563,
ves_icall_System_GC_GetCollectionCount,
// token 564,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 565,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 568,
ves_icall_System_GC_SuppressFinalize_raw,
// token 570,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 572,
ves_icall_System_GC_GetGCMemoryInfo,
// token 574,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 579,
ves_icall_System_Object_MemberwiseClone_raw,
// token 587,
ves_icall_System_Math_Abs_double,
// token 588,
ves_icall_System_Math_Abs_single,
// token 589,
ves_icall_System_Math_Acos,
// token 590,
ves_icall_System_Math_Acosh,
// token 591,
ves_icall_System_Math_Asin,
// token 592,
ves_icall_System_Math_Asinh,
// token 593,
ves_icall_System_Math_Atan,
// token 594,
ves_icall_System_Math_Atan2,
// token 595,
ves_icall_System_Math_Atanh,
// token 596,
ves_icall_System_Math_Cbrt,
// token 597,
ves_icall_System_Math_Ceiling,
// token 598,
ves_icall_System_Math_Cos,
// token 599,
ves_icall_System_Math_Cosh,
// token 600,
ves_icall_System_Math_Exp,
// token 601,
ves_icall_System_Math_Floor,
// token 602,
ves_icall_System_Math_Log,
// token 603,
ves_icall_System_Math_Log10,
// token 604,
ves_icall_System_Math_Pow,
// token 605,
ves_icall_System_Math_Sin,
// token 606,
ves_icall_System_Math_Sinh,
// token 607,
ves_icall_System_Math_Sqrt,
// token 608,
ves_icall_System_Math_Tan,
// token 609,
ves_icall_System_Math_Tanh,
// token 610,
ves_icall_System_Math_FusedMultiplyAdd,
// token 611,
ves_icall_System_Math_ILogB,
// token 612,
ves_icall_System_Math_Log2,
// token 613,
ves_icall_System_Math_ModF,
// token 697,
ves_icall_System_MathF_Acos,
// token 698,
ves_icall_System_MathF_Acosh,
// token 699,
ves_icall_System_MathF_Asin,
// token 700,
ves_icall_System_MathF_Asinh,
// token 701,
ves_icall_System_MathF_Atan,
// token 702,
ves_icall_System_MathF_Atan2,
// token 703,
ves_icall_System_MathF_Atanh,
// token 704,
ves_icall_System_MathF_Cbrt,
// token 705,
ves_icall_System_MathF_Ceiling,
// token 706,
ves_icall_System_MathF_Cos,
// token 707,
ves_icall_System_MathF_Cosh,
// token 708,
ves_icall_System_MathF_Exp,
// token 709,
ves_icall_System_MathF_Floor,
// token 710,
ves_icall_System_MathF_Log,
// token 711,
ves_icall_System_MathF_Log10,
// token 712,
ves_icall_System_MathF_Pow,
// token 713,
ves_icall_System_MathF_Sin,
// token 714,
ves_icall_System_MathF_Sinh,
// token 715,
ves_icall_System_MathF_Sqrt,
// token 716,
ves_icall_System_MathF_Tan,
// token 717,
ves_icall_System_MathF_Tanh,
// token 718,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 719,
ves_icall_System_MathF_ILogB,
// token 720,
ves_icall_System_MathF_Log2,
// token 721,
ves_icall_System_MathF_ModF,
// token 855,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 856,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 864,
ves_icall_RuntimeType_make_array_type_raw,
// token 867,
ves_icall_RuntimeType_make_byref_type_raw,
// token 869,
ves_icall_RuntimeType_MakePointerType_raw,
// token 875,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 876,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 878,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 879,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 883,
ves_icall_RuntimeType_GetPacking_raw,
// token 885,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 886,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 887,
ves_icall_System_RuntimeType_getFullName_raw,
// token 888,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 890,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 891,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 892,
ves_icall_RuntimeType_GetFields_native_raw,
// token 895,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 896,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 899,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 900,
ves_icall_RuntimeType_get_Name_raw,
// token 901,
ves_icall_RuntimeType_get_Namespace_raw,
// token 976,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 977,
ves_icall_reflection_get_token_raw,
// token 979,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 987,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 988,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 989,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 990,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 991,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 995,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 996,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 997,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 998,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 999,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 1000,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1002,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1003,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 1004,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1006,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 1007,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1009,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1013,
ves_icall_System_String_FastAllocateString_raw,
// token 1014,
ves_icall_System_String_InternalIsInterned_raw,
// token 1015,
ves_icall_System_String_InternalIntern_raw,
// token 1288,
ves_icall_System_Type_internal_from_handle_raw,
// token 1503,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1504,
ves_icall_System_ValueType_Equals_raw,
// token 7625,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7626,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7628,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7629,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7630,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7631,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7632,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7634,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7636,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7638,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7639,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 7647,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7649,
mono_monitor_exit_icall_raw,
// token 7653,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 7654,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7656,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7658,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7660,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7671,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 7680,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7681,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7683,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7684,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7685,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7686,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7687,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7689,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7691,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8720,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8724,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8726,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8727,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8728,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8729,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8783,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8784,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8785,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8802,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8803,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8804,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8805,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 8838,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8885,
mono_object_hash_icall_raw,
// token 8888,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8898,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8899,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8900,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 8901,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9167,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9168,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9173,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9174,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9222,
mono_digest_get_public_token,
// token 9223,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9224,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 9252,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9258,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9265,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9275,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9278,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9371,
ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw,
// token 9381,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9391,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 9392,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 9393,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 9394,
ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw,
// token 9395,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9396,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9402,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9418,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9439,
ves_icall_reflection_get_token_raw,
// token 9440,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9449,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9451,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9458,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9459,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9462,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9464,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9469,
ves_icall_reflection_get_token_raw,
// token 9475,
ves_icall_get_method_info_raw,
// token 9476,
ves_icall_get_method_attributes,
// token 9483,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9485,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9495,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9498,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9499,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9500,
ves_icall_reflection_get_token_raw,
// token 9511,
ves_icall_InternalInvoke_raw,
// token 9523,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9529,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9530,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9531,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9533,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9534,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9544,
ves_icall_InternalInvoke_raw,
// token 9563,
ves_icall_reflection_get_token_raw,
// token 9585,
ves_icall_reflection_get_token_raw,
// token 9586,
ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw,
// token 9587,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 9588,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 9589,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9606,
ves_icall_reflection_get_token_raw,
// token 9611,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 9616,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9647,
ves_icall_reflection_get_token_raw,
// token 9648,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10139,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 10140,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10141,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10221,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 10300,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10561,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10562,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10571,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10572,
ves_icall_ModuleBuilder_getToken_raw,
// token 10573,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10579,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10657,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10829,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10830,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11537,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 11538,
ves_icall_System_Diagnostics_Debugger_Log,
// token 12355,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12374,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12381,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 12382,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12384,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
};
