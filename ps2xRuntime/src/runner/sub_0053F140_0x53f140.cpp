#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053F140
// Address: 0x53f140 - 0x53f160
void sub_0053F140_0x53f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053F140_0x53f140");
#endif

    ctx->pc = 0x53f140u;

    // 0x53f140: 0x80a20010  lb          $v0, 0x10($a1)
    ctx->pc = 0x53f140u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x53f144: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x53f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x53f148: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x53F148u;
    {
        const bool branch_taken_0x53f148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f148) {
            ctx->pc = 0x53F14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F148u;
            // 0x53f14c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F154u;
            goto label_53f154;
        }
    }
    ctx->pc = 0x53F150u;
    // 0x53f150: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x53f150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_53f154:
    // 0x53f154: 0x3e00008  jr          $ra
    ctx->pc = 0x53F154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F15Cu;
    // 0x53f15c: 0x0  nop
    ctx->pc = 0x53f15cu;
    // NOP
}
