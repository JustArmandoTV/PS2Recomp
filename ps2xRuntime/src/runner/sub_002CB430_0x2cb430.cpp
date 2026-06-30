#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CB430
// Address: 0x2cb430 - 0x2cb450
void sub_002CB430_0x2cb430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB430_0x2cb430");
#endif

    ctx->pc = 0x2cb430u;

    // 0x2cb430: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cb434: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x2cb434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
    // 0x2cb438: 0x24420208  addiu       $v0, $v0, 0x208
    ctx->pc = 0x2cb438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x2cb43c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2cb43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2cb440: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cb440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2cb444: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cb444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb448: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB448u;
            // 0x2cb44c: 0xac650e18  sw          $a1, 0xE18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3608), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB450u;
}
