#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016EC90
// Address: 0x16ec90 - 0x16ece8
void sub_0016EC90_0x16ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EC90_0x16ec90");
#endif

    switch (ctx->pc) {
        case 0x16ecb4u: goto label_16ecb4;
        case 0x16ecc8u: goto label_16ecc8;
        default: break;
    }

    ctx->pc = 0x16ec90u;

    // 0x16ec90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ec94: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16ec98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ec9c: 0x24502380  addiu       $s0, $v0, 0x2380
    ctx->pc = 0x16ec9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9088));
    // 0x16eca0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16eca4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16ECA4u;
    {
        const bool branch_taken_0x16eca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16ECA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ECA4u;
            // 0x16eca8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eca4) {
            ctx->pc = 0x16ECC8u;
            goto label_16ecc8;
        }
    }
    ctx->pc = 0x16ECACu;
    // 0x16ecac: 0xc05919e  jal         func_164678
    ctx->pc = 0x16ECACu;
    SET_GPR_U32(ctx, 31, 0x16ECB4u);
    ctx->pc = 0x164678u;
    if (runtime->hasFunction(0x164678u)) {
        auto targetFn = runtime->lookupFunction(0x164678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ECB4u; }
        if (ctx->pc != 0x16ECB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164678_0x164678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ECB4u; }
        if (ctx->pc != 0x16ECB4u) { return; }
    }
    ctx->pc = 0x16ECB4u;
label_16ecb4:
    // 0x16ecb4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16ecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16ecb8: 0x24842398  addiu       $a0, $a0, 0x2398
    ctx->pc = 0x16ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9112));
    // 0x16ecbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ecbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ecc0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x16ECC0u;
    SET_GPR_U32(ctx, 31, 0x16ECC8u);
    ctx->pc = 0x16ECC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ECC0u;
            // 0x16ecc4: 0x24060ac0  addiu       $a2, $zero, 0xAC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ECC8u; }
        if (ctx->pc != 0x16ECC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ECC8u; }
        if (ctx->pc != 0x16ECC8u) { return; }
    }
    ctx->pc = 0x16ECC8u;
label_16ecc8:
    // 0x16ecc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16eccc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16ecccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ecd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16ecd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16ecd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ecd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ecdc: 0x3e00008  jr          $ra
    ctx->pc = 0x16ECDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ECE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ECDCu;
            // 0x16ece0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16ECE4u;
    // 0x16ece4: 0x0  nop
    ctx->pc = 0x16ece4u;
    // NOP
}
