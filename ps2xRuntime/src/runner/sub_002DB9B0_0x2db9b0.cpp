#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB9B0
// Address: 0x2db9b0 - 0x2dba10
void sub_002DB9B0_0x2db9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB9B0_0x2db9b0");
#endif

    ctx->pc = 0x2db9b0u;

    // 0x2db9b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2db9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2db9b4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2db9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2db9b8: 0x2442d4e0  addiu       $v0, $v0, -0x2B20
    ctx->pc = 0x2db9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956256));
    // 0x2db9bc: 0x2463dfc0  addiu       $v1, $v1, -0x2040
    ctx->pc = 0x2db9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959040));
    // 0x2db9c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2db9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2db9c4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2db9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2db9c8: 0x3445ffee  ori         $a1, $v0, 0xFFEE
    ctx->pc = 0x2db9c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x2db9cc: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2db9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2db9d0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2db9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2db9d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2db9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2db9d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2db9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2db9dc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2db9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2db9e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2db9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2db9e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2db9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2db9e8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2db9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2db9ec: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2db9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2db9f0: 0x24632e70  addiu       $v1, $v1, 0x2E70
    ctx->pc = 0x2db9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11888));
    // 0x2db9f4: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x2db9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x2db9f8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2db9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2db9fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2db9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba00: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2dba00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2dba04: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2dba04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2dba08: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBA08u;
            // 0x2dba0c: 0xac8001a0  sw          $zero, 0x1A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DBA10u;
}
