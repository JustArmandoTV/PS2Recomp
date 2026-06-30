#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161568
// Address: 0x161568 - 0x161580
void sub_00161568_0x161568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161568_0x161568");
#endif

    ctx->pc = 0x161568u;

    // 0x161568: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x161568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16156c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x16156cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x161570: 0xac445c64  sw          $a0, 0x5C64($v0)
    ctx->pc = 0x161570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23652), GPR_U32(ctx, 4));
    // 0x161574: 0x3e00008  jr          $ra
    ctx->pc = 0x161574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161574u;
            // 0x161578: 0xac655c68  sw          $a1, 0x5C68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 23656), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16157Cu;
    // 0x16157c: 0x0  nop
    ctx->pc = 0x16157cu;
    // NOP
}
