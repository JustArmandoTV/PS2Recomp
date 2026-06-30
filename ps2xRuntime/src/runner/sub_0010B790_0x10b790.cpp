#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010B790
// Address: 0x10b790 - 0x10b858
void sub_0010B790_0x10b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B790_0x10b790");
#endif

    switch (ctx->pc) {
        case 0x10b7acu: goto label_10b7ac;
        case 0x10b7c0u: goto label_10b7c0;
        case 0x10b7e4u: goto label_10b7e4;
        case 0x10b7ecu: goto label_10b7ec;
        case 0x10b83cu: goto label_10b83c;
        default: break;
    }

    ctx->pc = 0x10b790u;

    // 0x10b790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10b794: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x10b794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x10b798: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10b798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10b79c: 0x24a5eba0  addiu       $a1, $a1, -0x1460
    ctx->pc = 0x10b79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962080));
    // 0x10b7a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10b7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10b7a4: 0xc042e16  jal         func_10B858
    ctx->pc = 0x10B7A4u;
    SET_GPR_U32(ctx, 31, 0x10B7ACu);
    ctx->pc = 0x10B7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7A4u;
            // 0x10b7a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7ACu; }
        if (ctx->pc != 0x10B7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7ACu; }
        if (ctx->pc != 0x10B7ACu) { return; }
    }
    ctx->pc = 0x10B7ACu;
label_10b7ac:
    // 0x10b7ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b7b0: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10b7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10b7b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10b7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10b7b8: 0xc0427c0  jal         func_109F00
    ctx->pc = 0x10B7B8u;
    SET_GPR_U32(ctx, 31, 0x10B7C0u);
    ctx->pc = 0x10B7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7B8u;
            // 0x10b7bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F00u;
    if (runtime->hasFunction(0x109F00u)) {
        auto targetFn = runtime->lookupFunction(0x109F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7C0u; }
        if (ctx->pc != 0x10B7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F00_0x109f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7C0u; }
        if (ctx->pc != 0x10B7C0u) { return; }
    }
    ctx->pc = 0x10B7C0u;
label_10b7c0:
    // 0x10b7c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b7c4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x10b7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x10b7c8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10b7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10b7cc: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10b7d0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x10b7d0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x10b7d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b7d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10b7dc: 0xc0427c0  jal         func_109F00
    ctx->pc = 0x10B7DCu;
    SET_GPR_U32(ctx, 31, 0x10B7E4u);
    ctx->pc = 0x10B7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7DCu;
            // 0x10b7e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F00u;
    if (runtime->hasFunction(0x109F00u)) {
        auto targetFn = runtime->lookupFunction(0x109F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7E4u; }
        if (ctx->pc != 0x10B7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F00_0x109f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7E4u; }
        if (ctx->pc != 0x10B7E4u) { return; }
    }
    ctx->pc = 0x10B7E4u;
label_10b7e4:
    // 0x10b7e4: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10B7E4u;
    SET_GPR_U32(ctx, 31, 0x10B7ECu);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7ECu; }
        if (ctx->pc != 0x10B7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7ECu; }
        if (ctx->pc != 0x10B7ECu) { return; }
    }
    ctx->pc = 0x10B7ECu;
label_10b7ec:
    // 0x10b7ec: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b7f0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10b7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10b7f4: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10b7f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10b7f8: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10b7f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10b7fc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x10b800: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10b800u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10b804: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b808: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10b808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10b80c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10b80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10b810: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x10b810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x10b814: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10b814u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10b818: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10b818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10b81c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x10b820: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10b820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10b824: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10b824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10b828: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10b828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10b82c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B82Cu;
    {
        const bool branch_taken_0x10b82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B82Cu;
            // 0x10b830: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b82c) {
            ctx->pc = 0x10B840u;
            goto label_10b840;
        }
    }
    ctx->pc = 0x10B834u;
    // 0x10b834: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10B834u;
    SET_GPR_U32(ctx, 31, 0x10B83Cu);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B83Cu; }
        if (ctx->pc != 0x10B83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B83Cu; }
        if (ctx->pc != 0x10B83Cu) { return; }
    }
    ctx->pc = 0x10B83Cu;
label_10b83c:
    // 0x10b83c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_10b840:
    // 0x10b840: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10b840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b844: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x10b844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x10b848: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10b848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b84c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10b84cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x10b850: 0x3e00008  jr          $ra
    ctx->pc = 0x10B850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B850u;
            // 0x10b854: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B858u;
}
