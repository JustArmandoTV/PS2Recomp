#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5EA8
// Address: 0x1b5ea8 - 0x1b5ef8
void sub_001B5EA8_0x1b5ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5EA8_0x1b5ea8");
#endif

    switch (ctx->pc) {
        case 0x1b5eccu: goto label_1b5ecc;
        default: break;
    }

    ctx->pc = 0x1b5ea8u;

    // 0x1b5ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5eb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b5eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5eb8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b5eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ebc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b5ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b5ec0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b5ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b5ec4: 0xc06d7d2  jal         func_1B5F48
    ctx->pc = 0x1B5EC4u;
    SET_GPR_U32(ctx, 31, 0x1B5ECCu);
    ctx->pc = 0x1B5EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5EC4u;
            // 0x1b5ec8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5F48u;
    if (runtime->hasFunction(0x1B5F48u)) {
        auto targetFn = runtime->lookupFunction(0x1B5F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5ECCu; }
        if (ctx->pc != 0x1B5ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5F48_0x1b5f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5ECCu; }
        if (ctx->pc != 0x1B5ECCu) { return; }
    }
    ctx->pc = 0x1B5ECCu;
label_1b5ecc:
    // 0x1b5ecc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5ECCu;
    {
        const bool branch_taken_0x1b5ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5ECCu;
            // 0x1b5ed0: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ecc) {
            ctx->pc = 0x1B5EDCu;
            goto label_1b5edc;
        }
    }
    ctx->pc = 0x1B5ED4u;
    // 0x1b5ed4: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1b5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1b5ed8: 0xac510a0c  sw          $s1, 0xA0C($v0)
    ctx->pc = 0x1b5ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2572), GPR_U32(ctx, 17));
label_1b5edc:
    // 0x1b5edc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5ee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5ee4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5ee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5ee8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b5ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5eec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5EECu;
            // 0x1b5ef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5EF4u;
    // 0x1b5ef4: 0x0  nop
    ctx->pc = 0x1b5ef4u;
    // NOP
}
