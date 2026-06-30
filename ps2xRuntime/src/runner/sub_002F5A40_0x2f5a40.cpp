#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5A40
// Address: 0x2f5a40 - 0x2f5ac0
void sub_002F5A40_0x2f5a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5A40_0x2f5a40");
#endif

    switch (ctx->pc) {
        case 0x2f5a60u: goto label_2f5a60;
        default: break;
    }

    ctx->pc = 0x2f5a40u;

    // 0x2f5a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f5a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f5a44: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2f5a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2f5a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f5a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f5a4c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2f5a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f5a50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f5a54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5a58: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2F5A58u;
    SET_GPR_U32(ctx, 31, 0x2F5A60u);
    ctx->pc = 0x2F5A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5A58u;
            // 0x2f5a5c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A60u; }
        if (ctx->pc != 0x2F5A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5A60u; }
        if (ctx->pc != 0x2F5A60u) { return; }
    }
    ctx->pc = 0x2F5A60u;
label_2f5a60:
    // 0x2f5a60: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2f5a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2f5a64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5a68: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2f5a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2f5a6c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2f5a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2f5a70: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2f5a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2f5a74: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2f5a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x2f5a78: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x2f5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x2f5a7c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2f5a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x2f5a80: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x2f5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x2f5a84: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2f5a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x2f5a88: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x2f5a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x2f5a8c: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2f5a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x2f5a90: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x2f5a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x2f5a94: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2f5a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2f5a98: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2f5a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2f5a9c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2f5a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2f5aa0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2f5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2f5aa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f5aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5aac: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5AACu;
            // 0x2f5ab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5AB4u;
    // 0x2f5ab4: 0x0  nop
    ctx->pc = 0x2f5ab4u;
    // NOP
    // 0x2f5ab8: 0x0  nop
    ctx->pc = 0x2f5ab8u;
    // NOP
    // 0x2f5abc: 0x0  nop
    ctx->pc = 0x2f5abcu;
    // NOP
}
