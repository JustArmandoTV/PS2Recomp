#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00329EC0
// Address: 0x329ec0 - 0x329f20
void sub_00329EC0_0x329ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329EC0_0x329ec0");
#endif

    switch (ctx->pc) {
        case 0x329ef0u: goto label_329ef0;
        case 0x329f08u: goto label_329f08;
        default: break;
    }

    ctx->pc = 0x329ec0u;

    // 0x329ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329ec4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x329ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x329ec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x329ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x329ed0: 0x8c660ea4  lw          $a2, 0xEA4($v1)
    ctx->pc = 0x329ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
    // 0x329ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329ed8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x329ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x329edc: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x329edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x329ee0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x329EE0u;
    {
        const bool branch_taken_0x329ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x329EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329EE0u;
            // 0x329ee4: 0x8cc4012c  lw          $a0, 0x12C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ee0) {
            ctx->pc = 0x329F08u;
            goto label_329f08;
        }
    }
    ctx->pc = 0x329EE8u;
    // 0x329ee8: 0xc0c5eec  jal         func_317BB0
    ctx->pc = 0x329EE8u;
    SET_GPR_U32(ctx, 31, 0x329EF0u);
    ctx->pc = 0x317BB0u;
    if (runtime->hasFunction(0x317BB0u)) {
        auto targetFn = runtime->lookupFunction(0x317BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329EF0u; }
        if (ctx->pc != 0x329EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317BB0_0x317bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329EF0u; }
        if (ctx->pc != 0x329EF0u) { return; }
    }
    ctx->pc = 0x329EF0u;
label_329ef0:
    // 0x329ef0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x329ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x329ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329ef8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x329ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x329efc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x329efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x329f00: 0xc0ca718  jal         func_329C60
    ctx->pc = 0x329F00u;
    SET_GPR_U32(ctx, 31, 0x329F08u);
    ctx->pc = 0x329F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329F00u;
            // 0x329f04: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329C60u;
    if (runtime->hasFunction(0x329C60u)) {
        auto targetFn = runtime->lookupFunction(0x329C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F08u; }
        if (ctx->pc != 0x329F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329C60_0x329c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F08u; }
        if (ctx->pc != 0x329F08u) { return; }
    }
    ctx->pc = 0x329F08u;
label_329f08:
    // 0x329f08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329f0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329f10: 0x3e00008  jr          $ra
    ctx->pc = 0x329F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329F10u;
            // 0x329f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329F18u;
    // 0x329f18: 0x0  nop
    ctx->pc = 0x329f18u;
    // NOP
    // 0x329f1c: 0x0  nop
    ctx->pc = 0x329f1cu;
    // NOP
}
