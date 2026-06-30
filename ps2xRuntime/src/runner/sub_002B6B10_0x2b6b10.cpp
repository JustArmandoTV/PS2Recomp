#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6B10
// Address: 0x2b6b10 - 0x2b6bf0
void sub_002B6B10_0x2b6b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6B10_0x2b6b10");
#endif

    switch (ctx->pc) {
        case 0x2b6b34u: goto label_2b6b34;
        case 0x2b6b44u: goto label_2b6b44;
        case 0x2b6b54u: goto label_2b6b54;
        case 0x2b6b64u: goto label_2b6b64;
        case 0x2b6b74u: goto label_2b6b74;
        case 0x2b6b84u: goto label_2b6b84;
        case 0x2b6b94u: goto label_2b6b94;
        case 0x2b6ba4u: goto label_2b6ba4;
        case 0x2b6bbcu: goto label_2b6bbc;
        case 0x2b6bccu: goto label_2b6bcc;
        case 0x2b6bdcu: goto label_2b6bdc;
        default: break;
    }

    ctx->pc = 0x2b6b10u;

    // 0x2b6b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6b14: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b6b18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6b20: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x2b6b20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x2b6b24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6b28: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x2b6b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x2b6b2c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B6B2Cu;
    SET_GPR_U32(ctx, 31, 0x2B6B34u);
    ctx->pc = 0x2B6B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6B2Cu;
            // 0x2b6b30: 0xac820100  sw          $v0, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B34u; }
        if (ctx->pc != 0x2B6B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B34u; }
        if (ctx->pc != 0x2B6B34u) { return; }
    }
    ctx->pc = 0x2B6B34u;
label_2b6b34:
    // 0x2b6b34: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6b38: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x2b6b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2b6b3c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B6B3Cu;
    SET_GPR_U32(ctx, 31, 0x2B6B44u);
    ctx->pc = 0x2B6B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6B3Cu;
            // 0x2b6b40: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B44u; }
        if (ctx->pc != 0x2B6B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B44u; }
        if (ctx->pc != 0x2B6B44u) { return; }
    }
    ctx->pc = 0x2B6B44u;
label_2b6b44:
    // 0x2b6b44: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6b48: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2b6b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2b6b4c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B6B4Cu;
    SET_GPR_U32(ctx, 31, 0x2B6B54u);
    ctx->pc = 0x2B6B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6B4Cu;
            // 0x2b6b50: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B54u; }
        if (ctx->pc != 0x2B6B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B54u; }
        if (ctx->pc != 0x2B6B54u) { return; }
    }
    ctx->pc = 0x2B6B54u;
label_2b6b54:
    // 0x2b6b54: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6b58: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2b6b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2b6b5c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B6B5Cu;
    SET_GPR_U32(ctx, 31, 0x2B6B64u);
    ctx->pc = 0x2B6B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6B5Cu;
            // 0x2b6b60: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B64u; }
        if (ctx->pc != 0x2B6B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B64u; }
        if (ctx->pc != 0x2B6B64u) { return; }
    }
    ctx->pc = 0x2B6B64u;
label_2b6b64:
    // 0x2b6b64: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6b68: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x2b6b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2b6b6c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B6B6Cu;
    SET_GPR_U32(ctx, 31, 0x2B6B74u);
    ctx->pc = 0x2B6B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6B6Cu;
            // 0x2b6b70: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B74u; }
        if (ctx->pc != 0x2B6B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B74u; }
        if (ctx->pc != 0x2B6B74u) { return; }
    }
    ctx->pc = 0x2B6B74u;
label_2b6b74:
    // 0x2b6b74: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6b78: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x2b6b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2b6b7c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B6B7Cu;
    SET_GPR_U32(ctx, 31, 0x2B6B84u);
    ctx->pc = 0x2B6B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6B7Cu;
            // 0x2b6b80: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B84u; }
        if (ctx->pc != 0x2B6B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B84u; }
        if (ctx->pc != 0x2B6B84u) { return; }
    }
    ctx->pc = 0x2B6B84u;
label_2b6b84:
    // 0x2b6b84: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6b88: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x2b6b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x2b6b8c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B6B8Cu;
    SET_GPR_U32(ctx, 31, 0x2B6B94u);
    ctx->pc = 0x2B6B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6B8Cu;
            // 0x2b6b90: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B94u; }
        if (ctx->pc != 0x2B6B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B94u; }
        if (ctx->pc != 0x2B6B94u) { return; }
    }
    ctx->pc = 0x2B6B94u;
label_2b6b94:
    // 0x2b6b94: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6b98: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x2b6b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2b6b9c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B6B9Cu;
    SET_GPR_U32(ctx, 31, 0x2B6BA4u);
    ctx->pc = 0x2B6BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6B9Cu;
            // 0x2b6ba0: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6BA4u; }
        if (ctx->pc != 0x2B6BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6BA4u; }
        if (ctx->pc != 0x2B6BA4u) { return; }
    }
    ctx->pc = 0x2B6BA4u;
label_2b6ba4:
    // 0x2b6ba4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x2b6ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x2b6ba8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2b6ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2b6bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b6bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6bb0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2b6bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b6bb4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B6BB4u;
    SET_GPR_U32(ctx, 31, 0x2B6BBCu);
    ctx->pc = 0x2B6BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6BB4u;
            // 0x2b6bb8: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6BBCu; }
        if (ctx->pc != 0x2B6BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6BBCu; }
        if (ctx->pc != 0x2B6BBCu) { return; }
    }
    ctx->pc = 0x2B6BBCu;
label_2b6bbc:
    // 0x2b6bbc: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x2b6bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x2b6bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b6bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6bc4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B6BC4u;
    SET_GPR_U32(ctx, 31, 0x2B6BCCu);
    ctx->pc = 0x2B6BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6BC4u;
            // 0x2b6bc8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6BCCu; }
        if (ctx->pc != 0x2B6BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6BCCu; }
        if (ctx->pc != 0x2B6BCCu) { return; }
    }
    ctx->pc = 0x2B6BCCu;
label_2b6bcc:
    // 0x2b6bcc: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6bd0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2b6bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2b6bd4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B6BD4u;
    SET_GPR_U32(ctx, 31, 0x2B6BDCu);
    ctx->pc = 0x2B6BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6BD4u;
            // 0x2b6bd8: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6BDCu; }
        if (ctx->pc != 0x2B6BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6BDCu; }
        if (ctx->pc != 0x2B6BDCu) { return; }
    }
    ctx->pc = 0x2B6BDCu;
label_2b6bdc:
    // 0x2b6bdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b6bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6be0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6be8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6BE8u;
            // 0x2b6bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6BF0u;
}
