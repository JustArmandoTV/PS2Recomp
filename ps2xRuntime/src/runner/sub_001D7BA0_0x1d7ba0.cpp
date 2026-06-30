#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7BA0
// Address: 0x1d7ba0 - 0x1d7c10
void sub_001D7BA0_0x1d7ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7BA0_0x1d7ba0");
#endif

    switch (ctx->pc) {
        case 0x1d7bc4u: goto label_1d7bc4;
        default: break;
    }

    ctx->pc = 0x1d7ba0u;

    // 0x1d7ba0: 0x8c850d90  lw          $a1, 0xD90($a0)
    ctx->pc = 0x1d7ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3472)));
    // 0x1d7ba4: 0x24860d8c  addiu       $a2, $a0, 0xD8C
    ctx->pc = 0x1d7ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3468));
    // 0x1d7ba8: 0xc51826  xor         $v1, $a2, $a1
    ctx->pc = 0x1d7ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x1d7bac: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d7bacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d7bb0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7BB0u;
    {
        const bool branch_taken_0x1d7bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7bb0) {
            ctx->pc = 0x1D7BF8u;
            goto label_1d7bf8;
        }
    }
    ctx->pc = 0x1D7BB8u;
    // 0x1d7bb8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1d7bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1d7bbc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d7bbcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d7bc0: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x1d7bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_1d7bc4:
    // 0x1d7bc4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d7bc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d7bc8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1d7bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7bcc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1d7bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d7bd0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7BD0u;
    {
        const bool branch_taken_0x1d7bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7bd0) {
            ctx->pc = 0x1D7BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7BD0u;
            // 0x1d7bd4: 0xc51826  xor         $v1, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7BECu;
            goto label_1d7bec;
        }
    }
    ctx->pc = 0x1D7BD8u;
    // 0x1d7bd8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1d7bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d7bdc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1d7bdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d7be0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d7be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d7be4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7BE4u;
    {
        const bool branch_taken_0x1d7be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7BE4u;
            // 0x1d7be8: 0xa08311a5  sb          $v1, 0x11A5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4517), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7be4) {
            ctx->pc = 0x1D7C00u;
            goto label_1d7c00;
        }
    }
    ctx->pc = 0x1D7BECu;
label_1d7bec:
    // 0x1d7bec: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d7becu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d7bf0: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D7BF0u;
    {
        const bool branch_taken_0x1d7bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7bf0) {
            ctx->pc = 0x1D7BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7BF0u;
            // 0x1d7bf4: 0x6183c  dsll32      $v1, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7BC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7bc4;
        }
    }
    ctx->pc = 0x1D7BF8u;
label_1d7bf8:
    // 0x1d7bf8: 0x908311a4  lbu         $v1, 0x11A4($a0)
    ctx->pc = 0x1d7bf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4516)));
    // 0x1d7bfc: 0xa08311a5  sb          $v1, 0x11A5($a0)
    ctx->pc = 0x1d7bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4517), (uint8_t)GPR_U32(ctx, 3));
label_1d7c00:
    // 0x1d7c00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7C08u;
    // 0x1d7c08: 0x0  nop
    ctx->pc = 0x1d7c08u;
    // NOP
    // 0x1d7c0c: 0x0  nop
    ctx->pc = 0x1d7c0cu;
    // NOP
}
