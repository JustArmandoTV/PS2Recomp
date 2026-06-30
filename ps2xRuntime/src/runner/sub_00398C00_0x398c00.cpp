#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00398C00
// Address: 0x398c00 - 0x398c90
void sub_00398C00_0x398c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398C00_0x398c00");
#endif

    switch (ctx->pc) {
        case 0x398c74u: goto label_398c74;
        case 0x398c80u: goto label_398c80;
        default: break;
    }

    ctx->pc = 0x398c00u;

    // 0x398c00: 0x80e665c  j           func_399970
    ctx->pc = 0x398C00u;
    ctx->pc = 0x398C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398C00u;
            // 0x398c04: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x399970u;
    if (runtime->hasFunction(0x399970u)) {
        auto targetFn = runtime->lookupFunction(0x399970u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00399970_0x399970(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x398C08u;
    // 0x398c08: 0x0  nop
    ctx->pc = 0x398c08u;
    // NOP
    // 0x398c0c: 0x0  nop
    ctx->pc = 0x398c0cu;
    // NOP
    // 0x398c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x398c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x398c14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x398c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398c18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x398c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x398c1c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x398c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x398c20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x398c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x398c24: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x398c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x398c28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x398c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398c2c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x398c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x398c30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x398c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x398c34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x398c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x398c38: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x398c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x398c3c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x398c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x398c40: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x398c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x398c44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x398c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398c48: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x398c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x398c4c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x398c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x398c50: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x398c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x398c54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x398c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x398c58: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x398c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x398c5c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x398c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x398c60: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x398c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x398c64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x398c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x398c68: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x398c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x398c6c: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x398C6Cu;
    SET_GPR_U32(ctx, 31, 0x398C74u);
    ctx->pc = 0x398C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398C6Cu;
            // 0x398c70: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398C74u; }
        if (ctx->pc != 0x398C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398C74u; }
        if (ctx->pc != 0x398C74u) { return; }
    }
    ctx->pc = 0x398C74u;
label_398c74:
    // 0x398c74: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x398c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x398c78: 0xc0d879c  jal         func_361E70
    ctx->pc = 0x398C78u;
    SET_GPR_U32(ctx, 31, 0x398C80u);
    ctx->pc = 0x398C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398C78u;
            // 0x398c7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398C80u; }
        if (ctx->pc != 0x398C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398C80u; }
        if (ctx->pc != 0x398C80u) { return; }
    }
    ctx->pc = 0x398C80u;
label_398c80:
    // 0x398c80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x398c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398c88: 0x3e00008  jr          $ra
    ctx->pc = 0x398C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398C88u;
            // 0x398c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x398C90u;
}
