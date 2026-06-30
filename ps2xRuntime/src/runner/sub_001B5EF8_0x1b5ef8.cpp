#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5EF8
// Address: 0x1b5ef8 - 0x1b5f48
void sub_001B5EF8_0x1b5ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5EF8_0x1b5ef8");
#endif

    switch (ctx->pc) {
        case 0x1b5f1cu: goto label_1b5f1c;
        default: break;
    }

    ctx->pc = 0x1b5ef8u;

    // 0x1b5ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5f00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b5f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5f08: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b5f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b5f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b5f10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b5f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b5f14: 0xc06d7d2  jal         func_1B5F48
    ctx->pc = 0x1B5F14u;
    SET_GPR_U32(ctx, 31, 0x1B5F1Cu);
    ctx->pc = 0x1B5F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F14u;
            // 0x1b5f18: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5F48u;
    if (runtime->hasFunction(0x1B5F48u)) {
        auto targetFn = runtime->lookupFunction(0x1B5F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F1Cu; }
        if (ctx->pc != 0x1B5F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5F48_0x1b5f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5F1Cu; }
        if (ctx->pc != 0x1B5F1Cu) { return; }
    }
    ctx->pc = 0x1B5F1Cu;
label_1b5f1c:
    // 0x1b5f1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5F1Cu;
    {
        const bool branch_taken_0x1b5f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F1Cu;
            // 0x1b5f20: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f1c) {
            ctx->pc = 0x1B5F2Cu;
            goto label_1b5f2c;
        }
    }
    ctx->pc = 0x1B5F24u;
    // 0x1b5f24: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1b5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1b5f28: 0xac510b9c  sw          $s1, 0xB9C($v0)
    ctx->pc = 0x1b5f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2972), GPR_U32(ctx, 17));
label_1b5f2c:
    // 0x1b5f2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5f30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5f30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5f34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5f34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5f38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b5f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F3Cu;
            // 0x1b5f40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5F44u;
    // 0x1b5f44: 0x0  nop
    ctx->pc = 0x1b5f44u;
    // NOP
}
