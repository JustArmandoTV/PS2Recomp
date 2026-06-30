#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00122CF8
// Address: 0x122cf8 - 0x122d78
void sub_00122CF8_0x122cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122CF8_0x122cf8");
#endif

    switch (ctx->pc) {
        case 0x122d48u: goto label_122d48;
        case 0x122d64u: goto label_122d64;
        default: break;
    }

    ctx->pc = 0x122cf8u;

    // 0x122cf8: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x122cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x122cfc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x122cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x122d00: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x122d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x122d04: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x122d04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
    // 0x122d08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x122d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x122d0c: 0x24422c90  addiu       $v0, $v0, 0x2C90
    ctx->pc = 0x122d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11408));
    // 0x122d10: 0x246346d0  addiu       $v1, $v1, 0x46D0
    ctx->pc = 0x122d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18128));
    // 0x122d14: 0x24a503f0  addiu       $a1, $a1, 0x3F0
    ctx->pc = 0x122d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1008));
    // 0x122d18: 0x24c605b8  addiu       $a2, $a2, 0x5B8
    ctx->pc = 0x122d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1464));
    // 0x122d1c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x122d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x122d20: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x122d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x122d24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x122d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x122d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x122d2c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x122d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x122d30: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x122d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x122d34: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x122d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x122d38: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x122d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x122d3c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x122d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x122d40: 0xc043058  jal         func_10C160
    ctx->pc = 0x122D40u;
    SET_GPR_U32(ctx, 31, 0x122D48u);
    ctx->pc = 0x122D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122D40u;
            // 0x122d44: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C160u;
    if (runtime->hasFunction(0x10C160u)) {
        auto targetFn = runtime->lookupFunction(0x10C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122D48u; }
        if (ctx->pc != 0x122D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C160_0x10c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122D48u; }
        if (ctx->pc != 0x122D48u) { return; }
    }
    ctx->pc = 0x122D48u;
label_122d48:
    // 0x122d48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d4c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x122D4Cu;
    {
        const bool branch_taken_0x122d4c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x122D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122D4Cu;
            // 0x122d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d4c) {
            ctx->pc = 0x122D5Cu;
            goto label_122d5c;
        }
    }
    ctx->pc = 0x122D54u;
    // 0x122d54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x122D54u;
    {
        const bool branch_taken_0x122d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122D54u;
            // 0x122d58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d54) {
            ctx->pc = 0x122D68u;
            goto label_122d68;
        }
    }
    ctx->pc = 0x122D5Cu;
label_122d5c:
    // 0x122d5c: 0xc043528  jal         func_10D4A0
    ctx->pc = 0x122D5Cu;
    SET_GPR_U32(ctx, 31, 0x122D64u);
    ctx->pc = 0x122D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122D5Cu;
            // 0x122d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4A0u;
    if (runtime->hasFunction(0x10D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122D64u; }
        if (ctx->pc != 0x122D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D4A0_0x10d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122D64u; }
        if (ctx->pc != 0x122D64u) { return; }
    }
    ctx->pc = 0x122D64u;
label_122d64:
    // 0x122d64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x122d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122d68:
    // 0x122d68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x122d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122d6c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x122d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122d70: 0x3e00008  jr          $ra
    ctx->pc = 0x122D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122D70u;
            // 0x122d74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x122D78u;
}
