#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010F0C8
// Address: 0x10f0c8 - 0x10f178
void sub_0010F0C8_0x10f0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F0C8_0x10f0c8");
#endif

    switch (ctx->pc) {
        case 0x10f100u: goto label_10f100;
        case 0x10f124u: goto label_10f124;
        case 0x10f134u: goto label_10f134;
        default: break;
    }

    ctx->pc = 0x10f0c8u;

    // 0x10f0c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x10f0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x10f0cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10f0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10f0d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10f0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10f0d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10f0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10f0dc: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x10f0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x10f0e0: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x10f0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x10f0e4: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x10f0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x10f0e8: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x10f0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x10f0ec: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x10f0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x10f0f0: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x10f0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x10f0f4: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x10f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x10f0f8: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10F0F8u;
    SET_GPR_U32(ctx, 31, 0x10F100u);
    ctx->pc = 0x10F0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F0F8u;
            // 0x10f0fc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F100u; }
        if (ctx->pc != 0x10F100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F100u; }
        if (ctx->pc != 0x10F100u) { return; }
    }
    ctx->pc = 0x10F100u;
label_10f100:
    // 0x10f100: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x10f100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x10f104: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x10f104u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x10f108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10f108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f10c: 0x2484eee0  addiu       $a0, $a0, -0x1120
    ctx->pc = 0x10f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962912));
    // 0x10f110: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10f110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f114: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f118: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x10f118u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x10f11c: 0xc043852  jal         func_10E148
    ctx->pc = 0x10F11Cu;
    SET_GPR_U32(ctx, 31, 0x10F124u);
    ctx->pc = 0x10F120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F11Cu;
            // 0x10f120: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E148u;
    if (runtime->hasFunction(0x10E148u)) {
        auto targetFn = runtime->lookupFunction(0x10E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F124u; }
        if (ctx->pc != 0x10F124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010E148_0x10e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F124u; }
        if (ctx->pc != 0x10F124u) { return; }
    }
    ctx->pc = 0x10F124u;
label_10f124:
    // 0x10f124: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F124u;
    {
        const bool branch_taken_0x10f124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F124u;
            // 0x10f128: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f124) {
            ctx->pc = 0x10F138u;
            goto label_10f138;
        }
    }
    ctx->pc = 0x10F12Cu;
    // 0x10f12c: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10F12Cu;
    SET_GPR_U32(ctx, 31, 0x10F134u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F134u; }
        if (ctx->pc != 0x10F134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F134u; }
        if (ctx->pc != 0x10F134u) { return; }
    }
    ctx->pc = 0x10F134u;
label_10f134:
    // 0x10f134: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10f134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10f138:
    // 0x10f138: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10f138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f13c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10f13cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f140: 0x3e00008  jr          $ra
    ctx->pc = 0x10F140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F140u;
            // 0x10f144: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F148u;
    // 0x10f148: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x10f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10f14c: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x10f14cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x10f150: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x10f150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10f154: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10f154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10f158: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x10f158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10f15c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F15Cu;
            // 0x10f160: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F164u;
    // 0x10f164: 0x0  nop
    ctx->pc = 0x10f164u;
    // NOP
    // 0x10f168: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x10f168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10f16c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F16Cu;
            // 0x10f170: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F174u;
    // 0x10f174: 0x0  nop
    ctx->pc = 0x10f174u;
    // NOP
}
