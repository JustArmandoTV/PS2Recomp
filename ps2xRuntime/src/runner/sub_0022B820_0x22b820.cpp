#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B820
// Address: 0x22b820 - 0x22bb30
void sub_0022B820_0x22b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B820_0x22b820");
#endif

    switch (ctx->pc) {
        case 0x22b820u: goto label_22b820;
        case 0x22b824u: goto label_22b824;
        case 0x22b828u: goto label_22b828;
        case 0x22b82cu: goto label_22b82c;
        case 0x22b830u: goto label_22b830;
        case 0x22b834u: goto label_22b834;
        case 0x22b838u: goto label_22b838;
        case 0x22b83cu: goto label_22b83c;
        case 0x22b840u: goto label_22b840;
        case 0x22b844u: goto label_22b844;
        case 0x22b848u: goto label_22b848;
        case 0x22b84cu: goto label_22b84c;
        case 0x22b850u: goto label_22b850;
        case 0x22b854u: goto label_22b854;
        case 0x22b858u: goto label_22b858;
        case 0x22b85cu: goto label_22b85c;
        case 0x22b860u: goto label_22b860;
        case 0x22b864u: goto label_22b864;
        case 0x22b868u: goto label_22b868;
        case 0x22b86cu: goto label_22b86c;
        case 0x22b870u: goto label_22b870;
        case 0x22b874u: goto label_22b874;
        case 0x22b878u: goto label_22b878;
        case 0x22b87cu: goto label_22b87c;
        case 0x22b880u: goto label_22b880;
        case 0x22b884u: goto label_22b884;
        case 0x22b888u: goto label_22b888;
        case 0x22b88cu: goto label_22b88c;
        case 0x22b890u: goto label_22b890;
        case 0x22b894u: goto label_22b894;
        case 0x22b898u: goto label_22b898;
        case 0x22b89cu: goto label_22b89c;
        case 0x22b8a0u: goto label_22b8a0;
        case 0x22b8a4u: goto label_22b8a4;
        case 0x22b8a8u: goto label_22b8a8;
        case 0x22b8acu: goto label_22b8ac;
        case 0x22b8b0u: goto label_22b8b0;
        case 0x22b8b4u: goto label_22b8b4;
        case 0x22b8b8u: goto label_22b8b8;
        case 0x22b8bcu: goto label_22b8bc;
        case 0x22b8c0u: goto label_22b8c0;
        case 0x22b8c4u: goto label_22b8c4;
        case 0x22b8c8u: goto label_22b8c8;
        case 0x22b8ccu: goto label_22b8cc;
        case 0x22b8d0u: goto label_22b8d0;
        case 0x22b8d4u: goto label_22b8d4;
        case 0x22b8d8u: goto label_22b8d8;
        case 0x22b8dcu: goto label_22b8dc;
        case 0x22b8e0u: goto label_22b8e0;
        case 0x22b8e4u: goto label_22b8e4;
        case 0x22b8e8u: goto label_22b8e8;
        case 0x22b8ecu: goto label_22b8ec;
        case 0x22b8f0u: goto label_22b8f0;
        case 0x22b8f4u: goto label_22b8f4;
        case 0x22b8f8u: goto label_22b8f8;
        case 0x22b8fcu: goto label_22b8fc;
        case 0x22b900u: goto label_22b900;
        case 0x22b904u: goto label_22b904;
        case 0x22b908u: goto label_22b908;
        case 0x22b90cu: goto label_22b90c;
        case 0x22b910u: goto label_22b910;
        case 0x22b914u: goto label_22b914;
        case 0x22b918u: goto label_22b918;
        case 0x22b91cu: goto label_22b91c;
        case 0x22b920u: goto label_22b920;
        case 0x22b924u: goto label_22b924;
        case 0x22b928u: goto label_22b928;
        case 0x22b92cu: goto label_22b92c;
        case 0x22b930u: goto label_22b930;
        case 0x22b934u: goto label_22b934;
        case 0x22b938u: goto label_22b938;
        case 0x22b93cu: goto label_22b93c;
        case 0x22b940u: goto label_22b940;
        case 0x22b944u: goto label_22b944;
        case 0x22b948u: goto label_22b948;
        case 0x22b94cu: goto label_22b94c;
        case 0x22b950u: goto label_22b950;
        case 0x22b954u: goto label_22b954;
        case 0x22b958u: goto label_22b958;
        case 0x22b95cu: goto label_22b95c;
        case 0x22b960u: goto label_22b960;
        case 0x22b964u: goto label_22b964;
        case 0x22b968u: goto label_22b968;
        case 0x22b96cu: goto label_22b96c;
        case 0x22b970u: goto label_22b970;
        case 0x22b974u: goto label_22b974;
        case 0x22b978u: goto label_22b978;
        case 0x22b97cu: goto label_22b97c;
        case 0x22b980u: goto label_22b980;
        case 0x22b984u: goto label_22b984;
        case 0x22b988u: goto label_22b988;
        case 0x22b98cu: goto label_22b98c;
        case 0x22b990u: goto label_22b990;
        case 0x22b994u: goto label_22b994;
        case 0x22b998u: goto label_22b998;
        case 0x22b99cu: goto label_22b99c;
        case 0x22b9a0u: goto label_22b9a0;
        case 0x22b9a4u: goto label_22b9a4;
        case 0x22b9a8u: goto label_22b9a8;
        case 0x22b9acu: goto label_22b9ac;
        case 0x22b9b0u: goto label_22b9b0;
        case 0x22b9b4u: goto label_22b9b4;
        case 0x22b9b8u: goto label_22b9b8;
        case 0x22b9bcu: goto label_22b9bc;
        case 0x22b9c0u: goto label_22b9c0;
        case 0x22b9c4u: goto label_22b9c4;
        case 0x22b9c8u: goto label_22b9c8;
        case 0x22b9ccu: goto label_22b9cc;
        case 0x22b9d0u: goto label_22b9d0;
        case 0x22b9d4u: goto label_22b9d4;
        case 0x22b9d8u: goto label_22b9d8;
        case 0x22b9dcu: goto label_22b9dc;
        case 0x22b9e0u: goto label_22b9e0;
        case 0x22b9e4u: goto label_22b9e4;
        case 0x22b9e8u: goto label_22b9e8;
        case 0x22b9ecu: goto label_22b9ec;
        case 0x22b9f0u: goto label_22b9f0;
        case 0x22b9f4u: goto label_22b9f4;
        case 0x22b9f8u: goto label_22b9f8;
        case 0x22b9fcu: goto label_22b9fc;
        case 0x22ba00u: goto label_22ba00;
        case 0x22ba04u: goto label_22ba04;
        case 0x22ba08u: goto label_22ba08;
        case 0x22ba0cu: goto label_22ba0c;
        case 0x22ba10u: goto label_22ba10;
        case 0x22ba14u: goto label_22ba14;
        case 0x22ba18u: goto label_22ba18;
        case 0x22ba1cu: goto label_22ba1c;
        case 0x22ba20u: goto label_22ba20;
        case 0x22ba24u: goto label_22ba24;
        case 0x22ba28u: goto label_22ba28;
        case 0x22ba2cu: goto label_22ba2c;
        case 0x22ba30u: goto label_22ba30;
        case 0x22ba34u: goto label_22ba34;
        case 0x22ba38u: goto label_22ba38;
        case 0x22ba3cu: goto label_22ba3c;
        case 0x22ba40u: goto label_22ba40;
        case 0x22ba44u: goto label_22ba44;
        case 0x22ba48u: goto label_22ba48;
        case 0x22ba4cu: goto label_22ba4c;
        case 0x22ba50u: goto label_22ba50;
        case 0x22ba54u: goto label_22ba54;
        case 0x22ba58u: goto label_22ba58;
        case 0x22ba5cu: goto label_22ba5c;
        case 0x22ba60u: goto label_22ba60;
        case 0x22ba64u: goto label_22ba64;
        case 0x22ba68u: goto label_22ba68;
        case 0x22ba6cu: goto label_22ba6c;
        case 0x22ba70u: goto label_22ba70;
        case 0x22ba74u: goto label_22ba74;
        case 0x22ba78u: goto label_22ba78;
        case 0x22ba7cu: goto label_22ba7c;
        case 0x22ba80u: goto label_22ba80;
        case 0x22ba84u: goto label_22ba84;
        case 0x22ba88u: goto label_22ba88;
        case 0x22ba8cu: goto label_22ba8c;
        case 0x22ba90u: goto label_22ba90;
        case 0x22ba94u: goto label_22ba94;
        case 0x22ba98u: goto label_22ba98;
        case 0x22ba9cu: goto label_22ba9c;
        case 0x22baa0u: goto label_22baa0;
        case 0x22baa4u: goto label_22baa4;
        case 0x22baa8u: goto label_22baa8;
        case 0x22baacu: goto label_22baac;
        case 0x22bab0u: goto label_22bab0;
        case 0x22bab4u: goto label_22bab4;
        case 0x22bab8u: goto label_22bab8;
        case 0x22babcu: goto label_22babc;
        case 0x22bac0u: goto label_22bac0;
        case 0x22bac4u: goto label_22bac4;
        case 0x22bac8u: goto label_22bac8;
        case 0x22baccu: goto label_22bacc;
        case 0x22bad0u: goto label_22bad0;
        case 0x22bad4u: goto label_22bad4;
        case 0x22bad8u: goto label_22bad8;
        case 0x22badcu: goto label_22badc;
        case 0x22bae0u: goto label_22bae0;
        case 0x22bae4u: goto label_22bae4;
        case 0x22bae8u: goto label_22bae8;
        case 0x22baecu: goto label_22baec;
        case 0x22baf0u: goto label_22baf0;
        case 0x22baf4u: goto label_22baf4;
        case 0x22baf8u: goto label_22baf8;
        case 0x22bafcu: goto label_22bafc;
        case 0x22bb00u: goto label_22bb00;
        case 0x22bb04u: goto label_22bb04;
        case 0x22bb08u: goto label_22bb08;
        case 0x22bb0cu: goto label_22bb0c;
        case 0x22bb10u: goto label_22bb10;
        case 0x22bb14u: goto label_22bb14;
        case 0x22bb18u: goto label_22bb18;
        case 0x22bb1cu: goto label_22bb1c;
        case 0x22bb20u: goto label_22bb20;
        case 0x22bb24u: goto label_22bb24;
        case 0x22bb28u: goto label_22bb28;
        case 0x22bb2cu: goto label_22bb2c;
        default: break;
    }

    ctx->pc = 0x22b820u;

label_22b820:
    // 0x22b820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22b824:
    // 0x22b824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22b828:
    // 0x22b828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22b82c:
    // 0x22b82c: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x22b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_22b830:
    // 0x22b830: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_22b834:
    if (ctx->pc == 0x22B834u) {
        ctx->pc = 0x22B834u;
            // 0x22b834: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B838u;
        goto label_22b838;
    }
    ctx->pc = 0x22B830u;
    {
        const bool branch_taken_0x22b830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B830u;
            // 0x22b834: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b830) {
            ctx->pc = 0x22B890u;
            goto label_22b890;
        }
    }
    ctx->pc = 0x22B838u;
label_22b838:
    // 0x22b838: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x22b838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_22b83c:
    // 0x22b83c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_22b840:
    // 0x22b840: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22b840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22b844:
    // 0x22b844: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_22b848:
    if (ctx->pc == 0x22B848u) {
        ctx->pc = 0x22B848u;
            // 0x22b848: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x22B84Cu;
        goto label_22b84c;
    }
    ctx->pc = 0x22B844u;
    {
        const bool branch_taken_0x22b844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b844) {
            ctx->pc = 0x22B848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B844u;
            // 0x22b848: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B874u;
            goto label_22b874;
        }
    }
    ctx->pc = 0x22B84Cu;
label_22b84c:
    // 0x22b84c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22b850:
    // 0x22b850: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x22b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_22b854:
    // 0x22b854: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22b854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22b858:
    // 0x22b858: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22b858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22b85c:
    // 0x22b85c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x22b85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_22b860:
    // 0x22b860: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22b860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22b864:
    // 0x22b864: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22b864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22b868:
    // 0x22b868: 0xc0a7ab4  jal         func_29EAD0
label_22b86c:
    if (ctx->pc == 0x22B86Cu) {
        ctx->pc = 0x22B86Cu;
            // 0x22b86c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22B870u;
        goto label_22b870;
    }
    ctx->pc = 0x22B868u;
    SET_GPR_U32(ctx, 31, 0x22B870u);
    ctx->pc = 0x22B86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B868u;
            // 0x22b86c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B870u; }
        if (ctx->pc != 0x22B870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B870u; }
        if (ctx->pc != 0x22B870u) { return; }
    }
    ctx->pc = 0x22B870u;
label_22b870:
    // 0x22b870: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x22b870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_22b874:
    // 0x22b874: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x22b874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_22b878:
    // 0x22b878: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x22b878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_22b87c:
    // 0x22b87c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_22b880:
    // 0x22b880: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x22b880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_22b884:
    // 0x22b884: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x22b884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_22b888:
    // 0x22b888: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x22b888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_22b88c:
    // 0x22b88c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x22b88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_22b890:
    // 0x22b890: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x22b890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_22b894:
    // 0x22b894: 0x54600018  bnel        $v1, $zero, . + 4 + (0x18 << 2)
label_22b898:
    if (ctx->pc == 0x22B898u) {
        ctx->pc = 0x22B898u;
            // 0x22b898: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x22B89Cu;
        goto label_22b89c;
    }
    ctx->pc = 0x22B894u;
    {
        const bool branch_taken_0x22b894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b894) {
            ctx->pc = 0x22B898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B894u;
            // 0x22b898: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B8F8u;
            goto label_22b8f8;
        }
    }
    ctx->pc = 0x22B89Cu;
label_22b89c:
    // 0x22b89c: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x22b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_22b8a0:
    // 0x22b8a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_22b8a4:
    // 0x22b8a4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22b8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22b8a8:
    // 0x22b8a8: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_22b8ac:
    if (ctx->pc == 0x22B8ACu) {
        ctx->pc = 0x22B8ACu;
            // 0x22b8ac: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x22B8B0u;
        goto label_22b8b0;
    }
    ctx->pc = 0x22B8A8u;
    {
        const bool branch_taken_0x22b8a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b8a8) {
            ctx->pc = 0x22B8ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B8A8u;
            // 0x22b8ac: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B8D8u;
            goto label_22b8d8;
        }
    }
    ctx->pc = 0x22B8B0u;
label_22b8b0:
    // 0x22b8b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22b8b4:
    // 0x22b8b4: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x22b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_22b8b8:
    // 0x22b8b8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22b8bc:
    // 0x22b8bc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22b8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22b8c0:
    // 0x22b8c0: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x22b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_22b8c4:
    // 0x22b8c4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22b8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22b8c8:
    // 0x22b8c8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22b8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22b8cc:
    // 0x22b8cc: 0xc0a7ab4  jal         func_29EAD0
label_22b8d0:
    if (ctx->pc == 0x22B8D0u) {
        ctx->pc = 0x22B8D0u;
            // 0x22b8d0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22B8D4u;
        goto label_22b8d4;
    }
    ctx->pc = 0x22B8CCu;
    SET_GPR_U32(ctx, 31, 0x22B8D4u);
    ctx->pc = 0x22B8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B8CCu;
            // 0x22b8d0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B8D4u; }
        if (ctx->pc != 0x22B8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B8D4u; }
        if (ctx->pc != 0x22B8D4u) { return; }
    }
    ctx->pc = 0x22B8D4u;
label_22b8d4:
    // 0x22b8d4: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x22b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_22b8d8:
    // 0x22b8d8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x22b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_22b8dc:
    // 0x22b8dc: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x22b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_22b8e0:
    // 0x22b8e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_22b8e4:
    // 0x22b8e4: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x22b8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_22b8e8:
    // 0x22b8e8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x22b8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_22b8ec:
    // 0x22b8ec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x22b8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_22b8f0:
    // 0x22b8f0: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x22b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_22b8f4:
    // 0x22b8f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22b8f8:
    // 0x22b8f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22b8fc:
    // 0x22b8fc: 0x3e00008  jr          $ra
label_22b900:
    if (ctx->pc == 0x22B900u) {
        ctx->pc = 0x22B900u;
            // 0x22b900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22B904u;
        goto label_22b904;
    }
    ctx->pc = 0x22B8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B8FCu;
            // 0x22b900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B904u;
label_22b904:
    // 0x22b904: 0x0  nop
    ctx->pc = 0x22b904u;
    // NOP
label_22b908:
    // 0x22b908: 0x0  nop
    ctx->pc = 0x22b908u;
    // NOP
label_22b90c:
    // 0x22b90c: 0x0  nop
    ctx->pc = 0x22b90cu;
    // NOP
label_22b910:
    // 0x22b910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22b914:
    // 0x22b914: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22b914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22b918:
    // 0x22b918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22b91c:
    // 0x22b91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22b920:
    // 0x22b920: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x22b920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22b924:
    // 0x22b924: 0x80c40004  lb          $a0, 0x4($a2)
    ctx->pc = 0x22b924u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_22b928:
    // 0x22b928: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_22b92c:
    if (ctx->pc == 0x22B92Cu) {
        ctx->pc = 0x22B92Cu;
            // 0x22b92c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B930u;
        goto label_22b930;
    }
    ctx->pc = 0x22B928u;
    {
        const bool branch_taken_0x22b928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x22B92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B928u;
            // 0x22b92c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b928) {
            ctx->pc = 0x22B958u;
            goto label_22b958;
        }
    }
    ctx->pc = 0x22B930u;
label_22b930:
    // 0x22b930: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x22b930u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
label_22b934:
    // 0x22b934: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x22b934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22b938:
    // 0x22b938: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x22b938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_22b93c:
    // 0x22b93c: 0x80830010  lb          $v1, 0x10($a0)
    ctx->pc = 0x22b93cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_22b940:
    // 0x22b940: 0x80a20005  lb          $v0, 0x5($a1)
    ctx->pc = 0x22b940u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_22b944:
    // 0x22b944: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22b944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22b948:
    // 0x22b948: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22b948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22b94c:
    // 0x22b94c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22b94cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22b950:
    // 0x22b950: 0x320f809  jalr        $t9
label_22b954:
    if (ctx->pc == 0x22B954u) {
        ctx->pc = 0x22B954u;
            // 0x22b954: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x22B958u;
        goto label_22b958;
    }
    ctx->pc = 0x22B950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22B958u);
        ctx->pc = 0x22B954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B950u;
            // 0x22b954: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22B958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22B958u; }
            if (ctx->pc != 0x22B958u) { return; }
        }
        }
    }
    ctx->pc = 0x22B958u;
label_22b958:
    // 0x22b958: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x22b958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22b95c:
    // 0x22b95c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22b960:
    // 0x22b960: 0x80840004  lb          $a0, 0x4($a0)
    ctx->pc = 0x22b960u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_22b964:
    // 0x22b964: 0x5483000e  bnel        $a0, $v1, . + 4 + (0xE << 2)
label_22b968:
    if (ctx->pc == 0x22B968u) {
        ctx->pc = 0x22B968u;
            // 0x22b968: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x22B96Cu;
        goto label_22b96c;
    }
    ctx->pc = 0x22B964u;
    {
        const bool branch_taken_0x22b964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22b964) {
            ctx->pc = 0x22B968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B964u;
            // 0x22b968: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B9A0u;
            goto label_22b9a0;
        }
    }
    ctx->pc = 0x22B96Cu;
label_22b96c:
    // 0x22b96c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22b96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b970:
    // 0x22b970: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x22b970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22b974:
    // 0x22b974: 0x80a20005  lb          $v0, 0x5($a1)
    ctx->pc = 0x22b974u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_22b978:
    // 0x22b978: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x22b978u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_22b97c:
    // 0x22b97c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22b97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_22b980:
    // 0x22b980: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22b980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22b984:
    // 0x22b984: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x22b984u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_22b988:
    // 0x22b988: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x22b988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22b98c:
    // 0x22b98c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22b98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22b990:
    // 0x22b990: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22b990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22b994:
    // 0x22b994: 0x320f809  jalr        $t9
label_22b998:
    if (ctx->pc == 0x22B998u) {
        ctx->pc = 0x22B99Cu;
        goto label_22b99c;
    }
    ctx->pc = 0x22B994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22B99Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22B99Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22B99Cu; }
            if (ctx->pc != 0x22B99Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22B99Cu;
label_22b99c:
    // 0x22b99c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22b9a0:
    // 0x22b9a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22b9a4:
    // 0x22b9a4: 0x3e00008  jr          $ra
label_22b9a8:
    if (ctx->pc == 0x22B9A8u) {
        ctx->pc = 0x22B9A8u;
            // 0x22b9a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22B9ACu;
        goto label_22b9ac;
    }
    ctx->pc = 0x22B9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B9A4u;
            // 0x22b9a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B9ACu;
label_22b9ac:
    // 0x22b9ac: 0x0  nop
    ctx->pc = 0x22b9acu;
    // NOP
label_22b9b0:
    // 0x22b9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22b9b4:
    // 0x22b9b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22b9b8:
    // 0x22b9b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22b9bc:
    // 0x22b9bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22b9c0:
    // 0x22b9c0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x22b9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22b9c4:
    // 0x22b9c4: 0x80c40004  lb          $a0, 0x4($a2)
    ctx->pc = 0x22b9c4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_22b9c8:
    // 0x22b9c8: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_22b9cc:
    if (ctx->pc == 0x22B9CCu) {
        ctx->pc = 0x22B9CCu;
            // 0x22b9cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B9D0u;
        goto label_22b9d0;
    }
    ctx->pc = 0x22B9C8u;
    {
        const bool branch_taken_0x22b9c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x22B9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B9C8u;
            // 0x22b9cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b9c8) {
            ctx->pc = 0x22B9F8u;
            goto label_22b9f8;
        }
    }
    ctx->pc = 0x22B9D0u;
label_22b9d0:
    // 0x22b9d0: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x22b9d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
label_22b9d4:
    // 0x22b9d4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x22b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22b9d8:
    // 0x22b9d8: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x22b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_22b9dc:
    // 0x22b9dc: 0x80830010  lb          $v1, 0x10($a0)
    ctx->pc = 0x22b9dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_22b9e0:
    // 0x22b9e0: 0x80a20005  lb          $v0, 0x5($a1)
    ctx->pc = 0x22b9e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_22b9e4:
    // 0x22b9e4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22b9e8:
    // 0x22b9e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22b9e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22b9ec:
    // 0x22b9ec: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x22b9ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_22b9f0:
    // 0x22b9f0: 0x320f809  jalr        $t9
label_22b9f4:
    if (ctx->pc == 0x22B9F4u) {
        ctx->pc = 0x22B9F4u;
            // 0x22b9f4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x22B9F8u;
        goto label_22b9f8;
    }
    ctx->pc = 0x22B9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22B9F8u);
        ctx->pc = 0x22B9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B9F0u;
            // 0x22b9f4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22B9F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22B9F8u; }
            if (ctx->pc != 0x22B9F8u) { return; }
        }
        }
    }
    ctx->pc = 0x22B9F8u;
label_22b9f8:
    // 0x22b9f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x22b9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22b9fc:
    // 0x22b9fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22ba00:
    // 0x22ba00: 0x80840004  lb          $a0, 0x4($a0)
    ctx->pc = 0x22ba00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_22ba04:
    // 0x22ba04: 0x5483000e  bnel        $a0, $v1, . + 4 + (0xE << 2)
label_22ba08:
    if (ctx->pc == 0x22BA08u) {
        ctx->pc = 0x22BA08u;
            // 0x22ba08: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x22BA0Cu;
        goto label_22ba0c;
    }
    ctx->pc = 0x22BA04u;
    {
        const bool branch_taken_0x22ba04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22ba04) {
            ctx->pc = 0x22BA08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA04u;
            // 0x22ba08: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BA40u;
            goto label_22ba40;
        }
    }
    ctx->pc = 0x22BA0Cu;
label_22ba0c:
    // 0x22ba0c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22ba10:
    // 0x22ba10: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x22ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22ba14:
    // 0x22ba14: 0x80a20005  lb          $v0, 0x5($a1)
    ctx->pc = 0x22ba14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_22ba18:
    // 0x22ba18: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x22ba18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_22ba1c:
    // 0x22ba1c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_22ba20:
    // 0x22ba20: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22ba24:
    // 0x22ba24: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x22ba24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_22ba28:
    // 0x22ba28: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x22ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22ba2c:
    // 0x22ba2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22ba2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22ba30:
    // 0x22ba30: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x22ba30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_22ba34:
    // 0x22ba34: 0x320f809  jalr        $t9
label_22ba38:
    if (ctx->pc == 0x22BA38u) {
        ctx->pc = 0x22BA3Cu;
        goto label_22ba3c;
    }
    ctx->pc = 0x22BA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22BA3Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22BA3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22BA3Cu; }
            if (ctx->pc != 0x22BA3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22BA3Cu;
label_22ba3c:
    // 0x22ba3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22ba3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22ba40:
    // 0x22ba40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ba40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22ba44:
    // 0x22ba44: 0x3e00008  jr          $ra
label_22ba48:
    if (ctx->pc == 0x22BA48u) {
        ctx->pc = 0x22BA48u;
            // 0x22ba48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22BA4Cu;
        goto label_22ba4c;
    }
    ctx->pc = 0x22BA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA44u;
            // 0x22ba48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22BA4Cu;
label_22ba4c:
    // 0x22ba4c: 0x0  nop
    ctx->pc = 0x22ba4cu;
    // NOP
label_22ba50:
    // 0x22ba50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22ba54:
    // 0x22ba54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22ba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22ba58:
    // 0x22ba58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22ba5c:
    // 0x22ba5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ba5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ba60:
    // 0x22ba60: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_22ba64:
    if (ctx->pc == 0x22BA64u) {
        ctx->pc = 0x22BA64u;
            // 0x22ba64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22BA68u;
        goto label_22ba68;
    }
    ctx->pc = 0x22BA60u;
    {
        const bool branch_taken_0x22ba60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ba60) {
            ctx->pc = 0x22BA64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA60u;
            // 0x22ba64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BAE4u;
            goto label_22bae4;
        }
    }
    ctx->pc = 0x22BA68u;
label_22ba68:
    // 0x22ba68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22ba6c:
    // 0x22ba6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x22ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_22ba70:
    // 0x22ba70: 0x2442ef10  addiu       $v0, $v0, -0x10F0
    ctx->pc = 0x22ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962960));
label_22ba74:
    // 0x22ba74: 0x2463ef20  addiu       $v1, $v1, -0x10E0
    ctx->pc = 0x22ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962976));
label_22ba78:
    // 0x22ba78: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_22ba7c:
    // 0x22ba7c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x22ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_22ba80:
    // 0x22ba80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22ba84:
    if (ctx->pc == 0x22BA84u) {
        ctx->pc = 0x22BA84u;
            // 0x22ba84: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x22BA88u;
        goto label_22ba88;
    }
    ctx->pc = 0x22BA80u;
    {
        const bool branch_taken_0x22ba80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA80u;
            // 0x22ba84: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba80) {
            ctx->pc = 0x22BA94u;
            goto label_22ba94;
        }
    }
    ctx->pc = 0x22BA88u;
label_22ba88:
    // 0x22ba88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22ba8c:
    // 0x22ba8c: 0x2442e010  addiu       $v0, $v0, -0x1FF0
    ctx->pc = 0x22ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
label_22ba90:
    // 0x22ba90: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x22ba90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_22ba94:
    // 0x22ba94: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_22ba98:
    if (ctx->pc == 0x22BA98u) {
        ctx->pc = 0x22BA98u;
            // 0x22ba98: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x22BA9Cu;
        goto label_22ba9c;
    }
    ctx->pc = 0x22BA94u;
    {
        const bool branch_taken_0x22ba94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ba94) {
            ctx->pc = 0x22BA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA94u;
            // 0x22ba98: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BABCu;
            goto label_22babc;
        }
    }
    ctx->pc = 0x22BA9Cu;
label_22ba9c:
    // 0x22ba9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22baa0:
    // 0x22baa0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_22baa4:
    // 0x22baa4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_22baa8:
    if (ctx->pc == 0x22BAA8u) {
        ctx->pc = 0x22BAA8u;
            // 0x22baa8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22BAACu;
        goto label_22baac;
    }
    ctx->pc = 0x22BAA4u;
    {
        const bool branch_taken_0x22baa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BAA4u;
            // 0x22baa8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22baa4) {
            ctx->pc = 0x22BAB8u;
            goto label_22bab8;
        }
    }
    ctx->pc = 0x22BAACu;
label_22baac:
    // 0x22baac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22baacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22bab0:
    // 0x22bab0: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_22bab4:
    // 0x22bab4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22bab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_22bab8:
    // 0x22bab8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x22bab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_22babc:
    // 0x22babc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22babcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22bac0:
    // 0x22bac0: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_22bac4:
    if (ctx->pc == 0x22BAC4u) {
        ctx->pc = 0x22BAC8u;
        goto label_22bac8;
    }
    ctx->pc = 0x22BAC0u;
    {
        const bool branch_taken_0x22bac0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22bac0) {
            ctx->pc = 0x22BAE0u;
            goto label_22bae0;
        }
    }
    ctx->pc = 0x22BAC8u;
label_22bac8:
    // 0x22bac8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22bacc:
    // 0x22bacc: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x22baccu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_22bad0:
    // 0x22bad0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22bad4:
    // 0x22bad4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22bad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22bad8:
    // 0x22bad8: 0xc0a7ab4  jal         func_29EAD0
label_22badc:
    if (ctx->pc == 0x22BADCu) {
        ctx->pc = 0x22BADCu;
            // 0x22badc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x22BAE0u;
        goto label_22bae0;
    }
    ctx->pc = 0x22BAD8u;
    SET_GPR_U32(ctx, 31, 0x22BAE0u);
    ctx->pc = 0x22BADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BAD8u;
            // 0x22badc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BAE0u; }
        if (ctx->pc != 0x22BAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BAE0u; }
        if (ctx->pc != 0x22BAE0u) { return; }
    }
    ctx->pc = 0x22BAE0u;
label_22bae0:
    // 0x22bae0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22bae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22bae4:
    // 0x22bae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22bae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22bae8:
    // 0x22bae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22bae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22baec:
    // 0x22baec: 0x3e00008  jr          $ra
label_22baf0:
    if (ctx->pc == 0x22BAF0u) {
        ctx->pc = 0x22BAF0u;
            // 0x22baf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22BAF4u;
        goto label_22baf4;
    }
    ctx->pc = 0x22BAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BAECu;
            // 0x22baf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22BAF4u;
label_22baf4:
    // 0x22baf4: 0x0  nop
    ctx->pc = 0x22baf4u;
    // NOP
label_22baf8:
    // 0x22baf8: 0x0  nop
    ctx->pc = 0x22baf8u;
    // NOP
label_22bafc:
    // 0x22bafc: 0x0  nop
    ctx->pc = 0x22bafcu;
    // NOP
label_22bb00:
    // 0x22bb00: 0x808ae6c  j           func_22B9B0
label_22bb04:
    if (ctx->pc == 0x22BB04u) {
        ctx->pc = 0x22BB04u;
            // 0x22bb04: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->pc = 0x22BB08u;
        goto label_22bb08;
    }
    ctx->pc = 0x22BB00u;
    ctx->pc = 0x22BB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB00u;
            // 0x22bb04: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B9B0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_22b9b0;
    ctx->pc = 0x22BB08u;
label_22bb08:
    // 0x22bb08: 0x0  nop
    ctx->pc = 0x22bb08u;
    // NOP
label_22bb0c:
    // 0x22bb0c: 0x0  nop
    ctx->pc = 0x22bb0cu;
    // NOP
label_22bb10:
    // 0x22bb10: 0x808ae44  j           func_22B910
label_22bb14:
    if (ctx->pc == 0x22BB14u) {
        ctx->pc = 0x22BB14u;
            // 0x22bb14: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->pc = 0x22BB18u;
        goto label_22bb18;
    }
    ctx->pc = 0x22BB10u;
    ctx->pc = 0x22BB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB10u;
            // 0x22bb14: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B910u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_22b910;
    ctx->pc = 0x22BB18u;
label_22bb18:
    // 0x22bb18: 0x0  nop
    ctx->pc = 0x22bb18u;
    // NOP
label_22bb1c:
    // 0x22bb1c: 0x0  nop
    ctx->pc = 0x22bb1cu;
    // NOP
label_22bb20:
    // 0x22bb20: 0x808ae94  j           func_22BA50
label_22bb24:
    if (ctx->pc == 0x22BB24u) {
        ctx->pc = 0x22BB24u;
            // 0x22bb24: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->pc = 0x22BB28u;
        goto label_22bb28;
    }
    ctx->pc = 0x22BB20u;
    ctx->pc = 0x22BB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB20u;
            // 0x22bb24: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BA50u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_22ba50;
    ctx->pc = 0x22BB28u;
label_22bb28:
    // 0x22bb28: 0x0  nop
    ctx->pc = 0x22bb28u;
    // NOP
label_22bb2c:
    // 0x22bb2c: 0x0  nop
    ctx->pc = 0x22bb2cu;
    // NOP
}
