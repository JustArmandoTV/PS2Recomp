#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A12B0
// Address: 0x2a12b0 - 0x2a1310
void sub_002A12B0_0x2a12b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A12B0_0x2a12b0");
#endif

    switch (ctx->pc) {
        case 0x2a12c8u: goto label_2a12c8;
        default: break;
    }

    ctx->pc = 0x2a12b0u;

    // 0x2a12b0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2a12b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a12b4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A12B4u;
    {
        const bool branch_taken_0x2a12b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A12B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A12B4u;
            // 0x2a12b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a12b4) {
            ctx->pc = 0x2A1300u;
            goto label_2a1300;
        }
    }
    ctx->pc = 0x2A12BCu;
    // 0x2a12bc: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x2a12bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a12c0: 0x8d07fff4  lw          $a3, -0xC($t0)
    ctx->pc = 0x2a12c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967284)));
    // 0x2a12c4: 0x127082a  slt         $at, $t1, $a3
    ctx->pc = 0x2a12c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2a12c8:
    // 0x2a12c8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A12C8u;
    {
        const bool branch_taken_0x2a12c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a12c8) {
            ctx->pc = 0x2A12E8u;
            goto label_2a12e8;
        }
    }
    ctx->pc = 0x2A12D0u;
    // 0x2a12d0: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x2a12d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2a12d4: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x2a12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2a12d8: 0x80a50000  lb          $a1, 0x0($a1)
    ctx->pc = 0x2a12d8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a12dc: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2a12dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a12e0: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A12E0u;
    {
        const bool branch_taken_0x2a12e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a12e0) {
            ctx->pc = 0x2A12E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A12E0u;
            // 0x2a12e4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A12F0u;
            goto label_2a12f0;
        }
    }
    ctx->pc = 0x2A12E8u;
label_2a12e8:
    // 0x2a12e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A12E8u;
    {
        const bool branch_taken_0x2a12e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A12ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A12E8u;
            // 0x2a12ec: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a12e8) {
            ctx->pc = 0x2A1308u;
            goto label_2a1308;
        }
    }
    ctx->pc = 0x2A12F0u;
label_2a12f0:
    // 0x2a12f0: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x2a12f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2a12f4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2a12f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a12f8: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A12F8u;
    {
        const bool branch_taken_0x2a12f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a12f8) {
            ctx->pc = 0x2A12FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A12F8u;
            // 0x2a12fc: 0x127082a  slt         $at, $t1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A12C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a12c8;
        }
    }
    ctx->pc = 0x2A1300u;
label_2a1300:
    // 0x2a1300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1304: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2a1304u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2a1308:
    // 0x2a1308: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1310u;
}
