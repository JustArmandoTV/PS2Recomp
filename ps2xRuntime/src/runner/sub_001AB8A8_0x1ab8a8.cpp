#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB8A8
// Address: 0x1ab8a8 - 0x1ab938
void sub_001AB8A8_0x1ab8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB8A8_0x1ab8a8");
#endif

    switch (ctx->pc) {
        case 0x1ab8c8u: goto label_1ab8c8;
        case 0x1ab8e0u: goto label_1ab8e0;
        case 0x1ab900u: goto label_1ab900;
        case 0x1ab91cu: goto label_1ab91c;
        default: break;
    }

    ctx->pc = 0x1ab8a8u;

    // 0x1ab8a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab8ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ab8b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ab8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ab8b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ab8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ab8bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ab8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8c0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1ab8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ab8c4: 0x0  nop
    ctx->pc = 0x1ab8c4u;
    // NOP
label_1ab8c8:
    // 0x1ab8c8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AB8C8u;
    {
        const bool branch_taken_0x1ab8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8C8u;
            // 0x1ab8cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8c8) {
            ctx->pc = 0x1AB914u;
            goto label_1ab914;
        }
    }
    ctx->pc = 0x1AB8D0u;
    // 0x1ab8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8d4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1ab8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ab8d8: 0xc06ae4e  jal         func_1AB938
    ctx->pc = 0x1AB8D8u;
    SET_GPR_U32(ctx, 31, 0x1AB8E0u);
    ctx->pc = 0x1AB8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8D8u;
            // 0x1ab8dc: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB938u;
    if (runtime->hasFunction(0x1AB938u)) {
        auto targetFn = runtime->lookupFunction(0x1AB938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8E0u; }
        if (ctx->pc != 0x1AB8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB938_0x1ab938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8E0u; }
        if (ctx->pc != 0x1AB8E0u) { return; }
    }
    ctx->pc = 0x1AB8E0u;
label_1ab8e0:
    // 0x1ab8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ab8e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8e8: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1AB8E8u;
    {
        const bool branch_taken_0x1ab8e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8E8u;
            // 0x1ab8ec: 0x27a8000c  addiu       $t0, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8e8) {
            ctx->pc = 0x1AB914u;
            goto label_1ab914;
        }
    }
    ctx->pc = 0x1AB8F0u;
    // 0x1ab8f0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1ab8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab8f4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1ab8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ab8f8: 0xc06b03a  jal         func_1AC0E8
    ctx->pc = 0x1AB8F8u;
    SET_GPR_U32(ctx, 31, 0x1AB900u);
    ctx->pc = 0x1AB8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8F8u;
            // 0x1ab8fc: 0x8fa70008  lw          $a3, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC0E8u;
    if (runtime->hasFunction(0x1AC0E8u)) {
        auto targetFn = runtime->lookupFunction(0x1AC0E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB900u; }
        if (ctx->pc != 0x1AB900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC0E8_0x1ac0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB900u; }
        if (ctx->pc != 0x1AB900u) { return; }
    }
    ctx->pc = 0x1AB900u;
label_1ab900:
    // 0x1ab900: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ab900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab904: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB904u;
    {
        const bool branch_taken_0x1ab904 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB904u;
            // 0x1ab908: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab904) {
            ctx->pc = 0x1AB914u;
            goto label_1ab914;
        }
    }
    ctx->pc = 0x1AB90Cu;
    // 0x1ab90c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1AB90Cu;
    {
        const bool branch_taken_0x1ab90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab90c) {
            ctx->pc = 0x1AB910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB90Cu;
            // 0x1ab910: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB8C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ab8c8;
        }
    }
    ctx->pc = 0x1AB914u;
label_1ab914:
    // 0x1ab914: 0xc06bc90  jal         func_1AF240
    ctx->pc = 0x1AB914u;
    SET_GPR_U32(ctx, 31, 0x1AB91Cu);
    ctx->pc = 0x1AB918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB914u;
            // 0x1ab918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF240u;
    if (runtime->hasFunction(0x1AF240u)) {
        auto targetFn = runtime->lookupFunction(0x1AF240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB91Cu; }
        if (ctx->pc != 0x1AB91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF240_0x1af240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB91Cu; }
        if (ctx->pc != 0x1AB91Cu) { return; }
    }
    ctx->pc = 0x1AB91Cu;
label_1ab91c:
    // 0x1ab91c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ab91cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab920: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ab920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab924: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ab924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab928: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab92c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB92Cu;
            // 0x1ab930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB934u;
    // 0x1ab934: 0x0  nop
    ctx->pc = 0x1ab934u;
    // NOP
}
