#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B1680
// Address: 0x3b1680 - 0x3b16e0
void sub_003B1680_0x3b1680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1680_0x3b1680");
#endif

    switch (ctx->pc) {
        case 0x3b169cu: goto label_3b169c;
        case 0x3b16a8u: goto label_3b16a8;
        default: break;
    }

    ctx->pc = 0x3b1680u;

    // 0x3b1680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b1680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b1684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b1684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b1688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b1688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b168c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b168cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b1690: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b1690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1694: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3b1694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b1698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b169c:
    // 0x3b169c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b169cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b16a0: 0xc0ec53c  jal         func_3B14F0
    ctx->pc = 0x3B16A0u;
    SET_GPR_U32(ctx, 31, 0x3B16A8u);
    ctx->pc = 0x3B16A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B16A0u;
            // 0x3b16a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B14F0u;
    if (runtime->hasFunction(0x3B14F0u)) {
        auto targetFn = runtime->lookupFunction(0x3B14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B16A8u; }
        if (ctx->pc != 0x3B16A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B14F0_0x3b14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B16A8u; }
        if (ctx->pc != 0x3B16A8u) { return; }
    }
    ctx->pc = 0x3B16A8u;
label_3b16a8:
    // 0x3b16a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b16a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b16ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b16acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3b16b0: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x3b16b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x3b16b4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3b16b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b16b8: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B16B8u;
    {
        const bool branch_taken_0x3b16b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b16b8) {
            ctx->pc = 0x3B16BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B16B8u;
            // 0x3b16bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B169Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b169c;
        }
    }
    ctx->pc = 0x3B16C0u;
    // 0x3b16c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b16c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b16c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b16c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b16c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b16c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b16cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B16CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B16D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B16CCu;
            // 0x3b16d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B16D4u;
    // 0x3b16d4: 0x0  nop
    ctx->pc = 0x3b16d4u;
    // NOP
    // 0x3b16d8: 0x0  nop
    ctx->pc = 0x3b16d8u;
    // NOP
    // 0x3b16dc: 0x0  nop
    ctx->pc = 0x3b16dcu;
    // NOP
}
