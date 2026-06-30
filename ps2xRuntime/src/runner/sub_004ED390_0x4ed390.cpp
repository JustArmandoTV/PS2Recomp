#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ED390
// Address: 0x4ed390 - 0x4ed400
void sub_004ED390_0x4ed390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED390_0x4ed390");
#endif

    switch (ctx->pc) {
        case 0x4ed3bcu: goto label_4ed3bc;
        case 0x4ed3c0u: goto label_4ed3c0;
        case 0x4ed3c8u: goto label_4ed3c8;
        default: break;
    }

    ctx->pc = 0x4ed390u;

    // 0x4ed390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ed390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ed394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ed394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ed398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ed39c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ed39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ed3a0: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x4ed3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ed3a4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x4ED3A4u;
    {
        const bool branch_taken_0x4ed3a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED3A4u;
            // 0x4ed3a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed3a4) {
            ctx->pc = 0x4ED3E0u;
            goto label_4ed3e0;
        }
    }
    ctx->pc = 0x4ED3ACu;
    // 0x4ed3ac: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x4ed3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4ed3b0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x4ed3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4ed3b4: 0xc04a508  jal         func_129420
    ctx->pc = 0x4ED3B4u;
    SET_GPR_U32(ctx, 31, 0x4ED3BCu);
    ctx->pc = 0x4ED3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED3B4u;
            // 0x4ed3b8: 0x113080  sll         $a2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED3BCu; }
        if (ctx->pc != 0x4ED3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED3BCu; }
        if (ctx->pc != 0x4ED3BCu) { return; }
    }
    ctx->pc = 0x4ED3BCu;
label_4ed3bc:
    // 0x4ed3bc: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x4ed3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4ed3c0:
    // 0x4ed3c0: 0xc13b148  jal         func_4EC520
    ctx->pc = 0x4ED3C0u;
    SET_GPR_U32(ctx, 31, 0x4ED3C8u);
    ctx->pc = 0x4ED3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED3C0u;
            // 0x4ed3c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EC520u;
    if (runtime->hasFunction(0x4EC520u)) {
        auto targetFn = runtime->lookupFunction(0x4EC520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED3C8u; }
        if (ctx->pc != 0x4ED3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EC520_0x4ec520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED3C8u; }
        if (ctx->pc != 0x4ED3C8u) { return; }
    }
    ctx->pc = 0x4ED3C8u;
label_4ed3c8:
    // 0x4ed3c8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4ed3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4ed3cc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4ed3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4ed3d0: 0x0  nop
    ctx->pc = 0x4ed3d0u;
    // NOP
    // 0x4ed3d4: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4ED3D4u;
    {
        const bool branch_taken_0x4ed3d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ed3d4) {
            ctx->pc = 0x4ED3C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ed3c0;
        }
    }
    ctx->pc = 0x4ED3DCu;
    // 0x4ed3dc: 0x0  nop
    ctx->pc = 0x4ed3dcu;
    // NOP
label_4ed3e0:
    // 0x4ed3e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ed3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed3e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed3e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ed3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED3ECu;
            // 0x4ed3f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ED3F4u;
    // 0x4ed3f4: 0x0  nop
    ctx->pc = 0x4ed3f4u;
    // NOP
    // 0x4ed3f8: 0x0  nop
    ctx->pc = 0x4ed3f8u;
    // NOP
    // 0x4ed3fc: 0x0  nop
    ctx->pc = 0x4ed3fcu;
    // NOP
}
