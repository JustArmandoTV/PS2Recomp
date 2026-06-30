#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026AAE0
// Address: 0x26aae0 - 0x26ab30
void sub_0026AAE0_0x26aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AAE0_0x26aae0");
#endif

    ctx->pc = 0x26aae0u;

    // 0x26aae0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x26aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x26aae4: 0x28610016  slti        $at, $v1, 0x16
    ctx->pc = 0x26aae4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x26aae8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AAE8u;
    {
        const bool branch_taken_0x26aae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAE8u;
            // 0x26aaec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aae8) {
            ctx->pc = 0x26AAF8u;
            goto label_26aaf8;
        }
    }
    ctx->pc = 0x26AAF0u;
    // 0x26aaf0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26AAF0u;
    {
        const bool branch_taken_0x26aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAF0u;
            // 0x26aaf4: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aaf0) {
            ctx->pc = 0x26AB20u;
            goto label_26ab20;
        }
    }
    ctx->pc = 0x26AAF8u;
label_26aaf8:
    // 0x26aaf8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x26aaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x26aafc: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x26aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x26ab00: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x26ab00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x26ab04: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x26AB04u;
    {
        const bool branch_taken_0x26ab04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB04u;
            // 0x26ab08: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab04) {
            ctx->pc = 0x26AB18u;
            goto label_26ab18;
        }
    }
    ctx->pc = 0x26AB0Cu;
    // 0x26ab0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26AB0Cu;
    {
        const bool branch_taken_0x26ab0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB0Cu;
            // 0x26ab10: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab0c) {
            ctx->pc = 0x26AB20u;
            goto label_26ab20;
        }
    }
    ctx->pc = 0x26AB14u;
    // 0x26ab14: 0x0  nop
    ctx->pc = 0x26ab14u;
    // NOP
label_26ab18:
    // 0x26ab18: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x26ab18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26ab1c: 0x0  nop
    ctx->pc = 0x26ab1cu;
    // NOP
label_26ab20:
    // 0x26ab20: 0x3e00008  jr          $ra
    ctx->pc = 0x26AB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AB28u;
    // 0x26ab28: 0x0  nop
    ctx->pc = 0x26ab28u;
    // NOP
    // 0x26ab2c: 0x0  nop
    ctx->pc = 0x26ab2cu;
    // NOP
}
