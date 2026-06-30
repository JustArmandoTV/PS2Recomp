#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199E08
// Address: 0x199e08 - 0x199e48
void sub_00199E08_0x199e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199E08_0x199e08");
#endif

    ctx->pc = 0x199e08u;

    // 0x199e08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x199e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199e0c: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x199e0cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x199e10: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x199E10u;
    {
        const bool branch_taken_0x199e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x199E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199E10u;
            // 0x199e14: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e10) {
            ctx->pc = 0x199E3Cu;
            goto label_199e3c;
        }
    }
    ctx->pc = 0x199E18u;
    // 0x199e18: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x199E18u;
    {
        const bool branch_taken_0x199e18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x199e18) {
            ctx->pc = 0x199E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199E18u;
            // 0x199e1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199E30u;
            goto label_199e30;
        }
    }
    ctx->pc = 0x199E20u;
    // 0x199e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199e24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x199E24u;
    {
        const bool branch_taken_0x199e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199E24u;
            // 0x199e28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e24) {
            ctx->pc = 0x199E34u;
            goto label_199e34;
        }
    }
    ctx->pc = 0x199E2Cu;
    // 0x199e2c: 0x0  nop
    ctx->pc = 0x199e2cu;
    // NOP
label_199e30:
    // 0x199e30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x199e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_199e34:
    // 0x199e34: 0x54820001  bnel        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x199E34u;
    {
        const bool branch_taken_0x199e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x199e34) {
            ctx->pc = 0x199E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199E34u;
            // 0x199e38: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199E3Cu;
            goto label_199e3c;
        }
    }
    ctx->pc = 0x199E3Cu;
label_199e3c:
    // 0x199e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x199E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199E3Cu;
            // 0x199e40: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199E44u;
    // 0x199e44: 0x0  nop
    ctx->pc = 0x199e44u;
    // NOP
}
