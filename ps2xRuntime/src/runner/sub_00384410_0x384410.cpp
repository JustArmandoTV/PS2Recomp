#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384410
// Address: 0x384410 - 0x384430
void sub_00384410_0x384410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384410_0x384410");
#endif

    ctx->pc = 0x384410u;

    // 0x384410: 0x8c860db8  lw          $a2, 0xDB8($a0)
    ctx->pc = 0x384410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3512)));
    // 0x384414: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x384414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x384418: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x384418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x38441c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x38441cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x384420: 0x3e00008  jr          $ra
    ctx->pc = 0x384420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384420u;
            // 0x384424: 0xac830db8  sw          $v1, 0xDB8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384428u;
    // 0x384428: 0x0  nop
    ctx->pc = 0x384428u;
    // NOP
    // 0x38442c: 0x0  nop
    ctx->pc = 0x38442cu;
    // NOP
}
