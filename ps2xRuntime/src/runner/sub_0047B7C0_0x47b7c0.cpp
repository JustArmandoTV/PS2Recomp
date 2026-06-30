#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047B7C0
// Address: 0x47b7c0 - 0x47bb10
void sub_0047B7C0_0x47b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B7C0_0x47b7c0");
#endif

    switch (ctx->pc) {
        case 0x47b7c0u: goto label_47b7c0;
        case 0x47b7c4u: goto label_47b7c4;
        case 0x47b7c8u: goto label_47b7c8;
        case 0x47b7ccu: goto label_47b7cc;
        case 0x47b7d0u: goto label_47b7d0;
        case 0x47b7d4u: goto label_47b7d4;
        case 0x47b7d8u: goto label_47b7d8;
        case 0x47b7dcu: goto label_47b7dc;
        case 0x47b7e0u: goto label_47b7e0;
        case 0x47b7e4u: goto label_47b7e4;
        case 0x47b7e8u: goto label_47b7e8;
        case 0x47b7ecu: goto label_47b7ec;
        case 0x47b7f0u: goto label_47b7f0;
        case 0x47b7f4u: goto label_47b7f4;
        case 0x47b7f8u: goto label_47b7f8;
        case 0x47b7fcu: goto label_47b7fc;
        case 0x47b800u: goto label_47b800;
        case 0x47b804u: goto label_47b804;
        case 0x47b808u: goto label_47b808;
        case 0x47b80cu: goto label_47b80c;
        case 0x47b810u: goto label_47b810;
        case 0x47b814u: goto label_47b814;
        case 0x47b818u: goto label_47b818;
        case 0x47b81cu: goto label_47b81c;
        case 0x47b820u: goto label_47b820;
        case 0x47b824u: goto label_47b824;
        case 0x47b828u: goto label_47b828;
        case 0x47b82cu: goto label_47b82c;
        case 0x47b830u: goto label_47b830;
        case 0x47b834u: goto label_47b834;
        case 0x47b838u: goto label_47b838;
        case 0x47b83cu: goto label_47b83c;
        case 0x47b840u: goto label_47b840;
        case 0x47b844u: goto label_47b844;
        case 0x47b848u: goto label_47b848;
        case 0x47b84cu: goto label_47b84c;
        case 0x47b850u: goto label_47b850;
        case 0x47b854u: goto label_47b854;
        case 0x47b858u: goto label_47b858;
        case 0x47b85cu: goto label_47b85c;
        case 0x47b860u: goto label_47b860;
        case 0x47b864u: goto label_47b864;
        case 0x47b868u: goto label_47b868;
        case 0x47b86cu: goto label_47b86c;
        case 0x47b870u: goto label_47b870;
        case 0x47b874u: goto label_47b874;
        case 0x47b878u: goto label_47b878;
        case 0x47b87cu: goto label_47b87c;
        case 0x47b880u: goto label_47b880;
        case 0x47b884u: goto label_47b884;
        case 0x47b888u: goto label_47b888;
        case 0x47b88cu: goto label_47b88c;
        case 0x47b890u: goto label_47b890;
        case 0x47b894u: goto label_47b894;
        case 0x47b898u: goto label_47b898;
        case 0x47b89cu: goto label_47b89c;
        case 0x47b8a0u: goto label_47b8a0;
        case 0x47b8a4u: goto label_47b8a4;
        case 0x47b8a8u: goto label_47b8a8;
        case 0x47b8acu: goto label_47b8ac;
        case 0x47b8b0u: goto label_47b8b0;
        case 0x47b8b4u: goto label_47b8b4;
        case 0x47b8b8u: goto label_47b8b8;
        case 0x47b8bcu: goto label_47b8bc;
        case 0x47b8c0u: goto label_47b8c0;
        case 0x47b8c4u: goto label_47b8c4;
        case 0x47b8c8u: goto label_47b8c8;
        case 0x47b8ccu: goto label_47b8cc;
        case 0x47b8d0u: goto label_47b8d0;
        case 0x47b8d4u: goto label_47b8d4;
        case 0x47b8d8u: goto label_47b8d8;
        case 0x47b8dcu: goto label_47b8dc;
        case 0x47b8e0u: goto label_47b8e0;
        case 0x47b8e4u: goto label_47b8e4;
        case 0x47b8e8u: goto label_47b8e8;
        case 0x47b8ecu: goto label_47b8ec;
        case 0x47b8f0u: goto label_47b8f0;
        case 0x47b8f4u: goto label_47b8f4;
        case 0x47b8f8u: goto label_47b8f8;
        case 0x47b8fcu: goto label_47b8fc;
        case 0x47b900u: goto label_47b900;
        case 0x47b904u: goto label_47b904;
        case 0x47b908u: goto label_47b908;
        case 0x47b90cu: goto label_47b90c;
        case 0x47b910u: goto label_47b910;
        case 0x47b914u: goto label_47b914;
        case 0x47b918u: goto label_47b918;
        case 0x47b91cu: goto label_47b91c;
        case 0x47b920u: goto label_47b920;
        case 0x47b924u: goto label_47b924;
        case 0x47b928u: goto label_47b928;
        case 0x47b92cu: goto label_47b92c;
        case 0x47b930u: goto label_47b930;
        case 0x47b934u: goto label_47b934;
        case 0x47b938u: goto label_47b938;
        case 0x47b93cu: goto label_47b93c;
        case 0x47b940u: goto label_47b940;
        case 0x47b944u: goto label_47b944;
        case 0x47b948u: goto label_47b948;
        case 0x47b94cu: goto label_47b94c;
        case 0x47b950u: goto label_47b950;
        case 0x47b954u: goto label_47b954;
        case 0x47b958u: goto label_47b958;
        case 0x47b95cu: goto label_47b95c;
        case 0x47b960u: goto label_47b960;
        case 0x47b964u: goto label_47b964;
        case 0x47b968u: goto label_47b968;
        case 0x47b96cu: goto label_47b96c;
        case 0x47b970u: goto label_47b970;
        case 0x47b974u: goto label_47b974;
        case 0x47b978u: goto label_47b978;
        case 0x47b97cu: goto label_47b97c;
        case 0x47b980u: goto label_47b980;
        case 0x47b984u: goto label_47b984;
        case 0x47b988u: goto label_47b988;
        case 0x47b98cu: goto label_47b98c;
        case 0x47b990u: goto label_47b990;
        case 0x47b994u: goto label_47b994;
        case 0x47b998u: goto label_47b998;
        case 0x47b99cu: goto label_47b99c;
        case 0x47b9a0u: goto label_47b9a0;
        case 0x47b9a4u: goto label_47b9a4;
        case 0x47b9a8u: goto label_47b9a8;
        case 0x47b9acu: goto label_47b9ac;
        case 0x47b9b0u: goto label_47b9b0;
        case 0x47b9b4u: goto label_47b9b4;
        case 0x47b9b8u: goto label_47b9b8;
        case 0x47b9bcu: goto label_47b9bc;
        case 0x47b9c0u: goto label_47b9c0;
        case 0x47b9c4u: goto label_47b9c4;
        case 0x47b9c8u: goto label_47b9c8;
        case 0x47b9ccu: goto label_47b9cc;
        case 0x47b9d0u: goto label_47b9d0;
        case 0x47b9d4u: goto label_47b9d4;
        case 0x47b9d8u: goto label_47b9d8;
        case 0x47b9dcu: goto label_47b9dc;
        case 0x47b9e0u: goto label_47b9e0;
        case 0x47b9e4u: goto label_47b9e4;
        case 0x47b9e8u: goto label_47b9e8;
        case 0x47b9ecu: goto label_47b9ec;
        case 0x47b9f0u: goto label_47b9f0;
        case 0x47b9f4u: goto label_47b9f4;
        case 0x47b9f8u: goto label_47b9f8;
        case 0x47b9fcu: goto label_47b9fc;
        case 0x47ba00u: goto label_47ba00;
        case 0x47ba04u: goto label_47ba04;
        case 0x47ba08u: goto label_47ba08;
        case 0x47ba0cu: goto label_47ba0c;
        case 0x47ba10u: goto label_47ba10;
        case 0x47ba14u: goto label_47ba14;
        case 0x47ba18u: goto label_47ba18;
        case 0x47ba1cu: goto label_47ba1c;
        case 0x47ba20u: goto label_47ba20;
        case 0x47ba24u: goto label_47ba24;
        case 0x47ba28u: goto label_47ba28;
        case 0x47ba2cu: goto label_47ba2c;
        case 0x47ba30u: goto label_47ba30;
        case 0x47ba34u: goto label_47ba34;
        case 0x47ba38u: goto label_47ba38;
        case 0x47ba3cu: goto label_47ba3c;
        case 0x47ba40u: goto label_47ba40;
        case 0x47ba44u: goto label_47ba44;
        case 0x47ba48u: goto label_47ba48;
        case 0x47ba4cu: goto label_47ba4c;
        case 0x47ba50u: goto label_47ba50;
        case 0x47ba54u: goto label_47ba54;
        case 0x47ba58u: goto label_47ba58;
        case 0x47ba5cu: goto label_47ba5c;
        case 0x47ba60u: goto label_47ba60;
        case 0x47ba64u: goto label_47ba64;
        case 0x47ba68u: goto label_47ba68;
        case 0x47ba6cu: goto label_47ba6c;
        case 0x47ba70u: goto label_47ba70;
        case 0x47ba74u: goto label_47ba74;
        case 0x47ba78u: goto label_47ba78;
        case 0x47ba7cu: goto label_47ba7c;
        case 0x47ba80u: goto label_47ba80;
        case 0x47ba84u: goto label_47ba84;
        case 0x47ba88u: goto label_47ba88;
        case 0x47ba8cu: goto label_47ba8c;
        case 0x47ba90u: goto label_47ba90;
        case 0x47ba94u: goto label_47ba94;
        case 0x47ba98u: goto label_47ba98;
        case 0x47ba9cu: goto label_47ba9c;
        case 0x47baa0u: goto label_47baa0;
        case 0x47baa4u: goto label_47baa4;
        case 0x47baa8u: goto label_47baa8;
        case 0x47baacu: goto label_47baac;
        case 0x47bab0u: goto label_47bab0;
        case 0x47bab4u: goto label_47bab4;
        case 0x47bab8u: goto label_47bab8;
        case 0x47babcu: goto label_47babc;
        case 0x47bac0u: goto label_47bac0;
        case 0x47bac4u: goto label_47bac4;
        case 0x47bac8u: goto label_47bac8;
        case 0x47baccu: goto label_47bacc;
        case 0x47bad0u: goto label_47bad0;
        case 0x47bad4u: goto label_47bad4;
        case 0x47bad8u: goto label_47bad8;
        case 0x47badcu: goto label_47badc;
        case 0x47bae0u: goto label_47bae0;
        case 0x47bae4u: goto label_47bae4;
        case 0x47bae8u: goto label_47bae8;
        case 0x47baecu: goto label_47baec;
        case 0x47baf0u: goto label_47baf0;
        case 0x47baf4u: goto label_47baf4;
        case 0x47baf8u: goto label_47baf8;
        case 0x47bafcu: goto label_47bafc;
        case 0x47bb00u: goto label_47bb00;
        case 0x47bb04u: goto label_47bb04;
        case 0x47bb08u: goto label_47bb08;
        case 0x47bb0cu: goto label_47bb0c;
        default: break;
    }

    ctx->pc = 0x47b7c0u;

label_47b7c0:
    // 0x47b7c0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x47b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_47b7c4:
    // 0x47b7c4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x47b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_47b7c8:
    // 0x47b7c8: 0x3e00008  jr          $ra
label_47b7cc:
    if (ctx->pc == 0x47B7CCu) {
        ctx->pc = 0x47B7CCu;
            // 0x47b7cc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x47B7D0u;
        goto label_47b7d0;
    }
    ctx->pc = 0x47B7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B7C8u;
            // 0x47b7cc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47B7D0u;
label_47b7d0:
    // 0x47b7d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47b7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_47b7d4:
    // 0x47b7d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x47b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47b7d8:
    // 0x47b7d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x47b7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_47b7dc:
    // 0x47b7dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47b7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47b7e0:
    // 0x47b7e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47b7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47b7e4:
    // 0x47b7e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47b7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47b7e8:
    // 0x47b7e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47b7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47b7ec:
    // 0x47b7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47b7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47b7f0:
    // 0x47b7f0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x47b7f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_47b7f4:
    // 0x47b7f4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_47b7f8:
    if (ctx->pc == 0x47B7F8u) {
        ctx->pc = 0x47B7F8u;
            // 0x47b7f8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B7FCu;
        goto label_47b7fc;
    }
    ctx->pc = 0x47B7F4u;
    {
        const bool branch_taken_0x47b7f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x47B7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B7F4u;
            // 0x47b7f8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b7f4) {
            ctx->pc = 0x47B828u;
            goto label_47b828;
        }
    }
    ctx->pc = 0x47B7FCu;
label_47b7fc:
    // 0x47b7fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x47b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47b800:
    // 0x47b800: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_47b804:
    if (ctx->pc == 0x47B804u) {
        ctx->pc = 0x47B804u;
            // 0x47b804: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x47B808u;
        goto label_47b808;
    }
    ctx->pc = 0x47B800u;
    {
        const bool branch_taken_0x47b800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47b800) {
            ctx->pc = 0x47B804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47B800u;
            // 0x47b804: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47B81Cu;
            goto label_47b81c;
        }
    }
    ctx->pc = 0x47B808u;
label_47b808:
    // 0x47b808: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47b808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47b80c:
    // 0x47b80c: 0x10a30020  beq         $a1, $v1, . + 4 + (0x20 << 2)
label_47b810:
    if (ctx->pc == 0x47B810u) {
        ctx->pc = 0x47B814u;
        goto label_47b814;
    }
    ctx->pc = 0x47B80Cu;
    {
        const bool branch_taken_0x47b80c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47b80c) {
            ctx->pc = 0x47B890u;
            goto label_47b890;
        }
    }
    ctx->pc = 0x47B814u;
label_47b814:
    // 0x47b814: 0x1000001e  b           . + 4 + (0x1E << 2)
label_47b818:
    if (ctx->pc == 0x47B818u) {
        ctx->pc = 0x47B81Cu;
        goto label_47b81c;
    }
    ctx->pc = 0x47B814u;
    {
        const bool branch_taken_0x47b814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b814) {
            ctx->pc = 0x47B890u;
            goto label_47b890;
        }
    }
    ctx->pc = 0x47B81Cu;
label_47b81c:
    // 0x47b81c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x47b81cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_47b820:
    // 0x47b820: 0x320f809  jalr        $t9
label_47b824:
    if (ctx->pc == 0x47B824u) {
        ctx->pc = 0x47B828u;
        goto label_47b828;
    }
    ctx->pc = 0x47B820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47B828u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x47B828u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47B828u; }
            if (ctx->pc != 0x47B828u) { return; }
        }
        }
    }
    ctx->pc = 0x47B828u;
label_47b828:
    // 0x47b828: 0x8e910070  lw          $s1, 0x70($s4)
    ctx->pc = 0x47b828u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_47b82c:
    // 0x47b82c: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_47b830:
    if (ctx->pc == 0x47B830u) {
        ctx->pc = 0x47B834u;
        goto label_47b834;
    }
    ctx->pc = 0x47B82Cu;
    {
        const bool branch_taken_0x47b82c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b82c) {
            ctx->pc = 0x47B890u;
            goto label_47b890;
        }
    }
    ctx->pc = 0x47B834u;
label_47b834:
    // 0x47b834: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47b834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b838:
    // 0x47b838: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47b838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b83c:
    // 0x47b83c: 0x8e840074  lw          $a0, 0x74($s4)
    ctx->pc = 0x47b83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_47b840:
    // 0x47b840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47b840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47b844:
    // 0x47b844: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x47b844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_47b848:
    // 0x47b848: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x47b848u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47b84c:
    // 0x47b84c: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x47b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_47b850:
    // 0x47b850: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_47b854:
    if (ctx->pc == 0x47B854u) {
        ctx->pc = 0x47B858u;
        goto label_47b858;
    }
    ctx->pc = 0x47B850u;
    {
        const bool branch_taken_0x47b850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x47b850) {
            ctx->pc = 0x47B878u;
            goto label_47b878;
        }
    }
    ctx->pc = 0x47B858u;
label_47b858:
    // 0x47b858: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_47b85c:
    if (ctx->pc == 0x47B85Cu) {
        ctx->pc = 0x47B860u;
        goto label_47b860;
    }
    ctx->pc = 0x47B858u;
    {
        const bool branch_taken_0x47b858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b858) {
            ctx->pc = 0x47B868u;
            goto label_47b868;
        }
    }
    ctx->pc = 0x47B860u;
label_47b860:
    // 0x47b860: 0x10000007  b           . + 4 + (0x7 << 2)
label_47b864:
    if (ctx->pc == 0x47B864u) {
        ctx->pc = 0x47B868u;
        goto label_47b868;
    }
    ctx->pc = 0x47B860u;
    {
        const bool branch_taken_0x47b860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b860) {
            ctx->pc = 0x47B880u;
            goto label_47b880;
        }
    }
    ctx->pc = 0x47B868u;
label_47b868:
    // 0x47b868: 0xc11f290  jal         func_47CA40
label_47b86c:
    if (ctx->pc == 0x47B86Cu) {
        ctx->pc = 0x47B86Cu;
            // 0x47b86c: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->pc = 0x47B870u;
        goto label_47b870;
    }
    ctx->pc = 0x47B868u;
    SET_GPR_U32(ctx, 31, 0x47B870u);
    ctx->pc = 0x47B86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B868u;
            // 0x47b86c: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47CA40u;
    if (runtime->hasFunction(0x47CA40u)) {
        auto targetFn = runtime->lookupFunction(0x47CA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B870u; }
        if (ctx->pc != 0x47B870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047CA40_0x47ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B870u; }
        if (ctx->pc != 0x47B870u) { return; }
    }
    ctx->pc = 0x47B870u;
label_47b870:
    // 0x47b870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47b870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47b874:
    // 0x47b874: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x47b874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_47b878:
    // 0x47b878: 0xc11f2c0  jal         func_47CB00
label_47b87c:
    if (ctx->pc == 0x47B87Cu) {
        ctx->pc = 0x47B87Cu;
            // 0x47b87c: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->pc = 0x47B880u;
        goto label_47b880;
    }
    ctx->pc = 0x47B878u;
    SET_GPR_U32(ctx, 31, 0x47B880u);
    ctx->pc = 0x47B87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B878u;
            // 0x47b87c: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47CB00u;
    if (runtime->hasFunction(0x47CB00u)) {
        auto targetFn = runtime->lookupFunction(0x47CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B880u; }
        if (ctx->pc != 0x47B880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047CB00_0x47cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B880u; }
        if (ctx->pc != 0x47B880u) { return; }
    }
    ctx->pc = 0x47B880u;
label_47b880:
    // 0x47b880: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x47b880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_47b884:
    // 0x47b884: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x47b884u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_47b888:
    // 0x47b888: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_47b88c:
    if (ctx->pc == 0x47B88Cu) {
        ctx->pc = 0x47B88Cu;
            // 0x47b88c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x47B890u;
        goto label_47b890;
    }
    ctx->pc = 0x47B888u;
    {
        const bool branch_taken_0x47b888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B888u;
            // 0x47b88c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b888) {
            ctx->pc = 0x47B83Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47b83c;
        }
    }
    ctx->pc = 0x47B890u;
label_47b890:
    // 0x47b890: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x47b890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_47b894:
    // 0x47b894: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47b894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47b898:
    // 0x47b898: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47b898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47b89c:
    // 0x47b89c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47b89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47b8a0:
    // 0x47b8a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47b8a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47b8a4:
    // 0x47b8a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47b8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47b8a8:
    // 0x47b8a8: 0x3e00008  jr          $ra
label_47b8ac:
    if (ctx->pc == 0x47B8ACu) {
        ctx->pc = 0x47B8ACu;
            // 0x47b8ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x47B8B0u;
        goto label_47b8b0;
    }
    ctx->pc = 0x47B8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B8A8u;
            // 0x47b8ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47B8B0u;
label_47b8b0:
    // 0x47b8b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x47b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_47b8b4:
    // 0x47b8b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x47b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_47b8b8:
    // 0x47b8b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47b8bc:
    // 0x47b8bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47b8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47b8c0:
    // 0x47b8c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47b8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47b8c4:
    // 0x47b8c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47b8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47b8c8:
    // 0x47b8c8: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x47b8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_47b8cc:
    // 0x47b8cc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_47b8d0:
    if (ctx->pc == 0x47B8D0u) {
        ctx->pc = 0x47B8D0u;
            // 0x47b8d0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B8D4u;
        goto label_47b8d4;
    }
    ctx->pc = 0x47B8CCu;
    {
        const bool branch_taken_0x47b8cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B8CCu;
            // 0x47b8d0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b8cc) {
            ctx->pc = 0x47B900u;
            goto label_47b900;
        }
    }
    ctx->pc = 0x47B8D4u;
label_47b8d4:
    // 0x47b8d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47b8d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b8d8:
    // 0x47b8d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47b8d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b8dc:
    // 0x47b8dc: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x47b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_47b8e0:
    // 0x47b8e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x47b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_47b8e4:
    // 0x47b8e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47b8e8:
    // 0x47b8e8: 0xc11f290  jal         func_47CA40
label_47b8ec:
    if (ctx->pc == 0x47B8ECu) {
        ctx->pc = 0x47B8ECu;
            // 0x47b8ec: 0x24440064  addiu       $a0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->pc = 0x47B8F0u;
        goto label_47b8f0;
    }
    ctx->pc = 0x47B8E8u;
    SET_GPR_U32(ctx, 31, 0x47B8F0u);
    ctx->pc = 0x47B8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B8E8u;
            // 0x47b8ec: 0x24440064  addiu       $a0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47CA40u;
    if (runtime->hasFunction(0x47CA40u)) {
        auto targetFn = runtime->lookupFunction(0x47CA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B8F0u; }
        if (ctx->pc != 0x47B8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047CA40_0x47ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B8F0u; }
        if (ctx->pc != 0x47B8F0u) { return; }
    }
    ctx->pc = 0x47B8F0u;
label_47b8f0:
    // 0x47b8f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x47b8f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_47b8f4:
    // 0x47b8f4: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x47b8f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_47b8f8:
    // 0x47b8f8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_47b8fc:
    if (ctx->pc == 0x47B8FCu) {
        ctx->pc = 0x47B8FCu;
            // 0x47b8fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x47B900u;
        goto label_47b900;
    }
    ctx->pc = 0x47B8F8u;
    {
        const bool branch_taken_0x47b8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B8F8u;
            // 0x47b8fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b8f8) {
            ctx->pc = 0x47B8DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47b8dc;
        }
    }
    ctx->pc = 0x47B900u;
label_47b900:
    // 0x47b900: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x47b900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_47b904:
    // 0x47b904: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47b904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47b908:
    // 0x47b908: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47b908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47b90c:
    // 0x47b90c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47b90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47b910:
    // 0x47b910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47b910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47b914:
    // 0x47b914: 0x3e00008  jr          $ra
label_47b918:
    if (ctx->pc == 0x47B918u) {
        ctx->pc = 0x47B918u;
            // 0x47b918: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x47B91Cu;
        goto label_47b91c;
    }
    ctx->pc = 0x47B914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B914u;
            // 0x47b918: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47B91Cu;
label_47b91c:
    // 0x47b91c: 0x0  nop
    ctx->pc = 0x47b91cu;
    // NOP
label_47b920:
    // 0x47b920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47b920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_47b924:
    // 0x47b924: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x47b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_47b928:
    // 0x47b928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47b928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47b92c:
    // 0x47b92c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47b92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47b930:
    // 0x47b930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47b930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47b934:
    // 0x47b934: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47b934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47b938:
    // 0x47b938: 0x8cc40550  lw          $a0, 0x550($a2)
    ctx->pc = 0x47b938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1360)));
label_47b93c:
    // 0x47b93c: 0x8083010d  lb          $v1, 0x10D($a0)
    ctx->pc = 0x47b93cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 269)));
label_47b940:
    // 0x47b940: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_47b944:
    if (ctx->pc == 0x47B944u) {
        ctx->pc = 0x47B944u;
            // 0x47b944: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B948u;
        goto label_47b948;
    }
    ctx->pc = 0x47B940u;
    {
        const bool branch_taken_0x47b940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B940u;
            // 0x47b944: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b940) {
            ctx->pc = 0x47B99Cu;
            goto label_47b99c;
        }
    }
    ctx->pc = 0x47B948u;
label_47b948:
    // 0x47b948: 0x8084010f  lb          $a0, 0x10F($a0)
    ctx->pc = 0x47b948u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 271)));
label_47b94c:
    // 0x47b94c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x47b94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_47b950:
    // 0x47b950: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
label_47b954:
    if (ctx->pc == 0x47B954u) {
        ctx->pc = 0x47B954u;
            // 0x47b954: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x47B958u;
        goto label_47b958;
    }
    ctx->pc = 0x47B950u;
    {
        const bool branch_taken_0x47b950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x47b950) {
            ctx->pc = 0x47B954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47B950u;
            // 0x47b954: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47B964u;
            goto label_47b964;
        }
    }
    ctx->pc = 0x47B958u;
label_47b958:
    // 0x47b958: 0x10000011  b           . + 4 + (0x11 << 2)
label_47b95c:
    if (ctx->pc == 0x47B95Cu) {
        ctx->pc = 0x47B95Cu;
            // 0x47b95c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x47B960u;
        goto label_47b960;
    }
    ctx->pc = 0x47B958u;
    {
        const bool branch_taken_0x47b958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B958u;
            // 0x47b95c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b958) {
            ctx->pc = 0x47B9A0u;
            goto label_47b9a0;
        }
    }
    ctx->pc = 0x47B960u;
label_47b960:
    // 0x47b960: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x47b960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_47b964:
    // 0x47b964: 0xc11f27c  jal         func_47C9F0
label_47b968:
    if (ctx->pc == 0x47B968u) {
        ctx->pc = 0x47B96Cu;
        goto label_47b96c;
    }
    ctx->pc = 0x47B964u;
    SET_GPR_U32(ctx, 31, 0x47B96Cu);
    ctx->pc = 0x47C9F0u;
    if (runtime->hasFunction(0x47C9F0u)) {
        auto targetFn = runtime->lookupFunction(0x47C9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B96Cu; }
        if (ctx->pc != 0x47B96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047C9F0_0x47c9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B96Cu; }
        if (ctx->pc != 0x47B96Cu) { return; }
    }
    ctx->pc = 0x47B96Cu;
label_47b96c:
    // 0x47b96c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x47b96cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47b970:
    // 0x47b970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47b970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47b974:
    // 0x47b974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47b974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47b978:
    // 0x47b978: 0xc11f130  jal         func_47C4C0
label_47b97c:
    if (ctx->pc == 0x47B97Cu) {
        ctx->pc = 0x47B97Cu;
            // 0x47b97c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B980u;
        goto label_47b980;
    }
    ctx->pc = 0x47B978u;
    SET_GPR_U32(ctx, 31, 0x47B980u);
    ctx->pc = 0x47B97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B978u;
            // 0x47b97c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47C4C0u;
    if (runtime->hasFunction(0x47C4C0u)) {
        auto targetFn = runtime->lookupFunction(0x47C4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B980u; }
        if (ctx->pc != 0x47B980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047C4C0_0x47c4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B980u; }
        if (ctx->pc != 0x47B980u) { return; }
    }
    ctx->pc = 0x47B980u;
label_47b980:
    // 0x47b980: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47b980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47b984:
    // 0x47b984: 0x8c440e30  lw          $a0, 0xE30($v0)
    ctx->pc = 0x47b984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3632)));
label_47b988:
    // 0x47b988: 0xc0d7664  jal         func_35D990
label_47b98c:
    if (ctx->pc == 0x47B98Cu) {
        ctx->pc = 0x47B98Cu;
            // 0x47b98c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B990u;
        goto label_47b990;
    }
    ctx->pc = 0x47B988u;
    SET_GPR_U32(ctx, 31, 0x47B990u);
    ctx->pc = 0x47B98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B988u;
            // 0x47b98c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35D990u;
    if (runtime->hasFunction(0x35D990u)) {
        auto targetFn = runtime->lookupFunction(0x35D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B990u; }
        if (ctx->pc != 0x47B990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035D990_0x35d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B990u; }
        if (ctx->pc != 0x47B990u) { return; }
    }
    ctx->pc = 0x47B990u;
label_47b990:
    // 0x47b990: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x47b990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_47b994:
    // 0x47b994: 0xc11f288  jal         func_47CA20
label_47b998:
    if (ctx->pc == 0x47B998u) {
        ctx->pc = 0x47B998u;
            // 0x47b998: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B99Cu;
        goto label_47b99c;
    }
    ctx->pc = 0x47B994u;
    SET_GPR_U32(ctx, 31, 0x47B99Cu);
    ctx->pc = 0x47B998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B994u;
            // 0x47b998: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47CA20u;
    if (runtime->hasFunction(0x47CA20u)) {
        auto targetFn = runtime->lookupFunction(0x47CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B99Cu; }
        if (ctx->pc != 0x47B99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047CA20_0x47ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B99Cu; }
        if (ctx->pc != 0x47B99Cu) { return; }
    }
    ctx->pc = 0x47B99Cu;
label_47b99c:
    // 0x47b99c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x47b99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_47b9a0:
    // 0x47b9a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47b9a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47b9a4:
    // 0x47b9a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47b9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47b9a8:
    // 0x47b9a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47b9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47b9ac:
    // 0x47b9ac: 0x3e00008  jr          $ra
label_47b9b0:
    if (ctx->pc == 0x47B9B0u) {
        ctx->pc = 0x47B9B0u;
            // 0x47b9b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x47B9B4u;
        goto label_47b9b4;
    }
    ctx->pc = 0x47B9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B9ACu;
            // 0x47b9b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47B9B4u;
label_47b9b4:
    // 0x47b9b4: 0x0  nop
    ctx->pc = 0x47b9b4u;
    // NOP
label_47b9b8:
    // 0x47b9b8: 0x0  nop
    ctx->pc = 0x47b9b8u;
    // NOP
label_47b9bc:
    // 0x47b9bc: 0x0  nop
    ctx->pc = 0x47b9bcu;
    // NOP
label_47b9c0:
    // 0x47b9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47b9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_47b9c4:
    // 0x47b9c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47b9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47b9c8:
    // 0x47b9c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47b9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47b9cc:
    // 0x47b9cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47b9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47b9d0:
    // 0x47b9d0: 0xc0b6100  jal         func_2D8400
label_47b9d4:
    if (ctx->pc == 0x47B9D4u) {
        ctx->pc = 0x47B9D4u;
            // 0x47b9d4: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->pc = 0x47B9D8u;
        goto label_47b9d8;
    }
    ctx->pc = 0x47B9D0u;
    SET_GPR_U32(ctx, 31, 0x47B9D8u);
    ctx->pc = 0x47B9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B9D0u;
            // 0x47b9d4: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8400u;
    if (runtime->hasFunction(0x2D8400u)) {
        auto targetFn = runtime->lookupFunction(0x2D8400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B9D8u; }
        if (ctx->pc != 0x47B9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8400_0x2d8400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B9D8u; }
        if (ctx->pc != 0x47B9D8u) { return; }
    }
    ctx->pc = 0x47B9D8u;
label_47b9d8:
    // 0x47b9d8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x47b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_47b9dc:
    // 0x47b9dc: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_47b9e0:
    if (ctx->pc == 0x47B9E0u) {
        ctx->pc = 0x47B9E0u;
            // 0x47b9e0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x47B9E4u;
        goto label_47b9e4;
    }
    ctx->pc = 0x47B9DCu;
    {
        const bool branch_taken_0x47b9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b9dc) {
            ctx->pc = 0x47B9E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47B9DCu;
            // 0x47b9e0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47BA04u;
            goto label_47ba04;
        }
    }
    ctx->pc = 0x47B9E4u;
label_47b9e4:
    // 0x47b9e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_47b9e8:
    if (ctx->pc == 0x47B9E8u) {
        ctx->pc = 0x47B9E8u;
            // 0x47b9e8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x47B9ECu;
        goto label_47b9ec;
    }
    ctx->pc = 0x47B9E4u;
    {
        const bool branch_taken_0x47b9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b9e4) {
            ctx->pc = 0x47B9E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47B9E4u;
            // 0x47b9e8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47BA00u;
            goto label_47ba00;
        }
    }
    ctx->pc = 0x47B9ECu;
label_47b9ec:
    // 0x47b9ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47b9ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47b9f0:
    // 0x47b9f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x47b9f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_47b9f4:
    // 0x47b9f4: 0x320f809  jalr        $t9
label_47b9f8:
    if (ctx->pc == 0x47B9F8u) {
        ctx->pc = 0x47B9F8u;
            // 0x47b9f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47B9FCu;
        goto label_47b9fc;
    }
    ctx->pc = 0x47B9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47B9FCu);
        ctx->pc = 0x47B9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B9F4u;
            // 0x47b9f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47B9FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47B9FCu; }
            if (ctx->pc != 0x47B9FCu) { return; }
        }
        }
    }
    ctx->pc = 0x47B9FCu;
label_47b9fc:
    // 0x47b9fc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x47b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_47ba00:
    // 0x47ba00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47ba00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47ba04:
    // 0x47ba04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47ba04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47ba08:
    // 0x47ba08: 0x3e00008  jr          $ra
label_47ba0c:
    if (ctx->pc == 0x47BA0Cu) {
        ctx->pc = 0x47BA0Cu;
            // 0x47ba0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x47BA10u;
        goto label_47ba10;
    }
    ctx->pc = 0x47BA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47BA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47BA08u;
            // 0x47ba0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47BA10u;
label_47ba10:
    // 0x47ba10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x47ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_47ba14:
    // 0x47ba14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47ba18:
    // 0x47ba18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x47ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_47ba1c:
    // 0x47ba1c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x47ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_47ba20:
    // 0x47ba20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47ba24:
    // 0x47ba24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47ba24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47ba28:
    // 0x47ba28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x47ba28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47ba2c:
    // 0x47ba2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47ba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47ba30:
    // 0x47ba30: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x47ba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47ba34:
    // 0x47ba34: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x47ba34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_47ba38:
    // 0x47ba38: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x47ba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47ba3c:
    // 0x47ba3c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x47ba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47ba40:
    // 0x47ba40: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x47ba40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_47ba44:
    // 0x47ba44: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x47ba44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_47ba48:
    // 0x47ba48: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x47ba48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_47ba4c:
    // 0x47ba4c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x47ba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_47ba50:
    // 0x47ba50: 0xc483002c  lwc1        $f3, 0x2C($a0)
    ctx->pc = 0x47ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_47ba54:
    // 0x47ba54: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x47ba54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47ba58:
    // 0x47ba58: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x47ba58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47ba5c:
    // 0x47ba5c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x47ba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47ba60:
    // 0x47ba60: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x47ba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_47ba64:
    // 0x47ba64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x47ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47ba68:
    // 0x47ba68: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x47ba68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_47ba6c:
    // 0x47ba6c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x47ba6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_47ba70:
    // 0x47ba70: 0xc0a3830  jal         func_28E0C0
label_47ba74:
    if (ctx->pc == 0x47BA74u) {
        ctx->pc = 0x47BA74u;
            // 0x47ba74: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x47BA78u;
        goto label_47ba78;
    }
    ctx->pc = 0x47BA70u;
    SET_GPR_U32(ctx, 31, 0x47BA78u);
    ctx->pc = 0x47BA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BA70u;
            // 0x47ba74: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BA78u; }
        if (ctx->pc != 0x47BA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BA78u; }
        if (ctx->pc != 0x47BA78u) { return; }
    }
    ctx->pc = 0x47BA78u;
label_47ba78:
    // 0x47ba78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47ba7c:
    // 0x47ba7c: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x47ba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_47ba80:
    // 0x47ba80: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x47ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_47ba84:
    // 0x47ba84: 0xc0a7a88  jal         func_29EA20
label_47ba88:
    if (ctx->pc == 0x47BA88u) {
        ctx->pc = 0x47BA88u;
            // 0x47ba88: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x47BA8Cu;
        goto label_47ba8c;
    }
    ctx->pc = 0x47BA84u;
    SET_GPR_U32(ctx, 31, 0x47BA8Cu);
    ctx->pc = 0x47BA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BA84u;
            // 0x47ba88: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BA8Cu; }
        if (ctx->pc != 0x47BA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BA8Cu; }
        if (ctx->pc != 0x47BA8Cu) { return; }
    }
    ctx->pc = 0x47BA8Cu;
label_47ba8c:
    // 0x47ba8c: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x47ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_47ba90:
    // 0x47ba90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x47ba90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47ba94:
    // 0x47ba94: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_47ba98:
    if (ctx->pc == 0x47BA98u) {
        ctx->pc = 0x47BA98u;
            // 0x47ba98: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x47BA9Cu;
        goto label_47ba9c;
    }
    ctx->pc = 0x47BA94u;
    {
        const bool branch_taken_0x47ba94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47BA94u;
            // 0x47ba98: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ba94) {
            ctx->pc = 0x47BACCu;
            goto label_47bacc;
        }
    }
    ctx->pc = 0x47BA9Cu;
label_47ba9c:
    // 0x47ba9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47baa0:
    // 0x47baa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47baa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47baa4:
    // 0x47baa4: 0x8c420d50  lw          $v0, 0xD50($v0)
    ctx->pc = 0x47baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3408)));
label_47baa8:
    // 0x47baa8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x47baa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47baac:
    // 0x47baac: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x47baacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_47bab0:
    // 0x47bab0: 0xc08afe0  jal         func_22BF80
label_47bab4:
    if (ctx->pc == 0x47BAB4u) {
        ctx->pc = 0x47BAB4u;
            // 0x47bab4: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x47BAB8u;
        goto label_47bab8;
    }
    ctx->pc = 0x47BAB0u;
    SET_GPR_U32(ctx, 31, 0x47BAB8u);
    ctx->pc = 0x47BAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BAB0u;
            // 0x47bab4: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BAB8u; }
        if (ctx->pc != 0x47BAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BAB8u; }
        if (ctx->pc != 0x47BAB8u) { return; }
    }
    ctx->pc = 0x47BAB8u;
label_47bab8:
    // 0x47bab8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_47babc:
    // 0x47babc: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x47babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_47bac0:
    // 0x47bac0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x47bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_47bac4:
    // 0x47bac4: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x47bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_47bac8:
    // 0x47bac8: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x47bac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_47bacc:
    // 0x47bacc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x47baccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47bad0:
    // 0x47bad0: 0xc08c798  jal         func_231E60
label_47bad4:
    if (ctx->pc == 0x47BAD4u) {
        ctx->pc = 0x47BAD4u;
            // 0x47bad4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BAD8u;
        goto label_47bad8;
    }
    ctx->pc = 0x47BAD0u;
    SET_GPR_U32(ctx, 31, 0x47BAD8u);
    ctx->pc = 0x47BAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BAD0u;
            // 0x47bad4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BAD8u; }
        if (ctx->pc != 0x47BAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BAD8u; }
        if (ctx->pc != 0x47BAD8u) { return; }
    }
    ctx->pc = 0x47BAD8u;
label_47bad8:
    // 0x47bad8: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x47bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_47badc:
    // 0x47badc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47badcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47bae0:
    // 0x47bae0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x47bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_47bae4:
    // 0x47bae4: 0x8c45077c  lw          $a1, 0x77C($v0)
    ctx->pc = 0x47bae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_47bae8:
    // 0x47bae8: 0xc11f2dc  jal         func_47CB70
label_47baec:
    if (ctx->pc == 0x47BAECu) {
        ctx->pc = 0x47BAECu;
            // 0x47baec: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->pc = 0x47BAF0u;
        goto label_47baf0;
    }
    ctx->pc = 0x47BAE8u;
    SET_GPR_U32(ctx, 31, 0x47BAF0u);
    ctx->pc = 0x47BAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BAE8u;
            // 0x47baec: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47CB70u;
    if (runtime->hasFunction(0x47CB70u)) {
        auto targetFn = runtime->lookupFunction(0x47CB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BAF0u; }
        if (ctx->pc != 0x47BAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047CB70_0x47cb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BAF0u; }
        if (ctx->pc != 0x47BAF0u) { return; }
    }
    ctx->pc = 0x47BAF0u;
label_47baf0:
    // 0x47baf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x47baf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_47baf4:
    // 0x47baf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47baf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47baf8:
    // 0x47baf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47baf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47bafc:
    // 0x47bafc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47bafcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47bb00:
    // 0x47bb00: 0x3e00008  jr          $ra
label_47bb04:
    if (ctx->pc == 0x47BB04u) {
        ctx->pc = 0x47BB04u;
            // 0x47bb04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x47BB08u;
        goto label_47bb08;
    }
    ctx->pc = 0x47BB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47BB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47BB00u;
            // 0x47bb04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47BB08u;
label_47bb08:
    // 0x47bb08: 0x0  nop
    ctx->pc = 0x47bb08u;
    // NOP
label_47bb0c:
    // 0x47bb0c: 0x0  nop
    ctx->pc = 0x47bb0cu;
    // NOP
}
