#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C7F0
// Address: 0x51c7f0 - 0x51c810
void sub_0051C7F0_0x51c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C7F0_0x51c7f0");
#endif

    ctx->pc = 0x51c7f0u;

    // 0x51c7f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51c7f4: 0x2442fba0  addiu       $v0, $v0, -0x460
    ctx->pc = 0x51c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966176));
    // 0x51c7f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c7fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x51c800: 0xac44e400  sw          $a0, -0x1C00($v0)
    ctx->pc = 0x51c800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960128), GPR_U32(ctx, 4));
    // 0x51c804: 0x3e00008  jr          $ra
    ctx->pc = 0x51C804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C804u;
            // 0x51c808: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C80Cu;
    // 0x51c80c: 0x0  nop
    ctx->pc = 0x51c80cu;
    // NOP
}
