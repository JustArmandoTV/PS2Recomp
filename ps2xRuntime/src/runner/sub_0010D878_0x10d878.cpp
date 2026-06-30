#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D878
// Address: 0x10d878 - 0x10d8a0
void sub_0010D878_0x10d878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D878_0x10d878");
#endif

    ctx->pc = 0x10d878u;

    // 0x10d878: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x10d878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x10d87c: 0x24439480  addiu       $v1, $v0, -0x6B80
    ctx->pc = 0x10d87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939776));
    // 0x10d880: 0xac449480  sw          $a0, -0x6B80($v0)
    ctx->pc = 0x10d880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939776), GPR_U32(ctx, 4));
    // 0x10d884: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x10d884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x10d888: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10d888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d88c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x10d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x10d890: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10d890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x10d894: 0x3e00008  jr          $ra
    ctx->pc = 0x10D894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D894u;
            // 0x10d898: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D89Cu;
    // 0x10d89c: 0x0  nop
    ctx->pc = 0x10d89cu;
    // NOP
}
