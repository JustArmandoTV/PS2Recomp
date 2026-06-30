#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBEF0
// Address: 0x1bbef0 - 0x1bbf30
void sub_001BBEF0_0x1bbef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBEF0_0x1bbef0");
#endif

    switch (ctx->pc) {
        case 0x1bbf08u: goto label_1bbf08;
        default: break;
    }

    ctx->pc = 0x1bbef0u;

    // 0x1bbef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbef4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bbef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bbef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbefc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bbefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bbf00: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BBF00u;
    SET_GPR_U32(ctx, 31, 0x1BBF08u);
    ctx->pc = 0x1BBF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF00u;
            // 0x1bbf04: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF08u; }
        if (ctx->pc != 0x1BBF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF08u; }
        if (ctx->pc != 0x1BBF08u) { return; }
    }
    ctx->pc = 0x1BBF08u;
label_1bbf08:
    // 0x1bbf08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bbf08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf0c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBF0Cu;
    {
        const bool branch_taken_0x1bbf0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbf0c) {
            ctx->pc = 0x1BBF10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF0Cu;
            // 0x1bbf10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBF24u;
            goto label_1bbf24;
        }
    }
    ctx->pc = 0x1BBF14u;
    // 0x1bbf14: 0x9063001b  lbu         $v1, 0x1B($v1)
    ctx->pc = 0x1bbf14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27)));
    // 0x1bbf18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbf1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bbf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bbf20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbf20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bbf24:
    // 0x1bbf24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bbf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbf28: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF28u;
            // 0x1bbf2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBF30u;
}
