#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EFB20
// Address: 0x2efb20 - 0x2efc20
void sub_002EFB20_0x2efb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFB20_0x2efb20");
#endif

    switch (ctx->pc) {
        case 0x2efb44u: goto label_2efb44;
        case 0x2efb54u: goto label_2efb54;
        case 0x2efb64u: goto label_2efb64;
        case 0x2efb74u: goto label_2efb74;
        case 0x2efb84u: goto label_2efb84;
        case 0x2efb94u: goto label_2efb94;
        case 0x2efba4u: goto label_2efba4;
        case 0x2efbb4u: goto label_2efbb4;
        case 0x2efbccu: goto label_2efbcc;
        case 0x2efbdcu: goto label_2efbdc;
        case 0x2efbecu: goto label_2efbec;
        case 0x2efc08u: goto label_2efc08;
        default: break;
    }

    ctx->pc = 0x2efb20u;

    // 0x2efb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2efb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2efb24: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2efb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2efb28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2efb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2efb2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2efb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2efb30: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x2efb30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x2efb34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2efb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb38: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x2efb38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x2efb3c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2EFB3Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB44u);
    ctx->pc = 0x2EFB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFB3Cu;
            // 0x2efb40: 0xac820100  sw          $v0, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFB44u; }
        if (ctx->pc != 0x2EFB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFB44u; }
        if (ctx->pc != 0x2EFB44u) { return; }
    }
    ctx->pc = 0x2EFB44u;
label_2efb44:
    // 0x2efb44: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2efb44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2efb48: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x2efb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2efb4c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2EFB4Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB54u);
    ctx->pc = 0x2EFB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFB4Cu;
            // 0x2efb50: 0x24a52020  addiu       $a1, $a1, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFB54u; }
        if (ctx->pc != 0x2EFB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFB54u; }
        if (ctx->pc != 0x2EFB54u) { return; }
    }
    ctx->pc = 0x2EFB54u;
label_2efb54:
    // 0x2efb54: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2efb54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2efb58: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2efb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2efb5c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2EFB5Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB64u);
    ctx->pc = 0x2EFB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFB5Cu;
            // 0x2efb60: 0x24a52020  addiu       $a1, $a1, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFB64u; }
        if (ctx->pc != 0x2EFB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFB64u; }
        if (ctx->pc != 0x2EFB64u) { return; }
    }
    ctx->pc = 0x2EFB64u;
label_2efb64:
    // 0x2efb64: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2efb64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2efb68: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2efb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2efb6c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2EFB6Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB74u);
    ctx->pc = 0x2EFB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFB6Cu;
            // 0x2efb70: 0x24a52020  addiu       $a1, $a1, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFB74u; }
        if (ctx->pc != 0x2EFB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFB74u; }
        if (ctx->pc != 0x2EFB74u) { return; }
    }
    ctx->pc = 0x2EFB74u;
label_2efb74:
    // 0x2efb74: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2efb74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2efb78: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x2efb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2efb7c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2EFB7Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB84u);
    ctx->pc = 0x2EFB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFB7Cu;
            // 0x2efb80: 0x24a52020  addiu       $a1, $a1, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFB84u; }
        if (ctx->pc != 0x2EFB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFB84u; }
        if (ctx->pc != 0x2EFB84u) { return; }
    }
    ctx->pc = 0x2EFB84u;
label_2efb84:
    // 0x2efb84: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2efb84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2efb88: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x2efb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2efb8c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2EFB8Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB94u);
    ctx->pc = 0x2EFB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFB8Cu;
            // 0x2efb90: 0x24a52020  addiu       $a1, $a1, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFB94u; }
        if (ctx->pc != 0x2EFB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFB94u; }
        if (ctx->pc != 0x2EFB94u) { return; }
    }
    ctx->pc = 0x2EFB94u;
label_2efb94:
    // 0x2efb94: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2efb94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2efb98: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x2efb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x2efb9c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2EFB9Cu;
    SET_GPR_U32(ctx, 31, 0x2EFBA4u);
    ctx->pc = 0x2EFBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFB9Cu;
            // 0x2efba0: 0x24a52020  addiu       $a1, $a1, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFBA4u; }
        if (ctx->pc != 0x2EFBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFBA4u; }
        if (ctx->pc != 0x2EFBA4u) { return; }
    }
    ctx->pc = 0x2EFBA4u;
label_2efba4:
    // 0x2efba4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2efba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2efba8: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x2efba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2efbac: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2EFBACu;
    SET_GPR_U32(ctx, 31, 0x2EFBB4u);
    ctx->pc = 0x2EFBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFBACu;
            // 0x2efbb0: 0x24a52020  addiu       $a1, $a1, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFBB4u; }
        if (ctx->pc != 0x2EFBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFBB4u; }
        if (ctx->pc != 0x2EFBB4u) { return; }
    }
    ctx->pc = 0x2EFBB4u;
label_2efbb4:
    // 0x2efbb4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x2efbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x2efbb8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2efbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2efbbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2efbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbc0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2efbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2efbc4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2EFBC4u;
    SET_GPR_U32(ctx, 31, 0x2EFBCCu);
    ctx->pc = 0x2EFBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFBC4u;
            // 0x2efbc8: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFBCCu; }
        if (ctx->pc != 0x2EFBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFBCCu; }
        if (ctx->pc != 0x2EFBCCu) { return; }
    }
    ctx->pc = 0x2EFBCCu;
label_2efbcc:
    // 0x2efbcc: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x2efbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x2efbd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2efbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbd4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2EFBD4u;
    SET_GPR_U32(ctx, 31, 0x2EFBDCu);
    ctx->pc = 0x2EFBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFBD4u;
            // 0x2efbd8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFBDCu; }
        if (ctx->pc != 0x2EFBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFBDCu; }
        if (ctx->pc != 0x2EFBDCu) { return; }
    }
    ctx->pc = 0x2EFBDCu;
label_2efbdc:
    // 0x2efbdc: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2efbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2efbe0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2efbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2efbe4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2EFBE4u;
    SET_GPR_U32(ctx, 31, 0x2EFBECu);
    ctx->pc = 0x2EFBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFBE4u;
            // 0x2efbe8: 0x24a52020  addiu       $a1, $a1, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFBECu; }
        if (ctx->pc != 0x2EFBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFBECu; }
        if (ctx->pc != 0x2EFBECu) { return; }
    }
    ctx->pc = 0x2EFBECu;
label_2efbec:
    // 0x2efbec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2efbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2efbf0: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x2efbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x2efbf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2efbf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2efbf8: 0x0  nop
    ctx->pc = 0x2efbf8u;
    // NOP
    // 0x2efbfc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2efbfcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2efc00: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2EFC00u;
    SET_GPR_U32(ctx, 31, 0x2EFC08u);
    ctx->pc = 0x2EFC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC00u;
            // 0x2efc04: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC08u; }
        if (ctx->pc != 0x2EFC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC08u; }
        if (ctx->pc != 0x2EFC08u) { return; }
    }
    ctx->pc = 0x2EFC08u;
label_2efc08:
    // 0x2efc08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2efc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efc0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2efc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efc10: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC10u;
            // 0x2efc14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EFC18u;
    // 0x2efc18: 0x0  nop
    ctx->pc = 0x2efc18u;
    // NOP
    // 0x2efc1c: 0x0  nop
    ctx->pc = 0x2efc1cu;
    // NOP
}
