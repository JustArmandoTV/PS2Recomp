#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D270
// Address: 0x16d270 - 0x16d2f8
void sub_0016D270_0x16d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D270_0x16d270");
#endif

    switch (ctx->pc) {
        case 0x16d2c4u: goto label_16d2c4;
        case 0x16d2d8u: goto label_16d2d8;
        case 0x16d2e8u: goto label_16d2e8;
        default: break;
    }

    ctx->pc = 0x16d270u;

    // 0x16d270: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d274: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d278: 0x8c472368  lw          $a3, 0x2368($v0)
    ctx->pc = 0x16d278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9064)));
    // 0x16d27c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16d280: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x16d280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x16d284: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16d284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16d288: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16d28c: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x16d28cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x16d290: 0x2463d360  addiu       $v1, $v1, -0x2CA0
    ctx->pc = 0x16d290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955872));
    // 0x16d294: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d298: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x16d298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x16d29c: 0x24a5cc08  addiu       $a1, $a1, -0x33F8
    ctx->pc = 0x16d29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953992));
    // 0x16d2a0: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x16d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x16d2a4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16d2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16d2a8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x16d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x16d2ac: 0x2610aad4  addiu       $s0, $s0, -0x552C
    ctx->pc = 0x16d2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945492));
    // 0x16d2b0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x16d2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x16d2b4: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x16d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x16d2b8: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x16d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x16d2bc: 0xc043058  jal         func_10C160
    ctx->pc = 0x16D2BCu;
    SET_GPR_U32(ctx, 31, 0x16D2C4u);
    ctx->pc = 0x16D2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2BCu;
            // 0x16d2c0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C160u;
    if (runtime->hasFunction(0x10C160u)) {
        auto targetFn = runtime->lookupFunction(0x10C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2C4u; }
        if (ctx->pc != 0x16D2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C160_0x10c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2C4u; }
        if (ctx->pc != 0x16D2C4u) { return; }
    }
    ctx->pc = 0x16D2C4u;
label_16d2c4:
    // 0x16d2c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16d2c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d2cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d2d0: 0xc043528  jal         func_10D4A0
    ctx->pc = 0x16D2D0u;
    SET_GPR_U32(ctx, 31, 0x16D2D8u);
    ctx->pc = 0x16D2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2D0u;
            // 0x16d2d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4A0u;
    if (runtime->hasFunction(0x10D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2D8u; }
        if (ctx->pc != 0x16D2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D4A0_0x10d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2D8u; }
        if (ctx->pc != 0x16D2D8u) { return; }
    }
    ctx->pc = 0x16D2D8u;
label_16d2d8:
    // 0x16d2d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16d2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d2dc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d2e0: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16D2E0u;
    SET_GPR_U32(ctx, 31, 0x16D2E8u);
    ctx->pc = 0x16D2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2E0u;
            // 0x16d2e4: 0x8c45aa50  lw          $a1, -0x55B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2E8u; }
        if (ctx->pc != 0x16D2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2E8u; }
        if (ctx->pc != 0x16D2E8u) { return; }
    }
    ctx->pc = 0x16D2E8u;
label_16d2e8:
    // 0x16d2e8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16d2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d2ec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16d2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x16D2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2F0u;
            // 0x16d2f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D2F8u;
}
