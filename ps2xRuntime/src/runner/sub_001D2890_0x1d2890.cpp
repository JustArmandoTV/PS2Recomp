#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2890
// Address: 0x1d2890 - 0x1d2910
void sub_001D2890_0x1d2890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2890_0x1d2890");
#endif

    switch (ctx->pc) {
        case 0x1d28b0u: goto label_1d28b0;
        case 0x1d28d0u: goto label_1d28d0;
        case 0x1d28f0u: goto label_1d28f0;
        default: break;
    }

    ctx->pc = 0x1d2890u;

    // 0x1d2890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d2890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d2894: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d2894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d2898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d289c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d289cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d28a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d28a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d28a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d28a8: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x1d28a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d28ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d28acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d28b0:
    // 0x1d28b0: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x1d28b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1d28b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d28b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28b8: 0x96260048  lhu         $a2, 0x48($s1)
    ctx->pc = 0x1d28b8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1d28bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d28bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28c0: 0x9627004a  lhu         $a3, 0x4A($s1)
    ctx->pc = 0x1d28c0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x1d28c4: 0x8e280040  lw          $t0, 0x40($s1)
    ctx->pc = 0x1d28c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1d28c8: 0xc04e744  jal         func_139D10
    ctx->pc = 0x1D28C8u;
    SET_GPR_U32(ctx, 31, 0x1D28D0u);
    ctx->pc = 0x1D28CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28C8u;
            // 0x1d28cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D10u;
    if (runtime->hasFunction(0x139D10u)) {
        auto targetFn = runtime->lookupFunction(0x139D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28D0u; }
        if (ctx->pc != 0x1D28D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139D10_0x139d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28D0u; }
        if (ctx->pc != 0x1D28D0u) { return; }
    }
    ctx->pc = 0x1D28D0u;
label_1d28d0:
    // 0x1d28d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d28d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d28d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d28d8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d28d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d28dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D28DCu;
    {
        const bool branch_taken_0x1d28dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D28E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28DCu;
            // 0x1d28e0: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28dc) {
            ctx->pc = 0x1D28B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d28b0;
        }
    }
    ctx->pc = 0x1D28E4u;
    // 0x1d28e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1d28e8: 0xc057520  jal         func_15D480
    ctx->pc = 0x1D28E8u;
    SET_GPR_U32(ctx, 31, 0x1D28F0u);
    ctx->pc = 0x1D28ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28E8u;
            // 0x1d28ec: 0x8c44a340  lw          $a0, -0x5CC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943552)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D480u;
    if (runtime->hasFunction(0x15D480u)) {
        auto targetFn = runtime->lookupFunction(0x15D480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28F0u; }
        if (ctx->pc != 0x1D28F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D480_0x15d480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28F0u; }
        if (ctx->pc != 0x1D28F0u) { return; }
    }
    ctx->pc = 0x1D28F0u;
label_1d28f0:
    // 0x1d28f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d28f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d28f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d28f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d28fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d28fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2904: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2904u;
            // 0x1d2908: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D290Cu;
    // 0x1d290c: 0x0  nop
    ctx->pc = 0x1d290cu;
    // NOP
}
