#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A130
// Address: 0x19a130 - 0x19a170
void sub_0019A130_0x19a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A130_0x19a130");
#endif

    ctx->pc = 0x19a130u;

    // 0x19a130: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19a130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a134: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x19a134u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x19a138: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19A138u;
    {
        const bool branch_taken_0x19a138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A138u;
            // 0x19a13c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a138) {
            ctx->pc = 0x19A164u;
            goto label_19a164;
        }
    }
    ctx->pc = 0x19A140u;
    // 0x19a140: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A140u;
    {
        const bool branch_taken_0x19a140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a140) {
            ctx->pc = 0x19A144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19A140u;
            // 0x19a144: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A158u;
            goto label_19a158;
        }
    }
    ctx->pc = 0x19A148u;
    // 0x19a148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a14c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19A14Cu;
    {
        const bool branch_taken_0x19a14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A14Cu;
            // 0x19a150: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a14c) {
            ctx->pc = 0x19A15Cu;
            goto label_19a15c;
        }
    }
    ctx->pc = 0x19A154u;
    // 0x19a154: 0x0  nop
    ctx->pc = 0x19a154u;
    // NOP
label_19a158:
    // 0x19a158: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19a158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19a15c:
    // 0x19a15c: 0x54820001  bnel        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x19A15Cu;
    {
        const bool branch_taken_0x19a15c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19a15c) {
            ctx->pc = 0x19A160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19A15Cu;
            // 0x19a160: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A164u;
            goto label_19a164;
        }
    }
    ctx->pc = 0x19A164u;
label_19a164:
    // 0x19a164: 0x3e00008  jr          $ra
    ctx->pc = 0x19A164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A164u;
            // 0x19a168: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A16Cu;
    // 0x19a16c: 0x0  nop
    ctx->pc = 0x19a16cu;
    // NOP
}
