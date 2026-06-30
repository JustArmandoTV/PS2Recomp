#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024A2E0
// Address: 0x24a2e0 - 0x24a370
void sub_0024A2E0_0x24a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A2E0_0x24a2e0");
#endif

    switch (ctx->pc) {
        case 0x24a328u: goto label_24a328;
        default: break;
    }

    ctx->pc = 0x24a2e0u;

    // 0x24a2e0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x24a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x24a2e4: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x24a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x24a2e8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x24a2e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24a2ec: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A2ECu;
    {
        const bool branch_taken_0x24a2ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A2ECu;
            // 0x24a2f0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2ec) {
            ctx->pc = 0x24A300u;
            goto label_24a300;
        }
    }
    ctx->pc = 0x24A2F4u;
    // 0x24a2f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24A2F4u;
    {
        const bool branch_taken_0x24a2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a2f4) {
            ctx->pc = 0x24A308u;
            goto label_24a308;
        }
    }
    ctx->pc = 0x24A2FCu;
    // 0x24a2fc: 0x0  nop
    ctx->pc = 0x24a2fcu;
    // NOP
label_24a300:
    // 0x24a300: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x24a300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a304: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24a304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a308:
    // 0x24a308: 0x24470024  addiu       $a3, $v0, 0x24
    ctx->pc = 0x24a308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x24a30c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x24a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x24a310: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24a310u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a314: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x24A314u;
    {
        const bool branch_taken_0x24a314 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A314u;
            // 0x24a318: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a314) {
            ctx->pc = 0x24A358u;
            goto label_24a358;
        }
    }
    ctx->pc = 0x24A31Cu;
    // 0x24a31c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x24a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24a320: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x24a320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a324: 0x0  nop
    ctx->pc = 0x24a324u;
    // NOP
label_24a328:
    // 0x24a328: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24a328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24a32c: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A32Cu;
    {
        const bool branch_taken_0x24a32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x24A330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A32Cu;
            // 0x24a330: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a32c) {
            ctx->pc = 0x24A340u;
            goto label_24a340;
        }
    }
    ctx->pc = 0x24A334u;
    // 0x24a334: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24a334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24a338: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24A338u;
    {
        const bool branch_taken_0x24a338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A338u;
            // 0x24a33c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a338) {
            ctx->pc = 0x24A360u;
            goto label_24a360;
        }
    }
    ctx->pc = 0x24A340u;
label_24a340:
    // 0x24a340: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x24a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24a344: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24a344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24a348: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x24a348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a34c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x24A34Cu;
    {
        const bool branch_taken_0x24a34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A34Cu;
            // 0x24a350: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a34c) {
            ctx->pc = 0x24A328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24a328;
        }
    }
    ctx->pc = 0x24A354u;
    // 0x24a354: 0x0  nop
    ctx->pc = 0x24a354u;
    // NOP
label_24a358:
    // 0x24a358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a35c: 0x0  nop
    ctx->pc = 0x24a35cu;
    // NOP
label_24a360:
    // 0x24a360: 0x3e00008  jr          $ra
    ctx->pc = 0x24A360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24A368u;
    // 0x24a368: 0x0  nop
    ctx->pc = 0x24a368u;
    // NOP
    // 0x24a36c: 0x0  nop
    ctx->pc = 0x24a36cu;
    // NOP
}
