#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBF30
// Address: 0x1bbf30 - 0x1bbf70
void sub_001BBF30_0x1bbf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBF30_0x1bbf30");
#endif

    switch (ctx->pc) {
        case 0x1bbf48u: goto label_1bbf48;
        default: break;
    }

    ctx->pc = 0x1bbf30u;

    // 0x1bbf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbf34: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bbf34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bbf38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbf3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bbf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bbf40: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BBF40u;
    SET_GPR_U32(ctx, 31, 0x1BBF48u);
    ctx->pc = 0x1BBF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF40u;
            // 0x1bbf44: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF48u; }
        if (ctx->pc != 0x1BBF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF48u; }
        if (ctx->pc != 0x1BBF48u) { return; }
    }
    ctx->pc = 0x1BBF48u;
label_1bbf48:
    // 0x1bbf48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bbf48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf4c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBF4Cu;
    {
        const bool branch_taken_0x1bbf4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbf4c) {
            ctx->pc = 0x1BBF50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF4Cu;
            // 0x1bbf50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBF64u;
            goto label_1bbf64;
        }
    }
    ctx->pc = 0x1BBF54u;
    // 0x1bbf54: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x1bbf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1bbf58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbf5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bbf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bbf60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbf60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bbf64:
    // 0x1bbf64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bbf64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbf68: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF68u;
            // 0x1bbf6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBF70u;
}
