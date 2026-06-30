#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010F178
// Address: 0x10f178 - 0x10f1c0
void sub_0010F178_0x10f178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F178_0x10f178");
#endif

    switch (ctx->pc) {
        case 0x10f190u: goto label_10f190;
        default: break;
    }

    ctx->pc = 0x10f178u;

    // 0x10f178: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x10f178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x10f17c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10f180: 0x24429b40  addiu       $v0, $v0, -0x64C0
    ctx->pc = 0x10f180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941504));
    // 0x10f184: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10f188: 0x3e00008  jr          $ra
    ctx->pc = 0x10F188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F188u;
            // 0x10f18c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F190u;
label_10f190:
    // 0x10f190: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x10f190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x10f194: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10f194u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10f198: 0x24429b40  addiu       $v0, $v0, -0x64C0
    ctx->pc = 0x10f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941504));
    // 0x10f19c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10f1a0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10f1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x10F1A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F1A4u;
            // 0x10f1a8: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F1ACu;
    // 0x10f1ac: 0x0  nop
    ctx->pc = 0x10f1acu;
    // NOP
    // 0x10f1b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x10f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x10f1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x10F1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F1B4u;
            // 0x10f1b8: 0x24429998  addiu       $v0, $v0, -0x6668 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F1BCu;
    // 0x10f1bc: 0x0  nop
    ctx->pc = 0x10f1bcu;
    // NOP
}
