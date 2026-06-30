#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022A6D0
// Address: 0x22a6d0 - 0x22abb0
void sub_0022A6D0_0x22a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A6D0_0x22a6d0");
#endif

    switch (ctx->pc) {
        case 0x22a6d0u: goto label_22a6d0;
        case 0x22a6d4u: goto label_22a6d4;
        case 0x22a6d8u: goto label_22a6d8;
        case 0x22a6dcu: goto label_22a6dc;
        case 0x22a6e0u: goto label_22a6e0;
        case 0x22a6e4u: goto label_22a6e4;
        case 0x22a6e8u: goto label_22a6e8;
        case 0x22a6ecu: goto label_22a6ec;
        case 0x22a6f0u: goto label_22a6f0;
        case 0x22a6f4u: goto label_22a6f4;
        case 0x22a6f8u: goto label_22a6f8;
        case 0x22a6fcu: goto label_22a6fc;
        case 0x22a700u: goto label_22a700;
        case 0x22a704u: goto label_22a704;
        case 0x22a708u: goto label_22a708;
        case 0x22a70cu: goto label_22a70c;
        case 0x22a710u: goto label_22a710;
        case 0x22a714u: goto label_22a714;
        case 0x22a718u: goto label_22a718;
        case 0x22a71cu: goto label_22a71c;
        case 0x22a720u: goto label_22a720;
        case 0x22a724u: goto label_22a724;
        case 0x22a728u: goto label_22a728;
        case 0x22a72cu: goto label_22a72c;
        case 0x22a730u: goto label_22a730;
        case 0x22a734u: goto label_22a734;
        case 0x22a738u: goto label_22a738;
        case 0x22a73cu: goto label_22a73c;
        case 0x22a740u: goto label_22a740;
        case 0x22a744u: goto label_22a744;
        case 0x22a748u: goto label_22a748;
        case 0x22a74cu: goto label_22a74c;
        case 0x22a750u: goto label_22a750;
        case 0x22a754u: goto label_22a754;
        case 0x22a758u: goto label_22a758;
        case 0x22a75cu: goto label_22a75c;
        case 0x22a760u: goto label_22a760;
        case 0x22a764u: goto label_22a764;
        case 0x22a768u: goto label_22a768;
        case 0x22a76cu: goto label_22a76c;
        case 0x22a770u: goto label_22a770;
        case 0x22a774u: goto label_22a774;
        case 0x22a778u: goto label_22a778;
        case 0x22a77cu: goto label_22a77c;
        case 0x22a780u: goto label_22a780;
        case 0x22a784u: goto label_22a784;
        case 0x22a788u: goto label_22a788;
        case 0x22a78cu: goto label_22a78c;
        case 0x22a790u: goto label_22a790;
        case 0x22a794u: goto label_22a794;
        case 0x22a798u: goto label_22a798;
        case 0x22a79cu: goto label_22a79c;
        case 0x22a7a0u: goto label_22a7a0;
        case 0x22a7a4u: goto label_22a7a4;
        case 0x22a7a8u: goto label_22a7a8;
        case 0x22a7acu: goto label_22a7ac;
        case 0x22a7b0u: goto label_22a7b0;
        case 0x22a7b4u: goto label_22a7b4;
        case 0x22a7b8u: goto label_22a7b8;
        case 0x22a7bcu: goto label_22a7bc;
        case 0x22a7c0u: goto label_22a7c0;
        case 0x22a7c4u: goto label_22a7c4;
        case 0x22a7c8u: goto label_22a7c8;
        case 0x22a7ccu: goto label_22a7cc;
        case 0x22a7d0u: goto label_22a7d0;
        case 0x22a7d4u: goto label_22a7d4;
        case 0x22a7d8u: goto label_22a7d8;
        case 0x22a7dcu: goto label_22a7dc;
        case 0x22a7e0u: goto label_22a7e0;
        case 0x22a7e4u: goto label_22a7e4;
        case 0x22a7e8u: goto label_22a7e8;
        case 0x22a7ecu: goto label_22a7ec;
        case 0x22a7f0u: goto label_22a7f0;
        case 0x22a7f4u: goto label_22a7f4;
        case 0x22a7f8u: goto label_22a7f8;
        case 0x22a7fcu: goto label_22a7fc;
        case 0x22a800u: goto label_22a800;
        case 0x22a804u: goto label_22a804;
        case 0x22a808u: goto label_22a808;
        case 0x22a80cu: goto label_22a80c;
        case 0x22a810u: goto label_22a810;
        case 0x22a814u: goto label_22a814;
        case 0x22a818u: goto label_22a818;
        case 0x22a81cu: goto label_22a81c;
        case 0x22a820u: goto label_22a820;
        case 0x22a824u: goto label_22a824;
        case 0x22a828u: goto label_22a828;
        case 0x22a82cu: goto label_22a82c;
        case 0x22a830u: goto label_22a830;
        case 0x22a834u: goto label_22a834;
        case 0x22a838u: goto label_22a838;
        case 0x22a83cu: goto label_22a83c;
        case 0x22a840u: goto label_22a840;
        case 0x22a844u: goto label_22a844;
        case 0x22a848u: goto label_22a848;
        case 0x22a84cu: goto label_22a84c;
        case 0x22a850u: goto label_22a850;
        case 0x22a854u: goto label_22a854;
        case 0x22a858u: goto label_22a858;
        case 0x22a85cu: goto label_22a85c;
        case 0x22a860u: goto label_22a860;
        case 0x22a864u: goto label_22a864;
        case 0x22a868u: goto label_22a868;
        case 0x22a86cu: goto label_22a86c;
        case 0x22a870u: goto label_22a870;
        case 0x22a874u: goto label_22a874;
        case 0x22a878u: goto label_22a878;
        case 0x22a87cu: goto label_22a87c;
        case 0x22a880u: goto label_22a880;
        case 0x22a884u: goto label_22a884;
        case 0x22a888u: goto label_22a888;
        case 0x22a88cu: goto label_22a88c;
        case 0x22a890u: goto label_22a890;
        case 0x22a894u: goto label_22a894;
        case 0x22a898u: goto label_22a898;
        case 0x22a89cu: goto label_22a89c;
        case 0x22a8a0u: goto label_22a8a0;
        case 0x22a8a4u: goto label_22a8a4;
        case 0x22a8a8u: goto label_22a8a8;
        case 0x22a8acu: goto label_22a8ac;
        case 0x22a8b0u: goto label_22a8b0;
        case 0x22a8b4u: goto label_22a8b4;
        case 0x22a8b8u: goto label_22a8b8;
        case 0x22a8bcu: goto label_22a8bc;
        case 0x22a8c0u: goto label_22a8c0;
        case 0x22a8c4u: goto label_22a8c4;
        case 0x22a8c8u: goto label_22a8c8;
        case 0x22a8ccu: goto label_22a8cc;
        case 0x22a8d0u: goto label_22a8d0;
        case 0x22a8d4u: goto label_22a8d4;
        case 0x22a8d8u: goto label_22a8d8;
        case 0x22a8dcu: goto label_22a8dc;
        case 0x22a8e0u: goto label_22a8e0;
        case 0x22a8e4u: goto label_22a8e4;
        case 0x22a8e8u: goto label_22a8e8;
        case 0x22a8ecu: goto label_22a8ec;
        case 0x22a8f0u: goto label_22a8f0;
        case 0x22a8f4u: goto label_22a8f4;
        case 0x22a8f8u: goto label_22a8f8;
        case 0x22a8fcu: goto label_22a8fc;
        case 0x22a900u: goto label_22a900;
        case 0x22a904u: goto label_22a904;
        case 0x22a908u: goto label_22a908;
        case 0x22a90cu: goto label_22a90c;
        case 0x22a910u: goto label_22a910;
        case 0x22a914u: goto label_22a914;
        case 0x22a918u: goto label_22a918;
        case 0x22a91cu: goto label_22a91c;
        case 0x22a920u: goto label_22a920;
        case 0x22a924u: goto label_22a924;
        case 0x22a928u: goto label_22a928;
        case 0x22a92cu: goto label_22a92c;
        case 0x22a930u: goto label_22a930;
        case 0x22a934u: goto label_22a934;
        case 0x22a938u: goto label_22a938;
        case 0x22a93cu: goto label_22a93c;
        case 0x22a940u: goto label_22a940;
        case 0x22a944u: goto label_22a944;
        case 0x22a948u: goto label_22a948;
        case 0x22a94cu: goto label_22a94c;
        case 0x22a950u: goto label_22a950;
        case 0x22a954u: goto label_22a954;
        case 0x22a958u: goto label_22a958;
        case 0x22a95cu: goto label_22a95c;
        case 0x22a960u: goto label_22a960;
        case 0x22a964u: goto label_22a964;
        case 0x22a968u: goto label_22a968;
        case 0x22a96cu: goto label_22a96c;
        case 0x22a970u: goto label_22a970;
        case 0x22a974u: goto label_22a974;
        case 0x22a978u: goto label_22a978;
        case 0x22a97cu: goto label_22a97c;
        case 0x22a980u: goto label_22a980;
        case 0x22a984u: goto label_22a984;
        case 0x22a988u: goto label_22a988;
        case 0x22a98cu: goto label_22a98c;
        case 0x22a990u: goto label_22a990;
        case 0x22a994u: goto label_22a994;
        case 0x22a998u: goto label_22a998;
        case 0x22a99cu: goto label_22a99c;
        case 0x22a9a0u: goto label_22a9a0;
        case 0x22a9a4u: goto label_22a9a4;
        case 0x22a9a8u: goto label_22a9a8;
        case 0x22a9acu: goto label_22a9ac;
        case 0x22a9b0u: goto label_22a9b0;
        case 0x22a9b4u: goto label_22a9b4;
        case 0x22a9b8u: goto label_22a9b8;
        case 0x22a9bcu: goto label_22a9bc;
        case 0x22a9c0u: goto label_22a9c0;
        case 0x22a9c4u: goto label_22a9c4;
        case 0x22a9c8u: goto label_22a9c8;
        case 0x22a9ccu: goto label_22a9cc;
        case 0x22a9d0u: goto label_22a9d0;
        case 0x22a9d4u: goto label_22a9d4;
        case 0x22a9d8u: goto label_22a9d8;
        case 0x22a9dcu: goto label_22a9dc;
        case 0x22a9e0u: goto label_22a9e0;
        case 0x22a9e4u: goto label_22a9e4;
        case 0x22a9e8u: goto label_22a9e8;
        case 0x22a9ecu: goto label_22a9ec;
        case 0x22a9f0u: goto label_22a9f0;
        case 0x22a9f4u: goto label_22a9f4;
        case 0x22a9f8u: goto label_22a9f8;
        case 0x22a9fcu: goto label_22a9fc;
        case 0x22aa00u: goto label_22aa00;
        case 0x22aa04u: goto label_22aa04;
        case 0x22aa08u: goto label_22aa08;
        case 0x22aa0cu: goto label_22aa0c;
        case 0x22aa10u: goto label_22aa10;
        case 0x22aa14u: goto label_22aa14;
        case 0x22aa18u: goto label_22aa18;
        case 0x22aa1cu: goto label_22aa1c;
        case 0x22aa20u: goto label_22aa20;
        case 0x22aa24u: goto label_22aa24;
        case 0x22aa28u: goto label_22aa28;
        case 0x22aa2cu: goto label_22aa2c;
        case 0x22aa30u: goto label_22aa30;
        case 0x22aa34u: goto label_22aa34;
        case 0x22aa38u: goto label_22aa38;
        case 0x22aa3cu: goto label_22aa3c;
        case 0x22aa40u: goto label_22aa40;
        case 0x22aa44u: goto label_22aa44;
        case 0x22aa48u: goto label_22aa48;
        case 0x22aa4cu: goto label_22aa4c;
        case 0x22aa50u: goto label_22aa50;
        case 0x22aa54u: goto label_22aa54;
        case 0x22aa58u: goto label_22aa58;
        case 0x22aa5cu: goto label_22aa5c;
        case 0x22aa60u: goto label_22aa60;
        case 0x22aa64u: goto label_22aa64;
        case 0x22aa68u: goto label_22aa68;
        case 0x22aa6cu: goto label_22aa6c;
        case 0x22aa70u: goto label_22aa70;
        case 0x22aa74u: goto label_22aa74;
        case 0x22aa78u: goto label_22aa78;
        case 0x22aa7cu: goto label_22aa7c;
        case 0x22aa80u: goto label_22aa80;
        case 0x22aa84u: goto label_22aa84;
        case 0x22aa88u: goto label_22aa88;
        case 0x22aa8cu: goto label_22aa8c;
        case 0x22aa90u: goto label_22aa90;
        case 0x22aa94u: goto label_22aa94;
        case 0x22aa98u: goto label_22aa98;
        case 0x22aa9cu: goto label_22aa9c;
        case 0x22aaa0u: goto label_22aaa0;
        case 0x22aaa4u: goto label_22aaa4;
        case 0x22aaa8u: goto label_22aaa8;
        case 0x22aaacu: goto label_22aaac;
        case 0x22aab0u: goto label_22aab0;
        case 0x22aab4u: goto label_22aab4;
        case 0x22aab8u: goto label_22aab8;
        case 0x22aabcu: goto label_22aabc;
        case 0x22aac0u: goto label_22aac0;
        case 0x22aac4u: goto label_22aac4;
        case 0x22aac8u: goto label_22aac8;
        case 0x22aaccu: goto label_22aacc;
        case 0x22aad0u: goto label_22aad0;
        case 0x22aad4u: goto label_22aad4;
        case 0x22aad8u: goto label_22aad8;
        case 0x22aadcu: goto label_22aadc;
        case 0x22aae0u: goto label_22aae0;
        case 0x22aae4u: goto label_22aae4;
        case 0x22aae8u: goto label_22aae8;
        case 0x22aaecu: goto label_22aaec;
        case 0x22aaf0u: goto label_22aaf0;
        case 0x22aaf4u: goto label_22aaf4;
        case 0x22aaf8u: goto label_22aaf8;
        case 0x22aafcu: goto label_22aafc;
        case 0x22ab00u: goto label_22ab00;
        case 0x22ab04u: goto label_22ab04;
        case 0x22ab08u: goto label_22ab08;
        case 0x22ab0cu: goto label_22ab0c;
        case 0x22ab10u: goto label_22ab10;
        case 0x22ab14u: goto label_22ab14;
        case 0x22ab18u: goto label_22ab18;
        case 0x22ab1cu: goto label_22ab1c;
        case 0x22ab20u: goto label_22ab20;
        case 0x22ab24u: goto label_22ab24;
        case 0x22ab28u: goto label_22ab28;
        case 0x22ab2cu: goto label_22ab2c;
        case 0x22ab30u: goto label_22ab30;
        case 0x22ab34u: goto label_22ab34;
        case 0x22ab38u: goto label_22ab38;
        case 0x22ab3cu: goto label_22ab3c;
        case 0x22ab40u: goto label_22ab40;
        case 0x22ab44u: goto label_22ab44;
        case 0x22ab48u: goto label_22ab48;
        case 0x22ab4cu: goto label_22ab4c;
        case 0x22ab50u: goto label_22ab50;
        case 0x22ab54u: goto label_22ab54;
        case 0x22ab58u: goto label_22ab58;
        case 0x22ab5cu: goto label_22ab5c;
        case 0x22ab60u: goto label_22ab60;
        case 0x22ab64u: goto label_22ab64;
        case 0x22ab68u: goto label_22ab68;
        case 0x22ab6cu: goto label_22ab6c;
        case 0x22ab70u: goto label_22ab70;
        case 0x22ab74u: goto label_22ab74;
        case 0x22ab78u: goto label_22ab78;
        case 0x22ab7cu: goto label_22ab7c;
        case 0x22ab80u: goto label_22ab80;
        case 0x22ab84u: goto label_22ab84;
        case 0x22ab88u: goto label_22ab88;
        case 0x22ab8cu: goto label_22ab8c;
        case 0x22ab90u: goto label_22ab90;
        case 0x22ab94u: goto label_22ab94;
        case 0x22ab98u: goto label_22ab98;
        case 0x22ab9cu: goto label_22ab9c;
        case 0x22aba0u: goto label_22aba0;
        case 0x22aba4u: goto label_22aba4;
        case 0x22aba8u: goto label_22aba8;
        case 0x22abacu: goto label_22abac;
        default: break;
    }

    ctx->pc = 0x22a6d0u;

label_22a6d0:
    // 0x22a6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22a6d4:
    // 0x22a6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22a6d8:
    // 0x22a6d8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x22a6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a6dc:
    // 0x22a6dc: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x22a6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_22a6e0:
    // 0x22a6e0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x22a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a6e4:
    // 0x22a6e4: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x22a6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_22a6e8:
    // 0x22a6e8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x22a6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a6ec:
    // 0x22a6ec: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x22a6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_22a6f0:
    // 0x22a6f0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x22a6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a6f4:
    // 0x22a6f4: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x22a6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
label_22a6f8:
    // 0x22a6f8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x22a6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a6fc:
    // 0x22a6fc: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x22a6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_22a700:
    // 0x22a700: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x22a700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a704:
    // 0x22a704: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x22a704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_22a708:
    // 0x22a708: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x22a708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a70c:
    // 0x22a70c: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x22a70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_22a710:
    // 0x22a710: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x22a710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a714:
    // 0x22a714: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x22a714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
label_22a718:
    // 0x22a718: 0xc08abf0  jal         func_22AFC0
label_22a71c:
    if (ctx->pc == 0x22A71Cu) {
        ctx->pc = 0x22A71Cu;
            // 0x22a71c: 0x24850070  addiu       $a1, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->pc = 0x22A720u;
        goto label_22a720;
    }
    ctx->pc = 0x22A718u;
    SET_GPR_U32(ctx, 31, 0x22A720u);
    ctx->pc = 0x22A71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A718u;
            // 0x22a71c: 0x24850070  addiu       $a1, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AFC0u;
    if (runtime->hasFunction(0x22AFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22AFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A720u; }
        if (ctx->pc != 0x22A720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AFC0_0x22afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A720u; }
        if (ctx->pc != 0x22A720u) { return; }
    }
    ctx->pc = 0x22A720u;
label_22a720:
    // 0x22a720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22a724:
    // 0x22a724: 0x3e00008  jr          $ra
label_22a728:
    if (ctx->pc == 0x22A728u) {
        ctx->pc = 0x22A728u;
            // 0x22a728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x22A72Cu;
        goto label_22a72c;
    }
    ctx->pc = 0x22A724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A724u;
            // 0x22a728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A72Cu;
label_22a72c:
    // 0x22a72c: 0x0  nop
    ctx->pc = 0x22a72cu;
    // NOP
label_22a730:
    // 0x22a730: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x22a730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_22a734:
    // 0x22a734: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_22a738:
    if (ctx->pc == 0x22A738u) {
        ctx->pc = 0x22A738u;
            // 0x22a738: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A73Cu;
        goto label_22a73c;
    }
    ctx->pc = 0x22A734u;
    {
        const bool branch_taken_0x22a734 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22A738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A734u;
            // 0x22a738: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a734) {
            ctx->pc = 0x22A768u;
            goto label_22a768;
        }
    }
    ctx->pc = 0x22A73Cu;
label_22a73c:
    // 0x22a73c: 0x8ca70090  lw          $a3, 0x90($a1)
    ctx->pc = 0x22a73cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_22a740:
    // 0x22a740: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x22a740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_22a744:
    // 0x22a744: 0x54660004  bnel        $v1, $a2, . + 4 + (0x4 << 2)
label_22a748:
    if (ctx->pc == 0x22A748u) {
        ctx->pc = 0x22A748u;
            // 0x22a748: 0x8ca30094  lw          $v1, 0x94($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
        ctx->pc = 0x22A74Cu;
        goto label_22a74c;
    }
    ctx->pc = 0x22A744u;
    {
        const bool branch_taken_0x22a744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x22a744) {
            ctx->pc = 0x22A748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A744u;
            // 0x22a748: 0x8ca30094  lw          $v1, 0x94($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A758u;
            goto label_22a758;
        }
    }
    ctx->pc = 0x22A74Cu;
label_22a74c:
    // 0x22a74c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a750:
    // 0x22a750: 0x10000006  b           . + 4 + (0x6 << 2)
label_22a754:
    if (ctx->pc == 0x22A754u) {
        ctx->pc = 0x22A754u;
            // 0x22a754: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22A758u;
        goto label_22a758;
    }
    ctx->pc = 0x22A750u;
    {
        const bool branch_taken_0x22a750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A750u;
            // 0x22a754: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a750) {
            ctx->pc = 0x22A76Cu;
            goto label_22a76c;
        }
    }
    ctx->pc = 0x22A758u;
label_22a758:
    // 0x22a758: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22a758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22a75c:
    // 0x22a75c: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x22a75cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22a760:
    // 0x22a760: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_22a764:
    if (ctx->pc == 0x22A764u) {
        ctx->pc = 0x22A764u;
            // 0x22a764: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x22A768u;
        goto label_22a768;
    }
    ctx->pc = 0x22A760u;
    {
        const bool branch_taken_0x22a760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A760u;
            // 0x22a764: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a760) {
            ctx->pc = 0x22A740u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a740;
        }
    }
    ctx->pc = 0x22A768u;
label_22a768:
    // 0x22a768: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x22a768u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_22a76c:
    // 0x22a76c: 0x3e00008  jr          $ra
label_22a770:
    if (ctx->pc == 0x22A770u) {
        ctx->pc = 0x22A774u;
        goto label_22a774;
    }
    ctx->pc = 0x22A76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A774u;
label_22a774:
    // 0x22a774: 0x0  nop
    ctx->pc = 0x22a774u;
    // NOP
label_22a778:
    // 0x22a778: 0x0  nop
    ctx->pc = 0x22a778u;
    // NOP
label_22a77c:
    // 0x22a77c: 0x0  nop
    ctx->pc = 0x22a77cu;
    // NOP
label_22a780:
    // 0x22a780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22a780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22a784:
    // 0x22a784: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22a784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22a788:
    // 0x22a788: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22a788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22a78c:
    // 0x22a78c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22a790:
    // 0x22a790: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22a794:
    // 0x22a794: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22a798:
    // 0x22a798: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22a798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22a79c:
    // 0x22a79c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22a79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22a7a0:
    // 0x22a7a0: 0xafb10050  sw          $s1, 0x50($sp)
    ctx->pc = 0x22a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 17));
label_22a7a4:
    // 0x22a7a4: 0xafb00054  sw          $s0, 0x54($sp)
    ctx->pc = 0x22a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
label_22a7a8:
    // 0x22a7a8: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x22a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_22a7ac:
    // 0x22a7ac: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x22a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_22a7b0:
    // 0x22a7b0: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x22a7b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22a7b4:
    // 0x22a7b4: 0x6600010  bltz        $s3, . + 4 + (0x10 << 2)
label_22a7b8:
    if (ctx->pc == 0x22A7B8u) {
        ctx->pc = 0x22A7BCu;
        goto label_22a7bc;
    }
    ctx->pc = 0x22A7B4u;
    {
        const bool branch_taken_0x22a7b4 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x22a7b4) {
            ctx->pc = 0x22A7F8u;
            goto label_22a7f8;
        }
    }
    ctx->pc = 0x22A7BCu;
label_22a7bc:
    // 0x22a7bc: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x22a7bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_22a7c0:
    // 0x22a7c0: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x22a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_22a7c4:
    // 0x22a7c4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x22a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_22a7c8:
    // 0x22a7c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22a7cc:
    // 0x22a7cc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_22a7d0:
    if (ctx->pc == 0x22A7D0u) {
        ctx->pc = 0x22A7D4u;
        goto label_22a7d4;
    }
    ctx->pc = 0x22A7CCu;
    {
        const bool branch_taken_0x22a7cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a7cc) {
            ctx->pc = 0x22A7E8u;
            goto label_22a7e8;
        }
    }
    ctx->pc = 0x22A7D4u;
label_22a7d4:
    // 0x22a7d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22a7d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22a7d8:
    // 0x22a7d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22a7d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22a7dc:
    // 0x22a7dc: 0x320f809  jalr        $t9
label_22a7e0:
    if (ctx->pc == 0x22A7E0u) {
        ctx->pc = 0x22A7E0u;
            // 0x22a7e0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x22A7E4u;
        goto label_22a7e4;
    }
    ctx->pc = 0x22A7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22A7E4u);
        ctx->pc = 0x22A7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A7DCu;
            // 0x22a7e0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22A7E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22A7E4u; }
            if (ctx->pc != 0x22A7E4u) { return; }
        }
        }
    }
    ctx->pc = 0x22A7E4u;
label_22a7e4:
    // 0x22a7e4: 0x0  nop
    ctx->pc = 0x22a7e4u;
    // NOP
label_22a7e8:
    // 0x22a7e8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x22a7e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_22a7ec:
    // 0x22a7ec: 0x661fff4  bgez        $s3, . + 4 + (-0xC << 2)
label_22a7f0:
    if (ctx->pc == 0x22A7F0u) {
        ctx->pc = 0x22A7F0u;
            // 0x22a7f0: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x22A7F4u;
        goto label_22a7f4;
    }
    ctx->pc = 0x22A7ECu;
    {
        const bool branch_taken_0x22a7ec = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x22A7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A7ECu;
            // 0x22a7f0: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7ec) {
            ctx->pc = 0x22A7C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a7c0;
        }
    }
    ctx->pc = 0x22A7F4u;
label_22a7f4:
    // 0x22a7f4: 0x0  nop
    ctx->pc = 0x22a7f4u;
    // NOP
label_22a7f8:
    // 0x22a7f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x22a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_22a7fc:
    // 0x22a7fc: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
label_22a800:
    if (ctx->pc == 0x22A800u) {
        ctx->pc = 0x22A800u;
            // 0x22a800: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x22A804u;
        goto label_22a804;
    }
    ctx->pc = 0x22A7FCu;
    {
        const bool branch_taken_0x22a7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a7fc) {
            ctx->pc = 0x22A800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A7FCu;
            // 0x22a800: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A848u;
            goto label_22a848;
        }
    }
    ctx->pc = 0x22A804u;
label_22a804:
    // 0x22a804: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x22a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_22a808:
    // 0x22a808: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x22a808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_22a80c:
    // 0x22a80c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x22a80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_22a810:
    // 0x22a810: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x22a810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_22a814:
    // 0x22a814: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_22a818:
    if (ctx->pc == 0x22A818u) {
        ctx->pc = 0x22A818u;
            // 0x22a818: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->pc = 0x22A81Cu;
        goto label_22a81c;
    }
    ctx->pc = 0x22A814u;
    {
        const bool branch_taken_0x22a814 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22a814) {
            ctx->pc = 0x22A818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A814u;
            // 0x22a818: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A82Cu;
            goto label_22a82c;
        }
    }
    ctx->pc = 0x22A81Cu;
label_22a81c:
    // 0x22a81c: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x22a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_22a820:
    // 0x22a820: 0xc0a728c  jal         func_29CA30
label_22a824:
    if (ctx->pc == 0x22A824u) {
        ctx->pc = 0x22A824u;
            // 0x22a824: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x22A828u;
        goto label_22a828;
    }
    ctx->pc = 0x22A820u;
    SET_GPR_U32(ctx, 31, 0x22A828u);
    ctx->pc = 0x22A824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A820u;
            // 0x22a824: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A828u; }
        if (ctx->pc != 0x22A828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A828u; }
        if (ctx->pc != 0x22A828u) { return; }
    }
    ctx->pc = 0x22A828u;
label_22a828:
    // 0x22a828: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x22a828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_22a82c:
    // 0x22a82c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x22a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_22a830:
    // 0x22a830: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x22a830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
label_22a834:
    // 0x22a834: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22a834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_22a838:
    // 0x22a838: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x22a838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_22a83c:
    // 0x22a83c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22a840:
    // 0x22a840: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x22a840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_22a844:
    // 0x22a844: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22a844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22a848:
    // 0x22a848: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22a848u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22a84c:
    // 0x22a84c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a84cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22a850:
    // 0x22a850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22a854:
    // 0x22a854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22a858:
    // 0x22a858: 0x3e00008  jr          $ra
label_22a85c:
    if (ctx->pc == 0x22A85Cu) {
        ctx->pc = 0x22A85Cu;
            // 0x22a85c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x22A860u;
        goto label_22a860;
    }
    ctx->pc = 0x22A858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A858u;
            // 0x22a85c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A860u;
label_22a860:
    // 0x22a860: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22a860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22a864:
    // 0x22a864: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22a868:
    // 0x22a868: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22a868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22a86c:
    // 0x22a86c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22a870:
    // 0x22a870: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22a874:
    // 0x22a874: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22a878:
    // 0x22a878: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22a878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22a87c:
    // 0x22a87c: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x22a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_22a880:
    // 0x22a880: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
label_22a884:
    if (ctx->pc == 0x22A884u) {
        ctx->pc = 0x22A884u;
            // 0x22a884: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A888u;
        goto label_22a888;
    }
    ctx->pc = 0x22A880u;
    {
        const bool branch_taken_0x22a880 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22A884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A880u;
            // 0x22a884: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a880) {
            ctx->pc = 0x22A8B0u;
            goto label_22a8b0;
        }
    }
    ctx->pc = 0x22A888u;
label_22a888:
    // 0x22a888: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x22a888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_22a88c:
    // 0x22a88c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22a890:
    // 0x22a890: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
label_22a894:
    if (ctx->pc == 0x22A894u) {
        ctx->pc = 0x22A894u;
            // 0x22a894: 0x8e230094  lw          $v1, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->pc = 0x22A898u;
        goto label_22a898;
    }
    ctx->pc = 0x22A890u;
    {
        const bool branch_taken_0x22a890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x22a890) {
            ctx->pc = 0x22A894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A890u;
            // 0x22a894: 0x8e230094  lw          $v1, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A8A0u;
            goto label_22a8a0;
        }
    }
    ctx->pc = 0x22A898u;
label_22a898:
    // 0x22a898: 0x10000007  b           . + 4 + (0x7 << 2)
label_22a89c:
    if (ctx->pc == 0x22A89Cu) {
        ctx->pc = 0x22A89Cu;
            // 0x22a89c: 0x200182a  slt         $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->pc = 0x22A8A0u;
        goto label_22a8a0;
    }
    ctx->pc = 0x22A898u;
    {
        const bool branch_taken_0x22a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A898u;
            // 0x22a89c: 0x200182a  slt         $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a898) {
            ctx->pc = 0x22A8B8u;
            goto label_22a8b8;
        }
    }
    ctx->pc = 0x22A8A0u;
label_22a8a0:
    // 0x22a8a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22a8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22a8a4:
    // 0x22a8a4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x22a8a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22a8a8:
    // 0x22a8a8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_22a8ac:
    if (ctx->pc == 0x22A8ACu) {
        ctx->pc = 0x22A8ACu;
            // 0x22a8ac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x22A8B0u;
        goto label_22a8b0;
    }
    ctx->pc = 0x22A8A8u;
    {
        const bool branch_taken_0x22a8a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A8A8u;
            // 0x22a8ac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a8a8) {
            ctx->pc = 0x22A88Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a88c;
        }
    }
    ctx->pc = 0x22A8B0u;
label_22a8b0:
    // 0x22a8b0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x22a8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22a8b4:
    // 0x22a8b4: 0x200182a  slt         $v1, $s0, $zero
    ctx->pc = 0x22a8b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_22a8b8:
    // 0x22a8b8: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x22a8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_22a8bc:
    // 0x22a8bc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x22a8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_22a8c0:
    // 0x22a8c0: 0xafb10058  sw          $s1, 0x58($sp)
    ctx->pc = 0x22a8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 17));
label_22a8c4:
    // 0x22a8c4: 0xa3a30060  sb          $v1, 0x60($sp)
    ctx->pc = 0x22a8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 3));
label_22a8c8:
    // 0x22a8c8: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x22a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_22a8cc:
    // 0x22a8cc: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x22a8ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22a8d0:
    // 0x22a8d0: 0x660000f  bltz        $s3, . + 4 + (0xF << 2)
label_22a8d4:
    if (ctx->pc == 0x22A8D4u) {
        ctx->pc = 0x22A8D8u;
        goto label_22a8d8;
    }
    ctx->pc = 0x22A8D0u;
    {
        const bool branch_taken_0x22a8d0 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x22a8d0) {
            ctx->pc = 0x22A910u;
            goto label_22a910;
        }
    }
    ctx->pc = 0x22A8D8u;
label_22a8d8:
    // 0x22a8d8: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x22a8d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_22a8dc:
    // 0x22a8dc: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x22a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_22a8e0:
    // 0x22a8e0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x22a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_22a8e4:
    // 0x22a8e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22a8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22a8e8:
    // 0x22a8e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_22a8ec:
    if (ctx->pc == 0x22A8ECu) {
        ctx->pc = 0x22A8F0u;
        goto label_22a8f0;
    }
    ctx->pc = 0x22A8E8u;
    {
        const bool branch_taken_0x22a8e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a8e8) {
            ctx->pc = 0x22A900u;
            goto label_22a900;
        }
    }
    ctx->pc = 0x22A8F0u;
label_22a8f0:
    // 0x22a8f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22a8f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22a8f4:
    // 0x22a8f4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x22a8f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_22a8f8:
    // 0x22a8f8: 0x320f809  jalr        $t9
label_22a8fc:
    if (ctx->pc == 0x22A8FCu) {
        ctx->pc = 0x22A8FCu;
            // 0x22a8fc: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x22A900u;
        goto label_22a900;
    }
    ctx->pc = 0x22A8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22A900u);
        ctx->pc = 0x22A8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A8F8u;
            // 0x22a8fc: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22A900u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22A900u; }
            if (ctx->pc != 0x22A900u) { return; }
        }
        }
    }
    ctx->pc = 0x22A900u;
label_22a900:
    // 0x22a900: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x22a900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_22a904:
    // 0x22a904: 0x661fff5  bgez        $s3, . + 4 + (-0xB << 2)
label_22a908:
    if (ctx->pc == 0x22A908u) {
        ctx->pc = 0x22A908u;
            // 0x22a908: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x22A90Cu;
        goto label_22a90c;
    }
    ctx->pc = 0x22A904u;
    {
        const bool branch_taken_0x22a904 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x22A908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A904u;
            // 0x22a908: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a904) {
            ctx->pc = 0x22A8DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a8dc;
        }
    }
    ctx->pc = 0x22A90Cu;
label_22a90c:
    // 0x22a90c: 0x0  nop
    ctx->pc = 0x22a90cu;
    // NOP
label_22a910:
    // 0x22a910: 0x602000c  bltzl       $s0, . + 4 + (0xC << 2)
label_22a914:
    if (ctx->pc == 0x22A914u) {
        ctx->pc = 0x22A914u;
            // 0x22a914: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x22A918u;
        goto label_22a918;
    }
    ctx->pc = 0x22A910u;
    {
        const bool branch_taken_0x22a910 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x22a910) {
            ctx->pc = 0x22A914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A910u;
            // 0x22a914: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A944u;
            goto label_22a944;
        }
    }
    ctx->pc = 0x22A918u;
label_22a918:
    // 0x22a918: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x22a918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_22a91c:
    // 0x22a91c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x22a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_22a920:
    // 0x22a920: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x22a920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_22a924:
    // 0x22a924: 0xae240094  sw          $a0, 0x94($s1)
    ctx->pc = 0x22a924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 4));
label_22a928:
    // 0x22a928: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x22a928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_22a92c:
    // 0x22a92c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_22a930:
    // 0x22a930: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x22a930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_22a934:
    // 0x22a934: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x22a934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_22a938:
    // 0x22a938: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x22a938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22a93c:
    // 0x22a93c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x22a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_22a940:
    // 0x22a940: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22a940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22a944:
    // 0x22a944: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22a944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22a948:
    // 0x22a948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22a94c:
    // 0x22a94c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a94cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22a950:
    // 0x22a950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22a954:
    // 0x22a954: 0x3e00008  jr          $ra
label_22a958:
    if (ctx->pc == 0x22A958u) {
        ctx->pc = 0x22A958u;
            // 0x22a958: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x22A95Cu;
        goto label_22a95c;
    }
    ctx->pc = 0x22A954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A954u;
            // 0x22a958: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A95Cu;
label_22a95c:
    // 0x22a95c: 0x0  nop
    ctx->pc = 0x22a95cu;
    // NOP
label_22a960:
    // 0x22a960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22a960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22a964:
    // 0x22a964: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22a964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22a968:
    // 0x22a968: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22a968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22a96c:
    // 0x22a96c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22a970:
    // 0x22a970: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22a974:
    // 0x22a974: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22a974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22a978:
    // 0x22a978: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22a978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22a97c:
    // 0x22a97c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22a97cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a980:
    // 0x22a980: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x22a980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a984:
    // 0x22a984: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22a984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22a988:
    // 0x22a988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a98c:
    // 0x22a98c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x22a98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_22a990:
    // 0x22a990: 0x320f809  jalr        $t9
label_22a994:
    if (ctx->pc == 0x22A994u) {
        ctx->pc = 0x22A994u;
            // 0x22a994: 0x24a5c618  addiu       $a1, $a1, -0x39E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952472));
        ctx->pc = 0x22A998u;
        goto label_22a998;
    }
    ctx->pc = 0x22A990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22A998u);
        ctx->pc = 0x22A994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A990u;
            // 0x22a994: 0x24a5c618  addiu       $a1, $a1, -0x39E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952472));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22A998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22A998u; }
            if (ctx->pc != 0x22A998u) { return; }
        }
        }
    }
    ctx->pc = 0x22A998u;
label_22a998:
    // 0x22a998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a99c:
    // 0x22a99c: 0xc08add8  jal         func_22B760
label_22a9a0:
    if (ctx->pc == 0x22A9A0u) {
        ctx->pc = 0x22A9A0u;
            // 0x22a9a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A9A4u;
        goto label_22a9a4;
    }
    ctx->pc = 0x22A99Cu;
    SET_GPR_U32(ctx, 31, 0x22A9A4u);
    ctx->pc = 0x22A9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A99Cu;
            // 0x22a9a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B760u;
    if (runtime->hasFunction(0x22B760u)) {
        auto targetFn = runtime->lookupFunction(0x22B760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9A4u; }
        if (ctx->pc != 0x22A9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B760_0x22b760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9A4u; }
        if (ctx->pc != 0x22A9A4u) { return; }
    }
    ctx->pc = 0x22A9A4u;
label_22a9a4:
    // 0x22a9a4: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x22a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_22a9a8:
    // 0x22a9a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22a9ac:
    // 0x22a9ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22a9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22a9b0:
    // 0x22a9b0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_22a9b4:
    if (ctx->pc == 0x22A9B4u) {
        ctx->pc = 0x22A9B4u;
            // 0x22a9b4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x22A9B8u;
        goto label_22a9b8;
    }
    ctx->pc = 0x22A9B0u;
    {
        const bool branch_taken_0x22a9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a9b0) {
            ctx->pc = 0x22A9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A9B0u;
            // 0x22a9b4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A9F0u;
            goto label_22a9f0;
        }
    }
    ctx->pc = 0x22A9B8u;
label_22a9b8:
    // 0x22a9b8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x22a9b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a9bc:
    // 0x22a9bc: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22a9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22a9c0:
    // 0x22a9c0: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x22a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_22a9c4:
    // 0x22a9c4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22a9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22a9c8:
    // 0x22a9c8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22a9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22a9cc:
    // 0x22a9cc: 0x8e270090  lw          $a3, 0x90($s1)
    ctx->pc = 0x22a9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_22a9d0:
    // 0x22a9d0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22a9d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_22a9d4:
    // 0x22a9d4: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x22a9d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22a9d8:
    // 0x22a9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a9dc:
    // 0x22a9dc: 0x24a5c628  addiu       $a1, $a1, -0x39D8
    ctx->pc = 0x22a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952488));
label_22a9e0:
    // 0x22a9e0: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x22a9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22a9e4:
    // 0x22a9e4: 0x320f809  jalr        $t9
label_22a9e8:
    if (ctx->pc == 0x22A9E8u) {
        ctx->pc = 0x22A9E8u;
            // 0x22a9e8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x22A9ECu;
        goto label_22a9ec;
    }
    ctx->pc = 0x22A9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22A9ECu);
        ctx->pc = 0x22A9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A9E4u;
            // 0x22a9e8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22A9ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22A9ECu; }
            if (ctx->pc != 0x22A9ECu) { return; }
        }
        }
    }
    ctx->pc = 0x22A9ECu;
label_22a9ec:
    // 0x22a9ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x22a9ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a9f0:
    // 0x22a9f0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22a9f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22a9f4:
    // 0x22a9f4: 0x320f809  jalr        $t9
label_22a9f8:
    if (ctx->pc == 0x22A9F8u) {
        ctx->pc = 0x22A9F8u;
            // 0x22a9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A9FCu;
        goto label_22a9fc;
    }
    ctx->pc = 0x22A9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22A9FCu);
        ctx->pc = 0x22A9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A9F4u;
            // 0x22a9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22A9FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22A9FCu; }
            if (ctx->pc != 0x22A9FCu) { return; }
        }
        }
    }
    ctx->pc = 0x22A9FCu;
label_22a9fc:
    // 0x22a9fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22a9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22aa00:
    // 0x22aa00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22aa00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22aa04:
    // 0x22aa04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22aa04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22aa08:
    // 0x22aa08: 0x3e00008  jr          $ra
label_22aa0c:
    if (ctx->pc == 0x22AA0Cu) {
        ctx->pc = 0x22AA0Cu;
            // 0x22aa0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x22AA10u;
        goto label_22aa10;
    }
    ctx->pc = 0x22AA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA08u;
            // 0x22aa0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AA10u;
label_22aa10:
    // 0x22aa10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22aa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22aa14:
    // 0x22aa14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22aa18:
    // 0x22aa18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22aa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22aa1c:
    // 0x22aa1c: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x22aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_22aa20:
    // 0x22aa20: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_22aa24:
    if (ctx->pc == 0x22AA24u) {
        ctx->pc = 0x22AA24u;
            // 0x22aa24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AA28u;
        goto label_22aa28;
    }
    ctx->pc = 0x22AA20u;
    {
        const bool branch_taken_0x22aa20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA20u;
            // 0x22aa24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa20) {
            ctx->pc = 0x22AA80u;
            goto label_22aa80;
        }
    }
    ctx->pc = 0x22AA28u;
label_22aa28:
    // 0x22aa28: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x22aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_22aa2c:
    // 0x22aa2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22aa30:
    // 0x22aa30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22aa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22aa34:
    // 0x22aa34: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_22aa38:
    if (ctx->pc == 0x22AA38u) {
        ctx->pc = 0x22AA38u;
            // 0x22aa38: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->pc = 0x22AA3Cu;
        goto label_22aa3c;
    }
    ctx->pc = 0x22AA34u;
    {
        const bool branch_taken_0x22aa34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22aa34) {
            ctx->pc = 0x22AA38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA34u;
            // 0x22aa38: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22AA64u;
            goto label_22aa64;
        }
    }
    ctx->pc = 0x22AA3Cu;
label_22aa3c:
    // 0x22aa3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22aa40:
    // 0x22aa40: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x22aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_22aa44:
    // 0x22aa44: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22aa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22aa48:
    // 0x22aa48: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22aa48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22aa4c:
    // 0x22aa4c: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x22aa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_22aa50:
    // 0x22aa50: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22aa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22aa54:
    // 0x22aa54: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22aa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22aa58:
    // 0x22aa58: 0xc0a7ab4  jal         func_29EAD0
label_22aa5c:
    if (ctx->pc == 0x22AA5Cu) {
        ctx->pc = 0x22AA5Cu;
            // 0x22aa5c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22AA60u;
        goto label_22aa60;
    }
    ctx->pc = 0x22AA58u;
    SET_GPR_U32(ctx, 31, 0x22AA60u);
    ctx->pc = 0x22AA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA58u;
            // 0x22aa5c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA60u; }
        if (ctx->pc != 0x22AA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA60u; }
        if (ctx->pc != 0x22AA60u) { return; }
    }
    ctx->pc = 0x22AA60u;
label_22aa60:
    // 0x22aa60: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x22aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_22aa64:
    // 0x22aa64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_22aa68:
    // 0x22aa68: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x22aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_22aa6c:
    // 0x22aa6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22aa70:
    // 0x22aa70: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x22aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_22aa74:
    // 0x22aa74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22aa74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22aa78:
    // 0x22aa78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x22aa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22aa7c:
    // 0x22aa7c: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x22aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
label_22aa80:
    // 0x22aa80: 0xc08ae08  jal         func_22B820
label_22aa84:
    if (ctx->pc == 0x22AA84u) {
        ctx->pc = 0x22AA84u;
            // 0x22aa84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AA88u;
        goto label_22aa88;
    }
    ctx->pc = 0x22AA80u;
    SET_GPR_U32(ctx, 31, 0x22AA88u);
    ctx->pc = 0x22AA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA80u;
            // 0x22aa84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B820u;
    if (runtime->hasFunction(0x22B820u)) {
        auto targetFn = runtime->lookupFunction(0x22B820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA88u; }
        if (ctx->pc != 0x22AA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B820_0x22b820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA88u; }
        if (ctx->pc != 0x22AA88u) { return; }
    }
    ctx->pc = 0x22AA88u;
label_22aa88:
    // 0x22aa88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22aa88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22aa8c:
    // 0x22aa8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22aa8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22aa90:
    // 0x22aa90: 0x3e00008  jr          $ra
label_22aa94:
    if (ctx->pc == 0x22AA94u) {
        ctx->pc = 0x22AA94u;
            // 0x22aa94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22AA98u;
        goto label_22aa98;
    }
    ctx->pc = 0x22AA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA90u;
            // 0x22aa94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AA98u;
label_22aa98:
    // 0x22aa98: 0x0  nop
    ctx->pc = 0x22aa98u;
    // NOP
label_22aa9c:
    // 0x22aa9c: 0x0  nop
    ctx->pc = 0x22aa9cu;
    // NOP
label_22aaa0:
    // 0x22aaa0: 0x3e00008  jr          $ra
label_22aaa4:
    if (ctx->pc == 0x22AAA4u) {
        ctx->pc = 0x22AAA4u;
            // 0x22aaa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AAA8u;
        goto label_22aaa8;
    }
    ctx->pc = 0x22AAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AAA0u;
            // 0x22aaa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AAA8u;
label_22aaa8:
    // 0x22aaa8: 0x0  nop
    ctx->pc = 0x22aaa8u;
    // NOP
label_22aaac:
    // 0x22aaac: 0x0  nop
    ctx->pc = 0x22aaacu;
    // NOP
label_22aab0:
    // 0x22aab0: 0x3e00008  jr          $ra
label_22aab4:
    if (ctx->pc == 0x22AAB4u) {
        ctx->pc = 0x22AAB8u;
        goto label_22aab8;
    }
    ctx->pc = 0x22AAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AAB8u;
label_22aab8:
    // 0x22aab8: 0x0  nop
    ctx->pc = 0x22aab8u;
    // NOP
label_22aabc:
    // 0x22aabc: 0x0  nop
    ctx->pc = 0x22aabcu;
    // NOP
label_22aac0:
    // 0x22aac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22aac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22aac4:
    // 0x22aac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22aac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22aac8:
    // 0x22aac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22aac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22aacc:
    // 0x22aacc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22aaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22aad0:
    // 0x22aad0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22aad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22aad4:
    // 0x22aad4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_22aad8:
    if (ctx->pc == 0x22AAD8u) {
        ctx->pc = 0x22AAD8u;
            // 0x22aad8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AADCu;
        goto label_22aadc;
    }
    ctx->pc = 0x22AAD4u;
    {
        const bool branch_taken_0x22aad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AAD4u;
            // 0x22aad8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aad4) {
            ctx->pc = 0x22AB18u;
            goto label_22ab18;
        }
    }
    ctx->pc = 0x22AADCu;
label_22aadc:
    // 0x22aadc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22aae0:
    // 0x22aae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22aae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22aae4:
    // 0x22aae4: 0x2442ef40  addiu       $v0, $v0, -0x10C0
    ctx->pc = 0x22aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963008));
label_22aae8:
    // 0x22aae8: 0xc08ad54  jal         func_22B550
label_22aaec:
    if (ctx->pc == 0x22AAECu) {
        ctx->pc = 0x22AAECu;
            // 0x22aaec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22AAF0u;
        goto label_22aaf0;
    }
    ctx->pc = 0x22AAE8u;
    SET_GPR_U32(ctx, 31, 0x22AAF0u);
    ctx->pc = 0x22AAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AAE8u;
            // 0x22aaec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B550u;
    if (runtime->hasFunction(0x22B550u)) {
        auto targetFn = runtime->lookupFunction(0x22B550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AAF0u; }
        if (ctx->pc != 0x22AAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B550_0x22b550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AAF0u; }
        if (ctx->pc != 0x22AAF0u) { return; }
    }
    ctx->pc = 0x22AAF0u;
label_22aaf0:
    // 0x22aaf0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x22aaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_22aaf4:
    // 0x22aaf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22aaf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22aaf8:
    // 0x22aaf8: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_22aafc:
    if (ctx->pc == 0x22AAFCu) {
        ctx->pc = 0x22AAFCu;
            // 0x22aafc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AB00u;
        goto label_22ab00;
    }
    ctx->pc = 0x22AAF8u;
    {
        const bool branch_taken_0x22aaf8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22aaf8) {
            ctx->pc = 0x22AAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22AAF8u;
            // 0x22aafc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22AB1Cu;
            goto label_22ab1c;
        }
    }
    ctx->pc = 0x22AB00u;
label_22ab00:
    // 0x22ab00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ab04:
    // 0x22ab04: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x22ab04u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_22ab08:
    // 0x22ab08: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ab0c:
    // 0x22ab0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22ab0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ab10:
    // 0x22ab10: 0xc0a7ab4  jal         func_29EAD0
label_22ab14:
    if (ctx->pc == 0x22AB14u) {
        ctx->pc = 0x22AB14u;
            // 0x22ab14: 0x2407002f  addiu       $a3, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x22AB18u;
        goto label_22ab18;
    }
    ctx->pc = 0x22AB10u;
    SET_GPR_U32(ctx, 31, 0x22AB18u);
    ctx->pc = 0x22AB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB10u;
            // 0x22ab14: 0x2407002f  addiu       $a3, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB18u; }
        if (ctx->pc != 0x22AB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB18u; }
        if (ctx->pc != 0x22AB18u) { return; }
    }
    ctx->pc = 0x22AB18u;
label_22ab18:
    // 0x22ab18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22ab18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ab1c:
    // 0x22ab1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22ab1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22ab20:
    // 0x22ab20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ab20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22ab24:
    // 0x22ab24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ab24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22ab28:
    // 0x22ab28: 0x3e00008  jr          $ra
label_22ab2c:
    if (ctx->pc == 0x22AB2Cu) {
        ctx->pc = 0x22AB2Cu;
            // 0x22ab2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x22AB30u;
        goto label_22ab30;
    }
    ctx->pc = 0x22AB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB28u;
            // 0x22ab2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AB30u;
label_22ab30:
    // 0x22ab30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22ab34:
    // 0x22ab34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22ab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22ab38:
    // 0x22ab38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22ab3c:
    // 0x22ab3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ab3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ab40:
    // 0x22ab40: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_22ab44:
    if (ctx->pc == 0x22AB44u) {
        ctx->pc = 0x22AB44u;
            // 0x22ab44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AB48u;
        goto label_22ab48;
    }
    ctx->pc = 0x22AB40u;
    {
        const bool branch_taken_0x22ab40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ab40) {
            ctx->pc = 0x22AB44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB40u;
            // 0x22ab44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22ABA0u;
            goto label_22aba0;
        }
    }
    ctx->pc = 0x22AB48u;
label_22ab48:
    // 0x22ab48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22ab4c:
    // 0x22ab4c: 0x2442eeb0  addiu       $v0, $v0, -0x1150
    ctx->pc = 0x22ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962864));
label_22ab50:
    // 0x22ab50: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_22ab54:
    if (ctx->pc == 0x22AB54u) {
        ctx->pc = 0x22AB54u;
            // 0x22ab54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22AB58u;
        goto label_22ab58;
    }
    ctx->pc = 0x22AB50u;
    {
        const bool branch_taken_0x22ab50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB50u;
            // 0x22ab54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab50) {
            ctx->pc = 0x22AB74u;
            goto label_22ab74;
        }
    }
    ctx->pc = 0x22AB58u;
label_22ab58:
    // 0x22ab58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22ab5c:
    // 0x22ab5c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_22ab60:
    // 0x22ab60: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_22ab64:
    if (ctx->pc == 0x22AB64u) {
        ctx->pc = 0x22AB64u;
            // 0x22ab64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22AB68u;
        goto label_22ab68;
    }
    ctx->pc = 0x22AB60u;
    {
        const bool branch_taken_0x22ab60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB60u;
            // 0x22ab64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab60) {
            ctx->pc = 0x22AB74u;
            goto label_22ab74;
        }
    }
    ctx->pc = 0x22AB68u;
label_22ab68:
    // 0x22ab68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22ab6c:
    // 0x22ab6c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_22ab70:
    // 0x22ab70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_22ab74:
    // 0x22ab74: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x22ab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_22ab78:
    // 0x22ab78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22ab78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22ab7c:
    // 0x22ab7c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_22ab80:
    if (ctx->pc == 0x22AB80u) {
        ctx->pc = 0x22AB84u;
        goto label_22ab84;
    }
    ctx->pc = 0x22AB7Cu;
    {
        const bool branch_taken_0x22ab7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22ab7c) {
            ctx->pc = 0x22AB9Cu;
            goto label_22ab9c;
        }
    }
    ctx->pc = 0x22AB84u;
label_22ab84:
    // 0x22ab84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ab88:
    // 0x22ab88: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x22ab88u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_22ab8c:
    // 0x22ab8c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ab90:
    // 0x22ab90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22ab90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ab94:
    // 0x22ab94: 0xc0a7ab4  jal         func_29EAD0
label_22ab98:
    if (ctx->pc == 0x22AB98u) {
        ctx->pc = 0x22AB98u;
            // 0x22ab98: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x22AB9Cu;
        goto label_22ab9c;
    }
    ctx->pc = 0x22AB94u;
    SET_GPR_U32(ctx, 31, 0x22AB9Cu);
    ctx->pc = 0x22AB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB94u;
            // 0x22ab98: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB9Cu; }
        if (ctx->pc != 0x22AB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB9Cu; }
        if (ctx->pc != 0x22AB9Cu) { return; }
    }
    ctx->pc = 0x22AB9Cu;
label_22ab9c:
    // 0x22ab9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22ab9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22aba0:
    // 0x22aba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22aba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22aba4:
    // 0x22aba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22aba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22aba8:
    // 0x22aba8: 0x3e00008  jr          $ra
label_22abac:
    if (ctx->pc == 0x22ABACu) {
        ctx->pc = 0x22ABACu;
            // 0x22abac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22ABB0u;
        goto label_fallthrough_0x22aba8;
    }
    ctx->pc = 0x22ABA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ABA8u;
            // 0x22abac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x22aba8:
    ctx->pc = 0x22ABB0u;
}
