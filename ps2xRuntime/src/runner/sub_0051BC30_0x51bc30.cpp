#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051BC30
// Address: 0x51bc30 - 0x51bc60
void sub_0051BC30_0x51bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051BC30_0x51bc30");
#endif

    ctx->pc = 0x51bc30u;

    // 0x51bc30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51bc34: 0x2442fed0  addiu       $v0, $v0, -0x130
    ctx->pc = 0x51bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966992));
    // 0x51bc38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51bc3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51bc40: 0x2442feb0  addiu       $v0, $v0, -0x150
    ctx->pc = 0x51bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966960));
    // 0x51bc44: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51bc48: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x51bc48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x51bc4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x51bc4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bc50: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x51bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x51bc54: 0x3e00008  jr          $ra
    ctx->pc = 0x51BC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51BC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BC54u;
            // 0x51bc58: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51BC5Cu;
    // 0x51bc5c: 0x0  nop
    ctx->pc = 0x51bc5cu;
    // NOP
}
