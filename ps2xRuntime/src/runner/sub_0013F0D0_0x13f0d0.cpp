#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F0D0
// Address: 0x13f0d0 - 0x13f190
void sub_0013F0D0_0x13f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F0D0_0x13f0d0");
#endif

    switch (ctx->pc) {
        case 0x13f0f8u: goto label_13f0f8;
        case 0x13f150u: goto label_13f150;
        case 0x13f15cu: goto label_13f15c;
        case 0x13f164u: goto label_13f164;
        case 0x13f170u: goto label_13f170;
        default: break;
    }

    ctx->pc = 0x13f0d0u;

    // 0x13f0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f0d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f0d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f0dc: 0x8c4256b0  lw          $v0, 0x56B0($v0)
    ctx->pc = 0x13f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22192)));
    // 0x13f0e0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x13f0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x13f0e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F0E4u;
    {
        const bool branch_taken_0x13f0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f0e4) {
            ctx->pc = 0x13F0F8u;
            goto label_13f0f8;
        }
    }
    ctx->pc = 0x13F0ECu;
    // 0x13f0ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f0f0: 0xc056354  jal         func_158D50
    ctx->pc = 0x13F0F0u;
    SET_GPR_U32(ctx, 31, 0x13F0F8u);
    ctx->pc = 0x13F0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0F0u;
            // 0x13f0f4: 0x8c4456b4  lw          $a0, 0x56B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22196)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158D50u;
    if (runtime->hasFunction(0x158D50u)) {
        auto targetFn = runtime->lookupFunction(0x158D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F0F8u; }
        if (ctx->pc != 0x13F0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158D50_0x158d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F0F8u; }
        if (ctx->pc != 0x13F0F8u) { return; }
    }
    ctx->pc = 0x13F0F8u;
label_13f0f8:
    // 0x13f0f8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f0fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f100: 0xac6056b0  sw          $zero, 0x56B0($v1)
    ctx->pc = 0x13f100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22192), GPR_U32(ctx, 0));
    // 0x13f104: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x13f104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13f108: 0xac4056b4  sw          $zero, 0x56B4($v0)
    ctx->pc = 0x13f108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22196), GPR_U32(ctx, 0));
    // 0x13f10c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f110: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f114: 0xac6056c0  sw          $zero, 0x56C0($v1)
    ctx->pc = 0x13f114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22208), GPR_U32(ctx, 0));
    // 0x13f118: 0xac4056b8  sw          $zero, 0x56B8($v0)
    ctx->pc = 0x13f118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22200), GPR_U32(ctx, 0));
    // 0x13f11c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f120: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f124: 0xac6056c4  sw          $zero, 0x56C4($v1)
    ctx->pc = 0x13f124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22212), GPR_U32(ctx, 0));
    // 0x13f128: 0xac4056bc  sw          $zero, 0x56BC($v0)
    ctx->pc = 0x13f128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22204), GPR_U32(ctx, 0));
    // 0x13f12c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f130: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f134: 0xac6056c8  sw          $zero, 0x56C8($v1)
    ctx->pc = 0x13f134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22216), GPR_U32(ctx, 0));
    // 0x13f138: 0xac4056cc  sw          $zero, 0x56CC($v0)
    ctx->pc = 0x13f138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22220), GPR_U32(ctx, 0));
    // 0x13f13c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f140: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f144: 0xac6056d0  sw          $zero, 0x56D0($v1)
    ctx->pc = 0x13f144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22224), GPR_U32(ctx, 0));
    // 0x13f148: 0xc043390  jal         func_10CE40
    ctx->pc = 0x13F148u;
    SET_GPR_U32(ctx, 31, 0x13F150u);
    ctx->pc = 0x13F14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F148u;
            // 0x13f14c: 0xa04056d4  sb          $zero, 0x56D4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 22228), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CE40u;
    if (runtime->hasFunction(0x10CE40u)) {
        auto targetFn = runtime->lookupFunction(0x10CE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F150u; }
        if (ctx->pc != 0x13F150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CE40_0x10ce40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F150u; }
        if (ctx->pc != 0x13F150u) { return; }
    }
    ctx->pc = 0x13F150u;
label_13f150:
    // 0x13f150: 0x8f85802c  lw          $a1, -0x7FD4($gp)
    ctx->pc = 0x13f150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934572)));
    // 0x13f154: 0xc043018  jal         func_10C060
    ctx->pc = 0x13F154u;
    SET_GPR_U32(ctx, 31, 0x13F15Cu);
    ctx->pc = 0x13F158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F154u;
            // 0x13f158: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C060u;
    if (runtime->hasFunction(0x10C060u)) {
        auto targetFn = runtime->lookupFunction(0x10C060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F15Cu; }
        if (ctx->pc != 0x13F15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C060_0x10c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F15Cu; }
        if (ctx->pc != 0x13F15Cu) { return; }
    }
    ctx->pc = 0x13F15Cu;
label_13f15c:
    // 0x13f15c: 0xc0433c4  jal         func_10CF10
    ctx->pc = 0x13F15Cu;
    SET_GPR_U32(ctx, 31, 0x13F164u);
    ctx->pc = 0x13F160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F15Cu;
            // 0x13f160: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CF10u;
    if (runtime->hasFunction(0x10CF10u)) {
        auto targetFn = runtime->lookupFunction(0x10CF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F164u; }
        if (ctx->pc != 0x13F164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CF10_0x10cf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F164u; }
        if (ctx->pc != 0x13F164u) { return; }
    }
    ctx->pc = 0x13F164u;
label_13f164:
    // 0x13f164: 0x8f858028  lw          $a1, -0x7FD8($gp)
    ctx->pc = 0x13f164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934568)));
    // 0x13f168: 0xc043024  jal         func_10C090
    ctx->pc = 0x13F168u;
    SET_GPR_U32(ctx, 31, 0x13F170u);
    ctx->pc = 0x13F16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F168u;
            // 0x13f16c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C090u;
    if (runtime->hasFunction(0x10C090u)) {
        auto targetFn = runtime->lookupFunction(0x10C090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F170u; }
        if (ctx->pc != 0x13F170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C090_0x10c090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F170u; }
        if (ctx->pc != 0x13F170u) { return; }
    }
    ctx->pc = 0x13F170u;
label_13f170:
    // 0x13f170: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13f170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13f174: 0xaf80819c  sw          $zero, -0x7E64($gp)
    ctx->pc = 0x13f174u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934940), GPR_U32(ctx, 0));
    // 0x13f178: 0xaf83802c  sw          $v1, -0x7FD4($gp)
    ctx->pc = 0x13f178u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934572), GPR_U32(ctx, 3));
    // 0x13f17c: 0xaf838028  sw          $v1, -0x7FD8($gp)
    ctx->pc = 0x13f17cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934568), GPR_U32(ctx, 3));
    // 0x13f180: 0xaf808198  sw          $zero, -0x7E68($gp)
    ctx->pc = 0x13f180u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934936), GPR_U32(ctx, 0));
    // 0x13f184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f188: 0x3e00008  jr          $ra
    ctx->pc = 0x13F188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F188u;
            // 0x13f18c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F190u;
}
