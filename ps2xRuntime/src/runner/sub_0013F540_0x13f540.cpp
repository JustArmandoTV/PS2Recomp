#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F540
// Address: 0x13f540 - 0x13f560
void sub_0013F540_0x13f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F540_0x13f540");
#endif

    ctx->pc = 0x13f540u;

    // 0x13f540: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x13f540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13f544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13f544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f548: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f54c: 0xaf848030  sw          $a0, -0x7FD0($gp)
    ctx->pc = 0x13f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934576), GPR_U32(ctx, 4));
    // 0x13f550: 0x3e00008  jr          $ra
    ctx->pc = 0x13F550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F550u;
            // 0x13f554: 0xa46556da  sh          $a1, 0x56DA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 22234), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F558u;
    // 0x13f558: 0x0  nop
    ctx->pc = 0x13f558u;
    // NOP
    // 0x13f55c: 0x0  nop
    ctx->pc = 0x13f55cu;
    // NOP
}
