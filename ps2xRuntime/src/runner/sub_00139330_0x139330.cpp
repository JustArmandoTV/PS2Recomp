#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139330
// Address: 0x139330 - 0x1393d0
void sub_00139330_0x139330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139330_0x139330");
#endif

    switch (ctx->pc) {
        case 0x139364u: goto label_139364;
        case 0x139374u: goto label_139374;
        case 0x13938cu: goto label_13938c;
        case 0x139398u: goto label_139398;
        default: break;
    }

    ctx->pc = 0x139330u;

    // 0x139330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x139330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x139334: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x139334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x139338: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x139338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13933c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13933cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x139340: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x139340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139344: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139348: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x139348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13934c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139350: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x139350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139354: 0x10e00014  beqz        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x139354u;
    {
        const bool branch_taken_0x139354 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x139358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139354u;
            // 0x139358: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139354) {
            ctx->pc = 0x1393A8u;
            goto label_1393a8;
        }
    }
    ctx->pc = 0x13935Cu;
    // 0x13935c: 0x50c0000c  beql        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x13935Cu;
    {
        const bool branch_taken_0x13935c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13935c) {
            ctx->pc = 0x139360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13935Cu;
            // 0x139360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139390u;
            goto label_139390;
        }
    }
    ctx->pc = 0x139364u;
label_139364:
    // 0x139364: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x139364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139368: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x139368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13936c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x13936Cu;
    SET_GPR_U32(ctx, 31, 0x139374u);
    ctx->pc = 0x139370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13936Cu;
            // 0x139370: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139374u; }
        if (ctx->pc != 0x139374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139374u; }
        if (ctx->pc != 0x139374u) { return; }
    }
    ctx->pc = 0x139374u;
label_139374:
    // 0x139374: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x139374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x139378: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x139378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x13937c: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13937Cu;
    {
        const bool branch_taken_0x13937c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x139380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13937Cu;
            // 0x139380: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13937c) {
            ctx->pc = 0x139364u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_139364;
        }
    }
    ctx->pc = 0x139384u;
    // 0x139384: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x139384u;
    {
        const bool branch_taken_0x139384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139384) {
            ctx->pc = 0x1393A8u;
            goto label_1393a8;
        }
    }
    ctx->pc = 0x13938Cu;
label_13938c:
    // 0x13938c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13938cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_139390:
    // 0x139390: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x139390u;
    SET_GPR_U32(ctx, 31, 0x139398u);
    ctx->pc = 0x139394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139390u;
            // 0x139394: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139398u; }
        if (ctx->pc != 0x139398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139398u; }
        if (ctx->pc != 0x139398u) { return; }
    }
    ctx->pc = 0x139398u;
label_139398:
    // 0x139398: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x139398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x13939c: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x13939cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1393a0: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1393A0u;
    {
        const bool branch_taken_0x1393a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1393a0) {
            ctx->pc = 0x13938Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13938c;
        }
    }
    ctx->pc = 0x1393A8u;
label_1393a8:
    // 0x1393a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1393a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1393ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1393acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1393b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1393b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1393b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1393b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1393b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1393b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1393bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1393BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1393C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1393BCu;
            // 0x1393c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1393C4u;
    // 0x1393c4: 0x0  nop
    ctx->pc = 0x1393c4u;
    // NOP
    // 0x1393c8: 0x0  nop
    ctx->pc = 0x1393c8u;
    // NOP
    // 0x1393cc: 0x0  nop
    ctx->pc = 0x1393ccu;
    // NOP
}
