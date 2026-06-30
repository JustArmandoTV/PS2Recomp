#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015E1F8
// Address: 0x15e1f8 - 0x15e228
void sub_0015E1F8_0x15e1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E1F8_0x15e1f8");
#endif

    ctx->pc = 0x15e1f8u;

    // 0x15e1f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15e1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1fc: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x15e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x15e200: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x15e200u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x15e204: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e208: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15e208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15e20c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E20Cu;
    {
        const bool branch_taken_0x15e20c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x15E210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E20Cu;
            // 0x15e210: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e20c) {
            ctx->pc = 0x15E220u;
            goto label_15e220;
        }
    }
    ctx->pc = 0x15E214u;
    // 0x15e214: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15e214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e218: 0x8057826  j           func_15E098
    ctx->pc = 0x15E218u;
    ctx->pc = 0x15E21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E218u;
            // 0x15e21c: 0xa0a00003  sb          $zero, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E098u;
    {
        auto targetFn = runtime->lookupFunction(0x15E098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15E220u;
label_15e220:
    // 0x15e220: 0x3e00008  jr          $ra
    ctx->pc = 0x15E220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E228u;
}
