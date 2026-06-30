#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BE880
// Address: 0x2be880 - 0x2be8a0
void sub_002BE880_0x2be880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE880_0x2be880");
#endif

    ctx->pc = 0x2be880u;

    // 0x2be880: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2be884: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x2be884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
    // 0x2be888: 0x24421c78  addiu       $v0, $v0, 0x1C78
    ctx->pc = 0x2be888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7288));
    // 0x2be88c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2be88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2be890: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2be890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2be894: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2be894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be898: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE898u;
            // 0x2be89c: 0xac650d20  sw          $a1, 0xD20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3360), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE8A0u;
}
