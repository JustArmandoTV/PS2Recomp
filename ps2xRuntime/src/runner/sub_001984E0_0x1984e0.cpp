#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001984E0
// Address: 0x1984e0 - 0x198518
void sub_001984E0_0x1984e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001984E0_0x1984e0");
#endif

    ctx->pc = 0x1984e0u;

    // 0x1984e0: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x1984e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1984e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1984E4u;
    {
        const bool branch_taken_0x1984e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1984e4) {
            ctx->pc = 0x198510u;
            goto label_198510;
        }
    }
    ctx->pc = 0x1984ECu;
    // 0x1984ec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1984ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1984f0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1984f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1984f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1984f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1984f8: 0x8c6386f0  lw          $v1, -0x7910($v1)
    ctx->pc = 0x1984f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936304)));
    // 0x1984fc: 0x600008  jr          $v1
    ctx->pc = 0x1984FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198508u: goto label_198508;
            case 0x198510u: goto label_198510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198504u;
    // 0x198504: 0x0  nop
    ctx->pc = 0x198504u;
    // NOP
label_198508:
    // 0x198508: 0x3e00008  jr          $ra
    ctx->pc = 0x198508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19850Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198508u;
            // 0x19850c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198510u;
label_198510:
    // 0x198510: 0x3e00008  jr          $ra
    ctx->pc = 0x198510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198510u;
            // 0x198514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198518u;
}
