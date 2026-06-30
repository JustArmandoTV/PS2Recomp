#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015FD90
// Address: 0x15fd90 - 0x15fe00
void sub_0015FD90_0x15fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FD90_0x15fd90");
#endif

    switch (ctx->pc) {
        case 0x15fda4u: goto label_15fda4;
        default: break;
    }

    ctx->pc = 0x15fd90u;

    // 0x15fd90: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x15fd90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15fd94: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x15FD94u;
    {
        const bool branch_taken_0x15fd94 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD94u;
            // 0x15fd98: 0x24a8000c  addiu       $t0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd94) {
            ctx->pc = 0x15FDD0u;
            goto label_15fdd0;
        }
    }
    ctx->pc = 0x15FD9Cu;
    // 0x15fd9c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x15fd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15fda0: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x15fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_15fda4:
    // 0x15fda4: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x15fda4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x15fda8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15FDA8u;
    {
        const bool branch_taken_0x15fda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fda8) {
            ctx->pc = 0x15FDC0u;
            goto label_15fdc0;
        }
    }
    ctx->pc = 0x15FDB0u;
    // 0x15fdb0: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x15fdb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fdb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15FDB4u;
    {
        const bool branch_taken_0x15fdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FDB4u;
            // 0x15fdb8: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fdb4) {
            ctx->pc = 0x15FDC8u;
            goto label_15fdc8;
        }
    }
    ctx->pc = 0x15FDBCu;
    // 0x15fdbc: 0x0  nop
    ctx->pc = 0x15fdbcu;
    // NOP
label_15fdc0:
    // 0x15fdc0: 0x8d290004  lw          $t1, 0x4($t1)
    ctx->pc = 0x15fdc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x15fdc4: 0x0  nop
    ctx->pc = 0x15fdc4u;
    // NOP
label_15fdc8:
    // 0x15fdc8: 0x5520fff6  bnel        $t1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x15FDC8u;
    {
        const bool branch_taken_0x15fdc8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fdc8) {
            ctx->pc = 0x15FDCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FDC8u;
            // 0x15fdcc: 0x8d23000c  lw          $v1, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FDA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fda4;
        }
    }
    ctx->pc = 0x15FDD0u;
label_15fdd0:
    // 0x15fdd0: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x15fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x15fdd4: 0x51030007  beql        $t0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15FDD4u;
    {
        const bool branch_taken_0x15fdd4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x15fdd4) {
            ctx->pc = 0x15FDD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FDD4u;
            // 0x15fdd8: 0x24a3000c  addiu       $v1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FDF4u;
            goto label_15fdf4;
        }
    }
    ctx->pc = 0x15FDDCu;
    // 0x15fddc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x15fddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15fde0: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x15fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x15fde4: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x15fde4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15fde8: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FDE8u;
    {
        const bool branch_taken_0x15fde8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fde8) {
            ctx->pc = 0x15FDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FDE8u;
            // 0x15fdec: 0xac880000  sw          $t0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FDF8u;
            goto label_15fdf8;
        }
    }
    ctx->pc = 0x15FDF0u;
    // 0x15fdf0: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x15fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_15fdf4:
    // 0x15fdf4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x15fdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_15fdf8:
    // 0x15fdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x15FDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FE00u;
}
