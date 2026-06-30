#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034C5A0
// Address: 0x34c5a0 - 0x34cd50
void sub_0034C5A0_0x34c5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C5A0_0x34c5a0");
#endif

    switch (ctx->pc) {
        case 0x34c5d4u: goto label_34c5d4;
        case 0x34c5fcu: goto label_34c5fc;
        case 0x34c604u: goto label_34c604;
        case 0x34c60cu: goto label_34c60c;
        case 0x34c62cu: goto label_34c62c;
        case 0x34c64cu: goto label_34c64c;
        case 0x34c654u: goto label_34c654;
        case 0x34c65cu: goto label_34c65c;
        case 0x34c664u: goto label_34c664;
        case 0x34c66cu: goto label_34c66c;
        case 0x34c674u: goto label_34c674;
        case 0x34c67cu: goto label_34c67c;
        case 0x34c684u: goto label_34c684;
        case 0x34c68cu: goto label_34c68c;
        case 0x34c694u: goto label_34c694;
        case 0x34c69cu: goto label_34c69c;
        case 0x34c6a4u: goto label_34c6a4;
        case 0x34c6acu: goto label_34c6ac;
        case 0x34c6b4u: goto label_34c6b4;
        case 0x34c6bcu: goto label_34c6bc;
        case 0x34c6c4u: goto label_34c6c4;
        case 0x34c6ccu: goto label_34c6cc;
        case 0x34c6d4u: goto label_34c6d4;
        case 0x34c6dcu: goto label_34c6dc;
        case 0x34c6e4u: goto label_34c6e4;
        case 0x34c6ecu: goto label_34c6ec;
        case 0x34c6f4u: goto label_34c6f4;
        case 0x34c6fcu: goto label_34c6fc;
        case 0x34c704u: goto label_34c704;
        case 0x34c70cu: goto label_34c70c;
        case 0x34c714u: goto label_34c714;
        case 0x34c71cu: goto label_34c71c;
        case 0x34c724u: goto label_34c724;
        case 0x34c72cu: goto label_34c72c;
        case 0x34c734u: goto label_34c734;
        case 0x34c73cu: goto label_34c73c;
        case 0x34c744u: goto label_34c744;
        case 0x34c74cu: goto label_34c74c;
        case 0x34c754u: goto label_34c754;
        case 0x34c75cu: goto label_34c75c;
        case 0x34c764u: goto label_34c764;
        case 0x34c76cu: goto label_34c76c;
        case 0x34c774u: goto label_34c774;
        case 0x34c77cu: goto label_34c77c;
        case 0x34c784u: goto label_34c784;
        case 0x34c78cu: goto label_34c78c;
        case 0x34c798u: goto label_34c798;
        case 0x34c840u: goto label_34c840;
        case 0x34c9c4u: goto label_34c9c4;
        case 0x34c9f4u: goto label_34c9f4;
        case 0x34c9fcu: goto label_34c9fc;
        case 0x34ca14u: goto label_34ca14;
        case 0x34ca30u: goto label_34ca30;
        case 0x34ca38u: goto label_34ca38;
        case 0x34ca50u: goto label_34ca50;
        case 0x34ca6cu: goto label_34ca6c;
        case 0x34ca74u: goto label_34ca74;
        case 0x34ca8cu: goto label_34ca8c;
        case 0x34caacu: goto label_34caac;
        case 0x34cab4u: goto label_34cab4;
        case 0x34caccu: goto label_34cacc;
        case 0x34cb44u: goto label_34cb44;
        case 0x34cb54u: goto label_34cb54;
        case 0x34cb6cu: goto label_34cb6c;
        case 0x34cb7cu: goto label_34cb7c;
        case 0x34cb94u: goto label_34cb94;
        case 0x34cbacu: goto label_34cbac;
        case 0x34cbc4u: goto label_34cbc4;
        case 0x34cbe0u: goto label_34cbe0;
        case 0x34cc00u: goto label_34cc00;
        case 0x34cc50u: goto label_34cc50;
        case 0x34cc70u: goto label_34cc70;
        case 0x34cc7cu: goto label_34cc7c;
        case 0x34cc8cu: goto label_34cc8c;
        case 0x34cc9cu: goto label_34cc9c;
        case 0x34ccacu: goto label_34ccac;
        case 0x34ccbcu: goto label_34ccbc;
        case 0x34ccccu: goto label_34cccc;
        case 0x34ccdcu: goto label_34ccdc;
        case 0x34cd38u: goto label_34cd38;
        default: break;
    }

    ctx->pc = 0x34c5a0u;

    // 0x34c5a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x34c5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x34c5a4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x34c5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34c5a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34c5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34c5ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34c5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34c5b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34c5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34c5b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34c5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34c5b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34c5b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c5bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34c5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34c5c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34c5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c5c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34c5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c5c8: 0x240536b0  addiu       $a1, $zero, 0x36B0
    ctx->pc = 0x34c5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14000));
    // 0x34c5cc: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x34C5CCu;
    SET_GPR_U32(ctx, 31, 0x34C5D4u);
    ctx->pc = 0x34C5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C5CCu;
            // 0x34c5d0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C5D4u; }
        if (ctx->pc != 0x34C5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C5D4u; }
        if (ctx->pc != 0x34C5D4u) { return; }
    }
    ctx->pc = 0x34C5D4u;
label_34c5d4:
    // 0x34c5d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34c5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34c5d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34c5dc: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x34c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x34c5e0: 0x26130054  addiu       $s3, $s0, 0x54
    ctx->pc = 0x34c5e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x34c5e4: 0x24425a00  addiu       $v0, $v0, 0x5A00
    ctx->pc = 0x34c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23040));
    // 0x34c5e8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x34c5ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34c5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x34c5f0: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x34c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x34c5f4: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C5F4u;
    SET_GPR_U32(ctx, 31, 0x34C5FCu);
    ctx->pc = 0x34C5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C5F4u;
            // 0x34c5f8: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C5FCu; }
        if (ctx->pc != 0x34C5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C5FCu; }
        if (ctx->pc != 0x34C5FCu) { return; }
    }
    ctx->pc = 0x34C5FCu;
label_34c5fc:
    // 0x34c5fc: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C5FCu;
    SET_GPR_U32(ctx, 31, 0x34C604u);
    ctx->pc = 0x34C600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C5FCu;
            // 0x34c600: 0x26640024  addiu       $a0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C604u; }
        if (ctx->pc != 0x34C604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C604u; }
        if (ctx->pc != 0x34C604u) { return; }
    }
    ctx->pc = 0x34C604u;
label_34c604:
    // 0x34c604: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C604u;
    SET_GPR_U32(ctx, 31, 0x34C60Cu);
    ctx->pc = 0x34C608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C604u;
            // 0x34c608: 0x26640044  addiu       $a0, $s3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C60Cu; }
        if (ctx->pc != 0x34C60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C60Cu; }
        if (ctx->pc != 0x34C60Cu) { return; }
    }
    ctx->pc = 0x34C60Cu;
label_34c60c:
    // 0x34c60c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x34c60cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x34c610: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x34c610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x34c614: 0x26640064  addiu       $a0, $s3, 0x64
    ctx->pc = 0x34c614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x34c618: 0x24a54a20  addiu       $a1, $a1, 0x4A20
    ctx->pc = 0x34c618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18976));
    // 0x34c61c: 0x24c64110  addiu       $a2, $a2, 0x4110
    ctx->pc = 0x34c61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16656));
    // 0x34c620: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x34c620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x34c624: 0xc040804  jal         func_102010
    ctx->pc = 0x34C624u;
    SET_GPR_U32(ctx, 31, 0x34C62Cu);
    ctx->pc = 0x34C628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C624u;
            // 0x34c628: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C62Cu; }
        if (ctx->pc != 0x34C62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C62Cu; }
        if (ctx->pc != 0x34C62Cu) { return; }
    }
    ctx->pc = 0x34C62Cu;
label_34c62c:
    // 0x34c62c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x34c62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x34c630: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x34c630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x34c634: 0x26640134  addiu       $a0, $s3, 0x134
    ctx->pc = 0x34c634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 308));
    // 0x34c638: 0x24a54a20  addiu       $a1, $a1, 0x4A20
    ctx->pc = 0x34c638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18976));
    // 0x34c63c: 0x24c64110  addiu       $a2, $a2, 0x4110
    ctx->pc = 0x34c63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16656));
    // 0x34c640: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x34c640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x34c644: 0xc040804  jal         func_102010
    ctx->pc = 0x34C644u;
    SET_GPR_U32(ctx, 31, 0x34C64Cu);
    ctx->pc = 0x34C648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C644u;
            // 0x34c648: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C64Cu; }
        if (ctx->pc != 0x34C64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C64Cu; }
        if (ctx->pc != 0x34C64Cu) { return; }
    }
    ctx->pc = 0x34C64Cu;
label_34c64c:
    // 0x34c64c: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C64Cu;
    SET_GPR_U32(ctx, 31, 0x34C654u);
    ctx->pc = 0x34C650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C64Cu;
            // 0x34c650: 0x26640204  addiu       $a0, $s3, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 516));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C654u; }
        if (ctx->pc != 0x34C654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C654u; }
        if (ctx->pc != 0x34C654u) { return; }
    }
    ctx->pc = 0x34C654u;
label_34c654:
    // 0x34c654: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C654u;
    SET_GPR_U32(ctx, 31, 0x34C65Cu);
    ctx->pc = 0x34C658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C654u;
            // 0x34c658: 0x26640224  addiu       $a0, $s3, 0x224 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 548));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C65Cu; }
        if (ctx->pc != 0x34C65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C65Cu; }
        if (ctx->pc != 0x34C65Cu) { return; }
    }
    ctx->pc = 0x34C65Cu;
label_34c65c:
    // 0x34c65c: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C65Cu;
    SET_GPR_U32(ctx, 31, 0x34C664u);
    ctx->pc = 0x34C660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C65Cu;
            // 0x34c660: 0x26640244  addiu       $a0, $s3, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 580));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C664u; }
        if (ctx->pc != 0x34C664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C664u; }
        if (ctx->pc != 0x34C664u) { return; }
    }
    ctx->pc = 0x34C664u;
label_34c664:
    // 0x34c664: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C664u;
    SET_GPR_U32(ctx, 31, 0x34C66Cu);
    ctx->pc = 0x34C668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C664u;
            // 0x34c668: 0x26640264  addiu       $a0, $s3, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 612));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C66Cu; }
        if (ctx->pc != 0x34C66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C66Cu; }
        if (ctx->pc != 0x34C66Cu) { return; }
    }
    ctx->pc = 0x34C66Cu;
label_34c66c:
    // 0x34c66c: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C66Cu;
    SET_GPR_U32(ctx, 31, 0x34C674u);
    ctx->pc = 0x34C670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C66Cu;
            // 0x34c670: 0x26640284  addiu       $a0, $s3, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C674u; }
        if (ctx->pc != 0x34C674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C674u; }
        if (ctx->pc != 0x34C674u) { return; }
    }
    ctx->pc = 0x34C674u;
label_34c674:
    // 0x34c674: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C674u;
    SET_GPR_U32(ctx, 31, 0x34C67Cu);
    ctx->pc = 0x34C678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C674u;
            // 0x34c678: 0x266402a4  addiu       $a0, $s3, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 676));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C67Cu; }
        if (ctx->pc != 0x34C67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C67Cu; }
        if (ctx->pc != 0x34C67Cu) { return; }
    }
    ctx->pc = 0x34C67Cu;
label_34c67c:
    // 0x34c67c: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C67Cu;
    SET_GPR_U32(ctx, 31, 0x34C684u);
    ctx->pc = 0x34C680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C67Cu;
            // 0x34c680: 0x266402c4  addiu       $a0, $s3, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 708));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C684u; }
        if (ctx->pc != 0x34C684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C684u; }
        if (ctx->pc != 0x34C684u) { return; }
    }
    ctx->pc = 0x34C684u;
label_34c684:
    // 0x34c684: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C684u;
    SET_GPR_U32(ctx, 31, 0x34C68Cu);
    ctx->pc = 0x34C688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C684u;
            // 0x34c688: 0x266402e4  addiu       $a0, $s3, 0x2E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 740));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C68Cu; }
        if (ctx->pc != 0x34C68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C68Cu; }
        if (ctx->pc != 0x34C68Cu) { return; }
    }
    ctx->pc = 0x34C68Cu;
label_34c68c:
    // 0x34c68c: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C68Cu;
    SET_GPR_U32(ctx, 31, 0x34C694u);
    ctx->pc = 0x34C690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C68Cu;
            // 0x34c690: 0x26640304  addiu       $a0, $s3, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 772));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C694u; }
        if (ctx->pc != 0x34C694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C694u; }
        if (ctx->pc != 0x34C694u) { return; }
    }
    ctx->pc = 0x34C694u;
label_34c694:
    // 0x34c694: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C694u;
    SET_GPR_U32(ctx, 31, 0x34C69Cu);
    ctx->pc = 0x34C698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C694u;
            // 0x34c698: 0x26640324  addiu       $a0, $s3, 0x324 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 804));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C69Cu; }
        if (ctx->pc != 0x34C69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C69Cu; }
        if (ctx->pc != 0x34C69Cu) { return; }
    }
    ctx->pc = 0x34C69Cu;
label_34c69c:
    // 0x34c69c: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C69Cu;
    SET_GPR_U32(ctx, 31, 0x34C6A4u);
    ctx->pc = 0x34C6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C69Cu;
            // 0x34c6a0: 0x26640344  addiu       $a0, $s3, 0x344 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 836));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6A4u; }
        if (ctx->pc != 0x34C6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6A4u; }
        if (ctx->pc != 0x34C6A4u) { return; }
    }
    ctx->pc = 0x34C6A4u;
label_34c6a4:
    // 0x34c6a4: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C6A4u;
    SET_GPR_U32(ctx, 31, 0x34C6ACu);
    ctx->pc = 0x34C6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C6A4u;
            // 0x34c6a8: 0x26640364  addiu       $a0, $s3, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 868));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6ACu; }
        if (ctx->pc != 0x34C6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6ACu; }
        if (ctx->pc != 0x34C6ACu) { return; }
    }
    ctx->pc = 0x34C6ACu;
label_34c6ac:
    // 0x34c6ac: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C6ACu;
    SET_GPR_U32(ctx, 31, 0x34C6B4u);
    ctx->pc = 0x34C6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C6ACu;
            // 0x34c6b0: 0x26640384  addiu       $a0, $s3, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 900));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6B4u; }
        if (ctx->pc != 0x34C6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6B4u; }
        if (ctx->pc != 0x34C6B4u) { return; }
    }
    ctx->pc = 0x34C6B4u;
label_34c6b4:
    // 0x34c6b4: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C6B4u;
    SET_GPR_U32(ctx, 31, 0x34C6BCu);
    ctx->pc = 0x34C6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C6B4u;
            // 0x34c6b8: 0x266403a4  addiu       $a0, $s3, 0x3A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 932));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6BCu; }
        if (ctx->pc != 0x34C6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6BCu; }
        if (ctx->pc != 0x34C6BCu) { return; }
    }
    ctx->pc = 0x34C6BCu;
label_34c6bc:
    // 0x34c6bc: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C6BCu;
    SET_GPR_U32(ctx, 31, 0x34C6C4u);
    ctx->pc = 0x34C6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C6BCu;
            // 0x34c6c0: 0x266403c4  addiu       $a0, $s3, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 964));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6C4u; }
        if (ctx->pc != 0x34C6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6C4u; }
        if (ctx->pc != 0x34C6C4u) { return; }
    }
    ctx->pc = 0x34C6C4u;
label_34c6c4:
    // 0x34c6c4: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C6C4u;
    SET_GPR_U32(ctx, 31, 0x34C6CCu);
    ctx->pc = 0x34C6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C6C4u;
            // 0x34c6c8: 0x266403e4  addiu       $a0, $s3, 0x3E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 996));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6CCu; }
        if (ctx->pc != 0x34C6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6CCu; }
        if (ctx->pc != 0x34C6CCu) { return; }
    }
    ctx->pc = 0x34C6CCu;
label_34c6cc:
    // 0x34c6cc: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C6CCu;
    SET_GPR_U32(ctx, 31, 0x34C6D4u);
    ctx->pc = 0x34C6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C6CCu;
            // 0x34c6d0: 0x26640404  addiu       $a0, $s3, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1028));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6D4u; }
        if (ctx->pc != 0x34C6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6D4u; }
        if (ctx->pc != 0x34C6D4u) { return; }
    }
    ctx->pc = 0x34C6D4u;
label_34c6d4:
    // 0x34c6d4: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C6D4u;
    SET_GPR_U32(ctx, 31, 0x34C6DCu);
    ctx->pc = 0x34C6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C6D4u;
            // 0x34c6d8: 0x26640424  addiu       $a0, $s3, 0x424 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1060));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6DCu; }
        if (ctx->pc != 0x34C6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6DCu; }
        if (ctx->pc != 0x34C6DCu) { return; }
    }
    ctx->pc = 0x34C6DCu;
label_34c6dc:
    // 0x34c6dc: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C6DCu;
    SET_GPR_U32(ctx, 31, 0x34C6E4u);
    ctx->pc = 0x34C6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C6DCu;
            // 0x34c6e0: 0x26640444  addiu       $a0, $s3, 0x444 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1092));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6E4u; }
        if (ctx->pc != 0x34C6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6E4u; }
        if (ctx->pc != 0x34C6E4u) { return; }
    }
    ctx->pc = 0x34C6E4u;
label_34c6e4:
    // 0x34c6e4: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C6E4u;
    SET_GPR_U32(ctx, 31, 0x34C6ECu);
    ctx->pc = 0x34C6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C6E4u;
            // 0x34c6e8: 0x26640464  addiu       $a0, $s3, 0x464 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6ECu; }
        if (ctx->pc != 0x34C6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6ECu; }
        if (ctx->pc != 0x34C6ECu) { return; }
    }
    ctx->pc = 0x34C6ECu;
label_34c6ec:
    // 0x34c6ec: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C6ECu;
    SET_GPR_U32(ctx, 31, 0x34C6F4u);
    ctx->pc = 0x34C6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C6ECu;
            // 0x34c6f0: 0x26640484  addiu       $a0, $s3, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6F4u; }
        if (ctx->pc != 0x34C6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6F4u; }
        if (ctx->pc != 0x34C6F4u) { return; }
    }
    ctx->pc = 0x34C6F4u;
label_34c6f4:
    // 0x34c6f4: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C6F4u;
    SET_GPR_U32(ctx, 31, 0x34C6FCu);
    ctx->pc = 0x34C6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C6F4u;
            // 0x34c6f8: 0x266404a4  addiu       $a0, $s3, 0x4A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6FCu; }
        if (ctx->pc != 0x34C6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C6FCu; }
        if (ctx->pc != 0x34C6FCu) { return; }
    }
    ctx->pc = 0x34C6FCu;
label_34c6fc:
    // 0x34c6fc: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C6FCu;
    SET_GPR_U32(ctx, 31, 0x34C704u);
    ctx->pc = 0x34C700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C6FCu;
            // 0x34c700: 0x266404c4  addiu       $a0, $s3, 0x4C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C704u; }
        if (ctx->pc != 0x34C704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C704u; }
        if (ctx->pc != 0x34C704u) { return; }
    }
    ctx->pc = 0x34C704u;
label_34c704:
    // 0x34c704: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C704u;
    SET_GPR_U32(ctx, 31, 0x34C70Cu);
    ctx->pc = 0x34C708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C704u;
            // 0x34c708: 0x266404e4  addiu       $a0, $s3, 0x4E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C70Cu; }
        if (ctx->pc != 0x34C70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C70Cu; }
        if (ctx->pc != 0x34C70Cu) { return; }
    }
    ctx->pc = 0x34C70Cu;
label_34c70c:
    // 0x34c70c: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C70Cu;
    SET_GPR_U32(ctx, 31, 0x34C714u);
    ctx->pc = 0x34C710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C70Cu;
            // 0x34c710: 0x26640504  addiu       $a0, $s3, 0x504 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C714u; }
        if (ctx->pc != 0x34C714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C714u; }
        if (ctx->pc != 0x34C714u) { return; }
    }
    ctx->pc = 0x34C714u;
label_34c714:
    // 0x34c714: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C714u;
    SET_GPR_U32(ctx, 31, 0x34C71Cu);
    ctx->pc = 0x34C718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C714u;
            // 0x34c718: 0x26640524  addiu       $a0, $s3, 0x524 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C71Cu; }
        if (ctx->pc != 0x34C71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C71Cu; }
        if (ctx->pc != 0x34C71Cu) { return; }
    }
    ctx->pc = 0x34C71Cu;
label_34c71c:
    // 0x34c71c: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C71Cu;
    SET_GPR_U32(ctx, 31, 0x34C724u);
    ctx->pc = 0x34C720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C71Cu;
            // 0x34c720: 0x26640544  addiu       $a0, $s3, 0x544 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C724u; }
        if (ctx->pc != 0x34C724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C724u; }
        if (ctx->pc != 0x34C724u) { return; }
    }
    ctx->pc = 0x34C724u;
label_34c724:
    // 0x34c724: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C724u;
    SET_GPR_U32(ctx, 31, 0x34C72Cu);
    ctx->pc = 0x34C728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C724u;
            // 0x34c728: 0x26640564  addiu       $a0, $s3, 0x564 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1380));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C72Cu; }
        if (ctx->pc != 0x34C72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C72Cu; }
        if (ctx->pc != 0x34C72Cu) { return; }
    }
    ctx->pc = 0x34C72Cu;
label_34c72c:
    // 0x34c72c: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C72Cu;
    SET_GPR_U32(ctx, 31, 0x34C734u);
    ctx->pc = 0x34C730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C72Cu;
            // 0x34c730: 0x26640584  addiu       $a0, $s3, 0x584 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1412));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C734u; }
        if (ctx->pc != 0x34C734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C734u; }
        if (ctx->pc != 0x34C734u) { return; }
    }
    ctx->pc = 0x34C734u;
label_34c734:
    // 0x34c734: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C734u;
    SET_GPR_U32(ctx, 31, 0x34C73Cu);
    ctx->pc = 0x34C738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C734u;
            // 0x34c738: 0x266405a4  addiu       $a0, $s3, 0x5A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1444));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C73Cu; }
        if (ctx->pc != 0x34C73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C73Cu; }
        if (ctx->pc != 0x34C73Cu) { return; }
    }
    ctx->pc = 0x34C73Cu;
label_34c73c:
    // 0x34c73c: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C73Cu;
    SET_GPR_U32(ctx, 31, 0x34C744u);
    ctx->pc = 0x34C740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C73Cu;
            // 0x34c740: 0x266405c4  addiu       $a0, $s3, 0x5C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1476));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C744u; }
        if (ctx->pc != 0x34C744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C744u; }
        if (ctx->pc != 0x34C744u) { return; }
    }
    ctx->pc = 0x34C744u;
label_34c744:
    // 0x34c744: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C744u;
    SET_GPR_U32(ctx, 31, 0x34C74Cu);
    ctx->pc = 0x34C748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C744u;
            // 0x34c748: 0x266405e4  addiu       $a0, $s3, 0x5E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1508));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C74Cu; }
        if (ctx->pc != 0x34C74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C74Cu; }
        if (ctx->pc != 0x34C74Cu) { return; }
    }
    ctx->pc = 0x34C74Cu;
label_34c74c:
    // 0x34c74c: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C74Cu;
    SET_GPR_U32(ctx, 31, 0x34C754u);
    ctx->pc = 0x34C750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C74Cu;
            // 0x34c750: 0x26640604  addiu       $a0, $s3, 0x604 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1540));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C754u; }
        if (ctx->pc != 0x34C754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C754u; }
        if (ctx->pc != 0x34C754u) { return; }
    }
    ctx->pc = 0x34C754u;
label_34c754:
    // 0x34c754: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C754u;
    SET_GPR_U32(ctx, 31, 0x34C75Cu);
    ctx->pc = 0x34C758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C754u;
            // 0x34c758: 0x26640624  addiu       $a0, $s3, 0x624 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1572));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C75Cu; }
        if (ctx->pc != 0x34C75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C75Cu; }
        if (ctx->pc != 0x34C75Cu) { return; }
    }
    ctx->pc = 0x34C75Cu;
label_34c75c:
    // 0x34c75c: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C75Cu;
    SET_GPR_U32(ctx, 31, 0x34C764u);
    ctx->pc = 0x34C760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C75Cu;
            // 0x34c760: 0x26640644  addiu       $a0, $s3, 0x644 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1604));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C764u; }
        if (ctx->pc != 0x34C764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C764u; }
        if (ctx->pc != 0x34C764u) { return; }
    }
    ctx->pc = 0x34C764u;
label_34c764:
    // 0x34c764: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C764u;
    SET_GPR_U32(ctx, 31, 0x34C76Cu);
    ctx->pc = 0x34C768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C764u;
            // 0x34c768: 0x26640664  addiu       $a0, $s3, 0x664 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1636));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C76Cu; }
        if (ctx->pc != 0x34C76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C76Cu; }
        if (ctx->pc != 0x34C76Cu) { return; }
    }
    ctx->pc = 0x34C76Cu;
label_34c76c:
    // 0x34c76c: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C76Cu;
    SET_GPR_U32(ctx, 31, 0x34C774u);
    ctx->pc = 0x34C770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C76Cu;
            // 0x34c770: 0x26640684  addiu       $a0, $s3, 0x684 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1668));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C774u; }
        if (ctx->pc != 0x34C774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C774u; }
        if (ctx->pc != 0x34C774u) { return; }
    }
    ctx->pc = 0x34C774u;
label_34c774:
    // 0x34c774: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C774u;
    SET_GPR_U32(ctx, 31, 0x34C77Cu);
    ctx->pc = 0x34C778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C774u;
            // 0x34c778: 0x266406a4  addiu       $a0, $s3, 0x6A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C77Cu; }
        if (ctx->pc != 0x34C77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C77Cu; }
        if (ctx->pc != 0x34C77Cu) { return; }
    }
    ctx->pc = 0x34C77Cu;
label_34c77c:
    // 0x34c77c: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C77Cu;
    SET_GPR_U32(ctx, 31, 0x34C784u);
    ctx->pc = 0x34C780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C77Cu;
            // 0x34c780: 0x266406c4  addiu       $a0, $s3, 0x6C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1732));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C784u; }
        if (ctx->pc != 0x34C784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C784u; }
        if (ctx->pc != 0x34C784u) { return; }
    }
    ctx->pc = 0x34C784u;
label_34c784:
    // 0x34c784: 0xc0b0548  jal         func_2C1520
    ctx->pc = 0x34C784u;
    SET_GPR_U32(ctx, 31, 0x34C78Cu);
    ctx->pc = 0x34C788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C784u;
            // 0x34c788: 0x266406e4  addiu       $a0, $s3, 0x6E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1764));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C78Cu; }
        if (ctx->pc != 0x34C78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C78Cu; }
        if (ctx->pc != 0x34C78Cu) { return; }
    }
    ctx->pc = 0x34C78Cu;
label_34c78c:
    // 0x34c78c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x34c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x34c790: 0xc077c58  jal         func_1DF160
    ctx->pc = 0x34C790u;
    SET_GPR_U32(ctx, 31, 0x34C798u);
    ctx->pc = 0x34C794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C790u;
            // 0x34c794: 0x2484d3b0  addiu       $a0, $a0, -0x2C50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF160u;
    if (runtime->hasFunction(0x1DF160u)) {
        auto targetFn = runtime->lookupFunction(0x1DF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C798u; }
        if (ctx->pc != 0x34C798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF160_0x1df160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C798u; }
        if (ctx->pc != 0x34C798u) { return; }
    }
    ctx->pc = 0x34C798u;
label_34c798:
    // 0x34c798: 0xae000760  sw          $zero, 0x760($s0)
    ctx->pc = 0x34c798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1888), GPR_U32(ctx, 0));
    // 0x34c79c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34c7a0: 0xae000764  sw          $zero, 0x764($s0)
    ctx->pc = 0x34c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1892), GPR_U32(ctx, 0));
    // 0x34c7a4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x34c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34c7a8: 0xae000768  sw          $zero, 0x768($s0)
    ctx->pc = 0x34c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1896), GPR_U32(ctx, 0));
    // 0x34c7ac: 0x24635a78  addiu       $v1, $v1, 0x5A78
    ctx->pc = 0x34c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23160));
    // 0x34c7b0: 0xae00076c  sw          $zero, 0x76C($s0)
    ctx->pc = 0x34c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1900), GPR_U32(ctx, 0));
    // 0x34c7b4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x34c7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x34c7b8: 0xae03089c  sw          $v1, 0x89C($s0)
    ctx->pc = 0x34c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2204), GPR_U32(ctx, 3));
    // 0x34c7bc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x34c7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x34c7c0: 0xae1208a4  sw          $s2, 0x8A4($s0)
    ctx->pc = 0x34c7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2212), GPR_U32(ctx, 18));
    // 0x34c7c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x34c7c8: 0xa20008a8  sb          $zero, 0x8A8($s0)
    ctx->pc = 0x34c7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2216), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c7cc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x34c7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34c7d0: 0xa21108a9  sb          $s1, 0x8A9($s0)
    ctx->pc = 0x34c7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2217), (uint8_t)GPR_U32(ctx, 17));
    // 0x34c7d4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34c7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34c7d8: 0xa20008ac  sb          $zero, 0x8AC($s0)
    ctx->pc = 0x34c7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2220), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c7dc: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x34c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x34c7e0: 0x8cab89f0  lw          $t3, -0x7610($a1)
    ctx->pc = 0x34c7e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937072)));
    // 0x34c7e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34c7e8: 0x93aa007c  lbu         $t2, 0x7C($sp)
    ctx->pc = 0x34c7e8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x34c7ec: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x34c7ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34c7f0: 0x93a9007d  lbu         $t1, 0x7D($sp)
    ctx->pc = 0x34c7f0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 125)));
    // 0x34c7f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34c7f8: 0x93a5007e  lbu         $a1, 0x7E($sp)
    ctx->pc = 0x34c7f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 126)));
    // 0x34c7fc: 0xa16a003c  sb          $t2, 0x3C($t3)
    ctx->pc = 0x34c7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 60), (uint8_t)GPR_U32(ctx, 10));
    // 0x34c800: 0xa169003d  sb          $t1, 0x3D($t3)
    ctx->pc = 0x34c800u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 61), (uint8_t)GPR_U32(ctx, 9));
    // 0x34c804: 0xa165003e  sb          $a1, 0x3E($t3)
    ctx->pc = 0x34c804u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 62), (uint8_t)GPR_U32(ctx, 5));
    // 0x34c808: 0x93a5007f  lbu         $a1, 0x7F($sp)
    ctx->pc = 0x34c808u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
    // 0x34c80c: 0xa165003f  sb          $a1, 0x3F($t3)
    ctx->pc = 0x34c80cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 63), (uint8_t)GPR_U32(ctx, 5));
    // 0x34c810: 0x9169003e  lbu         $t1, 0x3E($t3)
    ctx->pc = 0x34c810u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 62)));
    // 0x34c814: 0x9165003d  lbu         $a1, 0x3D($t3)
    ctx->pc = 0x34c814u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 61)));
    // 0x34c818: 0x916a003f  lbu         $t2, 0x3F($t3)
    ctx->pc = 0x34c818u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 63)));
    // 0x34c81c: 0x94a38  dsll        $t1, $t1, 8
    ctx->pc = 0x34c81cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 8);
    // 0x34c820: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x34c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x34c824: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x34c824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x34c828: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x34c828u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x34c82c: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x34c82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x34c830: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x34c830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x34c834: 0xfc85ec90  sd          $a1, -0x1370($a0)
    ctx->pc = 0x34c834u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294962320), GPR_U64(ctx, 5));
    // 0x34c838: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x34C838u;
    {
        const bool branch_taken_0x34c838 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C838u;
            // 0x34c83c: 0xfc65ee00  sd          $a1, -0x1200($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4294962688), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c838) {
            ctx->pc = 0x34C85Cu;
            goto label_34c85c;
        }
    }
    ctx->pc = 0x34C840u;
label_34c840:
    // 0x34c840: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x34c840u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c844: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x34c844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x34c848: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x34c848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x34c84c: 0x0  nop
    ctx->pc = 0x34c84cu;
    // NOP
    // 0x34c850: 0x0  nop
    ctx->pc = 0x34c850u;
    // NOP
    // 0x34c854: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34C854u;
    {
        const bool branch_taken_0x34c854 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c854) {
            ctx->pc = 0x34C840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34c840;
        }
    }
    ctx->pc = 0x34C85Cu;
label_34c85c:
    // 0x34c85c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x34c860: 0xac700ea8  sw          $s0, 0xEA8($v1)
    ctx->pc = 0x34c860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3752), GPR_U32(ctx, 16));
    // 0x34c864: 0x90430078  lbu         $v1, 0x78($v0)
    ctx->pc = 0x34c864u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x34c868: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C868u;
    {
        const bool branch_taken_0x34c868 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34C86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C868u;
            // 0x34c86c: 0x24470004  addiu       $a3, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c868) {
            ctx->pc = 0x34C87Cu;
            goto label_34c87c;
        }
    }
    ctx->pc = 0x34C870u;
    // 0x34c870: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c874: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34C874u;
    {
        const bool branch_taken_0x34c874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C874u;
            // 0x34c878: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c874) {
            ctx->pc = 0x34C898u;
            goto label_34c898;
        }
    }
    ctx->pc = 0x34C87Cu;
label_34c87c:
    // 0x34c87c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x34c87cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x34c880: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34c880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34c884: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x34c884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x34c888: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34c888u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c88c: 0x0  nop
    ctx->pc = 0x34c88cu;
    // NOP
    // 0x34c890: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x34c890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x34c894: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x34c894u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_34c898:
    // 0x34c898: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x34c898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x34c89c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34c89cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34c8a0: 0x0  nop
    ctx->pc = 0x34c8a0u;
    // NOP
    // 0x34c8a4: 0x460408c3  div.s       $f3, $f1, $f4
    ctx->pc = 0x34c8a4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[4];
    // 0x34c8a8: 0x3c034682  lui         $v1, 0x4682
    ctx->pc = 0x34c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18050 << 16));
    // 0x34c8ac: 0x34643555  ori         $a0, $v1, 0x3555
    ctx->pc = 0x34c8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13653);
    // 0x34c8b0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x34c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x34c8b4: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x34c8b4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[1];
    // 0x34c8b8: 0xe4e40010  swc1        $f4, 0x10($a3)
    ctx->pc = 0x34c8b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x34c8bc: 0xe4e30014  swc1        $f3, 0x14($a3)
    ctx->pc = 0x34c8bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x34c8c0: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x34c8c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x34c8c4: 0xe4e30018  swc1        $f3, 0x18($a3)
    ctx->pc = 0x34c8c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x34c8c8: 0xe4e1001c  swc1        $f1, 0x1C($a3)
    ctx->pc = 0x34c8c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x34c8cc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x34c8ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x34c8d0: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x34c8d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x34c8d4: 0xc4e10014  lwc1        $f1, 0x14($a3)
    ctx->pc = 0x34c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c8d8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x34c8d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34c8dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c8dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c8e0: 0x0  nop
    ctx->pc = 0x34c8e0u;
    // NOP
    // 0x34c8e4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x34c8e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x34c8e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34c8e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x34c8ec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x34c8ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34c8f0: 0x0  nop
    ctx->pc = 0x34c8f0u;
    // NOP
    // 0x34c8f4: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x34c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
    // 0x34c8f8: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x34c8f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c8fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x34C8FCu;
    {
        const bool branch_taken_0x34c8fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C8FCu;
            // 0x34c900: 0x90e50074  lbu         $a1, 0x74($a3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c8fc) {
            ctx->pc = 0x34C914u;
            goto label_34c914;
        }
    }
    ctx->pc = 0x34C904u;
    // 0x34c904: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34c904u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34c908: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x34c908u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x34c90c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34C90Cu;
    {
        const bool branch_taken_0x34c90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C90Cu;
            // 0x34c910: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c90c) {
            ctx->pc = 0x34C930u;
            goto label_34c930;
        }
    }
    ctx->pc = 0x34C914u;
label_34c914:
    // 0x34c914: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x34c914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x34c918: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x34c918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x34c91c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34c91cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34c920: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x34c920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x34c924: 0x0  nop
    ctx->pc = 0x34c924u;
    // NOP
    // 0x34c928: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x34c928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x34c92c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x34c92cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_34c930:
    // 0x34c930: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x34c930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34c934: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x34c934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34c938: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x34c938u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34c93c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x34c93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x34c940: 0x0  nop
    ctx->pc = 0x34c940u;
    // NOP
    // 0x34c944: 0x2812  mflo        $a1
    ctx->pc = 0x34c944u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x34c948: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34c948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x34c94c: 0xa0e50075  sb          $a1, 0x75($a3)
    ctx->pc = 0x34c94cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 117), (uint8_t)GPR_U32(ctx, 5));
    // 0x34c950: 0x8c858a08  lw          $a1, -0x75F8($a0)
    ctx->pc = 0x34c950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
    // 0x34c954: 0x8c641638  lw          $a0, 0x1638($v1)
    ctx->pc = 0x34c954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5688)));
    // 0x34c958: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x34c958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x34c95c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x34c95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x34c960: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34C960u;
    {
        const bool branch_taken_0x34c960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C960u;
            // 0x34c964: 0x24a80004  addiu       $t0, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c960) {
            ctx->pc = 0x34C978u;
            goto label_34c978;
        }
    }
    ctx->pc = 0x34C968u;
    // 0x34c968: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34c968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x34c96c: 0x8c631630  lw          $v1, 0x1630($v1)
    ctx->pc = 0x34c96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5680)));
    // 0x34c970: 0x601827  not         $v1, $v1
    ctx->pc = 0x34c970u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x34c974: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x34c974u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_34c978:
    // 0x34c978: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x34c978u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x34c97c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x34c97cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x34c980: 0x8d060034  lw          $a2, 0x34($t0)
    ctx->pc = 0x34c980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x34c984: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x34c984u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x34c988: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34c988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x34c98c: 0x24a52568  addiu       $a1, $a1, 0x2568
    ctx->pc = 0x34c98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9576));
    // 0x34c990: 0x260408a0  addiu       $a0, $s0, 0x8A0
    ctx->pc = 0x34c990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2208));
    // 0x34c994: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x34c994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x34c998: 0xad060034  sw          $a2, 0x34($t0)
    ctx->pc = 0x34c998u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 6));
    // 0x34c99c: 0x8c72a348  lw          $s2, -0x5CB8($v1)
    ctx->pc = 0x34c99cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
    // 0x34c9a0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x34c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34c9a4: 0xa20308aa  sb          $v1, 0x8AA($s0)
    ctx->pc = 0x34c9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2218), (uint8_t)GPR_U32(ctx, 3));
    // 0x34c9a8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x34c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34c9ac: 0xa20208ab  sb          $v0, 0x8AB($s0)
    ctx->pc = 0x34c9acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2219), (uint8_t)GPR_U32(ctx, 2));
    // 0x34c9b0: 0x820308aa  lb          $v1, 0x8AA($s0)
    ctx->pc = 0x34c9b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2218)));
    // 0x34c9b4: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x34c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x34c9b8: 0x80510000  lb          $s1, 0x0($v0)
    ctx->pc = 0x34c9b8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34c9bc: 0xc112ba0  jal         func_44AE80
    ctx->pc = 0x34C9BCu;
    SET_GPR_U32(ctx, 31, 0x34C9C4u);
    ctx->pc = 0x34C9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C9BCu;
            // 0x34c9c0: 0x3982b  sltu        $s3, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x44AE80u;
    if (runtime->hasFunction(0x44AE80u)) {
        auto targetFn = runtime->lookupFunction(0x44AE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C9C4u; }
        if (ctx->pc != 0x34C9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044AE80_0x44ae80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C9C4u; }
        if (ctx->pc != 0x34C9C4u) { return; }
    }
    ctx->pc = 0x34C9C4u;
label_34c9c4:
    // 0x34c9c4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34c9c8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x34c9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x34c9cc: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x34c9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x34c9d0: 0x24423040  addiu       $v0, $v0, 0x3040
    ctx->pc = 0x34c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12352));
    // 0x34c9d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34c9d8: 0x8e0708a4  lw          $a3, 0x8A4($s0)
    ctx->pc = 0x34c9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2212)));
    // 0x34c9dc: 0x80530000  lb          $s3, 0x0($v0)
    ctx->pc = 0x34c9dcu;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34c9e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34c9e4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x34c9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34c9e8: 0x24c63088  addiu       $a2, $a2, 0x3088
    ctx->pc = 0x34c9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12424));
    // 0x34c9ec: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x34C9ECu;
    SET_GPR_U32(ctx, 31, 0x34C9F4u);
    ctx->pc = 0x34C9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C9ECu;
            // 0x34c9f0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C9F4u; }
        if (ctx->pc != 0x34C9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C9F4u; }
        if (ctx->pc != 0x34C9F4u) { return; }
    }
    ctx->pc = 0x34C9F4u;
label_34c9f4:
    // 0x34c9f4: 0xc0d3360  jal         func_34CD80
    ctx->pc = 0x34C9F4u;
    SET_GPR_U32(ctx, 31, 0x34C9FCu);
    ctx->pc = 0x34CD80u;
    if (runtime->hasFunction(0x34CD80u)) {
        auto targetFn = runtime->lookupFunction(0x34CD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C9FCu; }
        if (ctx->pc != 0x34C9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034CD80_0x34cd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C9FCu; }
        if (ctx->pc != 0x34C9FCu) { return; }
    }
    ctx->pc = 0x34C9FCu;
label_34c9fc:
    // 0x34c9fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34c9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ca00: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x34ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x34ca04: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x34ca04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34ca08: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x34ca08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x34ca0c: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x34CA0Cu;
    SET_GPR_U32(ctx, 31, 0x34CA14u);
    ctx->pc = 0x34CA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CA0Cu;
            // 0x34ca10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CA14u; }
        if (ctx->pc != 0x34CA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CA14u; }
        if (ctx->pc != 0x34CA14u) { return; }
    }
    ctx->pc = 0x34CA14u;
label_34ca14:
    // 0x34ca14: 0x8e0708a4  lw          $a3, 0x8A4($s0)
    ctx->pc = 0x34ca14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2212)));
    // 0x34ca18: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x34ca18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x34ca1c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34ca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34ca20: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x34ca20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34ca24: 0x24c63090  addiu       $a2, $a2, 0x3090
    ctx->pc = 0x34ca24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12432));
    // 0x34ca28: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x34CA28u;
    SET_GPR_U32(ctx, 31, 0x34CA30u);
    ctx->pc = 0x34CA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CA28u;
            // 0x34ca2c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CA30u; }
        if (ctx->pc != 0x34CA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CA30u; }
        if (ctx->pc != 0x34CA30u) { return; }
    }
    ctx->pc = 0x34CA30u;
label_34ca30:
    // 0x34ca30: 0xc0d3358  jal         func_34CD60
    ctx->pc = 0x34CA30u;
    SET_GPR_U32(ctx, 31, 0x34CA38u);
    ctx->pc = 0x34CA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CA30u;
            // 0x34ca34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34CD60u;
    if (runtime->hasFunction(0x34CD60u)) {
        auto targetFn = runtime->lookupFunction(0x34CD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CA38u; }
        if (ctx->pc != 0x34CA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034CD60_0x34cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CA38u; }
        if (ctx->pc != 0x34CA38u) { return; }
    }
    ctx->pc = 0x34CA38u;
label_34ca38:
    // 0x34ca38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34ca38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ca3c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x34ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x34ca40: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x34ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34ca44: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x34ca44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x34ca48: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x34CA48u;
    SET_GPR_U32(ctx, 31, 0x34CA50u);
    ctx->pc = 0x34CA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CA48u;
            // 0x34ca4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CA50u; }
        if (ctx->pc != 0x34CA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CA50u; }
        if (ctx->pc != 0x34CA50u) { return; }
    }
    ctx->pc = 0x34CA50u;
label_34ca50:
    // 0x34ca50: 0x8e0708a4  lw          $a3, 0x8A4($s0)
    ctx->pc = 0x34ca50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2212)));
    // 0x34ca54: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x34ca54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x34ca58: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x34ca58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ca5c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34ca60: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x34ca60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34ca64: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x34CA64u;
    SET_GPR_U32(ctx, 31, 0x34CA6Cu);
    ctx->pc = 0x34CA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CA64u;
            // 0x34ca68: 0x24c63098  addiu       $a2, $a2, 0x3098 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CA6Cu; }
        if (ctx->pc != 0x34CA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CA6Cu; }
        if (ctx->pc != 0x34CA6Cu) { return; }
    }
    ctx->pc = 0x34CA6Cu;
label_34ca6c:
    // 0x34ca6c: 0xc0d3358  jal         func_34CD60
    ctx->pc = 0x34CA6Cu;
    SET_GPR_U32(ctx, 31, 0x34CA74u);
    ctx->pc = 0x34CA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CA6Cu;
            // 0x34ca70: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34CD60u;
    if (runtime->hasFunction(0x34CD60u)) {
        auto targetFn = runtime->lookupFunction(0x34CD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CA74u; }
        if (ctx->pc != 0x34CA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034CD60_0x34cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CA74u; }
        if (ctx->pc != 0x34CA74u) { return; }
    }
    ctx->pc = 0x34CA74u;
label_34ca74:
    // 0x34ca74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34ca74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ca78: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x34ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x34ca7c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x34ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34ca80: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x34ca80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x34ca84: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x34CA84u;
    SET_GPR_U32(ctx, 31, 0x34CA8Cu);
    ctx->pc = 0x34CA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CA84u;
            // 0x34ca88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CA8Cu; }
        if (ctx->pc != 0x34CA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CA8Cu; }
        if (ctx->pc != 0x34CA8Cu) { return; }
    }
    ctx->pc = 0x34CA8Cu;
label_34ca8c:
    // 0x34ca8c: 0x8e0708a4  lw          $a3, 0x8A4($s0)
    ctx->pc = 0x34ca8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2212)));
    // 0x34ca90: 0x11463c  dsll32      $t0, $s1, 24
    ctx->pc = 0x34ca90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 24));
    // 0x34ca94: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x34ca94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x34ca98: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x34ca98u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x34ca9c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34caa0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x34caa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34caa4: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x34CAA4u;
    SET_GPR_U32(ctx, 31, 0x34CAACu);
    ctx->pc = 0x34CAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CAA4u;
            // 0x34caa8: 0x24c630a0  addiu       $a2, $a2, 0x30A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CAACu; }
        if (ctx->pc != 0x34CAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CAACu; }
        if (ctx->pc != 0x34CAACu) { return; }
    }
    ctx->pc = 0x34CAACu;
label_34caac:
    // 0x34caac: 0xc0d3354  jal         func_34CD50
    ctx->pc = 0x34CAACu;
    SET_GPR_U32(ctx, 31, 0x34CAB4u);
    ctx->pc = 0x34CD50u;
    if (runtime->hasFunction(0x34CD50u)) {
        auto targetFn = runtime->lookupFunction(0x34CD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CAB4u; }
        if (ctx->pc != 0x34CAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034CD50_0x34cd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CAB4u; }
        if (ctx->pc != 0x34CAB4u) { return; }
    }
    ctx->pc = 0x34CAB4u;
label_34cab4:
    // 0x34cab4: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x34cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x34cab8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34cab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cabc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x34cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34cac0: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x34cac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x34cac4: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x34CAC4u;
    SET_GPR_U32(ctx, 31, 0x34CACCu);
    ctx->pc = 0x34CAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CAC4u;
            // 0x34cac8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CACCu; }
        if (ctx->pc != 0x34CACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CACCu; }
        if (ctx->pc != 0x34CACCu) { return; }
    }
    ctx->pc = 0x34CACCu;
label_34cacc:
    // 0x34cacc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34caccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34cad0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34cad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34cad4: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x34cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
    // 0x34cad8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x34cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x34cadc: 0x3c0a0060  lui         $t2, 0x60
    ctx->pc = 0x34cadcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)96 << 16));
    // 0x34cae0: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x34cae0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
    // 0x34cae4: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x34cae4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
    // 0x34cae8: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x34cae8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34caec: 0x8c4c0008  lw          $t4, 0x8($v0)
    ctx->pc = 0x34caecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x34caf0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x34caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x34caf4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x34caf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34caf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34caf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cafc: 0xae0c078c  sw          $t4, 0x78C($s0)
    ctx->pc = 0x34cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1932), GPR_U32(ctx, 12));
    // 0x34cb00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34cb04: 0xae000794  sw          $zero, 0x794($s0)
    ctx->pc = 0x34cb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1940), GPR_U32(ctx, 0));
    // 0x34cb08: 0xa2000758  sb          $zero, 0x758($s0)
    ctx->pc = 0x34cb08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1880), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cb0c: 0xa2000759  sb          $zero, 0x759($s0)
    ctx->pc = 0x34cb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1881), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cb10: 0xa606075c  sh          $a2, 0x75C($s0)
    ctx->pc = 0x34cb10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1884), (uint16_t)GPR_U32(ctx, 6));
    // 0x34cb14: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x34cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x34cb18: 0xc5421618  lwc1        $f2, 0x1618($t2)
    ctx->pc = 0x34cb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 5656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34cb1c: 0xc521161c  lwc1        $f1, 0x161C($t1)
    ctx->pc = 0x34cb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 5660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cb20: 0xc5001620  lwc1        $f0, 0x1620($t0)
    ctx->pc = 0x34cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 5664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cb24: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x34cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x34cb28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x34cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34cb2c: 0xe46201a4  swc1        $f2, 0x1A4($v1)
    ctx->pc = 0x34cb2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x34cb30: 0xe46101a8  swc1        $f1, 0x1A8($v1)
    ctx->pc = 0x34cb30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x34cb34: 0xe46001ac  swc1        $f0, 0x1AC($v1)
    ctx->pc = 0x34cb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 428), bits); }
    // 0x34cb38: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x34cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x34cb3c: 0xc040140  jal         func_100500
    ctx->pc = 0x34CB3Cu;
    SET_GPR_U32(ctx, 31, 0x34CB44u);
    ctx->pc = 0x34CB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CB3Cu;
            // 0x34cb40: 0xac4b0084  sw          $t3, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CB44u; }
        if (ctx->pc != 0x34CB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CB44u; }
        if (ctx->pc != 0x34CB44u) { return; }
    }
    ctx->pc = 0x34CB44u;
label_34cb44:
    // 0x34cb44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CB44u;
    {
        const bool branch_taken_0x34cb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cb44) {
            ctx->pc = 0x34CB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34CB44u;
            // 0x34cb48: 0xae020898  sw          $v0, 0x898($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34CB58u;
            goto label_34cb58;
        }
    }
    ctx->pc = 0x34CB4Cu;
    // 0x34cb4c: 0xc0d3594  jal         func_34D650
    ctx->pc = 0x34CB4Cu;
    SET_GPR_U32(ctx, 31, 0x34CB54u);
    ctx->pc = 0x34CB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CB4Cu;
            // 0x34cb50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34D650u;
    if (runtime->hasFunction(0x34D650u)) {
        auto targetFn = runtime->lookupFunction(0x34D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CB54u; }
        if (ctx->pc != 0x34CB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034D650_0x34d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CB54u; }
        if (ctx->pc != 0x34CB54u) { return; }
    }
    ctx->pc = 0x34CB54u;
label_34cb54:
    // 0x34cb54: 0xae020898  sw          $v0, 0x898($s0)
    ctx->pc = 0x34cb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2200), GPR_U32(ctx, 2));
label_34cb58:
    // 0x34cb58: 0x24040560  addiu       $a0, $zero, 0x560
    ctx->pc = 0x34cb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x34cb5c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x34cb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34cb60: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34cb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34cb64: 0xc040140  jal         func_100500
    ctx->pc = 0x34CB64u;
    SET_GPR_U32(ctx, 31, 0x34CB6Cu);
    ctx->pc = 0x34CB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CB64u;
            // 0x34cb68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CB6Cu; }
        if (ctx->pc != 0x34CB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CB6Cu; }
        if (ctx->pc != 0x34CB6Cu) { return; }
    }
    ctx->pc = 0x34CB6Cu;
label_34cb6c:
    // 0x34cb6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CB6Cu;
    {
        const bool branch_taken_0x34cb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cb6c) {
            ctx->pc = 0x34CB70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34CB6Cu;
            // 0x34cb70: 0xae020774  sw          $v0, 0x774($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1908), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34CB80u;
            goto label_34cb80;
        }
    }
    ctx->pc = 0x34CB74u;
    // 0x34cb74: 0xc12c9a0  jal         func_4B2680
    ctx->pc = 0x34CB74u;
    SET_GPR_U32(ctx, 31, 0x34CB7Cu);
    ctx->pc = 0x34CB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CB74u;
            // 0x34cb78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B2680u;
    if (runtime->hasFunction(0x4B2680u)) {
        auto targetFn = runtime->lookupFunction(0x4B2680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CB7Cu; }
        if (ctx->pc != 0x34CB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B2680_0x4b2680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CB7Cu; }
        if (ctx->pc != 0x34CB7Cu) { return; }
    }
    ctx->pc = 0x34CB7Cu;
label_34cb7c:
    // 0x34cb7c: 0xae020774  sw          $v0, 0x774($s0)
    ctx->pc = 0x34cb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1908), GPR_U32(ctx, 2));
label_34cb80:
    // 0x34cb80: 0x240400a4  addiu       $a0, $zero, 0xA4
    ctx->pc = 0x34cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x34cb84: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x34cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34cb88: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34cb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34cb8c: 0xc040140  jal         func_100500
    ctx->pc = 0x34CB8Cu;
    SET_GPR_U32(ctx, 31, 0x34CB94u);
    ctx->pc = 0x34CB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CB8Cu;
            // 0x34cb90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CB94u; }
        if (ctx->pc != 0x34CB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CB94u; }
        if (ctx->pc != 0x34CB94u) { return; }
    }
    ctx->pc = 0x34CB94u;
label_34cb94:
    // 0x34cb94: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x34CB94u;
    {
        const bool branch_taken_0x34cb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cb94) {
            ctx->pc = 0x34CB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34CB94u;
            // 0x34cb98: 0xae020760  sw          $v0, 0x760($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34CBB0u;
            goto label_34cbb0;
        }
    }
    ctx->pc = 0x34CB9Cu;
    // 0x34cb9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34cb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34cba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cba4: 0xc0fb684  jal         func_3EDA10
    ctx->pc = 0x34CBA4u;
    SET_GPR_U32(ctx, 31, 0x34CBACu);
    ctx->pc = 0x34CBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CBA4u;
            // 0x34cba8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EDA10u;
    if (runtime->hasFunction(0x3EDA10u)) {
        auto targetFn = runtime->lookupFunction(0x3EDA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CBACu; }
        if (ctx->pc != 0x34CBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EDA10_0x3eda10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CBACu; }
        if (ctx->pc != 0x34CBACu) { return; }
    }
    ctx->pc = 0x34CBACu;
label_34cbac:
    // 0x34cbac: 0xae020760  sw          $v0, 0x760($s0)
    ctx->pc = 0x34cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1888), GPR_U32(ctx, 2));
label_34cbb0:
    // 0x34cbb0: 0x24040094  addiu       $a0, $zero, 0x94
    ctx->pc = 0x34cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x34cbb4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x34cbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34cbb8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34cbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34cbbc: 0xc040140  jal         func_100500
    ctx->pc = 0x34CBBCu;
    SET_GPR_U32(ctx, 31, 0x34CBC4u);
    ctx->pc = 0x34CBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CBBCu;
            // 0x34cbc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CBC4u; }
        if (ctx->pc != 0x34CBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CBC4u; }
        if (ctx->pc != 0x34CBC4u) { return; }
    }
    ctx->pc = 0x34CBC4u;
label_34cbc4:
    // 0x34cbc4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x34CBC4u;
    {
        const bool branch_taken_0x34cbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34CBC4u;
            // 0x34cbc8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cbc4) {
            ctx->pc = 0x34CC20u;
            goto label_34cc20;
        }
    }
    ctx->pc = 0x34CBCCu;
    // 0x34cbcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34cbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cbd0: 0x24053db8  addiu       $a1, $zero, 0x3DB8
    ctx->pc = 0x34cbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15800));
    // 0x34cbd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34cbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cbd8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x34CBD8u;
    SET_GPR_U32(ctx, 31, 0x34CBE0u);
    ctx->pc = 0x34CBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CBD8u;
            // 0x34cbdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CBE0u; }
        if (ctx->pc != 0x34CBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CBE0u; }
        if (ctx->pc != 0x34CBE0u) { return; }
    }
    ctx->pc = 0x34CBE0u;
label_34cbe0:
    // 0x34cbe0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34cbe4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x34cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x34cbe8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x34cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x34cbec: 0x24429bd0  addiu       $v0, $v0, -0x6430
    ctx->pc = 0x34cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941648));
    // 0x34cbf0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x34cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x34cbf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34cbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cbf8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34cbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x34cbfc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x34cbfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34cc00:
    // 0x34cc00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34cc04: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x34cc04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x34cc08: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x34cc08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x34cc0c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x34cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x34cc10: 0x0  nop
    ctx->pc = 0x34cc10u;
    // NOP
    // 0x34cc14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34CC14u;
    {
        const bool branch_taken_0x34cc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34cc14) {
            ctx->pc = 0x34CC00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34cc00;
        }
    }
    ctx->pc = 0x34CC1Cu;
    // 0x34cc1c: 0x0  nop
    ctx->pc = 0x34cc1cu;
    // NOP
label_34cc20:
    // 0x34cc20: 0xae110784  sw          $s1, 0x784($s0)
    ctx->pc = 0x34cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1924), GPR_U32(ctx, 17));
    // 0x34cc24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x34cc28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x34cc2c: 0x8c64e3e8  lw          $a0, -0x1C18($v1)
    ctx->pc = 0x34cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960104)));
    // 0x34cc30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x34cc30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34cc34: 0xa0800013  sb          $zero, 0x13($a0)
    ctx->pc = 0x34cc34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cc38: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x34cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x34cc3c: 0x8c42e408  lw          $v0, -0x1BF8($v0)
    ctx->pc = 0x34cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960136)));
    // 0x34cc40: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x34cc40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34cc44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34cc44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34cc48: 0xc052774  jal         func_149DD0
    ctx->pc = 0x34CC48u;
    SET_GPR_U32(ctx, 31, 0x34CC50u);
    ctx->pc = 0x34CC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CC48u;
            // 0x34cc4c: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DD0u;
    if (runtime->hasFunction(0x149DD0u)) {
        auto targetFn = runtime->lookupFunction(0x149DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CC50u; }
        if (ctx->pc != 0x34CC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DD0_0x149dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CC50u; }
        if (ctx->pc != 0x34CC50u) { return; }
    }
    ctx->pc = 0x34CC50u;
label_34cc50:
    // 0x34cc50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x34cc54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cc58: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x34cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x34cc5c: 0x26040790  addiu       $a0, $s0, 0x790
    ctx->pc = 0x34cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1936));
    // 0x34cc60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34cc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc64: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x34cc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x34cc68: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x34CC68u;
    SET_GPR_U32(ctx, 31, 0x34CC70u);
    ctx->pc = 0x34CC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CC68u;
            // 0x34cc6c: 0xa0430038  sb          $v1, 0x38($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CC70u; }
        if (ctx->pc != 0x34CC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CC70u; }
        if (ctx->pc != 0x34CC70u) { return; }
    }
    ctx->pc = 0x34CC70u;
label_34cc70:
    // 0x34cc70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34cc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc74: 0xc0d2fe8  jal         func_34BFA0
    ctx->pc = 0x34CC74u;
    SET_GPR_U32(ctx, 31, 0x34CC7Cu);
    ctx->pc = 0x34CC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CC74u;
            // 0x34cc78: 0x260507bc  addiu       $a1, $s0, 0x7BC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1980));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BFA0u;
    if (runtime->hasFunction(0x34BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x34BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CC7Cu; }
        if (ctx->pc != 0x34CC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BFA0_0x34bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CC7Cu; }
        if (ctx->pc != 0x34CC7Cu) { return; }
    }
    ctx->pc = 0x34CC7Cu;
label_34cc7c:
    // 0x34cc7c: 0x26040804  addiu       $a0, $s0, 0x804
    ctx->pc = 0x34cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2052));
    // 0x34cc80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34cc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc84: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x34CC84u;
    SET_GPR_U32(ctx, 31, 0x34CC8Cu);
    ctx->pc = 0x34CC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CC84u;
            // 0x34cc88: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CC8Cu; }
        if (ctx->pc != 0x34CC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CC8Cu; }
        if (ctx->pc != 0x34CC8Cu) { return; }
    }
    ctx->pc = 0x34CC8Cu;
label_34cc8c:
    // 0x34cc8c: 0x26040818  addiu       $a0, $s0, 0x818
    ctx->pc = 0x34cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2072));
    // 0x34cc90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34cc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cc94: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x34CC94u;
    SET_GPR_U32(ctx, 31, 0x34CC9Cu);
    ctx->pc = 0x34CC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CC94u;
            // 0x34cc98: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CC9Cu; }
        if (ctx->pc != 0x34CC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CC9Cu; }
        if (ctx->pc != 0x34CC9Cu) { return; }
    }
    ctx->pc = 0x34CC9Cu;
label_34cc9c:
    // 0x34cc9c: 0x26040830  addiu       $a0, $s0, 0x830
    ctx->pc = 0x34cc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
    // 0x34cca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34cca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cca4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x34CCA4u;
    SET_GPR_U32(ctx, 31, 0x34CCACu);
    ctx->pc = 0x34CCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CCA4u;
            // 0x34cca8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CCACu; }
        if (ctx->pc != 0x34CCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CCACu; }
        if (ctx->pc != 0x34CCACu) { return; }
    }
    ctx->pc = 0x34CCACu;
label_34ccac:
    // 0x34ccac: 0x26040844  addiu       $a0, $s0, 0x844
    ctx->pc = 0x34ccacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2116));
    // 0x34ccb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34ccb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ccb4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x34CCB4u;
    SET_GPR_U32(ctx, 31, 0x34CCBCu);
    ctx->pc = 0x34CCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CCB4u;
            // 0x34ccb8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CCBCu; }
        if (ctx->pc != 0x34CCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CCBCu; }
        if (ctx->pc != 0x34CCBCu) { return; }
    }
    ctx->pc = 0x34CCBCu;
label_34ccbc:
    // 0x34ccbc: 0x26040854  addiu       $a0, $s0, 0x854
    ctx->pc = 0x34ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2132));
    // 0x34ccc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34ccc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ccc4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x34CCC4u;
    SET_GPR_U32(ctx, 31, 0x34CCCCu);
    ctx->pc = 0x34CCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CCC4u;
            // 0x34ccc8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CCCCu; }
        if (ctx->pc != 0x34CCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CCCCu; }
        if (ctx->pc != 0x34CCCCu) { return; }
    }
    ctx->pc = 0x34CCCCu;
label_34cccc:
    // 0x34cccc: 0x26040874  addiu       $a0, $s0, 0x874
    ctx->pc = 0x34ccccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2164));
    // 0x34ccd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34ccd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ccd4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x34CCD4u;
    SET_GPR_U32(ctx, 31, 0x34CCDCu);
    ctx->pc = 0x34CCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CCD4u;
            // 0x34ccd8: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CCDCu; }
        if (ctx->pc != 0x34CCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CCDCu; }
        if (ctx->pc != 0x34CCDCu) { return; }
    }
    ctx->pc = 0x34CCDCu;
label_34ccdc:
    // 0x34ccdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34ccdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cce0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34cce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34cce4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34cce4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34cce8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34cce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ccec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34ccecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ccf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34ccf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ccf4: 0x3e00008  jr          $ra
    ctx->pc = 0x34CCF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34CCF4u;
            // 0x34ccf8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34CCFCu;
    // 0x34ccfc: 0x0  nop
    ctx->pc = 0x34ccfcu;
    // NOP
    // 0x34cd00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34cd04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34cd08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34cd0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34cd0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cd10: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x34CD10u;
    {
        const bool branch_taken_0x34cd10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cd10) {
            ctx->pc = 0x34CD14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34CD10u;
            // 0x34cd14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34CD3Cu;
            goto label_34cd3c;
        }
    }
    ctx->pc = 0x34CD18u;
    // 0x34cd18: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x34cd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x34cd1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34cd20: 0x24635a78  addiu       $v1, $v1, 0x5A78
    ctx->pc = 0x34cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23160));
    // 0x34cd24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34cd24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x34cd28: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34CD28u;
    {
        const bool branch_taken_0x34cd28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34CD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34CD28u;
            // 0x34cd2c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd28) {
            ctx->pc = 0x34CD38u;
            goto label_34cd38;
        }
    }
    ctx->pc = 0x34CD30u;
    // 0x34cd30: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x34CD30u;
    SET_GPR_U32(ctx, 31, 0x34CD38u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CD38u; }
        if (ctx->pc != 0x34CD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CD38u; }
        if (ctx->pc != 0x34CD38u) { return; }
    }
    ctx->pc = 0x34CD38u;
label_34cd38:
    // 0x34cd38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34cd38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34cd3c:
    // 0x34cd3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34cd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34cd40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34cd40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cd44: 0x3e00008  jr          $ra
    ctx->pc = 0x34CD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34CD44u;
            // 0x34cd48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34CD4Cu;
    // 0x34cd4c: 0x0  nop
    ctx->pc = 0x34cd4cu;
    // NOP
}
