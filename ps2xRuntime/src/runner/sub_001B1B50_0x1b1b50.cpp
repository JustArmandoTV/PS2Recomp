#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1B50
// Address: 0x1b1b50 - 0x1b1ba8
void sub_001B1B50_0x1b1b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1B50_0x1b1b50");
#endif

    switch (ctx->pc) {
        case 0x1b1b88u: goto label_1b1b88;
        default: break;
    }

    ctx->pc = 0x1b1b50u;

    // 0x1b1b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1b58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1b5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b1b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b1b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b1b64: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b1b64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1b68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b1b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b1b6c: 0x8c842030  lw          $a0, 0x2030($a0)
    ctx->pc = 0x1b1b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1b1b70: 0x24901128  addiu       $s0, $a0, 0x1128
    ctx->pc = 0x1b1b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4392));
    // 0x1b1b74: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1b1b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b1b78: 0x10520005  beq         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1B78u;
    {
        const bool branch_taken_0x1b1b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1B1B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B78u;
            // 0x1b1b7c: 0x24841198  addiu       $a0, $a0, 0x1198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b78) {
            ctx->pc = 0x1B1B90u;
            goto label_1b1b90;
        }
    }
    ctx->pc = 0x1B1B80u;
    // 0x1b1b80: 0xc06c518  jal         func_1B1460
    ctx->pc = 0x1B1B80u;
    SET_GPR_U32(ctx, 31, 0x1B1B88u);
    ctx->pc = 0x1B1460u;
    if (runtime->hasFunction(0x1B1460u)) {
        auto targetFn = runtime->lookupFunction(0x1B1460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B88u; }
        if (ctx->pc != 0x1B1B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1460_0x1b1460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B88u; }
        if (ctx->pc != 0x1B1B88u) { return; }
    }
    ctx->pc = 0x1B1B88u;
label_1b1b88:
    // 0x1b1b88: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x1b1b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x1b1b8c: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x1b1b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
label_1b1b90:
    // 0x1b1b90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1b94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1b98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b1b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1b9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b1b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b1ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BA0u;
            // 0x1b1ba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1BA8u;
}
