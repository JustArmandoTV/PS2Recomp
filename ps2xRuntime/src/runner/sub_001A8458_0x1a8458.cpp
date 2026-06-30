#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8458
// Address: 0x1a8458 - 0x1a8490
void sub_001A8458_0x1a8458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8458_0x1a8458");
#endif

    ctx->pc = 0x1a8458u;

    // 0x1a8458: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x1a8458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x1a845c: 0x248400d4  addiu       $a0, $a0, 0xD4
    ctx->pc = 0x1a845cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 212));
    // 0x1a8460: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8460u;
    {
        const bool branch_taken_0x1a8460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8460u;
            // 0x1a8464: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8460) {
            ctx->pc = 0x1A8474u;
            goto label_1a8474;
        }
    }
    ctx->pc = 0x1A8468u;
    // 0x1a8468: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1a8468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a846c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A846Cu;
    {
        const bool branch_taken_0x1a846c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a846c) {
            ctx->pc = 0x1A8470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A846Cu;
            // 0x1a8470: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A8474u;
            goto label_1a8474;
        }
    }
    ctx->pc = 0x1A8474u;
label_1a8474:
    // 0x1a8474: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A847Cu;
    // 0x1a847c: 0x0  nop
    ctx->pc = 0x1a847cu;
    // NOP
    // 0x1a8480: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1a8480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1a8484: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8484u;
            // 0x1a8488: 0x2442aae0  addiu       $v0, $v0, -0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A848Cu;
    // 0x1a848c: 0x0  nop
    ctx->pc = 0x1a848cu;
    // NOP
}
