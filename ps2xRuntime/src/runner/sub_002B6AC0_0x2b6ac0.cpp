#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6AC0
// Address: 0x2b6ac0 - 0x2b6b10
void sub_002B6AC0_0x2b6ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6AC0_0x2b6ac0");
#endif

    switch (ctx->pc) {
        case 0x2b6af0u: goto label_2b6af0;
        default: break;
    }

    ctx->pc = 0x2b6ac0u;

    // 0x2b6ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6acc: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x2b6accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x2b6ad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ad4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2b6ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2b6ad8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2b6ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2b6adc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2b6adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2b6ae0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2b6ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2b6ae4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2b6ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2b6ae8: 0xc0fe000  jal         func_3F8000
    ctx->pc = 0x2B6AE8u;
    SET_GPR_U32(ctx, 31, 0x2B6AF0u);
    ctx->pc = 0x2B6AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6AE8u;
            // 0x2b6aec: 0xa0800028  sb          $zero, 0x28($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F8000u;
    if (runtime->hasFunction(0x3F8000u)) {
        auto targetFn = runtime->lookupFunction(0x3F8000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6AF0u; }
        if (ctx->pc != 0x2B6AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F8000_0x3f8000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6AF0u; }
        if (ctx->pc != 0x2B6AF0u) { return; }
    }
    ctx->pc = 0x2B6AF0u;
label_2b6af0:
    // 0x2b6af0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b6af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6af4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6af8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6afc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6AFCu;
            // 0x2b6b00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6B04u;
    // 0x2b6b04: 0x0  nop
    ctx->pc = 0x2b6b04u;
    // NOP
    // 0x2b6b08: 0x0  nop
    ctx->pc = 0x2b6b08u;
    // NOP
    // 0x2b6b0c: 0x0  nop
    ctx->pc = 0x2b6b0cu;
    // NOP
}
