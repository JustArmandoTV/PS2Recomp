#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052A650
// Address: 0x52a650 - 0x52ac50
void sub_0052A650_0x52a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052A650_0x52a650");
#endif

    switch (ctx->pc) {
        case 0x52a650u: goto label_52a650;
        case 0x52a654u: goto label_52a654;
        case 0x52a658u: goto label_52a658;
        case 0x52a65cu: goto label_52a65c;
        case 0x52a660u: goto label_52a660;
        case 0x52a664u: goto label_52a664;
        case 0x52a668u: goto label_52a668;
        case 0x52a66cu: goto label_52a66c;
        case 0x52a670u: goto label_52a670;
        case 0x52a674u: goto label_52a674;
        case 0x52a678u: goto label_52a678;
        case 0x52a67cu: goto label_52a67c;
        case 0x52a680u: goto label_52a680;
        case 0x52a684u: goto label_52a684;
        case 0x52a688u: goto label_52a688;
        case 0x52a68cu: goto label_52a68c;
        case 0x52a690u: goto label_52a690;
        case 0x52a694u: goto label_52a694;
        case 0x52a698u: goto label_52a698;
        case 0x52a69cu: goto label_52a69c;
        case 0x52a6a0u: goto label_52a6a0;
        case 0x52a6a4u: goto label_52a6a4;
        case 0x52a6a8u: goto label_52a6a8;
        case 0x52a6acu: goto label_52a6ac;
        case 0x52a6b0u: goto label_52a6b0;
        case 0x52a6b4u: goto label_52a6b4;
        case 0x52a6b8u: goto label_52a6b8;
        case 0x52a6bcu: goto label_52a6bc;
        case 0x52a6c0u: goto label_52a6c0;
        case 0x52a6c4u: goto label_52a6c4;
        case 0x52a6c8u: goto label_52a6c8;
        case 0x52a6ccu: goto label_52a6cc;
        case 0x52a6d0u: goto label_52a6d0;
        case 0x52a6d4u: goto label_52a6d4;
        case 0x52a6d8u: goto label_52a6d8;
        case 0x52a6dcu: goto label_52a6dc;
        case 0x52a6e0u: goto label_52a6e0;
        case 0x52a6e4u: goto label_52a6e4;
        case 0x52a6e8u: goto label_52a6e8;
        case 0x52a6ecu: goto label_52a6ec;
        case 0x52a6f0u: goto label_52a6f0;
        case 0x52a6f4u: goto label_52a6f4;
        case 0x52a6f8u: goto label_52a6f8;
        case 0x52a6fcu: goto label_52a6fc;
        case 0x52a700u: goto label_52a700;
        case 0x52a704u: goto label_52a704;
        case 0x52a708u: goto label_52a708;
        case 0x52a70cu: goto label_52a70c;
        case 0x52a710u: goto label_52a710;
        case 0x52a714u: goto label_52a714;
        case 0x52a718u: goto label_52a718;
        case 0x52a71cu: goto label_52a71c;
        case 0x52a720u: goto label_52a720;
        case 0x52a724u: goto label_52a724;
        case 0x52a728u: goto label_52a728;
        case 0x52a72cu: goto label_52a72c;
        case 0x52a730u: goto label_52a730;
        case 0x52a734u: goto label_52a734;
        case 0x52a738u: goto label_52a738;
        case 0x52a73cu: goto label_52a73c;
        case 0x52a740u: goto label_52a740;
        case 0x52a744u: goto label_52a744;
        case 0x52a748u: goto label_52a748;
        case 0x52a74cu: goto label_52a74c;
        case 0x52a750u: goto label_52a750;
        case 0x52a754u: goto label_52a754;
        case 0x52a758u: goto label_52a758;
        case 0x52a75cu: goto label_52a75c;
        case 0x52a760u: goto label_52a760;
        case 0x52a764u: goto label_52a764;
        case 0x52a768u: goto label_52a768;
        case 0x52a76cu: goto label_52a76c;
        case 0x52a770u: goto label_52a770;
        case 0x52a774u: goto label_52a774;
        case 0x52a778u: goto label_52a778;
        case 0x52a77cu: goto label_52a77c;
        case 0x52a780u: goto label_52a780;
        case 0x52a784u: goto label_52a784;
        case 0x52a788u: goto label_52a788;
        case 0x52a78cu: goto label_52a78c;
        case 0x52a790u: goto label_52a790;
        case 0x52a794u: goto label_52a794;
        case 0x52a798u: goto label_52a798;
        case 0x52a79cu: goto label_52a79c;
        case 0x52a7a0u: goto label_52a7a0;
        case 0x52a7a4u: goto label_52a7a4;
        case 0x52a7a8u: goto label_52a7a8;
        case 0x52a7acu: goto label_52a7ac;
        case 0x52a7b0u: goto label_52a7b0;
        case 0x52a7b4u: goto label_52a7b4;
        case 0x52a7b8u: goto label_52a7b8;
        case 0x52a7bcu: goto label_52a7bc;
        case 0x52a7c0u: goto label_52a7c0;
        case 0x52a7c4u: goto label_52a7c4;
        case 0x52a7c8u: goto label_52a7c8;
        case 0x52a7ccu: goto label_52a7cc;
        case 0x52a7d0u: goto label_52a7d0;
        case 0x52a7d4u: goto label_52a7d4;
        case 0x52a7d8u: goto label_52a7d8;
        case 0x52a7dcu: goto label_52a7dc;
        case 0x52a7e0u: goto label_52a7e0;
        case 0x52a7e4u: goto label_52a7e4;
        case 0x52a7e8u: goto label_52a7e8;
        case 0x52a7ecu: goto label_52a7ec;
        case 0x52a7f0u: goto label_52a7f0;
        case 0x52a7f4u: goto label_52a7f4;
        case 0x52a7f8u: goto label_52a7f8;
        case 0x52a7fcu: goto label_52a7fc;
        case 0x52a800u: goto label_52a800;
        case 0x52a804u: goto label_52a804;
        case 0x52a808u: goto label_52a808;
        case 0x52a80cu: goto label_52a80c;
        case 0x52a810u: goto label_52a810;
        case 0x52a814u: goto label_52a814;
        case 0x52a818u: goto label_52a818;
        case 0x52a81cu: goto label_52a81c;
        case 0x52a820u: goto label_52a820;
        case 0x52a824u: goto label_52a824;
        case 0x52a828u: goto label_52a828;
        case 0x52a82cu: goto label_52a82c;
        case 0x52a830u: goto label_52a830;
        case 0x52a834u: goto label_52a834;
        case 0x52a838u: goto label_52a838;
        case 0x52a83cu: goto label_52a83c;
        case 0x52a840u: goto label_52a840;
        case 0x52a844u: goto label_52a844;
        case 0x52a848u: goto label_52a848;
        case 0x52a84cu: goto label_52a84c;
        case 0x52a850u: goto label_52a850;
        case 0x52a854u: goto label_52a854;
        case 0x52a858u: goto label_52a858;
        case 0x52a85cu: goto label_52a85c;
        case 0x52a860u: goto label_52a860;
        case 0x52a864u: goto label_52a864;
        case 0x52a868u: goto label_52a868;
        case 0x52a86cu: goto label_52a86c;
        case 0x52a870u: goto label_52a870;
        case 0x52a874u: goto label_52a874;
        case 0x52a878u: goto label_52a878;
        case 0x52a87cu: goto label_52a87c;
        case 0x52a880u: goto label_52a880;
        case 0x52a884u: goto label_52a884;
        case 0x52a888u: goto label_52a888;
        case 0x52a88cu: goto label_52a88c;
        case 0x52a890u: goto label_52a890;
        case 0x52a894u: goto label_52a894;
        case 0x52a898u: goto label_52a898;
        case 0x52a89cu: goto label_52a89c;
        case 0x52a8a0u: goto label_52a8a0;
        case 0x52a8a4u: goto label_52a8a4;
        case 0x52a8a8u: goto label_52a8a8;
        case 0x52a8acu: goto label_52a8ac;
        case 0x52a8b0u: goto label_52a8b0;
        case 0x52a8b4u: goto label_52a8b4;
        case 0x52a8b8u: goto label_52a8b8;
        case 0x52a8bcu: goto label_52a8bc;
        case 0x52a8c0u: goto label_52a8c0;
        case 0x52a8c4u: goto label_52a8c4;
        case 0x52a8c8u: goto label_52a8c8;
        case 0x52a8ccu: goto label_52a8cc;
        case 0x52a8d0u: goto label_52a8d0;
        case 0x52a8d4u: goto label_52a8d4;
        case 0x52a8d8u: goto label_52a8d8;
        case 0x52a8dcu: goto label_52a8dc;
        case 0x52a8e0u: goto label_52a8e0;
        case 0x52a8e4u: goto label_52a8e4;
        case 0x52a8e8u: goto label_52a8e8;
        case 0x52a8ecu: goto label_52a8ec;
        case 0x52a8f0u: goto label_52a8f0;
        case 0x52a8f4u: goto label_52a8f4;
        case 0x52a8f8u: goto label_52a8f8;
        case 0x52a8fcu: goto label_52a8fc;
        case 0x52a900u: goto label_52a900;
        case 0x52a904u: goto label_52a904;
        case 0x52a908u: goto label_52a908;
        case 0x52a90cu: goto label_52a90c;
        case 0x52a910u: goto label_52a910;
        case 0x52a914u: goto label_52a914;
        case 0x52a918u: goto label_52a918;
        case 0x52a91cu: goto label_52a91c;
        case 0x52a920u: goto label_52a920;
        case 0x52a924u: goto label_52a924;
        case 0x52a928u: goto label_52a928;
        case 0x52a92cu: goto label_52a92c;
        case 0x52a930u: goto label_52a930;
        case 0x52a934u: goto label_52a934;
        case 0x52a938u: goto label_52a938;
        case 0x52a93cu: goto label_52a93c;
        case 0x52a940u: goto label_52a940;
        case 0x52a944u: goto label_52a944;
        case 0x52a948u: goto label_52a948;
        case 0x52a94cu: goto label_52a94c;
        case 0x52a950u: goto label_52a950;
        case 0x52a954u: goto label_52a954;
        case 0x52a958u: goto label_52a958;
        case 0x52a95cu: goto label_52a95c;
        case 0x52a960u: goto label_52a960;
        case 0x52a964u: goto label_52a964;
        case 0x52a968u: goto label_52a968;
        case 0x52a96cu: goto label_52a96c;
        case 0x52a970u: goto label_52a970;
        case 0x52a974u: goto label_52a974;
        case 0x52a978u: goto label_52a978;
        case 0x52a97cu: goto label_52a97c;
        case 0x52a980u: goto label_52a980;
        case 0x52a984u: goto label_52a984;
        case 0x52a988u: goto label_52a988;
        case 0x52a98cu: goto label_52a98c;
        case 0x52a990u: goto label_52a990;
        case 0x52a994u: goto label_52a994;
        case 0x52a998u: goto label_52a998;
        case 0x52a99cu: goto label_52a99c;
        case 0x52a9a0u: goto label_52a9a0;
        case 0x52a9a4u: goto label_52a9a4;
        case 0x52a9a8u: goto label_52a9a8;
        case 0x52a9acu: goto label_52a9ac;
        case 0x52a9b0u: goto label_52a9b0;
        case 0x52a9b4u: goto label_52a9b4;
        case 0x52a9b8u: goto label_52a9b8;
        case 0x52a9bcu: goto label_52a9bc;
        case 0x52a9c0u: goto label_52a9c0;
        case 0x52a9c4u: goto label_52a9c4;
        case 0x52a9c8u: goto label_52a9c8;
        case 0x52a9ccu: goto label_52a9cc;
        case 0x52a9d0u: goto label_52a9d0;
        case 0x52a9d4u: goto label_52a9d4;
        case 0x52a9d8u: goto label_52a9d8;
        case 0x52a9dcu: goto label_52a9dc;
        case 0x52a9e0u: goto label_52a9e0;
        case 0x52a9e4u: goto label_52a9e4;
        case 0x52a9e8u: goto label_52a9e8;
        case 0x52a9ecu: goto label_52a9ec;
        case 0x52a9f0u: goto label_52a9f0;
        case 0x52a9f4u: goto label_52a9f4;
        case 0x52a9f8u: goto label_52a9f8;
        case 0x52a9fcu: goto label_52a9fc;
        case 0x52aa00u: goto label_52aa00;
        case 0x52aa04u: goto label_52aa04;
        case 0x52aa08u: goto label_52aa08;
        case 0x52aa0cu: goto label_52aa0c;
        case 0x52aa10u: goto label_52aa10;
        case 0x52aa14u: goto label_52aa14;
        case 0x52aa18u: goto label_52aa18;
        case 0x52aa1cu: goto label_52aa1c;
        case 0x52aa20u: goto label_52aa20;
        case 0x52aa24u: goto label_52aa24;
        case 0x52aa28u: goto label_52aa28;
        case 0x52aa2cu: goto label_52aa2c;
        case 0x52aa30u: goto label_52aa30;
        case 0x52aa34u: goto label_52aa34;
        case 0x52aa38u: goto label_52aa38;
        case 0x52aa3cu: goto label_52aa3c;
        case 0x52aa40u: goto label_52aa40;
        case 0x52aa44u: goto label_52aa44;
        case 0x52aa48u: goto label_52aa48;
        case 0x52aa4cu: goto label_52aa4c;
        case 0x52aa50u: goto label_52aa50;
        case 0x52aa54u: goto label_52aa54;
        case 0x52aa58u: goto label_52aa58;
        case 0x52aa5cu: goto label_52aa5c;
        case 0x52aa60u: goto label_52aa60;
        case 0x52aa64u: goto label_52aa64;
        case 0x52aa68u: goto label_52aa68;
        case 0x52aa6cu: goto label_52aa6c;
        case 0x52aa70u: goto label_52aa70;
        case 0x52aa74u: goto label_52aa74;
        case 0x52aa78u: goto label_52aa78;
        case 0x52aa7cu: goto label_52aa7c;
        case 0x52aa80u: goto label_52aa80;
        case 0x52aa84u: goto label_52aa84;
        case 0x52aa88u: goto label_52aa88;
        case 0x52aa8cu: goto label_52aa8c;
        case 0x52aa90u: goto label_52aa90;
        case 0x52aa94u: goto label_52aa94;
        case 0x52aa98u: goto label_52aa98;
        case 0x52aa9cu: goto label_52aa9c;
        case 0x52aaa0u: goto label_52aaa0;
        case 0x52aaa4u: goto label_52aaa4;
        case 0x52aaa8u: goto label_52aaa8;
        case 0x52aaacu: goto label_52aaac;
        case 0x52aab0u: goto label_52aab0;
        case 0x52aab4u: goto label_52aab4;
        case 0x52aab8u: goto label_52aab8;
        case 0x52aabcu: goto label_52aabc;
        case 0x52aac0u: goto label_52aac0;
        case 0x52aac4u: goto label_52aac4;
        case 0x52aac8u: goto label_52aac8;
        case 0x52aaccu: goto label_52aacc;
        case 0x52aad0u: goto label_52aad0;
        case 0x52aad4u: goto label_52aad4;
        case 0x52aad8u: goto label_52aad8;
        case 0x52aadcu: goto label_52aadc;
        case 0x52aae0u: goto label_52aae0;
        case 0x52aae4u: goto label_52aae4;
        case 0x52aae8u: goto label_52aae8;
        case 0x52aaecu: goto label_52aaec;
        case 0x52aaf0u: goto label_52aaf0;
        case 0x52aaf4u: goto label_52aaf4;
        case 0x52aaf8u: goto label_52aaf8;
        case 0x52aafcu: goto label_52aafc;
        case 0x52ab00u: goto label_52ab00;
        case 0x52ab04u: goto label_52ab04;
        case 0x52ab08u: goto label_52ab08;
        case 0x52ab0cu: goto label_52ab0c;
        case 0x52ab10u: goto label_52ab10;
        case 0x52ab14u: goto label_52ab14;
        case 0x52ab18u: goto label_52ab18;
        case 0x52ab1cu: goto label_52ab1c;
        case 0x52ab20u: goto label_52ab20;
        case 0x52ab24u: goto label_52ab24;
        case 0x52ab28u: goto label_52ab28;
        case 0x52ab2cu: goto label_52ab2c;
        case 0x52ab30u: goto label_52ab30;
        case 0x52ab34u: goto label_52ab34;
        case 0x52ab38u: goto label_52ab38;
        case 0x52ab3cu: goto label_52ab3c;
        case 0x52ab40u: goto label_52ab40;
        case 0x52ab44u: goto label_52ab44;
        case 0x52ab48u: goto label_52ab48;
        case 0x52ab4cu: goto label_52ab4c;
        case 0x52ab50u: goto label_52ab50;
        case 0x52ab54u: goto label_52ab54;
        case 0x52ab58u: goto label_52ab58;
        case 0x52ab5cu: goto label_52ab5c;
        case 0x52ab60u: goto label_52ab60;
        case 0x52ab64u: goto label_52ab64;
        case 0x52ab68u: goto label_52ab68;
        case 0x52ab6cu: goto label_52ab6c;
        case 0x52ab70u: goto label_52ab70;
        case 0x52ab74u: goto label_52ab74;
        case 0x52ab78u: goto label_52ab78;
        case 0x52ab7cu: goto label_52ab7c;
        case 0x52ab80u: goto label_52ab80;
        case 0x52ab84u: goto label_52ab84;
        case 0x52ab88u: goto label_52ab88;
        case 0x52ab8cu: goto label_52ab8c;
        case 0x52ab90u: goto label_52ab90;
        case 0x52ab94u: goto label_52ab94;
        case 0x52ab98u: goto label_52ab98;
        case 0x52ab9cu: goto label_52ab9c;
        case 0x52aba0u: goto label_52aba0;
        case 0x52aba4u: goto label_52aba4;
        case 0x52aba8u: goto label_52aba8;
        case 0x52abacu: goto label_52abac;
        case 0x52abb0u: goto label_52abb0;
        case 0x52abb4u: goto label_52abb4;
        case 0x52abb8u: goto label_52abb8;
        case 0x52abbcu: goto label_52abbc;
        case 0x52abc0u: goto label_52abc0;
        case 0x52abc4u: goto label_52abc4;
        case 0x52abc8u: goto label_52abc8;
        case 0x52abccu: goto label_52abcc;
        case 0x52abd0u: goto label_52abd0;
        case 0x52abd4u: goto label_52abd4;
        case 0x52abd8u: goto label_52abd8;
        case 0x52abdcu: goto label_52abdc;
        case 0x52abe0u: goto label_52abe0;
        case 0x52abe4u: goto label_52abe4;
        case 0x52abe8u: goto label_52abe8;
        case 0x52abecu: goto label_52abec;
        case 0x52abf0u: goto label_52abf0;
        case 0x52abf4u: goto label_52abf4;
        case 0x52abf8u: goto label_52abf8;
        case 0x52abfcu: goto label_52abfc;
        case 0x52ac00u: goto label_52ac00;
        case 0x52ac04u: goto label_52ac04;
        case 0x52ac08u: goto label_52ac08;
        case 0x52ac0cu: goto label_52ac0c;
        case 0x52ac10u: goto label_52ac10;
        case 0x52ac14u: goto label_52ac14;
        case 0x52ac18u: goto label_52ac18;
        case 0x52ac1cu: goto label_52ac1c;
        case 0x52ac20u: goto label_52ac20;
        case 0x52ac24u: goto label_52ac24;
        case 0x52ac28u: goto label_52ac28;
        case 0x52ac2cu: goto label_52ac2c;
        case 0x52ac30u: goto label_52ac30;
        case 0x52ac34u: goto label_52ac34;
        case 0x52ac38u: goto label_52ac38;
        case 0x52ac3cu: goto label_52ac3c;
        case 0x52ac40u: goto label_52ac40;
        case 0x52ac44u: goto label_52ac44;
        case 0x52ac48u: goto label_52ac48;
        case 0x52ac4cu: goto label_52ac4c;
        default: break;
    }

    ctx->pc = 0x52a650u;

label_52a650:
    // 0x52a650: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x52a650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_52a654:
    // 0x52a654: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x52a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_52a658:
    // 0x52a658: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x52a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_52a65c:
    // 0x52a65c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x52a65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_52a660:
    // 0x52a660: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x52a660u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_52a664:
    // 0x52a664: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x52a664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_52a668:
    // 0x52a668: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x52a668u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_52a66c:
    // 0x52a66c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x52a66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52a670:
    // 0x52a670: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52a670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52a674:
    // 0x52a674: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52a674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52a678:
    // 0x52a678: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x52a678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52a67c:
    // 0x52a67c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52a67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52a680:
    // 0x52a680: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x52a680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_52a684:
    // 0x52a684: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52a684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52a688:
    // 0x52a688: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x52a688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_52a68c:
    // 0x52a68c: 0x90820090  lbu         $v0, 0x90($a0)
    ctx->pc = 0x52a68cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_52a690:
    // 0x52a690: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
label_52a694:
    if (ctx->pc == 0x52A694u) {
        ctx->pc = 0x52A694u;
            // 0x52a694: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x52A698u;
        goto label_52a698;
    }
    ctx->pc = 0x52A690u;
    {
        const bool branch_taken_0x52a690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x52A694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A690u;
            // 0x52a694: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x52a690) {
            ctx->pc = 0x52A8ECu;
            goto label_52a8ec;
        }
    }
    ctx->pc = 0x52A698u;
label_52a698:
    // 0x52a698: 0x8e6300e0  lw          $v1, 0xE0($s3)
    ctx->pc = 0x52a698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_52a69c:
    // 0x52a69c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x52a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52a6a0:
    // 0x52a6a0: 0x50620093  beql        $v1, $v0, . + 4 + (0x93 << 2)
label_52a6a4:
    if (ctx->pc == 0x52A6A4u) {
        ctx->pc = 0x52A6A4u;
            // 0x52a6a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A6A8u;
        goto label_52a6a8;
    }
    ctx->pc = 0x52A6A0u;
    {
        const bool branch_taken_0x52a6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x52a6a0) {
            ctx->pc = 0x52A6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A6A0u;
            // 0x52a6a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52A8F0u;
            goto label_52a8f0;
        }
    }
    ctx->pc = 0x52A6A8u;
label_52a6a8:
    // 0x52a6a8: 0x8e620240  lw          $v0, 0x240($s3)
    ctx->pc = 0x52a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 576)));
label_52a6ac:
    // 0x52a6ac: 0x504a0003  beql        $v0, $t2, . + 4 + (0x3 << 2)
label_52a6b0:
    if (ctx->pc == 0x52A6B0u) {
        ctx->pc = 0x52A6B0u;
            // 0x52a6b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A6B4u;
        goto label_52a6b4;
    }
    ctx->pc = 0x52A6ACu;
    {
        const bool branch_taken_0x52a6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x52a6ac) {
            ctx->pc = 0x52A6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A6ACu;
            // 0x52a6b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52A6BCu;
            goto label_52a6bc;
        }
    }
    ctx->pc = 0x52A6B4u;
label_52a6b4:
    // 0x52a6b4: 0x10000095  b           . + 4 + (0x95 << 2)
label_52a6b8:
    if (ctx->pc == 0x52A6B8u) {
        ctx->pc = 0x52A6B8u;
            // 0x52a6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A6BCu;
        goto label_52a6bc;
    }
    ctx->pc = 0x52A6B4u;
    {
        const bool branch_taken_0x52a6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52A6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A6B4u;
            // 0x52a6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52a6b4) {
            ctx->pc = 0x52A90Cu;
            goto label_52a90c;
        }
    }
    ctx->pc = 0x52A6BCu;
label_52a6bc:
    // 0x52a6bc: 0xc04f278  jal         func_13C9E0
label_52a6c0:
    if (ctx->pc == 0x52A6C0u) {
        ctx->pc = 0x52A6C0u;
            // 0x52a6c0: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x52A6C4u;
        goto label_52a6c4;
    }
    ctx->pc = 0x52A6BCu;
    SET_GPR_U32(ctx, 31, 0x52A6C4u);
    ctx->pc = 0x52A6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A6BCu;
            // 0x52a6c0: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A6C4u; }
        if (ctx->pc != 0x52A6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A6C4u; }
        if (ctx->pc != 0x52A6C4u) { return; }
    }
    ctx->pc = 0x52A6C4u;
label_52a6c4:
    // 0x52a6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x52a6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52a6c8:
    // 0x52a6c8: 0xc04ce80  jal         func_133A00
label_52a6cc:
    if (ctx->pc == 0x52A6CCu) {
        ctx->pc = 0x52A6CCu;
            // 0x52a6cc: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x52A6D0u;
        goto label_52a6d0;
    }
    ctx->pc = 0x52A6C8u;
    SET_GPR_U32(ctx, 31, 0x52A6D0u);
    ctx->pc = 0x52A6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A6C8u;
            // 0x52a6cc: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A6D0u; }
        if (ctx->pc != 0x52A6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A6D0u; }
        if (ctx->pc != 0x52A6D0u) { return; }
    }
    ctx->pc = 0x52A6D0u;
label_52a6d0:
    // 0x52a6d0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x52a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_52a6d4:
    // 0x52a6d4: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x52a6d4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_52a6d8:
    // 0x52a6d8: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x52a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_52a6dc:
    // 0x52a6dc: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x52a6dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_52a6e0:
    // 0x52a6e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52a6e4:
    // 0x52a6e4: 0x8c740130  lw          $s4, 0x130($v1)
    ctx->pc = 0x52a6e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_52a6e8:
    // 0x52a6e8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x52a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_52a6ec:
    // 0x52a6ec: 0xc07698c  jal         func_1DA630
label_52a6f0:
    if (ctx->pc == 0x52A6F0u) {
        ctx->pc = 0x52A6F0u;
            // 0x52a6f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A6F4u;
        goto label_52a6f4;
    }
    ctx->pc = 0x52A6ECu;
    SET_GPR_U32(ctx, 31, 0x52A6F4u);
    ctx->pc = 0x52A6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A6ECu;
            // 0x52a6f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A6F4u; }
        if (ctx->pc != 0x52A6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A6F4u; }
        if (ctx->pc != 0x52A6F4u) { return; }
    }
    ctx->pc = 0x52A6F4u;
label_52a6f4:
    // 0x52a6f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x52a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52a6f8:
    // 0x52a6f8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_52a6fc:
    if (ctx->pc == 0x52A6FCu) {
        ctx->pc = 0x52A700u;
        goto label_52a700;
    }
    ctx->pc = 0x52A6F8u;
    {
        const bool branch_taken_0x52a6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x52a6f8) {
            ctx->pc = 0x52A708u;
            goto label_52a708;
        }
    }
    ctx->pc = 0x52A700u;
label_52a700:
    // 0x52a700: 0x10000033  b           . + 4 + (0x33 << 2)
label_52a704:
    if (ctx->pc == 0x52A704u) {
        ctx->pc = 0x52A704u;
            // 0x52a704: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x52A708u;
        goto label_52a708;
    }
    ctx->pc = 0x52A700u;
    {
        const bool branch_taken_0x52a700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52A704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A700u;
            // 0x52a704: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52a700) {
            ctx->pc = 0x52A7D0u;
            goto label_52a7d0;
        }
    }
    ctx->pc = 0x52A708u;
label_52a708:
    // 0x52a708: 0xc0576f4  jal         func_15DBD0
label_52a70c:
    if (ctx->pc == 0x52A70Cu) {
        ctx->pc = 0x52A710u;
        goto label_52a710;
    }
    ctx->pc = 0x52A708u;
    SET_GPR_U32(ctx, 31, 0x52A710u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A710u; }
        if (ctx->pc != 0x52A710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A710u; }
        if (ctx->pc != 0x52A710u) { return; }
    }
    ctx->pc = 0x52A710u;
label_52a710:
    // 0x52a710: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x52a710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_52a714:
    // 0x52a714: 0xc076984  jal         func_1DA610
label_52a718:
    if (ctx->pc == 0x52A718u) {
        ctx->pc = 0x52A718u;
            // 0x52a718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A71Cu;
        goto label_52a71c;
    }
    ctx->pc = 0x52A714u;
    SET_GPR_U32(ctx, 31, 0x52A71Cu);
    ctx->pc = 0x52A718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A714u;
            // 0x52a718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A71Cu; }
        if (ctx->pc != 0x52A71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A71Cu; }
        if (ctx->pc != 0x52A71Cu) { return; }
    }
    ctx->pc = 0x52A71Cu;
label_52a71c:
    // 0x52a71c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x52a71cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52a720:
    // 0x52a720: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x52a720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_52a724:
    // 0x52a724: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x52a724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_52a728:
    // 0x52a728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x52a728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52a72c:
    // 0x52a72c: 0xc442cef0  lwc1        $f2, -0x3110($v0)
    ctx->pc = 0x52a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52a730:
    // 0x52a730: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x52a730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52a734:
    // 0x52a734: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x52a734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_52a738:
    // 0x52a738: 0xc441cef8  lwc1        $f1, -0x3108($v0)
    ctx->pc = 0x52a738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52a73c:
    // 0x52a73c: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x52a73cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_52a740:
    // 0x52a740: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x52a740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_52a744:
    // 0x52a744: 0xc440cefc  lwc1        $f0, -0x3104($v0)
    ctx->pc = 0x52a744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52a748:
    // 0x52a748: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x52a748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_52a74c:
    // 0x52a74c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x52a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_52a750:
    // 0x52a750: 0x8c42cef4  lw          $v0, -0x310C($v0)
    ctx->pc = 0x52a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954740)));
label_52a754:
    // 0x52a754: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x52a754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_52a758:
    // 0x52a758: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x52a758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_52a75c:
    // 0x52a75c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x52a75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52a760:
    // 0x52a760: 0xc04cca0  jal         func_133280
label_52a764:
    if (ctx->pc == 0x52A764u) {
        ctx->pc = 0x52A764u;
            // 0x52a764: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x52A768u;
        goto label_52a768;
    }
    ctx->pc = 0x52A760u;
    SET_GPR_U32(ctx, 31, 0x52A768u);
    ctx->pc = 0x52A764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A760u;
            // 0x52a764: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A768u; }
        if (ctx->pc != 0x52A768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A768u; }
        if (ctx->pc != 0x52A768u) { return; }
    }
    ctx->pc = 0x52A768u;
label_52a768:
    // 0x52a768: 0xc076980  jal         func_1DA600
label_52a76c:
    if (ctx->pc == 0x52A76Cu) {
        ctx->pc = 0x52A76Cu;
            // 0x52a76c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A770u;
        goto label_52a770;
    }
    ctx->pc = 0x52A768u;
    SET_GPR_U32(ctx, 31, 0x52A770u);
    ctx->pc = 0x52A76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A768u;
            // 0x52a76c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A770u; }
        if (ctx->pc != 0x52A770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A770u; }
        if (ctx->pc != 0x52A770u) { return; }
    }
    ctx->pc = 0x52A770u;
label_52a770:
    // 0x52a770: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x52a770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52a774:
    // 0x52a774: 0xc04cc34  jal         func_1330D0
label_52a778:
    if (ctx->pc == 0x52A778u) {
        ctx->pc = 0x52A778u;
            // 0x52a778: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x52A77Cu;
        goto label_52a77c;
    }
    ctx->pc = 0x52A774u;
    SET_GPR_U32(ctx, 31, 0x52A77Cu);
    ctx->pc = 0x52A778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A774u;
            // 0x52a778: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A77Cu; }
        if (ctx->pc != 0x52A77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A77Cu; }
        if (ctx->pc != 0x52A77Cu) { return; }
    }
    ctx->pc = 0x52A77Cu;
label_52a77c:
    // 0x52a77c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x52a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_52a780:
    // 0x52a780: 0xc441cc78  lwc1        $f1, -0x3388($v0)
    ctx->pc = 0x52a780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52a784:
    // 0x52a784: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x52a784u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52a788:
    // 0x52a788: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_52a78c:
    if (ctx->pc == 0x52A78Cu) {
        ctx->pc = 0x52A78Cu;
            // 0x52a78c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A790u;
        goto label_52a790;
    }
    ctx->pc = 0x52A788u;
    {
        const bool branch_taken_0x52a788 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x52a788) {
            ctx->pc = 0x52A78Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A788u;
            // 0x52a78c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52A798u;
            goto label_52a798;
        }
    }
    ctx->pc = 0x52A790u;
label_52a790:
    // 0x52a790: 0x1000000f  b           . + 4 + (0xF << 2)
label_52a794:
    if (ctx->pc == 0x52A794u) {
        ctx->pc = 0x52A794u;
            // 0x52a794: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x52A798u;
        goto label_52a798;
    }
    ctx->pc = 0x52A790u;
    {
        const bool branch_taken_0x52a790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52A794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A790u;
            // 0x52a794: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52a790) {
            ctx->pc = 0x52A7D0u;
            goto label_52a7d0;
        }
    }
    ctx->pc = 0x52A798u;
label_52a798:
    // 0x52a798: 0xc07697c  jal         func_1DA5F0
label_52a79c:
    if (ctx->pc == 0x52A79Cu) {
        ctx->pc = 0x52A7A0u;
        goto label_52a7a0;
    }
    ctx->pc = 0x52A798u;
    SET_GPR_U32(ctx, 31, 0x52A7A0u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A7A0u; }
        if (ctx->pc != 0x52A7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A7A0u; }
        if (ctx->pc != 0x52A7A0u) { return; }
    }
    ctx->pc = 0x52A7A0u;
label_52a7a0:
    // 0x52a7a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x52a7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52a7a4:
    // 0x52a7a4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x52a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_52a7a8:
    // 0x52a7a8: 0xc04cd60  jal         func_133580
label_52a7ac:
    if (ctx->pc == 0x52A7ACu) {
        ctx->pc = 0x52A7ACu;
            // 0x52a7ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A7B0u;
        goto label_52a7b0;
    }
    ctx->pc = 0x52A7A8u;
    SET_GPR_U32(ctx, 31, 0x52A7B0u);
    ctx->pc = 0x52A7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A7A8u;
            // 0x52a7ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A7B0u; }
        if (ctx->pc != 0x52A7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A7B0u; }
        if (ctx->pc != 0x52A7B0u) { return; }
    }
    ctx->pc = 0x52A7B0u;
label_52a7b0:
    // 0x52a7b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x52a7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_52a7b4:
    // 0x52a7b4: 0xc04c650  jal         func_131940
label_52a7b8:
    if (ctx->pc == 0x52A7B8u) {
        ctx->pc = 0x52A7B8u;
            // 0x52a7b8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x52A7BCu;
        goto label_52a7bc;
    }
    ctx->pc = 0x52A7B4u;
    SET_GPR_U32(ctx, 31, 0x52A7BCu);
    ctx->pc = 0x52A7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A7B4u;
            // 0x52a7b8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A7BCu; }
        if (ctx->pc != 0x52A7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A7BCu; }
        if (ctx->pc != 0x52A7BCu) { return; }
    }
    ctx->pc = 0x52A7BCu;
label_52a7bc:
    // 0x52a7bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x52a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_52a7c0:
    // 0x52a7c0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x52a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_52a7c4:
    // 0x52a7c4: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x52a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
label_52a7c8:
    // 0x52a7c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x52a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_52a7cc:
    // 0x52a7cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x52a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52a7d0:
    // 0x52a7d0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x52a7d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_52a7d4:
    // 0x52a7d4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_52a7d8:
    if (ctx->pc == 0x52A7D8u) {
        ctx->pc = 0x52A7D8u;
            // 0x52a7d8: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x52A7DCu;
        goto label_52a7dc;
    }
    ctx->pc = 0x52A7D4u;
    {
        const bool branch_taken_0x52a7d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x52A7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A7D4u;
            // 0x52a7d8: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52a7d4) {
            ctx->pc = 0x52A7E4u;
            goto label_52a7e4;
        }
    }
    ctx->pc = 0x52A7DCu;
label_52a7dc:
    // 0x52a7dc: 0x1000004b  b           . + 4 + (0x4B << 2)
label_52a7e0:
    if (ctx->pc == 0x52A7E0u) {
        ctx->pc = 0x52A7E0u;
            // 0x52a7e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A7E4u;
        goto label_52a7e4;
    }
    ctx->pc = 0x52A7DCu;
    {
        const bool branch_taken_0x52a7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52A7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A7DCu;
            // 0x52a7e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52a7dc) {
            ctx->pc = 0x52A90Cu;
            goto label_52a90c;
        }
    }
    ctx->pc = 0x52A7E4u;
label_52a7e4:
    // 0x52a7e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52a7e8:
    // 0x52a7e8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x52a7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_52a7ec:
    // 0x52a7ec: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x52a7ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_52a7f0:
    // 0x52a7f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x52a7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52a7f4:
    // 0x52a7f4: 0x8c84e3b0  lw          $a0, -0x1C50($a0)
    ctx->pc = 0x52a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960048)));
label_52a7f8:
    // 0x52a7f8: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x52a7f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_52a7fc:
    // 0x52a7fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x52a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_52a800:
    // 0x52a800: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x52a800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_52a804:
    // 0x52a804: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52a804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52a808:
    // 0x52a808: 0x8c48e3d8  lw          $t0, -0x1C28($v0)
    ctx->pc = 0x52a808u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_52a80c:
    // 0x52a80c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52a810:
    // 0x52a810: 0x8c47e360  lw          $a3, -0x1CA0($v0)
    ctx->pc = 0x52a810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_52a814:
    // 0x52a814: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x52a814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_52a818:
    // 0x52a818: 0x84980  sll         $t1, $t0, 6
    ctx->pc = 0x52a818u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_52a81c:
    // 0x52a81c: 0xe9a021  addu        $s4, $a3, $t1
    ctx->pc = 0x52a81cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_52a820:
    // 0x52a820: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x52a820u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_52a824:
    // 0x52a824: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x52a824u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_52a828:
    // 0x52a828: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x52a828u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_52a82c:
    // 0x52a82c: 0xad340000  sw          $s4, 0x0($t1)
    ctx->pc = 0x52a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 20));
label_52a830:
    // 0x52a830: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x52a830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_52a834:
    // 0x52a834: 0x8d0de3d8  lw          $t5, -0x1C28($t0)
    ctx->pc = 0x52a834u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_52a838:
    // 0x52a838: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x52a838u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_52a83c:
    // 0x52a83c: 0x8c8be3b8  lw          $t3, -0x1C48($a0)
    ctx->pc = 0x52a83cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_52a840:
    // 0x52a840: 0x8cece378  lw          $t4, -0x1C88($a3)
    ctx->pc = 0x52a840u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294959992)));
label_52a844:
    // 0x52a844: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x52a844u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_52a848:
    // 0x52a848: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x52a848u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_52a84c:
    // 0x52a84c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x52a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_52a850:
    // 0x52a850: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x52a850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_52a854:
    // 0x52a854: 0x18d8821  addu        $s1, $t4, $t5
    ctx->pc = 0x52a854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_52a858:
    // 0x52a858: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x52a858u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_52a85c:
    // 0x52a85c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x52a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_52a860:
    // 0x52a860: 0x8c6b0028  lw          $t3, 0x28($v1)
    ctx->pc = 0x52a860u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_52a864:
    // 0x52a864: 0x8d02e3c0  lw          $v0, -0x1C40($t0)
    ctx->pc = 0x52a864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960064)));
label_52a868:
    // 0x52a868: 0x8d43e3d8  lw          $v1, -0x1C28($t2)
    ctx->pc = 0x52a868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_52a86c:
    // 0x52a86c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x52a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_52a870:
    // 0x52a870: 0xace2e3c0  sw          $v0, -0x1C40($a3)
    ctx->pc = 0x52a870u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960064), GPR_U32(ctx, 2));
label_52a874:
    // 0x52a874: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x52a874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_52a878:
    // 0x52a878: 0xc04cd60  jal         func_133580
label_52a87c:
    if (ctx->pc == 0x52A87Cu) {
        ctx->pc = 0x52A87Cu;
            // 0x52a87c: 0xad23e3d8  sw          $v1, -0x1C28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294960088), GPR_U32(ctx, 3));
        ctx->pc = 0x52A880u;
        goto label_52a880;
    }
    ctx->pc = 0x52A878u;
    SET_GPR_U32(ctx, 31, 0x52A880u);
    ctx->pc = 0x52A87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A878u;
            // 0x52a87c: 0xad23e3d8  sw          $v1, -0x1C28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294960088), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A880u; }
        if (ctx->pc != 0x52A880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A880u; }
        if (ctx->pc != 0x52A880u) { return; }
    }
    ctx->pc = 0x52A880u;
label_52a880:
    // 0x52a880: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x52a880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_52a884:
    // 0x52a884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x52a884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52a888:
    // 0x52a888: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x52a888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_52a88c:
    // 0x52a88c: 0xc04e4a4  jal         func_139290
label_52a890:
    if (ctx->pc == 0x52A890u) {
        ctx->pc = 0x52A890u;
            // 0x52a890: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52A894u;
        goto label_52a894;
    }
    ctx->pc = 0x52A88Cu;
    SET_GPR_U32(ctx, 31, 0x52A894u);
    ctx->pc = 0x52A890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A88Cu;
            // 0x52a890: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A894u; }
        if (ctx->pc != 0x52A894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A894u; }
        if (ctx->pc != 0x52A894u) { return; }
    }
    ctx->pc = 0x52A894u;
label_52a894:
    // 0x52a894: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x52a894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_52a898:
    // 0x52a898: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x52a898u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_52a89c:
    // 0x52a89c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_52a8a0:
    if (ctx->pc == 0x52A8A0u) {
        ctx->pc = 0x52A8A0u;
            // 0x52a8a0: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x52A8A4u;
        goto label_52a8a4;
    }
    ctx->pc = 0x52A89Cu;
    {
        const bool branch_taken_0x52a89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52a89c) {
            ctx->pc = 0x52A8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A89Cu;
            // 0x52a8a0: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52A8A8u;
            goto label_52a8a8;
        }
    }
    ctx->pc = 0x52A8A4u;
label_52a8a4:
    // 0x52a8a4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x52a8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_52a8a8:
    // 0x52a8a8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x52a8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_52a8ac:
    // 0x52a8ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x52a8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_52a8b0:
    // 0x52a8b0: 0x320f809  jalr        $t9
label_52a8b4:
    if (ctx->pc == 0x52A8B4u) {
        ctx->pc = 0x52A8B4u;
            // 0x52a8b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A8B8u;
        goto label_52a8b8;
    }
    ctx->pc = 0x52A8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52A8B8u);
        ctx->pc = 0x52A8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A8B0u;
            // 0x52a8b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52A8B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52A8B8u; }
            if (ctx->pc != 0x52A8B8u) { return; }
        }
        }
    }
    ctx->pc = 0x52A8B8u;
label_52a8b8:
    // 0x52a8b8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x52a8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_52a8bc:
    // 0x52a8bc: 0xc66c0244  lwc1        $f12, 0x244($s3)
    ctx->pc = 0x52a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_52a8c0:
    // 0x52a8c0: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x52a8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_52a8c4:
    // 0x52a8c4: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x52a8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_52a8c8:
    // 0x52a8c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x52a8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_52a8cc:
    // 0x52a8cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x52a8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52a8d0:
    // 0x52a8d0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x52a8d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52a8d4:
    // 0x52a8d4: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x52a8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_52a8d8:
    // 0x52a8d8: 0xc04cff4  jal         func_133FD0
label_52a8dc:
    if (ctx->pc == 0x52A8DCu) {
        ctx->pc = 0x52A8DCu;
            // 0x52a8dc: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x52A8E0u;
        goto label_52a8e0;
    }
    ctx->pc = 0x52A8D8u;
    SET_GPR_U32(ctx, 31, 0x52A8E0u);
    ctx->pc = 0x52A8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A8D8u;
            // 0x52a8dc: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A8E0u; }
        if (ctx->pc != 0x52A8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A8E0u; }
        if (ctx->pc != 0x52A8E0u) { return; }
    }
    ctx->pc = 0x52A8E0u;
label_52a8e0:
    // 0x52a8e0: 0xc6600244  lwc1        $f0, 0x244($s3)
    ctx->pc = 0x52a8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52a8e4:
    // 0x52a8e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_52a8e8:
    if (ctx->pc == 0x52A8E8u) {
        ctx->pc = 0x52A8E8u;
            // 0x52a8e8: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->pc = 0x52A8ECu;
        goto label_52a8ec;
    }
    ctx->pc = 0x52A8E4u;
    {
        const bool branch_taken_0x52a8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52A8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A8E4u;
            // 0x52a8e8: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x52a8e4) {
            ctx->pc = 0x52A8F0u;
            goto label_52a8f0;
        }
    }
    ctx->pc = 0x52A8ECu;
label_52a8ec:
    // 0x52a8ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x52a8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52a8f0:
    // 0x52a8f0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x52a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_52a8f4:
    // 0x52a8f4: 0x8e64009c  lw          $a0, 0x9C($s3)
    ctx->pc = 0x52a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_52a8f8:
    // 0x52a8f8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x52a8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_52a8fc:
    // 0x52a8fc: 0xc44ccc70  lwc1        $f12, -0x3390($v0)
    ctx->pc = 0x52a8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_52a900:
    // 0x52a900: 0xc0e325c  jal         func_38C970
label_52a904:
    if (ctx->pc == 0x52A904u) {
        ctx->pc = 0x52A904u;
            // 0x52a904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A908u;
        goto label_52a908;
    }
    ctx->pc = 0x52A900u;
    SET_GPR_U32(ctx, 31, 0x52A908u);
    ctx->pc = 0x52A904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52A900u;
            // 0x52a904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A908u; }
        if (ctx->pc != 0x52A908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52A908u; }
        if (ctx->pc != 0x52A908u) { return; }
    }
    ctx->pc = 0x52A908u;
label_52a908:
    // 0x52a908: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52a908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52a90c:
    // 0x52a90c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x52a90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_52a910:
    // 0x52a910: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x52a910u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_52a914:
    // 0x52a914: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x52a914u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_52a918:
    // 0x52a918: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x52a918u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_52a91c:
    // 0x52a91c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x52a91cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_52a920:
    // 0x52a920: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52a920u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52a924:
    // 0x52a924: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52a924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52a928:
    // 0x52a928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52a928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52a92c:
    // 0x52a92c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52a92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52a930:
    // 0x52a930: 0x3e00008  jr          $ra
label_52a934:
    if (ctx->pc == 0x52A934u) {
        ctx->pc = 0x52A934u;
            // 0x52a934: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x52A938u;
        goto label_52a938;
    }
    ctx->pc = 0x52A930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52A934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A930u;
            // 0x52a934: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52A938u;
label_52a938:
    // 0x52a938: 0x0  nop
    ctx->pc = 0x52a938u;
    // NOP
label_52a93c:
    // 0x52a93c: 0x0  nop
    ctx->pc = 0x52a93cu;
    // NOP
label_52a940:
    // 0x52a940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x52a940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_52a944:
    // 0x52a944: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x52a944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_52a948:
    // 0x52a948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52a948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52a94c:
    // 0x52a94c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52a94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52a950:
    // 0x52a950: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x52a950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_52a954:
    // 0x52a954: 0x10a3006d  beq         $a1, $v1, . + 4 + (0x6D << 2)
label_52a958:
    if (ctx->pc == 0x52A958u) {
        ctx->pc = 0x52A958u;
            // 0x52a958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52A95Cu;
        goto label_52a95c;
    }
    ctx->pc = 0x52A954u;
    {
        const bool branch_taken_0x52a954 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x52A958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A954u;
            // 0x52a958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52a954) {
            ctx->pc = 0x52AB0Cu;
            goto label_52ab0c;
        }
    }
    ctx->pc = 0x52A95Cu;
label_52a95c:
    // 0x52a95c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x52a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52a960:
    // 0x52a960: 0x50a3005a  beql        $a1, $v1, . + 4 + (0x5A << 2)
label_52a964:
    if (ctx->pc == 0x52A964u) {
        ctx->pc = 0x52A964u;
            // 0x52a964: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->pc = 0x52A968u;
        goto label_52a968;
    }
    ctx->pc = 0x52A960u;
    {
        const bool branch_taken_0x52a960 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52a960) {
            ctx->pc = 0x52A964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A960u;
            // 0x52a964: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52AACCu;
            goto label_52aacc;
        }
    }
    ctx->pc = 0x52A968u;
label_52a968:
    // 0x52a968: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52a968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52a96c:
    // 0x52a96c: 0x10a30053  beq         $a1, $v1, . + 4 + (0x53 << 2)
label_52a970:
    if (ctx->pc == 0x52A970u) {
        ctx->pc = 0x52A974u;
        goto label_52a974;
    }
    ctx->pc = 0x52A96Cu;
    {
        const bool branch_taken_0x52a96c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52a96c) {
            ctx->pc = 0x52AABCu;
            goto label_52aabc;
        }
    }
    ctx->pc = 0x52A974u;
label_52a974:
    // 0x52a974: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52a974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52a978:
    // 0x52a978: 0x50a30047  beql        $a1, $v1, . + 4 + (0x47 << 2)
label_52a97c:
    if (ctx->pc == 0x52A97Cu) {
        ctx->pc = 0x52A97Cu;
            // 0x52a97c: 0xc601020c  lwc1        $f1, 0x20C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x52A980u;
        goto label_52a980;
    }
    ctx->pc = 0x52A978u;
    {
        const bool branch_taken_0x52a978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52a978) {
            ctx->pc = 0x52A97Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52A978u;
            // 0x52a97c: 0xc601020c  lwc1        $f1, 0x20C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x52AA98u;
            goto label_52aa98;
        }
    }
    ctx->pc = 0x52A980u;
label_52a980:
    // 0x52a980: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_52a984:
    if (ctx->pc == 0x52A984u) {
        ctx->pc = 0x52A988u;
        goto label_52a988;
    }
    ctx->pc = 0x52A980u;
    {
        const bool branch_taken_0x52a980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x52a980) {
            ctx->pc = 0x52A990u;
            goto label_52a990;
        }
    }
    ctx->pc = 0x52A988u;
label_52a988:
    // 0x52a988: 0x1000006b  b           . + 4 + (0x6B << 2)
label_52a98c:
    if (ctx->pc == 0x52A98Cu) {
        ctx->pc = 0x52A990u;
        goto label_52a990;
    }
    ctx->pc = 0x52A988u;
    {
        const bool branch_taken_0x52a988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52a988) {
            ctx->pc = 0x52AB38u;
            goto label_52ab38;
        }
    }
    ctx->pc = 0x52A990u;
label_52a990:
    // 0x52a990: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x52a990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_52a994:
    // 0x52a994: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x52a994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_52a998:
    // 0x52a998: 0x8c42b600  lw          $v0, -0x4A00($v0)
    ctx->pc = 0x52a998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948352)));
label_52a99c:
    // 0x52a99c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x52a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_52a9a0:
    // 0x52a9a0: 0x8c470030  lw          $a3, 0x30($v0)
    ctx->pc = 0x52a9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_52a9a4:
    // 0x52a9a4: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x52a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
label_52a9a8:
    // 0x52a9a8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x52a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_52a9ac:
    // 0x52a9ac: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x52a9acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_52a9b0:
    // 0x52a9b0: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x52a9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_52a9b4:
    // 0x52a9b4: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x52a9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_52a9b8:
    // 0x52a9b8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x52a9b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_52a9bc:
    // 0x52a9bc: 0x8c43cec0  lw          $v1, -0x3140($v0)
    ctx->pc = 0x52a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954688)));
label_52a9c0:
    // 0x52a9c0: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x52a9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_52a9c4:
    // 0x52a9c4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x52a9c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_52a9c8:
    // 0x52a9c8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x52a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_52a9cc:
    // 0x52a9cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x52a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_52a9d0:
    // 0x52a9d0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x52a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_52a9d4:
    // 0x52a9d4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x52a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_52a9d8:
    // 0x52a9d8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x52a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52a9dc:
    // 0x52a9dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x52a9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_52a9e0:
    // 0x52a9e0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x52a9e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52a9e4:
    // 0x52a9e4: 0x1d00fff3  bgtz        $t0, . + 4 + (-0xD << 2)
label_52a9e8:
    if (ctx->pc == 0x52A9E8u) {
        ctx->pc = 0x52A9E8u;
            // 0x52a9e8: 0xa0c30020  sb          $v1, 0x20($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x52A9ECu;
        goto label_52a9ec;
    }
    ctx->pc = 0x52A9E4u;
    {
        const bool branch_taken_0x52a9e4 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x52A9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52A9E4u;
            // 0x52a9e8: 0xa0c30020  sb          $v1, 0x20($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52a9e4) {
            ctx->pc = 0x52A9B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52a9b4;
        }
    }
    ctx->pc = 0x52A9ECu;
label_52a9ec:
    // 0x52a9ec: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x52a9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52a9f0:
    // 0x52a9f0: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x52a9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52a9f4:
    // 0x52a9f4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x52a9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52a9f8:
    // 0x52a9f8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x52a9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_52a9fc:
    // 0x52a9fc: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x52a9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52aa00:
    // 0x52aa00: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x52aa00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_52aa04:
    // 0x52aa04: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x52aa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_52aa08:
    // 0x52aa08: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x52aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_52aa0c:
    // 0x52aa0c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x52aa0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_52aa10:
    // 0x52aa10: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x52aa10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_52aa14:
    // 0x52aa14: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x52aa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_52aa18:
    // 0x52aa18: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x52aa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52aa1c:
    // 0x52aa1c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x52aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52aa20:
    // 0x52aa20: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x52aa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52aa24:
    // 0x52aa24: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x52aa24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_52aa28:
    // 0x52aa28: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x52aa28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_52aa2c:
    // 0x52aa2c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x52aa2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_52aa30:
    // 0x52aa30: 0xc0892b0  jal         func_224AC0
label_52aa34:
    if (ctx->pc == 0x52AA34u) {
        ctx->pc = 0x52AA34u;
            // 0x52aa34: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x52AA38u;
        goto label_52aa38;
    }
    ctx->pc = 0x52AA30u;
    SET_GPR_U32(ctx, 31, 0x52AA38u);
    ctx->pc = 0x52AA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AA30u;
            // 0x52aa34: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AA38u; }
        if (ctx->pc != 0x52AA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AA38u; }
        if (ctx->pc != 0x52AA38u) { return; }
    }
    ctx->pc = 0x52AA38u;
label_52aa38:
    // 0x52aa38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x52aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52aa3c:
    // 0x52aa3c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x52aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_52aa40:
    // 0x52aa40: 0xae0400e0  sw          $a0, 0xE0($s0)
    ctx->pc = 0x52aa40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 4));
label_52aa44:
    // 0x52aa44: 0x4282a  slt         $a1, $zero, $a0
    ctx->pc = 0x52aa44u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_52aa48:
    // 0x52aa48: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x52aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_52aa4c:
    // 0x52aa4c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_52aa50:
    if (ctx->pc == 0x52AA50u) {
        ctx->pc = 0x52AA50u;
            // 0x52aa50: 0xc4630018  lwc1        $f3, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x52AA54u;
        goto label_52aa54;
    }
    ctx->pc = 0x52AA4Cu;
    {
        const bool branch_taken_0x52aa4c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x52AA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52AA4Cu;
            // 0x52aa50: 0xc4630018  lwc1        $f3, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x52aa4c) {
            ctx->pc = 0x52AA60u;
            goto label_52aa60;
        }
    }
    ctx->pc = 0x52AA54u;
label_52aa54:
    // 0x52aa54: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x52aa54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52aa58:
    // 0x52aa58: 0x10000008  b           . + 4 + (0x8 << 2)
label_52aa5c:
    if (ctx->pc == 0x52AA5Cu) {
        ctx->pc = 0x52AA5Cu;
            // 0x52aa5c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x52AA60u;
        goto label_52aa60;
    }
    ctx->pc = 0x52AA58u;
    {
        const bool branch_taken_0x52aa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52AA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52AA58u;
            // 0x52aa5c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x52aa58) {
            ctx->pc = 0x52AA7Cu;
            goto label_52aa7c;
        }
    }
    ctx->pc = 0x52AA60u;
label_52aa60:
    // 0x52aa60: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x52aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_52aa64:
    // 0x52aa64: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x52aa64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_52aa68:
    // 0x52aa68: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x52aa68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_52aa6c:
    // 0x52aa6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x52aa6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52aa70:
    // 0x52aa70: 0x0  nop
    ctx->pc = 0x52aa70u;
    // NOP
label_52aa74:
    // 0x52aa74: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x52aa74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_52aa78:
    // 0x52aa78: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x52aa78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_52aa7c:
    // 0x52aa7c: 0xc601020c  lwc1        $f1, 0x20C($s0)
    ctx->pc = 0x52aa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52aa80:
    // 0x52aa80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x52aa80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52aa84:
    // 0x52aa84: 0x0  nop
    ctx->pc = 0x52aa84u;
    // NOP
label_52aa88:
    // 0x52aa88: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x52aa88u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_52aa8c:
    // 0x52aa8c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x52aa8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_52aa90:
    // 0x52aa90: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x52aa90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
label_52aa94:
    // 0x52aa94: 0xc601020c  lwc1        $f1, 0x20C($s0)
    ctx->pc = 0x52aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52aa98:
    // 0x52aa98: 0xc6000208  lwc1        $f0, 0x208($s0)
    ctx->pc = 0x52aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52aa9c:
    // 0x52aa9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x52aa9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52aaa0:
    // 0x52aaa0: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_52aaa4:
    if (ctx->pc == 0x52AAA4u) {
        ctx->pc = 0x52AAA8u;
        goto label_52aaa8;
    }
    ctx->pc = 0x52AAA0u;
    {
        const bool branch_taken_0x52aaa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x52aaa0) {
            ctx->pc = 0x52AB38u;
            goto label_52ab38;
        }
    }
    ctx->pc = 0x52AAA8u;
label_52aaa8:
    // 0x52aaa8: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x52aaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
label_52aaac:
    // 0x52aaac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52aab0:
    // 0x52aab0: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x52aab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
label_52aab4:
    // 0x52aab4: 0x10000020  b           . + 4 + (0x20 << 2)
label_52aab8:
    if (ctx->pc == 0x52AAB8u) {
        ctx->pc = 0x52AAB8u;
            // 0x52aab8: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x52AABCu;
        goto label_52aabc;
    }
    ctx->pc = 0x52AAB4u;
    {
        const bool branch_taken_0x52aab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52AAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52AAB4u;
            // 0x52aab8: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52aab4) {
            ctx->pc = 0x52AB38u;
            goto label_52ab38;
        }
    }
    ctx->pc = 0x52AABCu;
label_52aabc:
    // 0x52aabc: 0xc14ab14  jal         func_52AC50
label_52aac0:
    if (ctx->pc == 0x52AAC0u) {
        ctx->pc = 0x52AAC4u;
        goto label_52aac4;
    }
    ctx->pc = 0x52AABCu;
    SET_GPR_U32(ctx, 31, 0x52AAC4u);
    ctx->pc = 0x52AC50u;
    if (runtime->hasFunction(0x52AC50u)) {
        auto targetFn = runtime->lookupFunction(0x52AC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AAC4u; }
        if (ctx->pc != 0x52AAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052AC50_0x52ac50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AAC4u; }
        if (ctx->pc != 0x52AAC4u) { return; }
    }
    ctx->pc = 0x52AAC4u;
label_52aac4:
    // 0x52aac4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_52aac8:
    if (ctx->pc == 0x52AAC8u) {
        ctx->pc = 0x52AACCu;
        goto label_52aacc;
    }
    ctx->pc = 0x52AAC4u;
    {
        const bool branch_taken_0x52aac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52aac4) {
            ctx->pc = 0x52AB38u;
            goto label_52ab38;
        }
    }
    ctx->pc = 0x52AACCu;
label_52aacc:
    // 0x52aacc: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_52aad0:
    if (ctx->pc == 0x52AAD0u) {
        ctx->pc = 0x52AAD4u;
        goto label_52aad4;
    }
    ctx->pc = 0x52AACCu;
    {
        const bool branch_taken_0x52aacc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x52aacc) {
            ctx->pc = 0x52AB38u;
            goto label_52ab38;
        }
    }
    ctx->pc = 0x52AAD4u;
label_52aad4:
    // 0x52aad4: 0x8e050218  lw          $a1, 0x218($s0)
    ctx->pc = 0x52aad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_52aad8:
    // 0x52aad8: 0x58a0000a  blezl       $a1, . + 4 + (0xA << 2)
label_52aadc:
    if (ctx->pc == 0x52AADCu) {
        ctx->pc = 0x52AADCu;
            // 0x52aadc: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x52AAE0u;
        goto label_52aae0;
    }
    ctx->pc = 0x52AAD8u;
    {
        const bool branch_taken_0x52aad8 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x52aad8) {
            ctx->pc = 0x52AADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52AAD8u;
            // 0x52aadc: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52AB04u;
            goto label_52ab04;
        }
    }
    ctx->pc = 0x52AAE0u;
label_52aae0:
    // 0x52aae0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x52aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_52aae4:
    // 0x52aae4: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x52aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_52aae8:
    // 0x52aae8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52aae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52aaec:
    // 0x52aaec: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x52aaecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_52aaf0:
    // 0x52aaf0: 0x320f809  jalr        $t9
label_52aaf4:
    if (ctx->pc == 0x52AAF4u) {
        ctx->pc = 0x52AAF8u;
        goto label_52aaf8;
    }
    ctx->pc = 0x52AAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52AAF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x52AAF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52AAF8u; }
            if (ctx->pc != 0x52AAF8u) { return; }
        }
        }
    }
    ctx->pc = 0x52AAF8u;
label_52aaf8:
    // 0x52aaf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x52aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_52aafc:
    // 0x52aafc: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x52aafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
label_52ab00:
    // 0x52ab00: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x52ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_52ab04:
    // 0x52ab04: 0x1000000c  b           . + 4 + (0xC << 2)
label_52ab08:
    if (ctx->pc == 0x52AB08u) {
        ctx->pc = 0x52AB08u;
            // 0x52ab08: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x52AB0Cu;
        goto label_52ab0c;
    }
    ctx->pc = 0x52AB04u;
    {
        const bool branch_taken_0x52ab04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52AB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52AB04u;
            // 0x52ab08: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52ab04) {
            ctx->pc = 0x52AB38u;
            goto label_52ab38;
        }
    }
    ctx->pc = 0x52AB0Cu;
label_52ab0c:
    // 0x52ab0c: 0x8e050218  lw          $a1, 0x218($s0)
    ctx->pc = 0x52ab0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_52ab10:
    // 0x52ab10: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
label_52ab14:
    if (ctx->pc == 0x52AB14u) {
        ctx->pc = 0x52AB18u;
        goto label_52ab18;
    }
    ctx->pc = 0x52AB10u;
    {
        const bool branch_taken_0x52ab10 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x52ab10) {
            ctx->pc = 0x52AB38u;
            goto label_52ab38;
        }
    }
    ctx->pc = 0x52AB18u;
label_52ab18:
    // 0x52ab18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x52ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_52ab1c:
    // 0x52ab1c: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x52ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_52ab20:
    // 0x52ab20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52ab20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52ab24:
    // 0x52ab24: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x52ab24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_52ab28:
    // 0x52ab28: 0x320f809  jalr        $t9
label_52ab2c:
    if (ctx->pc == 0x52AB2Cu) {
        ctx->pc = 0x52AB30u;
        goto label_52ab30;
    }
    ctx->pc = 0x52AB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52AB30u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x52AB30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52AB30u; }
            if (ctx->pc != 0x52AB30u) { return; }
        }
        }
    }
    ctx->pc = 0x52AB30u;
label_52ab30:
    // 0x52ab30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x52ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_52ab34:
    // 0x52ab34: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x52ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
label_52ab38:
    // 0x52ab38: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x52ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_52ab3c:
    // 0x52ab3c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x52ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_52ab40:
    // 0x52ab40: 0xc6000244  lwc1        $f0, 0x244($s0)
    ctx->pc = 0x52ab40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52ab44:
    // 0x52ab44: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x52ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52ab48:
    // 0x52ab48: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x52ab48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_52ab4c:
    // 0x52ab4c: 0xe6010244  swc1        $f1, 0x244($s0)
    ctx->pc = 0x52ab4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
label_52ab50:
    // 0x52ab50: 0xc6000248  lwc1        $f0, 0x248($s0)
    ctx->pc = 0x52ab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52ab54:
    // 0x52ab54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x52ab54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52ab58:
    // 0x52ab58: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_52ab5c:
    if (ctx->pc == 0x52AB5Cu) {
        ctx->pc = 0x52AB5Cu;
            // 0x52ab5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x52AB60u;
        goto label_52ab60;
    }
    ctx->pc = 0x52AB58u;
    {
        const bool branch_taken_0x52ab58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x52ab58) {
            ctx->pc = 0x52AB5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52AB58u;
            // 0x52ab5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52AB68u;
            goto label_52ab68;
        }
    }
    ctx->pc = 0x52AB60u;
label_52ab60:
    // 0x52ab60: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x52ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
label_52ab64:
    // 0x52ab64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52ab64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52ab68:
    // 0x52ab68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52ab68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52ab6c:
    // 0x52ab6c: 0x3e00008  jr          $ra
label_52ab70:
    if (ctx->pc == 0x52AB70u) {
        ctx->pc = 0x52AB70u;
            // 0x52ab70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x52AB74u;
        goto label_52ab74;
    }
    ctx->pc = 0x52AB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52AB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52AB6Cu;
            // 0x52ab70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52AB74u;
label_52ab74:
    // 0x52ab74: 0x0  nop
    ctx->pc = 0x52ab74u;
    // NOP
label_52ab78:
    // 0x52ab78: 0x0  nop
    ctx->pc = 0x52ab78u;
    // NOP
label_52ab7c:
    // 0x52ab7c: 0x0  nop
    ctx->pc = 0x52ab7cu;
    // NOP
label_52ab80:
    // 0x52ab80: 0x80e3580  j           func_38D600
label_52ab84:
    if (ctx->pc == 0x52AB84u) {
        ctx->pc = 0x52AB88u;
        goto label_52ab88;
    }
    ctx->pc = 0x52AB80u;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0038D600_0x38d600(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x52AB88u;
label_52ab88:
    // 0x52ab88: 0x0  nop
    ctx->pc = 0x52ab88u;
    // NOP
label_52ab8c:
    // 0x52ab8c: 0x0  nop
    ctx->pc = 0x52ab8cu;
    // NOP
label_52ab90:
    // 0x52ab90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52ab94:
    // 0x52ab94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x52ab94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52ab98:
    // 0x52ab98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52ab9c:
    // 0x52ab9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52ab9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52aba0:
    // 0x52aba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52aba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52aba4:
    // 0x52aba4: 0xc0baaa0  jal         func_2EAA80
label_52aba8:
    if (ctx->pc == 0x52ABA8u) {
        ctx->pc = 0x52ABA8u;
            // 0x52aba8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x52ABACu;
        goto label_52abac;
    }
    ctx->pc = 0x52ABA4u;
    SET_GPR_U32(ctx, 31, 0x52ABACu);
    ctx->pc = 0x52ABA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52ABA4u;
            // 0x52aba8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ABACu; }
        if (ctx->pc != 0x52ABACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ABACu; }
        if (ctx->pc != 0x52ABACu) { return; }
    }
    ctx->pc = 0x52ABACu;
label_52abac:
    // 0x52abac: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x52abacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_52abb0:
    // 0x52abb0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x52abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_52abb4:
    // 0x52abb4: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x52abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_52abb8:
    // 0x52abb8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x52abb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_52abbc:
    // 0x52abbc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x52abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_52abc0:
    // 0x52abc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x52abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52abc4:
    // 0x52abc4: 0xc04cc90  jal         func_133240
label_52abc8:
    if (ctx->pc == 0x52ABC8u) {
        ctx->pc = 0x52ABC8u;
            // 0x52abc8: 0x24460200  addiu       $a2, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x52ABCCu;
        goto label_52abcc;
    }
    ctx->pc = 0x52ABC4u;
    SET_GPR_U32(ctx, 31, 0x52ABCCu);
    ctx->pc = 0x52ABC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52ABC4u;
            // 0x52abc8: 0x24460200  addiu       $a2, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ABCCu; }
        if (ctx->pc != 0x52ABCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ABCCu; }
        if (ctx->pc != 0x52ABCCu) { return; }
    }
    ctx->pc = 0x52ABCCu;
label_52abcc:
    // 0x52abcc: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x52abccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_52abd0:
    // 0x52abd0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x52abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_52abd4:
    // 0x52abd4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x52abd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52abd8:
    // 0x52abd8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x52abd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52abdc:
    // 0x52abdc: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x52abdcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_52abe0:
    // 0x52abe0: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x52abe0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_52abe4:
    // 0x52abe4: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x52abe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_52abe8:
    // 0x52abe8: 0x46010044  c1          0x10044
    ctx->pc = 0x52abe8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_52abec:
    // 0x52abec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x52abecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52abf0:
    // 0x52abf0: 0x0  nop
    ctx->pc = 0x52abf0u;
    // NOP
label_52abf4:
    // 0x52abf4: 0x0  nop
    ctx->pc = 0x52abf4u;
    // NOP
label_52abf8:
    // 0x52abf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x52abf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52abfc:
    // 0x52abfc: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_52ac00:
    if (ctx->pc == 0x52AC00u) {
        ctx->pc = 0x52AC00u;
            // 0x52ac00: 0x8e04024c  lw          $a0, 0x24C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
        ctx->pc = 0x52AC04u;
        goto label_52ac04;
    }
    ctx->pc = 0x52ABFCu;
    {
        const bool branch_taken_0x52abfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x52abfc) {
            ctx->pc = 0x52AC00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52ABFCu;
            // 0x52ac00: 0x8e04024c  lw          $a0, 0x24C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52AC2Cu;
            goto label_52ac2c;
        }
    }
    ctx->pc = 0x52AC04u;
label_52ac04:
    // 0x52ac04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52ac08:
    // 0x52ac08: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x52ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_52ac0c:
    // 0x52ac0c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x52ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_52ac10:
    // 0x52ac10: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x52ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_52ac14:
    // 0x52ac14: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x52ac14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_52ac18:
    // 0x52ac18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x52ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_52ac1c:
    // 0x52ac1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x52ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_52ac20:
    // 0x52ac20: 0xc073234  jal         func_1CC8D0
label_52ac24:
    if (ctx->pc == 0x52AC24u) {
        ctx->pc = 0x52AC24u;
            // 0x52ac24: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x52AC28u;
        goto label_52ac28;
    }
    ctx->pc = 0x52AC20u;
    SET_GPR_U32(ctx, 31, 0x52AC28u);
    ctx->pc = 0x52AC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AC20u;
            // 0x52ac24: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AC28u; }
        if (ctx->pc != 0x52AC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AC28u; }
        if (ctx->pc != 0x52AC28u) { return; }
    }
    ctx->pc = 0x52AC28u;
label_52ac28:
    // 0x52ac28: 0x8e04024c  lw          $a0, 0x24C($s0)
    ctx->pc = 0x52ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
label_52ac2c:
    // 0x52ac2c: 0xc122c5c  jal         func_48B170
label_52ac30:
    if (ctx->pc == 0x52AC30u) {
        ctx->pc = 0x52AC30u;
            // 0x52ac30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52AC34u;
        goto label_52ac34;
    }
    ctx->pc = 0x52AC2Cu;
    SET_GPR_U32(ctx, 31, 0x52AC34u);
    ctx->pc = 0x52AC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AC2Cu;
            // 0x52ac30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AC34u; }
        if (ctx->pc != 0x52AC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AC34u; }
        if (ctx->pc != 0x52AC34u) { return; }
    }
    ctx->pc = 0x52AC34u;
label_52ac34:
    // 0x52ac34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52ac34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52ac38:
    // 0x52ac38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52ac38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52ac3c:
    // 0x52ac3c: 0x3e00008  jr          $ra
label_52ac40:
    if (ctx->pc == 0x52AC40u) {
        ctx->pc = 0x52AC40u;
            // 0x52ac40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52AC44u;
        goto label_52ac44;
    }
    ctx->pc = 0x52AC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52AC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52AC3Cu;
            // 0x52ac40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52AC44u;
label_52ac44:
    // 0x52ac44: 0x0  nop
    ctx->pc = 0x52ac44u;
    // NOP
label_52ac48:
    // 0x52ac48: 0x0  nop
    ctx->pc = 0x52ac48u;
    // NOP
label_52ac4c:
    // 0x52ac4c: 0x0  nop
    ctx->pc = 0x52ac4cu;
    // NOP
}
