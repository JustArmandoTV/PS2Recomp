#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD300
// Address: 0x1bd300 - 0x1bd348
void sub_001BD300_0x1bd300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD300_0x1bd300");
#endif

    ctx->pc = 0x1bd300u;

    // 0x1bd300: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1bd300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd304: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1bd304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1bd308: 0x24a3ff40  addiu       $v1, $a1, -0xC0
    ctx->pc = 0x1bd308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
    // 0x1bd30c: 0x24a4ff20  addiu       $a0, $a1, -0xE0
    ctx->pc = 0x1bd30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
    // 0x1bd310: 0x2c630020  sltiu       $v1, $v1, 0x20
    ctx->pc = 0x1bd310u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bd314: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD314u;
    {
        const bool branch_taken_0x1bd314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD314u;
            // 0x1bd318: 0x2c840010  sltiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd314) {
            ctx->pc = 0x1BD33Cu;
            goto label_1bd33c;
        }
    }
    ctx->pc = 0x1BD31Cu;
    // 0x1bd31c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD31Cu;
    {
        const bool branch_taken_0x1bd31c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD31Cu;
            // 0x1bd320: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd31c) {
            ctx->pc = 0x1BD33Cu;
            goto label_1bd33c;
        }
    }
    ctx->pc = 0x1BD324u;
    // 0x1bd324: 0x240200bd  addiu       $v0, $zero, 0xBD
    ctx->pc = 0x1bd324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x1bd328: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD328u;
    {
        const bool branch_taken_0x1bd328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD328u;
            // 0x1bd32c: 0x240300bf  addiu       $v1, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd328) {
            ctx->pc = 0x1BD33Cu;
            goto label_1bd33c;
        }
    }
    ctx->pc = 0x1BD330u;
    // 0x1bd330: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD330u;
    {
        const bool branch_taken_0x1bd330 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BD334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD330u;
            // 0x1bd334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd330) {
            ctx->pc = 0x1BD33Cu;
            goto label_1bd33c;
        }
    }
    ctx->pc = 0x1BD338u;
    // 0x1bd338: 0x240200bd  addiu       $v0, $zero, 0xBD
    ctx->pc = 0x1bd338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_1bd33c:
    // 0x1bd33c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD33Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD344u;
    // 0x1bd344: 0x0  nop
    ctx->pc = 0x1bd344u;
    // NOP
}
