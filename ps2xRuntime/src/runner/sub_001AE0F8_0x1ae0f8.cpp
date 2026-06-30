#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AE0F8
// Address: 0x1ae0f8 - 0x1ae148
void sub_001AE0F8_0x1ae0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE0F8_0x1ae0f8");
#endif

    ctx->pc = 0x1ae0f8u;

    // 0x1ae0f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ae0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae0fc: 0x50a2000e  beql        $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AE0FCu;
    {
        const bool branch_taken_0x1ae0fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae0fc) {
            ctx->pc = 0x1AE100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0FCu;
            // 0x1ae100: 0x8c820a18  lw          $v0, 0xA18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2584)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE138u;
            goto label_1ae138;
        }
    }
    ctx->pc = 0x1AE104u;
    // 0x1ae104: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x1ae104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ae108: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE108u;
    {
        const bool branch_taken_0x1ae108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE108u;
            // 0x1ae10c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae108) {
            ctx->pc = 0x1AE128u;
            goto label_1ae128;
        }
    }
    ctx->pc = 0x1AE110u;
    // 0x1ae110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae114: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE114u;
    {
        const bool branch_taken_0x1ae114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae114) {
            ctx->pc = 0x1AE118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE114u;
            // 0x1ae118: 0x8c820a14  lw          $v0, 0xA14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2580)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE138u;
            goto label_1ae138;
        }
    }
    ctx->pc = 0x1AE11Cu;
    // 0x1ae11c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE11Cu;
    {
        const bool branch_taken_0x1ae11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae11c) {
            ctx->pc = 0x1AE13Cu;
            goto label_1ae13c;
        }
    }
    ctx->pc = 0x1AE124u;
    // 0x1ae124: 0x0  nop
    ctx->pc = 0x1ae124u;
    // NOP
label_1ae128:
    // 0x1ae128: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE128u;
    {
        const bool branch_taken_0x1ae128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae128) {
            ctx->pc = 0x1AE12Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE128u;
            // 0x1ae12c: 0x8c820a1c  lw          $v0, 0xA1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2588)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE138u;
            goto label_1ae138;
        }
    }
    ctx->pc = 0x1AE130u;
    // 0x1ae130: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE130u;
            // 0x1ae134: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE138u;
label_1ae138:
    // 0x1ae138: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ae13c:
    // 0x1ae13c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE144u;
    // 0x1ae144: 0x0  nop
    ctx->pc = 0x1ae144u;
    // NOP
}
