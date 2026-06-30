#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046A790
// Address: 0x46a790 - 0x46ab30
void sub_0046A790_0x46a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A790_0x46a790");
#endif

    switch (ctx->pc) {
        case 0x46a790u: goto label_46a790;
        case 0x46a794u: goto label_46a794;
        case 0x46a798u: goto label_46a798;
        case 0x46a79cu: goto label_46a79c;
        case 0x46a7a0u: goto label_46a7a0;
        case 0x46a7a4u: goto label_46a7a4;
        case 0x46a7a8u: goto label_46a7a8;
        case 0x46a7acu: goto label_46a7ac;
        case 0x46a7b0u: goto label_46a7b0;
        case 0x46a7b4u: goto label_46a7b4;
        case 0x46a7b8u: goto label_46a7b8;
        case 0x46a7bcu: goto label_46a7bc;
        case 0x46a7c0u: goto label_46a7c0;
        case 0x46a7c4u: goto label_46a7c4;
        case 0x46a7c8u: goto label_46a7c8;
        case 0x46a7ccu: goto label_46a7cc;
        case 0x46a7d0u: goto label_46a7d0;
        case 0x46a7d4u: goto label_46a7d4;
        case 0x46a7d8u: goto label_46a7d8;
        case 0x46a7dcu: goto label_46a7dc;
        case 0x46a7e0u: goto label_46a7e0;
        case 0x46a7e4u: goto label_46a7e4;
        case 0x46a7e8u: goto label_46a7e8;
        case 0x46a7ecu: goto label_46a7ec;
        case 0x46a7f0u: goto label_46a7f0;
        case 0x46a7f4u: goto label_46a7f4;
        case 0x46a7f8u: goto label_46a7f8;
        case 0x46a7fcu: goto label_46a7fc;
        case 0x46a800u: goto label_46a800;
        case 0x46a804u: goto label_46a804;
        case 0x46a808u: goto label_46a808;
        case 0x46a80cu: goto label_46a80c;
        case 0x46a810u: goto label_46a810;
        case 0x46a814u: goto label_46a814;
        case 0x46a818u: goto label_46a818;
        case 0x46a81cu: goto label_46a81c;
        case 0x46a820u: goto label_46a820;
        case 0x46a824u: goto label_46a824;
        case 0x46a828u: goto label_46a828;
        case 0x46a82cu: goto label_46a82c;
        case 0x46a830u: goto label_46a830;
        case 0x46a834u: goto label_46a834;
        case 0x46a838u: goto label_46a838;
        case 0x46a83cu: goto label_46a83c;
        case 0x46a840u: goto label_46a840;
        case 0x46a844u: goto label_46a844;
        case 0x46a848u: goto label_46a848;
        case 0x46a84cu: goto label_46a84c;
        case 0x46a850u: goto label_46a850;
        case 0x46a854u: goto label_46a854;
        case 0x46a858u: goto label_46a858;
        case 0x46a85cu: goto label_46a85c;
        case 0x46a860u: goto label_46a860;
        case 0x46a864u: goto label_46a864;
        case 0x46a868u: goto label_46a868;
        case 0x46a86cu: goto label_46a86c;
        case 0x46a870u: goto label_46a870;
        case 0x46a874u: goto label_46a874;
        case 0x46a878u: goto label_46a878;
        case 0x46a87cu: goto label_46a87c;
        case 0x46a880u: goto label_46a880;
        case 0x46a884u: goto label_46a884;
        case 0x46a888u: goto label_46a888;
        case 0x46a88cu: goto label_46a88c;
        case 0x46a890u: goto label_46a890;
        case 0x46a894u: goto label_46a894;
        case 0x46a898u: goto label_46a898;
        case 0x46a89cu: goto label_46a89c;
        case 0x46a8a0u: goto label_46a8a0;
        case 0x46a8a4u: goto label_46a8a4;
        case 0x46a8a8u: goto label_46a8a8;
        case 0x46a8acu: goto label_46a8ac;
        case 0x46a8b0u: goto label_46a8b0;
        case 0x46a8b4u: goto label_46a8b4;
        case 0x46a8b8u: goto label_46a8b8;
        case 0x46a8bcu: goto label_46a8bc;
        case 0x46a8c0u: goto label_46a8c0;
        case 0x46a8c4u: goto label_46a8c4;
        case 0x46a8c8u: goto label_46a8c8;
        case 0x46a8ccu: goto label_46a8cc;
        case 0x46a8d0u: goto label_46a8d0;
        case 0x46a8d4u: goto label_46a8d4;
        case 0x46a8d8u: goto label_46a8d8;
        case 0x46a8dcu: goto label_46a8dc;
        case 0x46a8e0u: goto label_46a8e0;
        case 0x46a8e4u: goto label_46a8e4;
        case 0x46a8e8u: goto label_46a8e8;
        case 0x46a8ecu: goto label_46a8ec;
        case 0x46a8f0u: goto label_46a8f0;
        case 0x46a8f4u: goto label_46a8f4;
        case 0x46a8f8u: goto label_46a8f8;
        case 0x46a8fcu: goto label_46a8fc;
        case 0x46a900u: goto label_46a900;
        case 0x46a904u: goto label_46a904;
        case 0x46a908u: goto label_46a908;
        case 0x46a90cu: goto label_46a90c;
        case 0x46a910u: goto label_46a910;
        case 0x46a914u: goto label_46a914;
        case 0x46a918u: goto label_46a918;
        case 0x46a91cu: goto label_46a91c;
        case 0x46a920u: goto label_46a920;
        case 0x46a924u: goto label_46a924;
        case 0x46a928u: goto label_46a928;
        case 0x46a92cu: goto label_46a92c;
        case 0x46a930u: goto label_46a930;
        case 0x46a934u: goto label_46a934;
        case 0x46a938u: goto label_46a938;
        case 0x46a93cu: goto label_46a93c;
        case 0x46a940u: goto label_46a940;
        case 0x46a944u: goto label_46a944;
        case 0x46a948u: goto label_46a948;
        case 0x46a94cu: goto label_46a94c;
        case 0x46a950u: goto label_46a950;
        case 0x46a954u: goto label_46a954;
        case 0x46a958u: goto label_46a958;
        case 0x46a95cu: goto label_46a95c;
        case 0x46a960u: goto label_46a960;
        case 0x46a964u: goto label_46a964;
        case 0x46a968u: goto label_46a968;
        case 0x46a96cu: goto label_46a96c;
        case 0x46a970u: goto label_46a970;
        case 0x46a974u: goto label_46a974;
        case 0x46a978u: goto label_46a978;
        case 0x46a97cu: goto label_46a97c;
        case 0x46a980u: goto label_46a980;
        case 0x46a984u: goto label_46a984;
        case 0x46a988u: goto label_46a988;
        case 0x46a98cu: goto label_46a98c;
        case 0x46a990u: goto label_46a990;
        case 0x46a994u: goto label_46a994;
        case 0x46a998u: goto label_46a998;
        case 0x46a99cu: goto label_46a99c;
        case 0x46a9a0u: goto label_46a9a0;
        case 0x46a9a4u: goto label_46a9a4;
        case 0x46a9a8u: goto label_46a9a8;
        case 0x46a9acu: goto label_46a9ac;
        case 0x46a9b0u: goto label_46a9b0;
        case 0x46a9b4u: goto label_46a9b4;
        case 0x46a9b8u: goto label_46a9b8;
        case 0x46a9bcu: goto label_46a9bc;
        case 0x46a9c0u: goto label_46a9c0;
        case 0x46a9c4u: goto label_46a9c4;
        case 0x46a9c8u: goto label_46a9c8;
        case 0x46a9ccu: goto label_46a9cc;
        case 0x46a9d0u: goto label_46a9d0;
        case 0x46a9d4u: goto label_46a9d4;
        case 0x46a9d8u: goto label_46a9d8;
        case 0x46a9dcu: goto label_46a9dc;
        case 0x46a9e0u: goto label_46a9e0;
        case 0x46a9e4u: goto label_46a9e4;
        case 0x46a9e8u: goto label_46a9e8;
        case 0x46a9ecu: goto label_46a9ec;
        case 0x46a9f0u: goto label_46a9f0;
        case 0x46a9f4u: goto label_46a9f4;
        case 0x46a9f8u: goto label_46a9f8;
        case 0x46a9fcu: goto label_46a9fc;
        case 0x46aa00u: goto label_46aa00;
        case 0x46aa04u: goto label_46aa04;
        case 0x46aa08u: goto label_46aa08;
        case 0x46aa0cu: goto label_46aa0c;
        case 0x46aa10u: goto label_46aa10;
        case 0x46aa14u: goto label_46aa14;
        case 0x46aa18u: goto label_46aa18;
        case 0x46aa1cu: goto label_46aa1c;
        case 0x46aa20u: goto label_46aa20;
        case 0x46aa24u: goto label_46aa24;
        case 0x46aa28u: goto label_46aa28;
        case 0x46aa2cu: goto label_46aa2c;
        case 0x46aa30u: goto label_46aa30;
        case 0x46aa34u: goto label_46aa34;
        case 0x46aa38u: goto label_46aa38;
        case 0x46aa3cu: goto label_46aa3c;
        case 0x46aa40u: goto label_46aa40;
        case 0x46aa44u: goto label_46aa44;
        case 0x46aa48u: goto label_46aa48;
        case 0x46aa4cu: goto label_46aa4c;
        case 0x46aa50u: goto label_46aa50;
        case 0x46aa54u: goto label_46aa54;
        case 0x46aa58u: goto label_46aa58;
        case 0x46aa5cu: goto label_46aa5c;
        case 0x46aa60u: goto label_46aa60;
        case 0x46aa64u: goto label_46aa64;
        case 0x46aa68u: goto label_46aa68;
        case 0x46aa6cu: goto label_46aa6c;
        case 0x46aa70u: goto label_46aa70;
        case 0x46aa74u: goto label_46aa74;
        case 0x46aa78u: goto label_46aa78;
        case 0x46aa7cu: goto label_46aa7c;
        case 0x46aa80u: goto label_46aa80;
        case 0x46aa84u: goto label_46aa84;
        case 0x46aa88u: goto label_46aa88;
        case 0x46aa8cu: goto label_46aa8c;
        case 0x46aa90u: goto label_46aa90;
        case 0x46aa94u: goto label_46aa94;
        case 0x46aa98u: goto label_46aa98;
        case 0x46aa9cu: goto label_46aa9c;
        case 0x46aaa0u: goto label_46aaa0;
        case 0x46aaa4u: goto label_46aaa4;
        case 0x46aaa8u: goto label_46aaa8;
        case 0x46aaacu: goto label_46aaac;
        case 0x46aab0u: goto label_46aab0;
        case 0x46aab4u: goto label_46aab4;
        case 0x46aab8u: goto label_46aab8;
        case 0x46aabcu: goto label_46aabc;
        case 0x46aac0u: goto label_46aac0;
        case 0x46aac4u: goto label_46aac4;
        case 0x46aac8u: goto label_46aac8;
        case 0x46aaccu: goto label_46aacc;
        case 0x46aad0u: goto label_46aad0;
        case 0x46aad4u: goto label_46aad4;
        case 0x46aad8u: goto label_46aad8;
        case 0x46aadcu: goto label_46aadc;
        case 0x46aae0u: goto label_46aae0;
        case 0x46aae4u: goto label_46aae4;
        case 0x46aae8u: goto label_46aae8;
        case 0x46aaecu: goto label_46aaec;
        case 0x46aaf0u: goto label_46aaf0;
        case 0x46aaf4u: goto label_46aaf4;
        case 0x46aaf8u: goto label_46aaf8;
        case 0x46aafcu: goto label_46aafc;
        case 0x46ab00u: goto label_46ab00;
        case 0x46ab04u: goto label_46ab04;
        case 0x46ab08u: goto label_46ab08;
        case 0x46ab0cu: goto label_46ab0c;
        case 0x46ab10u: goto label_46ab10;
        case 0x46ab14u: goto label_46ab14;
        case 0x46ab18u: goto label_46ab18;
        case 0x46ab1cu: goto label_46ab1c;
        case 0x46ab20u: goto label_46ab20;
        case 0x46ab24u: goto label_46ab24;
        case 0x46ab28u: goto label_46ab28;
        case 0x46ab2cu: goto label_46ab2c;
        default: break;
    }

    ctx->pc = 0x46a790u;

label_46a790:
    // 0x46a790: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x46a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_46a794:
    // 0x46a794: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x46a794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_46a798:
    // 0x46a798: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x46a798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_46a79c:
    // 0x46a79c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x46a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_46a7a0:
    // 0x46a7a0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x46a7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_46a7a4:
    // 0x46a7a4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x46a7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_46a7a8:
    // 0x46a7a8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x46a7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_46a7ac:
    // 0x46a7ac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x46a7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_46a7b0:
    // 0x46a7b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x46a7b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46a7b4:
    // 0x46a7b4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x46a7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_46a7b8:
    // 0x46a7b8: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x46a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_46a7bc:
    // 0x46a7bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x46a7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_46a7c0:
    // 0x46a7c0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x46a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_46a7c4:
    // 0x46a7c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x46a7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_46a7c8:
    // 0x46a7c8: 0x24420820  addiu       $v0, $v0, 0x820
    ctx->pc = 0x46a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
label_46a7cc:
    // 0x46a7cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x46a7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_46a7d0:
    // 0x46a7d0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x46a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46a7d4:
    // 0x46a7d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46a7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_46a7d8:
    // 0x46a7d8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x46a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_46a7dc:
    // 0x46a7dc: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x46a7dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_46a7e0:
    // 0x46a7e0: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x46a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_46a7e4:
    // 0x46a7e4: 0x2694c220  addiu       $s4, $s4, -0x3DE0
    ctx->pc = 0x46a7e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951456));
label_46a7e8:
    // 0x46a7e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x46a7e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_46a7ec:
    // 0x46a7ec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x46a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_46a7f0:
    // 0x46a7f0: 0x84520850  lh          $s2, 0x850($v0)
    ctx->pc = 0x46a7f0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2128)));
label_46a7f4:
    // 0x46a7f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x46a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46a7f8:
    // 0x46a7f8: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x46a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_46a7fc:
    // 0x46a7fc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x46a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_46a800:
    // 0x46a800: 0x84510852  lh          $s1, 0x852($v0)
    ctx->pc = 0x46a800u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2130)));
label_46a804:
    // 0x46a804: 0x94820074  lhu         $v0, 0x74($a0)
    ctx->pc = 0x46a804u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 116)));
label_46a808:
    // 0x46a808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46a80c:
    // 0x46a80c: 0xa4820074  sh          $v0, 0x74($a0)
    ctx->pc = 0x46a80cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 116), (uint16_t)GPR_U32(ctx, 2));
label_46a810:
    // 0x46a810: 0x94820074  lhu         $v0, 0x74($a0)
    ctx->pc = 0x46a810u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 116)));
label_46a814:
    // 0x46a814: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x46a814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_46a818:
    // 0x46a818: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_46a81c:
    if (ctx->pc == 0x46A81Cu) {
        ctx->pc = 0x46A81Cu;
            // 0x46a81c: 0x24960070  addiu       $s6, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->pc = 0x46A820u;
        goto label_46a820;
    }
    ctx->pc = 0x46A818u;
    {
        const bool branch_taken_0x46a818 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x46A81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46A818u;
            // 0x46a81c: 0x24960070  addiu       $s6, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a818) {
            ctx->pc = 0x46A848u;
            goto label_46a848;
        }
    }
    ctx->pc = 0x46A820u;
label_46a820:
    // 0x46a820: 0xa6c00004  sh          $zero, 0x4($s6)
    ctx->pc = 0x46a820u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 4), (uint16_t)GPR_U32(ctx, 0));
label_46a824:
    // 0x46a824: 0x96c20006  lhu         $v0, 0x6($s6)
    ctx->pc = 0x46a824u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
label_46a828:
    // 0x46a828: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46a828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46a82c:
    // 0x46a82c: 0xa6c20006  sh          $v0, 0x6($s6)
    ctx->pc = 0x46a82cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 6), (uint16_t)GPR_U32(ctx, 2));
label_46a830:
    // 0x46a830: 0x96c20006  lhu         $v0, 0x6($s6)
    ctx->pc = 0x46a830u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
label_46a834:
    // 0x46a834: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x46a834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_46a838:
    // 0x46a838: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_46a83c:
    if (ctx->pc == 0x46A83Cu) {
        ctx->pc = 0x46A83Cu;
            // 0x46a83c: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x46A840u;
        goto label_46a840;
    }
    ctx->pc = 0x46A838u;
    {
        const bool branch_taken_0x46a838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46a838) {
            ctx->pc = 0x46A83Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A838u;
            // 0x46a83c: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A84Cu;
            goto label_46a84c;
        }
    }
    ctx->pc = 0x46A840u;
label_46a840:
    // 0x46a840: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x46a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_46a844:
    // 0x46a844: 0xa6c20006  sh          $v0, 0x6($s6)
    ctx->pc = 0x46a844u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 6), (uint16_t)GPR_U32(ctx, 2));
label_46a848:
    // 0x46a848: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x46a848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_46a84c:
    // 0x46a84c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x46a84cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_46a850:
    // 0x46a850: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x46a850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_46a854:
    // 0x46a854: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x46a854u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_46a858:
    // 0x46a858: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x46a858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46a85c:
    // 0x46a85c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x46a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_46a860:
    // 0x46a860: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x46a860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_46a864:
    // 0x46a864: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x46a864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_46a868:
    // 0x46a868: 0x2463c0c0  addiu       $v1, $v1, -0x3F40
    ctx->pc = 0x46a868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951104));
label_46a86c:
    // 0x46a86c: 0x24b70023  addiu       $s7, $a1, 0x23
    ctx->pc = 0x46a86cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 35));
label_46a870:
    // 0x46a870: 0x24be0029  addiu       $fp, $a1, 0x29
    ctx->pc = 0x46a870u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 41));
label_46a874:
    // 0x46a874: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x46a874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_46a878:
    // 0x46a878: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x46a878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_46a87c:
    // 0x46a87c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x46a87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46a880:
    // 0x46a880: 0x24a2002f  addiu       $v0, $a1, 0x2F
    ctx->pc = 0x46a880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 47));
label_46a884:
    // 0x46a884: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x46a884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_46a888:
    // 0x46a888: 0x24a20035  addiu       $v0, $a1, 0x35
    ctx->pc = 0x46a888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 53));
label_46a88c:
    // 0x46a88c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x46a88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_46a890:
    // 0x46a890: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x46a890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_46a894:
    // 0x46a894: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x46a894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_46a898:
    // 0x46a898: 0xc0506ac  jal         func_141AB0
label_46a89c:
    if (ctx->pc == 0x46A89Cu) {
        ctx->pc = 0x46A89Cu;
            // 0x46a89c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x46A8A0u;
        goto label_46a8a0;
    }
    ctx->pc = 0x46A898u;
    SET_GPR_U32(ctx, 31, 0x46A8A0u);
    ctx->pc = 0x46A89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A898u;
            // 0x46a89c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A8A0u; }
        if (ctx->pc != 0x46A8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A8A0u; }
        if (ctx->pc != 0x46A8A0u) { return; }
    }
    ctx->pc = 0x46A8A0u;
label_46a8a0:
    // 0x46a8a0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x46a8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_46a8a4:
    // 0x46a8a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x46a8a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46a8a8:
    // 0x46a8a8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x46a8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46a8ac:
    // 0x46a8ac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x46a8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_46a8b0:
    // 0x46a8b0: 0x320f809  jalr        $t9
label_46a8b4:
    if (ctx->pc == 0x46A8B4u) {
        ctx->pc = 0x46A8B4u;
            // 0x46a8b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x46A8B8u;
        goto label_46a8b8;
    }
    ctx->pc = 0x46A8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46A8B8u);
        ctx->pc = 0x46A8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46A8B0u;
            // 0x46a8b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46A8B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46A8B8u; }
            if (ctx->pc != 0x46A8B8u) { return; }
        }
        }
    }
    ctx->pc = 0x46A8B8u;
label_46a8b8:
    // 0x46a8b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x46a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46a8bc:
    // 0x46a8bc: 0x3c03c180  lui         $v1, 0xC180
    ctx->pc = 0x46a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49536 << 16));
label_46a8c0:
    // 0x46a8c0: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x46a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_46a8c4:
    // 0x46a8c4: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x46a8c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_46a8c8:
    // 0x46a8c8: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x46a8c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_46a8cc:
    // 0x46a8cc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_46a8d0:
    if (ctx->pc == 0x46A8D0u) {
        ctx->pc = 0x46A8D0u;
            // 0x46a8d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A8D4u;
        goto label_46a8d4;
    }
    ctx->pc = 0x46A8CCu;
    {
        const bool branch_taken_0x46a8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a8cc) {
            ctx->pc = 0x46A8D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A8CCu;
            // 0x46a8d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A8E8u;
            goto label_46a8e8;
        }
    }
    ctx->pc = 0x46A8D4u;
label_46a8d4:
    // 0x46a8d4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x46a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_46a8d8:
    // 0x46a8d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x46a8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46a8dc:
    // 0x46a8dc: 0x0  nop
    ctx->pc = 0x46a8dcu;
    // NOP
label_46a8e0:
    // 0x46a8e0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x46a8e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_46a8e4:
    // 0x46a8e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x46a8e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46a8e8:
    // 0x46a8e8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x46a8e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_46a8ec:
    // 0x46a8ec: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x46a8ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_46a8f0:
    // 0x46a8f0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_46a8f4:
    if (ctx->pc == 0x46A8F4u) {
        ctx->pc = 0x46A8F8u;
        goto label_46a8f8;
    }
    ctx->pc = 0x46A8F0u;
    {
        const bool branch_taken_0x46a8f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a8f0) {
            ctx->pc = 0x46A960u;
            goto label_46a960;
        }
    }
    ctx->pc = 0x46A8F8u;
label_46a8f8:
    // 0x46a8f8: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x46a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46a8fc:
    // 0x46a8fc: 0x2773021  addu        $a2, $s3, $s7
    ctx->pc = 0x46a8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
label_46a900:
    // 0x46a900: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a904:
    // 0x46a904: 0xc123240  jal         func_48C900
label_46a908:
    if (ctx->pc == 0x46A908u) {
        ctx->pc = 0x46A908u;
            // 0x46a908: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->pc = 0x46A90Cu;
        goto label_46a90c;
    }
    ctx->pc = 0x46A904u;
    SET_GPR_U32(ctx, 31, 0x46A90Cu);
    ctx->pc = 0x46A908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A904u;
            // 0x46a908: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C900u;
    if (runtime->hasFunction(0x48C900u)) {
        auto targetFn = runtime->lookupFunction(0x48C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A90Cu; }
        if (ctx->pc != 0x46A90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C900_0x48c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A90Cu; }
        if (ctx->pc != 0x46A90Cu) { return; }
    }
    ctx->pc = 0x46A90Cu;
label_46a90c:
    // 0x46a90c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x46a90cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46a910:
    // 0x46a910: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x46a910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a914:
    // 0x46a914: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x46a914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_46a918:
    // 0x46a918: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x46a918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46a91c:
    // 0x46a91c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x46a91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46a920:
    // 0x46a920: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x46a920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46a924:
    // 0x46a924: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x46a924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_46a928:
    // 0x46a928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46a928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46a92c:
    // 0x46a92c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x46a92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46a930:
    // 0x46a930: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x46a930u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46a934:
    // 0x46a934: 0x0  nop
    ctx->pc = 0x46a934u;
    // NOP
label_46a938:
    // 0x46a938: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x46a938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_46a93c:
    // 0x46a93c: 0x46140b40  add.s       $f13, $f1, $f20
    ctx->pc = 0x46a93cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_46a940:
    // 0x46a940: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x46a940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46a944:
    // 0x46a944: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x46a944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_46a948:
    // 0x46a948: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x46a948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46a94c:
    // 0x46a94c: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x46a94cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_46a950:
    // 0x46a950: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x46a950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_46a954:
    // 0x46a954: 0xc0bc284  jal         func_2F0A10
label_46a958:
    if (ctx->pc == 0x46A958u) {
        ctx->pc = 0x46A958u;
            // 0x46a958: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->pc = 0x46A95Cu;
        goto label_46a95c;
    }
    ctx->pc = 0x46A954u;
    SET_GPR_U32(ctx, 31, 0x46A95Cu);
    ctx->pc = 0x46A958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A954u;
            // 0x46a958: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A95Cu; }
        if (ctx->pc != 0x46A95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A95Cu; }
        if (ctx->pc != 0x46A95Cu) { return; }
    }
    ctx->pc = 0x46A95Cu;
label_46a95c:
    // 0x46a95c: 0x0  nop
    ctx->pc = 0x46a95cu;
    // NOP
label_46a960:
    // 0x46a960: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x46a960u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_46a964:
    // 0x46a964: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x46a964u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_46a968:
    // 0x46a968: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_46a96c:
    if (ctx->pc == 0x46A96Cu) {
        ctx->pc = 0x46A970u;
        goto label_46a970;
    }
    ctx->pc = 0x46A968u;
    {
        const bool branch_taken_0x46a968 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a968) {
            ctx->pc = 0x46A9D8u;
            goto label_46a9d8;
        }
    }
    ctx->pc = 0x46A970u;
label_46a970:
    // 0x46a970: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x46a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46a974:
    // 0x46a974: 0x27e3021  addu        $a2, $s3, $fp
    ctx->pc = 0x46a974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
label_46a978:
    // 0x46a978: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a97c:
    // 0x46a97c: 0xc123240  jal         func_48C900
label_46a980:
    if (ctx->pc == 0x46A980u) {
        ctx->pc = 0x46A980u;
            // 0x46a980: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->pc = 0x46A984u;
        goto label_46a984;
    }
    ctx->pc = 0x46A97Cu;
    SET_GPR_U32(ctx, 31, 0x46A984u);
    ctx->pc = 0x46A980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A97Cu;
            // 0x46a980: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C900u;
    if (runtime->hasFunction(0x48C900u)) {
        auto targetFn = runtime->lookupFunction(0x48C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A984u; }
        if (ctx->pc != 0x46A984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C900_0x48c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A984u; }
        if (ctx->pc != 0x46A984u) { return; }
    }
    ctx->pc = 0x46A984u;
label_46a984:
    // 0x46a984: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x46a984u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46a988:
    // 0x46a988: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x46a988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a98c:
    // 0x46a98c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x46a98cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_46a990:
    // 0x46a990: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x46a990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46a994:
    // 0x46a994: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x46a994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46a998:
    // 0x46a998: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x46a998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46a99c:
    // 0x46a99c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x46a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_46a9a0:
    // 0x46a9a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46a9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46a9a4:
    // 0x46a9a4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x46a9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46a9a8:
    // 0x46a9a8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x46a9a8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46a9ac:
    // 0x46a9ac: 0x0  nop
    ctx->pc = 0x46a9acu;
    // NOP
label_46a9b0:
    // 0x46a9b0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x46a9b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_46a9b4:
    // 0x46a9b4: 0x46140b40  add.s       $f13, $f1, $f20
    ctx->pc = 0x46a9b4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_46a9b8:
    // 0x46a9b8: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x46a9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46a9bc:
    // 0x46a9bc: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x46a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_46a9c0:
    // 0x46a9c0: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x46a9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46a9c4:
    // 0x46a9c4: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x46a9c4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_46a9c8:
    // 0x46a9c8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x46a9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_46a9cc:
    // 0x46a9cc: 0xc0bc284  jal         func_2F0A10
label_46a9d0:
    if (ctx->pc == 0x46A9D0u) {
        ctx->pc = 0x46A9D0u;
            // 0x46a9d0: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->pc = 0x46A9D4u;
        goto label_46a9d4;
    }
    ctx->pc = 0x46A9CCu;
    SET_GPR_U32(ctx, 31, 0x46A9D4u);
    ctx->pc = 0x46A9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A9CCu;
            // 0x46a9d0: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A9D4u; }
        if (ctx->pc != 0x46A9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A9D4u; }
        if (ctx->pc != 0x46A9D4u) { return; }
    }
    ctx->pc = 0x46A9D4u;
label_46a9d4:
    // 0x46a9d4: 0x0  nop
    ctx->pc = 0x46a9d4u;
    // NOP
label_46a9d8:
    // 0x46a9d8: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x46a9d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_46a9dc:
    // 0x46a9dc: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x46a9dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_46a9e0:
    // 0x46a9e0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_46a9e4:
    if (ctx->pc == 0x46A9E4u) {
        ctx->pc = 0x46A9E8u;
        goto label_46a9e8;
    }
    ctx->pc = 0x46A9E0u;
    {
        const bool branch_taken_0x46a9e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a9e0) {
            ctx->pc = 0x46AA50u;
            goto label_46aa50;
        }
    }
    ctx->pc = 0x46A9E8u;
label_46a9e8:
    // 0x46a9e8: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x46a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46a9ec:
    // 0x46a9ec: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x46a9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_46a9f0:
    // 0x46a9f0: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x46a9f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_46a9f4:
    // 0x46a9f4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46a9f8:
    // 0x46a9f8: 0xc123240  jal         func_48C900
label_46a9fc:
    if (ctx->pc == 0x46A9FCu) {
        ctx->pc = 0x46A9FCu;
            // 0x46a9fc: 0x2623021  addu        $a2, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x46AA00u;
        goto label_46aa00;
    }
    ctx->pc = 0x46A9F8u;
    SET_GPR_U32(ctx, 31, 0x46AA00u);
    ctx->pc = 0x46A9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A9F8u;
            // 0x46a9fc: 0x2623021  addu        $a2, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C900u;
    if (runtime->hasFunction(0x48C900u)) {
        auto targetFn = runtime->lookupFunction(0x48C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AA00u; }
        if (ctx->pc != 0x46AA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C900_0x48c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AA00u; }
        if (ctx->pc != 0x46AA00u) { return; }
    }
    ctx->pc = 0x46AA00u;
label_46aa00:
    // 0x46aa00: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x46aa00u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46aa04:
    // 0x46aa04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x46aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46aa08:
    // 0x46aa08: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x46aa08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_46aa0c:
    // 0x46aa0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x46aa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46aa10:
    // 0x46aa10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x46aa10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46aa14:
    // 0x46aa14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x46aa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46aa18:
    // 0x46aa18: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x46aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_46aa1c:
    // 0x46aa1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46aa1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46aa20:
    // 0x46aa20: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x46aa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46aa24:
    // 0x46aa24: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x46aa24u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46aa28:
    // 0x46aa28: 0x0  nop
    ctx->pc = 0x46aa28u;
    // NOP
label_46aa2c:
    // 0x46aa2c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x46aa2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_46aa30:
    // 0x46aa30: 0x46140b40  add.s       $f13, $f1, $f20
    ctx->pc = 0x46aa30u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_46aa34:
    // 0x46aa34: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x46aa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46aa38:
    // 0x46aa38: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x46aa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_46aa3c:
    // 0x46aa3c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x46aa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46aa40:
    // 0x46aa40: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x46aa40u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_46aa44:
    // 0x46aa44: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x46aa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_46aa48:
    // 0x46aa48: 0xc0bc284  jal         func_2F0A10
label_46aa4c:
    if (ctx->pc == 0x46AA4Cu) {
        ctx->pc = 0x46AA4Cu;
            // 0x46aa4c: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->pc = 0x46AA50u;
        goto label_46aa50;
    }
    ctx->pc = 0x46AA48u;
    SET_GPR_U32(ctx, 31, 0x46AA50u);
    ctx->pc = 0x46AA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AA48u;
            // 0x46aa4c: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AA50u; }
        if (ctx->pc != 0x46AA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AA50u; }
        if (ctx->pc != 0x46AA50u) { return; }
    }
    ctx->pc = 0x46AA50u;
label_46aa50:
    // 0x46aa50: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x46aa50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_46aa54:
    // 0x46aa54: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x46aa54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_46aa58:
    // 0x46aa58: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_46aa5c:
    if (ctx->pc == 0x46AA5Cu) {
        ctx->pc = 0x46AA60u;
        goto label_46aa60;
    }
    ctx->pc = 0x46AA58u;
    {
        const bool branch_taken_0x46aa58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46aa58) {
            ctx->pc = 0x46AAC8u;
            goto label_46aac8;
        }
    }
    ctx->pc = 0x46AA60u;
label_46aa60:
    // 0x46aa60: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x46aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46aa64:
    // 0x46aa64: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x46aa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_46aa68:
    // 0x46aa68: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x46aa68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_46aa6c:
    // 0x46aa6c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46aa70:
    // 0x46aa70: 0xc123240  jal         func_48C900
label_46aa74:
    if (ctx->pc == 0x46AA74u) {
        ctx->pc = 0x46AA74u;
            // 0x46aa74: 0x2623021  addu        $a2, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x46AA78u;
        goto label_46aa78;
    }
    ctx->pc = 0x46AA70u;
    SET_GPR_U32(ctx, 31, 0x46AA78u);
    ctx->pc = 0x46AA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AA70u;
            // 0x46aa74: 0x2623021  addu        $a2, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C900u;
    if (runtime->hasFunction(0x48C900u)) {
        auto targetFn = runtime->lookupFunction(0x48C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AA78u; }
        if (ctx->pc != 0x46AA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C900_0x48c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AA78u; }
        if (ctx->pc != 0x46AA78u) { return; }
    }
    ctx->pc = 0x46AA78u;
label_46aa78:
    // 0x46aa78: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x46aa78u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46aa7c:
    // 0x46aa7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x46aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46aa80:
    // 0x46aa80: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x46aa80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_46aa84:
    // 0x46aa84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x46aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46aa88:
    // 0x46aa88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x46aa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46aa8c:
    // 0x46aa8c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x46aa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46aa90:
    // 0x46aa90: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x46aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_46aa94:
    // 0x46aa94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46aa94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46aa98:
    // 0x46aa98: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x46aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46aa9c:
    // 0x46aa9c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x46aa9cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46aaa0:
    // 0x46aaa0: 0x0  nop
    ctx->pc = 0x46aaa0u;
    // NOP
label_46aaa4:
    // 0x46aaa4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x46aaa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_46aaa8:
    // 0x46aaa8: 0x46140b40  add.s       $f13, $f1, $f20
    ctx->pc = 0x46aaa8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_46aaac:
    // 0x46aaac: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x46aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46aab0:
    // 0x46aab0: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x46aab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_46aab4:
    // 0x46aab4: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x46aab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46aab8:
    // 0x46aab8: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x46aab8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_46aabc:
    // 0x46aabc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x46aabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_46aac0:
    // 0x46aac0: 0xc0bc284  jal         func_2F0A10
label_46aac4:
    if (ctx->pc == 0x46AAC4u) {
        ctx->pc = 0x46AAC4u;
            // 0x46aac4: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->pc = 0x46AAC8u;
        goto label_46aac8;
    }
    ctx->pc = 0x46AAC0u;
    SET_GPR_U32(ctx, 31, 0x46AAC8u);
    ctx->pc = 0x46AAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AAC0u;
            // 0x46aac4: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AAC8u; }
        if (ctx->pc != 0x46AAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AAC8u; }
        if (ctx->pc != 0x46AAC8u) { return; }
    }
    ctx->pc = 0x46AAC8u;
label_46aac8:
    // 0x46aac8: 0x96c20006  lhu         $v0, 0x6($s6)
    ctx->pc = 0x46aac8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
label_46aacc:
    // 0x46aacc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x46aaccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_46aad0:
    // 0x46aad0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x46aad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_46aad4:
    // 0x46aad4: 0x5440ff85  bnel        $v0, $zero, . + 4 + (-0x7B << 2)
label_46aad8:
    if (ctx->pc == 0x46AAD8u) {
        ctx->pc = 0x46AAD8u;
            // 0x46aad8: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x46AADCu;
        goto label_46aadc;
    }
    ctx->pc = 0x46AAD4u;
    {
        const bool branch_taken_0x46aad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46aad4) {
            ctx->pc = 0x46AAD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46AAD4u;
            // 0x46aad8: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A8ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46a8ec;
        }
    }
    ctx->pc = 0x46AADCu;
label_46aadc:
    // 0x46aadc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x46aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_46aae0:
    // 0x46aae0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x46aae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46aae4:
    // 0x46aae4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x46aae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46aae8:
    // 0x46aae8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x46aae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_46aaec:
    // 0x46aaec: 0x320f809  jalr        $t9
label_46aaf0:
    if (ctx->pc == 0x46AAF0u) {
        ctx->pc = 0x46AAF4u;
        goto label_46aaf4;
    }
    ctx->pc = 0x46AAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46AAF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46AAF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46AAF4u; }
            if (ctx->pc != 0x46AAF4u) { return; }
        }
        }
    }
    ctx->pc = 0x46AAF4u;
label_46aaf4:
    // 0x46aaf4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x46aaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_46aaf8:
    // 0x46aaf8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x46aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_46aafc:
    // 0x46aafc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x46aafcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_46ab00:
    // 0x46ab00: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x46ab00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46ab04:
    // 0x46ab04: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x46ab04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46ab08:
    // 0x46ab08: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x46ab08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46ab0c:
    // 0x46ab0c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x46ab0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46ab10:
    // 0x46ab10: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x46ab10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46ab14:
    // 0x46ab14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x46ab14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46ab18:
    // 0x46ab18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x46ab18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46ab1c:
    // 0x46ab1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46ab1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46ab20:
    // 0x46ab20: 0x3e00008  jr          $ra
label_46ab24:
    if (ctx->pc == 0x46AB24u) {
        ctx->pc = 0x46AB24u;
            // 0x46ab24: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x46AB28u;
        goto label_46ab28;
    }
    ctx->pc = 0x46AB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46AB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46AB20u;
            // 0x46ab24: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46AB28u;
label_46ab28:
    // 0x46ab28: 0x0  nop
    ctx->pc = 0x46ab28u;
    // NOP
label_46ab2c:
    // 0x46ab2c: 0x0  nop
    ctx->pc = 0x46ab2cu;
    // NOP
}
