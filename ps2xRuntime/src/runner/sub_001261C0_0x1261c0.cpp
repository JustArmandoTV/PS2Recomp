#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001261C0
// Address: 0x1261c0 - 0x126228
void sub_001261C0_0x1261c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001261C0_0x1261c0");
#endif

    switch (ctx->pc) {
        case 0x1261f4u: goto label_1261f4;
        case 0x1261fcu: goto label_1261fc;
        default: break;
    }

    ctx->pc = 0x1261c0u;

    // 0x1261c0: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x1261c0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1261c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1261c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1261c8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1261C8u;
    {
        const bool branch_taken_0x1261c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1261c8) {
            ctx->pc = 0x1261CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1261C8u;
            // 0x1261cc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1261D0u;
            goto label_1261d0;
        }
    }
    ctx->pc = 0x1261D0u;
label_1261d0:
    // 0x1261d0: 0x7812  mflo        $t7
    ctx->pc = 0x1261d0u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x1261d4: 0x7010  mfhi        $t6
    ctx->pc = 0x1261d4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1261d8: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x1261d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x1261dc: 0x4a0000e  bltz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1261DCu;
    {
        const bool branch_taken_0x1261dc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1261E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1261DCu;
            // 0x1261e0: 0xafae0004  sw          $t6, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1261dc) {
            ctx->pc = 0x126218u;
            goto label_126218;
        }
    }
    ctx->pc = 0x1261E4u;
    // 0x1261e4: 0x5c30006  bgezl       $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1261E4u;
    {
        const bool branch_taken_0x1261e4 = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x1261e4) {
            ctx->pc = 0x1261E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1261E4u;
            // 0x1261e8: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126200u;
            goto label_126200;
        }
    }
    ctx->pc = 0x1261ECu;
    // 0x1261ec: 0x1c67023  subu        $t6, $t6, $a2
    ctx->pc = 0x1261ecu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x1261f0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1261f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_1261f4:
    // 0x1261f4: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x1261f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x1261f8: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x1261f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
label_1261fc:
    // 0x1261fc: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x1261fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_126200:
    // 0x126200: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x126200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126204: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x126204u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x126208: 0xac8f0000  sw          $t7, 0x0($a0)
    ctx->pc = 0x126208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
    // 0x12620c: 0xac8e0004  sw          $t6, 0x4($a0)
    ctx->pc = 0x12620cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 14));
    // 0x126210: 0x3e00008  jr          $ra
    ctx->pc = 0x126210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126210u;
            // 0x126214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x126218u;
label_126218:
    // 0x126218: 0x19c0fff8  blez        $t6, . + 4 + (-0x8 << 2)
    ctx->pc = 0x126218u;
    {
        const bool branch_taken_0x126218 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x12621Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126218u;
            // 0x12621c: 0x1c67021  addu        $t6, $t6, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126218) {
            ctx->pc = 0x1261FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1261fc;
        }
    }
    ctx->pc = 0x126220u;
    // 0x126220: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x126220u;
    {
        const bool branch_taken_0x126220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126220u;
            // 0x126224: 0x25efffff  addiu       $t7, $t7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126220) {
            ctx->pc = 0x1261F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1261f4;
        }
    }
    ctx->pc = 0x126228u;
}
