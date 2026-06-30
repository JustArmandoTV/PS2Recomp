#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DC520
// Address: 0x2dc520 - 0x2dc570
void sub_002DC520_0x2dc520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC520_0x2dc520");
#endif

    ctx->pc = 0x2dc520u;

    // 0x2dc520: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dc520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2dc524: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2dc524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2dc528: 0x2442d4e0  addiu       $v0, $v0, -0x2B20
    ctx->pc = 0x2dc528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956256));
    // 0x2dc52c: 0x2463dfc0  addiu       $v1, $v1, -0x2040
    ctx->pc = 0x2dc52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959040));
    // 0x2dc530: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2dc530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2dc534: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2dc534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2dc538: 0x3445ffee  ori         $a1, $v0, 0xFFEE
    ctx->pc = 0x2dc538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x2dc53c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2dc53cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2dc540: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2dc540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2dc544: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2dc544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2dc548: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2dc548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2dc54c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2dc54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2dc550: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2dc550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2dc554: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2dc554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2dc558: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2dc558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2dc55c: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x2dc55cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x2dc560: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2dc560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2dc564: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dc564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc568: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC568u;
            // 0x2dc56c: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC570u;
}
