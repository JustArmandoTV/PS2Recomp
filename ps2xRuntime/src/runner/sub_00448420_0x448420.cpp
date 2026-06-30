#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00448420
// Address: 0x448420 - 0x4484b0
void sub_00448420_0x448420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00448420_0x448420");
#endif

    switch (ctx->pc) {
        case 0x448494u: goto label_448494;
        case 0x4484a0u: goto label_4484a0;
        default: break;
    }

    ctx->pc = 0x448420u;

    // 0x448420: 0x81124b4  j           func_4492D0
    ctx->pc = 0x448420u;
    ctx->pc = 0x448424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448420u;
            // 0x448424: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4492D0u;
    if (runtime->hasFunction(0x4492D0u)) {
        auto targetFn = runtime->lookupFunction(0x4492D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004492D0_0x4492d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x448428u;
    // 0x448428: 0x0  nop
    ctx->pc = 0x448428u;
    // NOP
    // 0x44842c: 0x0  nop
    ctx->pc = 0x44842cu;
    // NOP
    // 0x448430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x448430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x448434: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x448434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x448438: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x448438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44843c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x44843cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x448440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x448440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x448444: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x448444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x448448: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x448448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44844c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x44844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x448450: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x448450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x448454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x448454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x448458: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x448458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x44845c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x44845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x448460: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x448460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x448464: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x448464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x448468: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x448468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x44846c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x44846cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x448470: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x448470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x448474: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x448474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x448478: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x448478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x44847c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x44847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x448480: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x448480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x448484: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x448484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x448488: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x448488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x44848c: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x44848Cu;
    SET_GPR_U32(ctx, 31, 0x448494u);
    ctx->pc = 0x448490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44848Cu;
            // 0x448490: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448494u; }
        if (ctx->pc != 0x448494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448494u; }
        if (ctx->pc != 0x448494u) { return; }
    }
    ctx->pc = 0x448494u;
label_448494:
    // 0x448494: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x448494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x448498: 0xc0d879c  jal         func_361E70
    ctx->pc = 0x448498u;
    SET_GPR_U32(ctx, 31, 0x4484A0u);
    ctx->pc = 0x44849Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448498u;
            // 0x44849c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4484A0u; }
        if (ctx->pc != 0x4484A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4484A0u; }
        if (ctx->pc != 0x4484A0u) { return; }
    }
    ctx->pc = 0x4484A0u;
label_4484a0:
    // 0x4484a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4484a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4484a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4484a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4484a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4484A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4484ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4484A8u;
            // 0x4484ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4484B0u;
}
