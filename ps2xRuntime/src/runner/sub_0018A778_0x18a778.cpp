#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A778
// Address: 0x18a778 - 0x18ab28
void sub_0018A778_0x18a778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A778_0x18a778");
#endif

    switch (ctx->pc) {
        case 0x18a778u: goto label_18a778;
        case 0x18a77cu: goto label_18a77c;
        case 0x18a780u: goto label_18a780;
        case 0x18a784u: goto label_18a784;
        case 0x18a788u: goto label_18a788;
        case 0x18a78cu: goto label_18a78c;
        case 0x18a790u: goto label_18a790;
        case 0x18a794u: goto label_18a794;
        case 0x18a798u: goto label_18a798;
        case 0x18a79cu: goto label_18a79c;
        case 0x18a7a0u: goto label_18a7a0;
        case 0x18a7a4u: goto label_18a7a4;
        case 0x18a7a8u: goto label_18a7a8;
        case 0x18a7acu: goto label_18a7ac;
        case 0x18a7b0u: goto label_18a7b0;
        case 0x18a7b4u: goto label_18a7b4;
        case 0x18a7b8u: goto label_18a7b8;
        case 0x18a7bcu: goto label_18a7bc;
        case 0x18a7c0u: goto label_18a7c0;
        case 0x18a7c4u: goto label_18a7c4;
        case 0x18a7c8u: goto label_18a7c8;
        case 0x18a7ccu: goto label_18a7cc;
        case 0x18a7d0u: goto label_18a7d0;
        case 0x18a7d4u: goto label_18a7d4;
        case 0x18a7d8u: goto label_18a7d8;
        case 0x18a7dcu: goto label_18a7dc;
        case 0x18a7e0u: goto label_18a7e0;
        case 0x18a7e4u: goto label_18a7e4;
        case 0x18a7e8u: goto label_18a7e8;
        case 0x18a7ecu: goto label_18a7ec;
        case 0x18a7f0u: goto label_18a7f0;
        case 0x18a7f4u: goto label_18a7f4;
        case 0x18a7f8u: goto label_18a7f8;
        case 0x18a7fcu: goto label_18a7fc;
        case 0x18a800u: goto label_18a800;
        case 0x18a804u: goto label_18a804;
        case 0x18a808u: goto label_18a808;
        case 0x18a80cu: goto label_18a80c;
        case 0x18a810u: goto label_18a810;
        case 0x18a814u: goto label_18a814;
        case 0x18a818u: goto label_18a818;
        case 0x18a81cu: goto label_18a81c;
        case 0x18a820u: goto label_18a820;
        case 0x18a824u: goto label_18a824;
        case 0x18a828u: goto label_18a828;
        case 0x18a82cu: goto label_18a82c;
        case 0x18a830u: goto label_18a830;
        case 0x18a834u: goto label_18a834;
        case 0x18a838u: goto label_18a838;
        case 0x18a83cu: goto label_18a83c;
        case 0x18a840u: goto label_18a840;
        case 0x18a844u: goto label_18a844;
        case 0x18a848u: goto label_18a848;
        case 0x18a84cu: goto label_18a84c;
        case 0x18a850u: goto label_18a850;
        case 0x18a854u: goto label_18a854;
        case 0x18a858u: goto label_18a858;
        case 0x18a85cu: goto label_18a85c;
        case 0x18a860u: goto label_18a860;
        case 0x18a864u: goto label_18a864;
        case 0x18a868u: goto label_18a868;
        case 0x18a86cu: goto label_18a86c;
        case 0x18a870u: goto label_18a870;
        case 0x18a874u: goto label_18a874;
        case 0x18a878u: goto label_18a878;
        case 0x18a87cu: goto label_18a87c;
        case 0x18a880u: goto label_18a880;
        case 0x18a884u: goto label_18a884;
        case 0x18a888u: goto label_18a888;
        case 0x18a88cu: goto label_18a88c;
        case 0x18a890u: goto label_18a890;
        case 0x18a894u: goto label_18a894;
        case 0x18a898u: goto label_18a898;
        case 0x18a89cu: goto label_18a89c;
        case 0x18a8a0u: goto label_18a8a0;
        case 0x18a8a4u: goto label_18a8a4;
        case 0x18a8a8u: goto label_18a8a8;
        case 0x18a8acu: goto label_18a8ac;
        case 0x18a8b0u: goto label_18a8b0;
        case 0x18a8b4u: goto label_18a8b4;
        case 0x18a8b8u: goto label_18a8b8;
        case 0x18a8bcu: goto label_18a8bc;
        case 0x18a8c0u: goto label_18a8c0;
        case 0x18a8c4u: goto label_18a8c4;
        case 0x18a8c8u: goto label_18a8c8;
        case 0x18a8ccu: goto label_18a8cc;
        case 0x18a8d0u: goto label_18a8d0;
        case 0x18a8d4u: goto label_18a8d4;
        case 0x18a8d8u: goto label_18a8d8;
        case 0x18a8dcu: goto label_18a8dc;
        case 0x18a8e0u: goto label_18a8e0;
        case 0x18a8e4u: goto label_18a8e4;
        case 0x18a8e8u: goto label_18a8e8;
        case 0x18a8ecu: goto label_18a8ec;
        case 0x18a8f0u: goto label_18a8f0;
        case 0x18a8f4u: goto label_18a8f4;
        case 0x18a8f8u: goto label_18a8f8;
        case 0x18a8fcu: goto label_18a8fc;
        case 0x18a900u: goto label_18a900;
        case 0x18a904u: goto label_18a904;
        case 0x18a908u: goto label_18a908;
        case 0x18a90cu: goto label_18a90c;
        case 0x18a910u: goto label_18a910;
        case 0x18a914u: goto label_18a914;
        case 0x18a918u: goto label_18a918;
        case 0x18a91cu: goto label_18a91c;
        case 0x18a920u: goto label_18a920;
        case 0x18a924u: goto label_18a924;
        case 0x18a928u: goto label_18a928;
        case 0x18a92cu: goto label_18a92c;
        case 0x18a930u: goto label_18a930;
        case 0x18a934u: goto label_18a934;
        case 0x18a938u: goto label_18a938;
        case 0x18a93cu: goto label_18a93c;
        case 0x18a940u: goto label_18a940;
        case 0x18a944u: goto label_18a944;
        case 0x18a948u: goto label_18a948;
        case 0x18a94cu: goto label_18a94c;
        case 0x18a950u: goto label_18a950;
        case 0x18a954u: goto label_18a954;
        case 0x18a958u: goto label_18a958;
        case 0x18a95cu: goto label_18a95c;
        case 0x18a960u: goto label_18a960;
        case 0x18a964u: goto label_18a964;
        case 0x18a968u: goto label_18a968;
        case 0x18a96cu: goto label_18a96c;
        case 0x18a970u: goto label_18a970;
        case 0x18a974u: goto label_18a974;
        case 0x18a978u: goto label_18a978;
        case 0x18a97cu: goto label_18a97c;
        case 0x18a980u: goto label_18a980;
        case 0x18a984u: goto label_18a984;
        case 0x18a988u: goto label_18a988;
        case 0x18a98cu: goto label_18a98c;
        case 0x18a990u: goto label_18a990;
        case 0x18a994u: goto label_18a994;
        case 0x18a998u: goto label_18a998;
        case 0x18a99cu: goto label_18a99c;
        case 0x18a9a0u: goto label_18a9a0;
        case 0x18a9a4u: goto label_18a9a4;
        case 0x18a9a8u: goto label_18a9a8;
        case 0x18a9acu: goto label_18a9ac;
        case 0x18a9b0u: goto label_18a9b0;
        case 0x18a9b4u: goto label_18a9b4;
        case 0x18a9b8u: goto label_18a9b8;
        case 0x18a9bcu: goto label_18a9bc;
        case 0x18a9c0u: goto label_18a9c0;
        case 0x18a9c4u: goto label_18a9c4;
        case 0x18a9c8u: goto label_18a9c8;
        case 0x18a9ccu: goto label_18a9cc;
        case 0x18a9d0u: goto label_18a9d0;
        case 0x18a9d4u: goto label_18a9d4;
        case 0x18a9d8u: goto label_18a9d8;
        case 0x18a9dcu: goto label_18a9dc;
        case 0x18a9e0u: goto label_18a9e0;
        case 0x18a9e4u: goto label_18a9e4;
        case 0x18a9e8u: goto label_18a9e8;
        case 0x18a9ecu: goto label_18a9ec;
        case 0x18a9f0u: goto label_18a9f0;
        case 0x18a9f4u: goto label_18a9f4;
        case 0x18a9f8u: goto label_18a9f8;
        case 0x18a9fcu: goto label_18a9fc;
        case 0x18aa00u: goto label_18aa00;
        case 0x18aa04u: goto label_18aa04;
        case 0x18aa08u: goto label_18aa08;
        case 0x18aa0cu: goto label_18aa0c;
        case 0x18aa10u: goto label_18aa10;
        case 0x18aa14u: goto label_18aa14;
        case 0x18aa18u: goto label_18aa18;
        case 0x18aa1cu: goto label_18aa1c;
        case 0x18aa20u: goto label_18aa20;
        case 0x18aa24u: goto label_18aa24;
        case 0x18aa28u: goto label_18aa28;
        case 0x18aa2cu: goto label_18aa2c;
        case 0x18aa30u: goto label_18aa30;
        case 0x18aa34u: goto label_18aa34;
        case 0x18aa38u: goto label_18aa38;
        case 0x18aa3cu: goto label_18aa3c;
        case 0x18aa40u: goto label_18aa40;
        case 0x18aa44u: goto label_18aa44;
        case 0x18aa48u: goto label_18aa48;
        case 0x18aa4cu: goto label_18aa4c;
        case 0x18aa50u: goto label_18aa50;
        case 0x18aa54u: goto label_18aa54;
        case 0x18aa58u: goto label_18aa58;
        case 0x18aa5cu: goto label_18aa5c;
        case 0x18aa60u: goto label_18aa60;
        case 0x18aa64u: goto label_18aa64;
        case 0x18aa68u: goto label_18aa68;
        case 0x18aa6cu: goto label_18aa6c;
        case 0x18aa70u: goto label_18aa70;
        case 0x18aa74u: goto label_18aa74;
        case 0x18aa78u: goto label_18aa78;
        case 0x18aa7cu: goto label_18aa7c;
        case 0x18aa80u: goto label_18aa80;
        case 0x18aa84u: goto label_18aa84;
        case 0x18aa88u: goto label_18aa88;
        case 0x18aa8cu: goto label_18aa8c;
        case 0x18aa90u: goto label_18aa90;
        case 0x18aa94u: goto label_18aa94;
        case 0x18aa98u: goto label_18aa98;
        case 0x18aa9cu: goto label_18aa9c;
        case 0x18aaa0u: goto label_18aaa0;
        case 0x18aaa4u: goto label_18aaa4;
        case 0x18aaa8u: goto label_18aaa8;
        case 0x18aaacu: goto label_18aaac;
        case 0x18aab0u: goto label_18aab0;
        case 0x18aab4u: goto label_18aab4;
        case 0x18aab8u: goto label_18aab8;
        case 0x18aabcu: goto label_18aabc;
        case 0x18aac0u: goto label_18aac0;
        case 0x18aac4u: goto label_18aac4;
        case 0x18aac8u: goto label_18aac8;
        case 0x18aaccu: goto label_18aacc;
        case 0x18aad0u: goto label_18aad0;
        case 0x18aad4u: goto label_18aad4;
        case 0x18aad8u: goto label_18aad8;
        case 0x18aadcu: goto label_18aadc;
        case 0x18aae0u: goto label_18aae0;
        case 0x18aae4u: goto label_18aae4;
        case 0x18aae8u: goto label_18aae8;
        case 0x18aaecu: goto label_18aaec;
        case 0x18aaf0u: goto label_18aaf0;
        case 0x18aaf4u: goto label_18aaf4;
        case 0x18aaf8u: goto label_18aaf8;
        case 0x18aafcu: goto label_18aafc;
        case 0x18ab00u: goto label_18ab00;
        case 0x18ab04u: goto label_18ab04;
        case 0x18ab08u: goto label_18ab08;
        case 0x18ab0cu: goto label_18ab0c;
        case 0x18ab10u: goto label_18ab10;
        case 0x18ab14u: goto label_18ab14;
        case 0x18ab18u: goto label_18ab18;
        case 0x18ab1cu: goto label_18ab1c;
        case 0x18ab20u: goto label_18ab20;
        case 0x18ab24u: goto label_18ab24;
        default: break;
    }

    ctx->pc = 0x18a778u;

label_18a778:
    // 0x18a778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a77c:
    // 0x18a77c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x18a77cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18a780:
    // 0x18a780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18a784:
    // 0x18a784: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_18a788:
    if (ctx->pc == 0x18A788u) {
        ctx->pc = 0x18A788u;
            // 0x18a788: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x18A78Cu;
        goto label_18a78c;
    }
    ctx->pc = 0x18A784u;
    {
        const bool branch_taken_0x18a784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A784u;
            // 0x18a788: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a784) {
            ctx->pc = 0x18A7A0u;
            goto label_18a7a0;
        }
    }
    ctx->pc = 0x18A78Cu;
label_18a78c:
    // 0x18a78c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18a790:
    // 0x18a790: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_18a794:
    if (ctx->pc == 0x18A794u) {
        ctx->pc = 0x18A794u;
            // 0x18a794: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x18A798u;
        goto label_18a798;
    }
    ctx->pc = 0x18A790u;
    {
        const bool branch_taken_0x18a790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a790) {
            ctx->pc = 0x18A794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A790u;
            // 0x18a794: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A7A4u;
            goto label_18a7a4;
        }
    }
    ctx->pc = 0x18A798u;
label_18a798:
    // 0x18a798: 0x40f809  jalr        $v0
label_18a79c:
    if (ctx->pc == 0x18A79Cu) {
        ctx->pc = 0x18A79Cu;
            // 0x18a79c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x18A7A0u;
        goto label_18a7a0;
    }
    ctx->pc = 0x18A798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A7A0u);
        ctx->pc = 0x18A79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A798u;
            // 0x18a79c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A7A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A7A0u; }
            if (ctx->pc != 0x18A7A0u) { return; }
        }
        }
    }
    ctx->pc = 0x18A7A0u;
label_18a7a0:
    // 0x18a7a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a7a4:
    // 0x18a7a4: 0x3e00008  jr          $ra
label_18a7a8:
    if (ctx->pc == 0x18A7A8u) {
        ctx->pc = 0x18A7A8u;
            // 0x18a7a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A7ACu;
        goto label_18a7ac;
    }
    ctx->pc = 0x18A7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A7A4u;
            // 0x18a7a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A7ACu;
label_18a7ac:
    // 0x18a7ac: 0x0  nop
    ctx->pc = 0x18a7acu;
    // NOP
label_18a7b0:
    // 0x18a7b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18a7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18a7b4:
    // 0x18a7b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18a7b8:
    // 0x18a7b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18a7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18a7bc:
    // 0x18a7bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18a7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_18a7c0:
    // 0x18a7c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18a7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18a7c4:
    // 0x18a7c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18a7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_18a7c8:
    // 0x18a7c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18a7cc:
    // 0x18a7cc: 0xc064076  jal         func_1901D8
label_18a7d0:
    if (ctx->pc == 0x18A7D0u) {
        ctx->pc = 0x18A7D0u;
            // 0x18a7d0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18A7D4u;
        goto label_18a7d4;
    }
    ctx->pc = 0x18A7CCu;
    SET_GPR_U32(ctx, 31, 0x18A7D4u);
    ctx->pc = 0x18A7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A7CCu;
            // 0x18a7d0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1901D8u;
    if (runtime->hasFunction(0x1901D8u)) {
        auto targetFn = runtime->lookupFunction(0x1901D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A7D4u; }
        if (ctx->pc != 0x18A7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001901D8_0x1901d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A7D4u; }
        if (ctx->pc != 0x18A7D4u) { return; }
    }
    ctx->pc = 0x18A7D4u;
label_18a7d4:
    // 0x18a7d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_18a7d8:
    if (ctx->pc == 0x18A7D8u) {
        ctx->pc = 0x18A7D8u;
            // 0x18a7d8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x18A7DCu;
        goto label_18a7dc;
    }
    ctx->pc = 0x18A7D4u;
    {
        const bool branch_taken_0x18a7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A7D4u;
            // 0x18a7d8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7d4) {
            ctx->pc = 0x18A800u;
            goto label_18a800;
        }
    }
    ctx->pc = 0x18A7DCu;
label_18a7dc:
    // 0x18a7dc: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x18a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_18a7e0:
    // 0x18a7e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a7e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a7e4:
    // 0x18a7e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a7e8:
    // 0x18a7e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18a7e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18a7ec:
    // 0x18a7ec: 0x34a5020a  ori         $a1, $a1, 0x20A
    ctx->pc = 0x18a7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)522);
label_18a7f0:
    // 0x18a7f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18a7f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18a7f4:
    // 0x18a7f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18a7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18a7f8:
    // 0x18a7f8: 0x80629ca  j           func_18A728
label_18a7fc:
    if (ctx->pc == 0x18A7FCu) {
        ctx->pc = 0x18A7FCu;
            // 0x18a7fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x18A800u;
        goto label_18a800;
    }
    ctx->pc = 0x18A7F8u;
    ctx->pc = 0x18A7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A7F8u;
            // 0x18a7fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A728u;
    {
        auto targetFn = runtime->lookupFunction(0x18A728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x18A800u;
label_18a800:
    // 0x18a800: 0x3c11ff03  lui         $s1, 0xFF03
    ctx->pc = 0x18a800u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65283 << 16));
label_18a804:
    // 0x18a804: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x18a804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18a808:
    // 0x18a808: 0x36310305  ori         $s1, $s1, 0x305
    ctx->pc = 0x18a808u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)773);
label_18a80c:
    // 0x18a80c: 0x0  nop
    ctx->pc = 0x18a80cu;
    // NOP
label_18a810:
    // 0x18a810: 0xc0656ca  jal         func_195B28
label_18a814:
    if (ctx->pc == 0x18A814u) {
        ctx->pc = 0x18A814u;
            // 0x18a814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18A818u;
        goto label_18a818;
    }
    ctx->pc = 0x18A810u;
    SET_GPR_U32(ctx, 31, 0x18A818u);
    ctx->pc = 0x18A814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A810u;
            // 0x18a814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195B28u;
    if (runtime->hasFunction(0x195B28u)) {
        auto targetFn = runtime->lookupFunction(0x195B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A818u; }
        if (ctx->pc != 0x18A818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195B28_0x195b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A818u; }
        if (ctx->pc != 0x18A818u) { return; }
    }
    ctx->pc = 0x18A818u;
label_18a818:
    // 0x18a818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18a81c:
    // 0x18a81c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a820:
    // 0x18a820: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18a820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18a824:
    // 0x18a824: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18a828:
    if (ctx->pc == 0x18A828u) {
        ctx->pc = 0x18A828u;
            // 0x18a828: 0x304300cc  andi        $v1, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)204);
        ctx->pc = 0x18A82Cu;
        goto label_18a82c;
    }
    ctx->pc = 0x18A824u;
    {
        const bool branch_taken_0x18a824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A824u;
            // 0x18a828: 0x304300cc  andi        $v1, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)204);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a824) {
            ctx->pc = 0x18A844u;
            goto label_18a844;
        }
    }
    ctx->pc = 0x18A82Cu;
label_18a82c:
    // 0x18a82c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_18a830:
    if (ctx->pc == 0x18A830u) {
        ctx->pc = 0x18A830u;
            // 0x18a830: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18A834u;
        goto label_18a834;
    }
    ctx->pc = 0x18A82Cu;
    {
        const bool branch_taken_0x18a82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a82c) {
            ctx->pc = 0x18A830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A82Cu;
            // 0x18a830: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A844u;
            goto label_18a844;
        }
    }
    ctx->pc = 0x18A834u;
label_18a834:
    // 0x18a834: 0xc065754  jal         func_195D50
label_18a838:
    if (ctx->pc == 0x18A838u) {
        ctx->pc = 0x18A83Cu;
        goto label_18a83c;
    }
    ctx->pc = 0x18A834u;
    SET_GPR_U32(ctx, 31, 0x18A83Cu);
    ctx->pc = 0x195D50u;
    if (runtime->hasFunction(0x195D50u)) {
        auto targetFn = runtime->lookupFunction(0x195D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A83Cu; }
        if (ctx->pc != 0x18A83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195D50_0x195d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A83Cu; }
        if (ctx->pc != 0x18A83Cu) { return; }
    }
    ctx->pc = 0x18A83Cu;
label_18a83c:
    // 0x18a83c: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
label_18a840:
    if (ctx->pc == 0x18A840u) {
        ctx->pc = 0x18A844u;
        goto label_18a844;
    }
    ctx->pc = 0x18A83Cu;
    {
        const bool branch_taken_0x18a83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x18a83c) {
            ctx->pc = 0x18A810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a810;
        }
    }
    ctx->pc = 0x18A844u;
label_18a844:
    // 0x18a844: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18a844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18a848:
    // 0x18a848: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18a848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18a84c:
    // 0x18a84c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18a84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18a850:
    // 0x18a850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18a854:
    // 0x18a854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a858:
    // 0x18a858: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18a858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18a85c:
    // 0x18a85c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18a85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18a860:
    // 0x18a860: 0x80629ca  j           func_18A728
label_18a864:
    if (ctx->pc == 0x18A864u) {
        ctx->pc = 0x18A864u;
            // 0x18a864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x18A868u;
        goto label_18a868;
    }
    ctx->pc = 0x18A860u;
    ctx->pc = 0x18A864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A860u;
            // 0x18a864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A728u;
    {
        auto targetFn = runtime->lookupFunction(0x18A728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x18A868u;
label_18a868:
    // 0x18a868: 0x3e00008  jr          $ra
label_18a86c:
    if (ctx->pc == 0x18A86Cu) {
        ctx->pc = 0x18A870u;
        goto label_18a870;
    }
    ctx->pc = 0x18A868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A870u;
label_18a870:
    // 0x18a870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a874:
    // 0x18a874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18a878:
    // 0x18a878: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18a878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18a87c:
    // 0x18a87c: 0xc064076  jal         func_1901D8
label_18a880:
    if (ctx->pc == 0x18A880u) {
        ctx->pc = 0x18A880u;
            // 0x18a880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18A884u;
        goto label_18a884;
    }
    ctx->pc = 0x18A87Cu;
    SET_GPR_U32(ctx, 31, 0x18A884u);
    ctx->pc = 0x18A880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A87Cu;
            // 0x18a880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1901D8u;
    if (runtime->hasFunction(0x1901D8u)) {
        auto targetFn = runtime->lookupFunction(0x1901D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A884u; }
        if (ctx->pc != 0x18A884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001901D8_0x1901d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A884u; }
        if (ctx->pc != 0x18A884u) { return; }
    }
    ctx->pc = 0x18A884u;
label_18a884:
    // 0x18a884: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x18a884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_18a888:
    // 0x18a888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a88c:
    // 0x18a88c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_18a890:
    if (ctx->pc == 0x18A890u) {
        ctx->pc = 0x18A890u;
            // 0x18a890: 0x34a50210  ori         $a1, $a1, 0x210 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)528);
        ctx->pc = 0x18A894u;
        goto label_18a894;
    }
    ctx->pc = 0x18A88Cu;
    {
        const bool branch_taken_0x18a88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A88Cu;
            // 0x18a890: 0x34a50210  ori         $a1, $a1, 0x210 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)528);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a88c) {
            ctx->pc = 0x18A8A8u;
            goto label_18a8a8;
        }
    }
    ctx->pc = 0x18A894u;
label_18a894:
    // 0x18a894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a898:
    // 0x18a898: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18a898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18a89c:
    // 0x18a89c: 0x80629ca  j           func_18A728
label_18a8a0:
    if (ctx->pc == 0x18A8A0u) {
        ctx->pc = 0x18A8A0u;
            // 0x18a8a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A8A4u;
        goto label_18a8a4;
    }
    ctx->pc = 0x18A89Cu;
    ctx->pc = 0x18A8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A89Cu;
            // 0x18a8a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A728u;
    {
        auto targetFn = runtime->lookupFunction(0x18A728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x18A8A4u;
label_18a8a4:
    // 0x18a8a4: 0x0  nop
    ctx->pc = 0x18a8a4u;
    // NOP
label_18a8a8:
    // 0x18a8a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a8ac:
    // 0x18a8ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18a8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18a8b0:
    // 0x18a8b0: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x18a8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_18a8b4:
    // 0x18a8b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a8b8:
    // 0x18a8b8: 0x3e00008  jr          $ra
label_18a8bc:
    if (ctx->pc == 0x18A8BCu) {
        ctx->pc = 0x18A8BCu;
            // 0x18a8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A8C0u;
        goto label_18a8c0;
    }
    ctx->pc = 0x18A8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A8B8u;
            // 0x18a8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A8C0u;
label_18a8c0:
    // 0x18a8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18a8c4:
    // 0x18a8c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18a8c8:
    // 0x18a8c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18a8cc:
    // 0x18a8cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18a8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18a8d0:
    // 0x18a8d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18a8d4:
    // 0x18a8d4: 0xc064076  jal         func_1901D8
label_18a8d8:
    if (ctx->pc == 0x18A8D8u) {
        ctx->pc = 0x18A8D8u;
            // 0x18a8d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18A8DCu;
        goto label_18a8dc;
    }
    ctx->pc = 0x18A8D4u;
    SET_GPR_U32(ctx, 31, 0x18A8DCu);
    ctx->pc = 0x18A8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A8D4u;
            // 0x18a8d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1901D8u;
    if (runtime->hasFunction(0x1901D8u)) {
        auto targetFn = runtime->lookupFunction(0x1901D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A8DCu; }
        if (ctx->pc != 0x18A8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001901D8_0x1901d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A8DCu; }
        if (ctx->pc != 0x18A8DCu) { return; }
    }
    ctx->pc = 0x18A8DCu;
label_18a8dc:
    // 0x18a8dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18a8e0:
    if (ctx->pc == 0x18A8E0u) {
        ctx->pc = 0x18A8E0u;
            // 0x18a8e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18A8E4u;
        goto label_18a8e4;
    }
    ctx->pc = 0x18A8DCu;
    {
        const bool branch_taken_0x18a8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A8DCu;
            // 0x18a8e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8dc) {
            ctx->pc = 0x18A900u;
            goto label_18a900;
        }
    }
    ctx->pc = 0x18A8E4u;
label_18a8e4:
    // 0x18a8e4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x18a8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_18a8e8:
    // 0x18a8e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a8ec:
    // 0x18a8ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a8ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18a8f0:
    // 0x18a8f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18a8f4:
    // 0x18a8f4: 0x34a5020c  ori         $a1, $a1, 0x20C
    ctx->pc = 0x18a8f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
label_18a8f8:
    // 0x18a8f8: 0x80629ca  j           func_18A728
label_18a8fc:
    if (ctx->pc == 0x18A8FCu) {
        ctx->pc = 0x18A8FCu;
            // 0x18a8fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x18A900u;
        goto label_18a900;
    }
    ctx->pc = 0x18A8F8u;
    ctx->pc = 0x18A8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A8F8u;
            // 0x18a8fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A728u;
    {
        auto targetFn = runtime->lookupFunction(0x18A728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x18A900u;
label_18a900:
    // 0x18a900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18a900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18a904:
    // 0x18a904: 0x26030064  addiu       $v1, $s0, 0x64
    ctx->pc = 0x18a904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_18a908:
    // 0x18a908: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x18a908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_18a90c:
    // 0x18a90c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x18a90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_18a910:
    // 0x18a910: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_18a914:
    if (ctx->pc == 0x18A914u) {
        ctx->pc = 0x18A914u;
            // 0x18a914: 0x260400e4  addiu       $a0, $s0, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
        ctx->pc = 0x18A918u;
        goto label_18a918;
    }
    ctx->pc = 0x18A910u;
    {
        const bool branch_taken_0x18a910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A910u;
            // 0x18a914: 0x260400e4  addiu       $a0, $s0, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a910) {
            ctx->pc = 0x18A978u;
            goto label_18a978;
        }
    }
    ctx->pc = 0x18A918u;
label_18a918:
    // 0x18a918: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x18a918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_18a91c:
    // 0x18a91c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x18a91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_18a920:
    // 0x18a920: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x18a920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_18a924:
    // 0x18a924: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x18a924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_18a928:
    // 0x18a928: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x18a928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_18a92c:
    // 0x18a92c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x18a92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_18a930:
    // 0x18a930: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x18a930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_18a934:
    // 0x18a934: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x18a934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_18a938:
    // 0x18a938: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x18a938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a93c:
    // 0x18a93c: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x18a93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a940:
    // 0x18a940: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x18a940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a944:
    // 0x18a944: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x18a944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a948:
    // 0x18a948: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x18a948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a94c:
    // 0x18a94c: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x18a94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a950:
    // 0x18a950: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x18a950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a954:
    // 0x18a954: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x18a954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18a958:
    // 0x18a958: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x18a958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_18a95c:
    // 0x18a95c: 0x0  nop
    ctx->pc = 0x18a95cu;
    // NOP
label_18a960:
    // 0x18a960: 0x0  nop
    ctx->pc = 0x18a960u;
    // NOP
label_18a964:
    // 0x18a964: 0x1464ffec  bne         $v1, $a0, . + 4 + (-0x14 << 2)
label_18a968:
    if (ctx->pc == 0x18A968u) {
        ctx->pc = 0x18A968u;
            // 0x18a968: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x18A96Cu;
        goto label_18a96c;
    }
    ctx->pc = 0x18A964u;
    {
        const bool branch_taken_0x18a964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18A968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A964u;
            // 0x18a968: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a964) {
            ctx->pc = 0x18A918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a918;
        }
    }
    ctx->pc = 0x18A96Cu;
label_18a96c:
    // 0x18a96c: 0x10000010  b           . + 4 + (0x10 << 2)
label_18a970:
    if (ctx->pc == 0x18A970u) {
        ctx->pc = 0x18A970u;
            // 0x18a970: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x18A974u;
        goto label_18a974;
    }
    ctx->pc = 0x18A96Cu;
    {
        const bool branch_taken_0x18a96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A96Cu;
            // 0x18a970: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a96c) {
            ctx->pc = 0x18A9B0u;
            goto label_18a9b0;
        }
    }
    ctx->pc = 0x18A974u;
label_18a974:
    // 0x18a974: 0x0  nop
    ctx->pc = 0x18a974u;
    // NOP
label_18a978:
    // 0x18a978: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x18a978u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_18a97c:
    // 0x18a97c: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x18a97cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_18a980:
    // 0x18a980: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x18a980u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_18a984:
    // 0x18a984: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x18a984u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_18a988:
    // 0x18a988: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x18a988u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_18a98c:
    // 0x18a98c: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x18a98cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
label_18a990:
    // 0x18a990: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x18a990u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_18a994:
    // 0x18a994: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x18a994u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
label_18a998:
    // 0x18a998: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x18a998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_18a99c:
    // 0x18a99c: 0x0  nop
    ctx->pc = 0x18a99cu;
    // NOP
label_18a9a0:
    // 0x18a9a0: 0x0  nop
    ctx->pc = 0x18a9a0u;
    // NOP
label_18a9a4:
    // 0x18a9a4: 0x1464fff4  bne         $v1, $a0, . + 4 + (-0xC << 2)
label_18a9a8:
    if (ctx->pc == 0x18A9A8u) {
        ctx->pc = 0x18A9A8u;
            // 0x18a9a8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x18A9ACu;
        goto label_18a9ac;
    }
    ctx->pc = 0x18A9A4u;
    {
        const bool branch_taken_0x18a9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18A9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A9A4u;
            // 0x18a9a8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9a4) {
            ctx->pc = 0x18A978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a978;
        }
    }
    ctx->pc = 0x18A9ACu;
label_18a9ac:
    // 0x18a9ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a9b0:
    // 0x18a9b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a9b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18a9b4:
    // 0x18a9b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18a9b8:
    // 0x18a9b8: 0x3e00008  jr          $ra
label_18a9bc:
    if (ctx->pc == 0x18A9BCu) {
        ctx->pc = 0x18A9BCu;
            // 0x18a9bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x18A9C0u;
        goto label_18a9c0;
    }
    ctx->pc = 0x18A9B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A9B8u;
            // 0x18a9bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A9C0u;
label_18a9c0:
    // 0x18a9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18a9c4:
    // 0x18a9c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18a9c8:
    // 0x18a9c8: 0x24900180  addiu       $s0, $a0, 0x180
    ctx->pc = 0x18a9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_18a9cc:
    // 0x18a9cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18a9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18a9d0:
    // 0x18a9d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18a9d4:
    // 0x18a9d4: 0xc064076  jal         func_1901D8
label_18a9d8:
    if (ctx->pc == 0x18A9D8u) {
        ctx->pc = 0x18A9D8u;
            // 0x18a9d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18A9DCu;
        goto label_18a9dc;
    }
    ctx->pc = 0x18A9D4u;
    SET_GPR_U32(ctx, 31, 0x18A9DCu);
    ctx->pc = 0x18A9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A9D4u;
            // 0x18a9d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1901D8u;
    if (runtime->hasFunction(0x1901D8u)) {
        auto targetFn = runtime->lookupFunction(0x1901D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A9DCu; }
        if (ctx->pc != 0x18A9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001901D8_0x1901d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A9DCu; }
        if (ctx->pc != 0x18A9DCu) { return; }
    }
    ctx->pc = 0x18A9DCu;
label_18a9dc:
    // 0x18a9dc: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x18a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_18a9e0:
    // 0x18a9e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18a9e4:
    if (ctx->pc == 0x18A9E4u) {
        ctx->pc = 0x18A9E4u;
            // 0x18a9e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18A9E8u;
        goto label_18a9e8;
    }
    ctx->pc = 0x18A9E0u;
    {
        const bool branch_taken_0x18a9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A9E0u;
            // 0x18a9e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9e0) {
            ctx->pc = 0x18AA00u;
            goto label_18aa00;
        }
    }
    ctx->pc = 0x18A9E8u;
label_18a9e8:
    // 0x18a9e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a9e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a9ec:
    // 0x18a9ec: 0x34a5020d  ori         $a1, $a1, 0x20D
    ctx->pc = 0x18a9ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)525);
label_18a9f0:
    // 0x18a9f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a9f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18a9f4:
    // 0x18a9f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18a9f8:
    // 0x18a9f8: 0x80629ca  j           func_18A728
label_18a9fc:
    if (ctx->pc == 0x18A9FCu) {
        ctx->pc = 0x18A9FCu;
            // 0x18a9fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x18AA00u;
        goto label_18aa00;
    }
    ctx->pc = 0x18A9F8u;
    ctx->pc = 0x18A9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A9F8u;
            // 0x18a9fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A728u;
    {
        auto targetFn = runtime->lookupFunction(0x18A728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x18AA00u;
label_18aa00:
    // 0x18aa00: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x18aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_18aa04:
    // 0x18aa04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18aa04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18aa08:
    // 0x18aa08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_18aa0c:
    // 0x18aa0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18aa0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18aa10:
    // 0x18aa10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18aa10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18aa14:
    // 0x18aa14: 0x3e00008  jr          $ra
label_18aa18:
    if (ctx->pc == 0x18AA18u) {
        ctx->pc = 0x18AA18u;
            // 0x18aa18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x18AA1Cu;
        goto label_18aa1c;
    }
    ctx->pc = 0x18AA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA14u;
            // 0x18aa18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AA1Cu;
label_18aa1c:
    // 0x18aa1c: 0x0  nop
    ctx->pc = 0x18aa1cu;
    // NOP
label_18aa20:
    // 0x18aa20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18aa24:
    // 0x18aa24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18aa28:
    // 0x18aa28: 0x24900180  addiu       $s0, $a0, 0x180
    ctx->pc = 0x18aa28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_18aa2c:
    // 0x18aa2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18aa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18aa30:
    // 0x18aa30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18aa30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18aa34:
    // 0x18aa34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18aa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_18aa38:
    // 0x18aa38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18aa38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18aa3c:
    // 0x18aa3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18aa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_18aa40:
    // 0x18aa40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18aa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18aa44:
    // 0x18aa44: 0xc064076  jal         func_1901D8
label_18aa48:
    if (ctx->pc == 0x18AA48u) {
        ctx->pc = 0x18AA48u;
            // 0x18aa48: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AA4Cu;
        goto label_18aa4c;
    }
    ctx->pc = 0x18AA44u;
    SET_GPR_U32(ctx, 31, 0x18AA4Cu);
    ctx->pc = 0x18AA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA44u;
            // 0x18aa48: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1901D8u;
    if (runtime->hasFunction(0x1901D8u)) {
        auto targetFn = runtime->lookupFunction(0x1901D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA4Cu; }
        if (ctx->pc != 0x18AA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001901D8_0x1901d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA4Cu; }
        if (ctx->pc != 0x18AA4Cu) { return; }
    }
    ctx->pc = 0x18AA4Cu;
label_18aa4c:
    // 0x18aa4c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x18aa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_18aa50:
    // 0x18aa50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18aa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18aa54:
    // 0x18aa54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18aa58:
    if (ctx->pc == 0x18AA58u) {
        ctx->pc = 0x18AA58u;
            // 0x18aa58: 0x34a5020f  ori         $a1, $a1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)527);
        ctx->pc = 0x18AA5Cu;
        goto label_18aa5c;
    }
    ctx->pc = 0x18AA54u;
    {
        const bool branch_taken_0x18aa54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA54u;
            // 0x18aa58: 0x34a5020f  ori         $a1, $a1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa54) {
            ctx->pc = 0x18AA78u;
            goto label_18aa78;
        }
    }
    ctx->pc = 0x18AA5Cu;
label_18aa5c:
    // 0x18aa5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18aa5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18aa60:
    // 0x18aa60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18aa60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18aa64:
    // 0x18aa64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18aa64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18aa68:
    // 0x18aa68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18aa68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18aa6c:
    // 0x18aa6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18aa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18aa70:
    // 0x18aa70: 0x80629ca  j           func_18A728
label_18aa74:
    if (ctx->pc == 0x18AA74u) {
        ctx->pc = 0x18AA74u;
            // 0x18aa74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x18AA78u;
        goto label_18aa78;
    }
    ctx->pc = 0x18AA70u;
    ctx->pc = 0x18AA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA70u;
            // 0x18aa74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A728u;
    {
        auto targetFn = runtime->lookupFunction(0x18A728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x18AA78u;
label_18aa78:
    // 0x18aa78: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x18aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_18aa7c:
    // 0x18aa7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18aa7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18aa80:
    // 0x18aa80: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x18aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_18aa84:
    // 0x18aa84: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_18aa88:
    // 0x18aa88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18aa8c:
    // 0x18aa8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18aa8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18aa90:
    // 0x18aa90: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x18aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_18aa94:
    // 0x18aa94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18aa94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18aa98:
    // 0x18aa98: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x18aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_18aa9c:
    // 0x18aa9c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x18aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_18aaa0:
    // 0x18aaa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18aaa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18aaa4:
    // 0x18aaa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18aaa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18aaa8:
    // 0x18aaa8: 0x3e00008  jr          $ra
label_18aaac:
    if (ctx->pc == 0x18AAACu) {
        ctx->pc = 0x18AAACu;
            // 0x18aaac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x18AAB0u;
        goto label_18aab0;
    }
    ctx->pc = 0x18AAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AAA8u;
            // 0x18aaac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AAB0u;
label_18aab0:
    // 0x18aab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18aab4:
    // 0x18aab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18aab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18aab8:
    // 0x18aab8: 0x24900180  addiu       $s0, $a0, 0x180
    ctx->pc = 0x18aab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_18aabc:
    // 0x18aabc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18aabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18aac0:
    // 0x18aac0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18aac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18aac4:
    // 0x18aac4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18aac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_18aac8:
    // 0x18aac8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18aac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_18aacc:
    // 0x18aacc: 0xc064076  jal         func_1901D8
label_18aad0:
    if (ctx->pc == 0x18AAD0u) {
        ctx->pc = 0x18AAD0u;
            // 0x18aad0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18AAD4u;
        goto label_18aad4;
    }
    ctx->pc = 0x18AACCu;
    SET_GPR_U32(ctx, 31, 0x18AAD4u);
    ctx->pc = 0x18AAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AACCu;
            // 0x18aad0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1901D8u;
    if (runtime->hasFunction(0x1901D8u)) {
        auto targetFn = runtime->lookupFunction(0x1901D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AAD4u; }
        if (ctx->pc != 0x18AAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001901D8_0x1901d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AAD4u; }
        if (ctx->pc != 0x18AAD4u) { return; }
    }
    ctx->pc = 0x18AAD4u;
label_18aad4:
    // 0x18aad4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x18aad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_18aad8:
    // 0x18aad8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18aad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18aadc:
    // 0x18aadc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18aae0:
    if (ctx->pc == 0x18AAE0u) {
        ctx->pc = 0x18AAE0u;
            // 0x18aae0: 0x34a5020e  ori         $a1, $a1, 0x20E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)526);
        ctx->pc = 0x18AAE4u;
        goto label_18aae4;
    }
    ctx->pc = 0x18AADCu;
    {
        const bool branch_taken_0x18aadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AADCu;
            // 0x18aae0: 0x34a5020e  ori         $a1, $a1, 0x20E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)526);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aadc) {
            ctx->pc = 0x18AB00u;
            goto label_18ab00;
        }
    }
    ctx->pc = 0x18AAE4u;
label_18aae4:
    // 0x18aae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18aae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18aae8:
    // 0x18aae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18aae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18aaec:
    // 0x18aaec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18aaecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18aaf0:
    // 0x18aaf0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18aaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18aaf4:
    // 0x18aaf4: 0x80629ca  j           func_18A728
label_18aaf8:
    if (ctx->pc == 0x18AAF8u) {
        ctx->pc = 0x18AAF8u;
            // 0x18aaf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x18AAFCu;
        goto label_18aafc;
    }
    ctx->pc = 0x18AAF4u;
    ctx->pc = 0x18AAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AAF4u;
            // 0x18aaf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A728u;
    {
        auto targetFn = runtime->lookupFunction(0x18A728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x18AAFCu;
label_18aafc:
    // 0x18aafc: 0x0  nop
    ctx->pc = 0x18aafcu;
    // NOP
label_18ab00:
    // 0x18ab00: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x18ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_18ab04:
    // 0x18ab04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18ab04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18ab08:
    // 0x18ab08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18ab08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_18ab0c:
    // 0x18ab0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18ab0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18ab10:
    // 0x18ab10: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x18ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_18ab14:
    // 0x18ab14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18ab14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18ab18:
    // 0x18ab18: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x18ab18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_18ab1c:
    // 0x18ab1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18ab1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18ab20:
    // 0x18ab20: 0x3e00008  jr          $ra
label_18ab24:
    if (ctx->pc == 0x18AB24u) {
        ctx->pc = 0x18AB24u;
            // 0x18ab24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x18AB28u;
        goto label_fallthrough_0x18ab20;
    }
    ctx->pc = 0x18AB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AB20u;
            // 0x18ab24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x18ab20:
    ctx->pc = 0x18AB28u;
}
