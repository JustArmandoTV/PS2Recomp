#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481C60
// Address: 0x481c60 - 0x481e40
void sub_00481C60_0x481c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481C60_0x481c60");
#endif

    switch (ctx->pc) {
        case 0x481c84u: goto label_481c84;
        case 0x481c8cu: goto label_481c8c;
        case 0x481c9cu: goto label_481c9c;
        case 0x481cacu: goto label_481cac;
        case 0x481cbcu: goto label_481cbc;
        case 0x481cccu: goto label_481ccc;
        case 0x481cdcu: goto label_481cdc;
        case 0x481cecu: goto label_481cec;
        case 0x481cfcu: goto label_481cfc;
        case 0x481d0cu: goto label_481d0c;
        case 0x481d1cu: goto label_481d1c;
        case 0x481d2cu: goto label_481d2c;
        case 0x481d3cu: goto label_481d3c;
        case 0x481d50u: goto label_481d50;
        case 0x481d60u: goto label_481d60;
        case 0x481e24u: goto label_481e24;
        default: break;
    }

    ctx->pc = 0x481c60u;

    // 0x481c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481c68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x481c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x481c6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x481c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x481c70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x481c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x481c74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x481c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481c78: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x481c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x481c7c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x481C7Cu;
    SET_GPR_U32(ctx, 31, 0x481C84u);
    ctx->pc = 0x481C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481C7Cu;
            // 0x481c80: 0x2406069c  addiu       $a2, $zero, 0x69C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1692));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481C84u; }
        if (ctx->pc != 0x481C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481C84u; }
        if (ctx->pc != 0x481C84u) { return; }
    }
    ctx->pc = 0x481C84u;
label_481c84:
    // 0x481c84: 0xc12064c  jal         func_481930
    ctx->pc = 0x481C84u;
    SET_GPR_U32(ctx, 31, 0x481C8Cu);
    ctx->pc = 0x481C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481C84u;
            // 0x481c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481930u;
    if (runtime->hasFunction(0x481930u)) {
        auto targetFn = runtime->lookupFunction(0x481930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481C8Cu; }
        if (ctx->pc != 0x481C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481930_0x481930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481C8Cu; }
        if (ctx->pc != 0x481C8Cu) { return; }
    }
    ctx->pc = 0x481C8Cu;
label_481c8c:
    // 0x481c8c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x481c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x481c90: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x481c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x481c94: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x481C94u;
    SET_GPR_U32(ctx, 31, 0x481C9Cu);
    ctx->pc = 0x481C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481C94u;
            // 0x481c98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481C9Cu; }
        if (ctx->pc != 0x481C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481C9Cu; }
        if (ctx->pc != 0x481C9Cu) { return; }
    }
    ctx->pc = 0x481C9Cu;
label_481c9c:
    // 0x481c9c: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x481c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x481ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481ca4: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x481CA4u;
    SET_GPR_U32(ctx, 31, 0x481CACu);
    ctx->pc = 0x481CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481CA4u;
            // 0x481ca8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481CACu; }
        if (ctx->pc != 0x481CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481CACu; }
        if (ctx->pc != 0x481CACu) { return; }
    }
    ctx->pc = 0x481CACu;
label_481cac:
    // 0x481cac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x481cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x481cb0: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x481cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x481cb4: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x481CB4u;
    SET_GPR_U32(ctx, 31, 0x481CBCu);
    ctx->pc = 0x481CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481CB4u;
            // 0x481cb8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481CBCu; }
        if (ctx->pc != 0x481CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481CBCu; }
        if (ctx->pc != 0x481CBCu) { return; }
    }
    ctx->pc = 0x481CBCu;
label_481cbc:
    // 0x481cbc: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x481cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x481cc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x481cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x481cc4: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x481CC4u;
    SET_GPR_U32(ctx, 31, 0x481CCCu);
    ctx->pc = 0x481CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481CC4u;
            // 0x481cc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481CCCu; }
        if (ctx->pc != 0x481CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481CCCu; }
        if (ctx->pc != 0x481CCCu) { return; }
    }
    ctx->pc = 0x481CCCu;
label_481ccc:
    // 0x481ccc: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x481cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x481cd0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x481cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x481cd4: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x481CD4u;
    SET_GPR_U32(ctx, 31, 0x481CDCu);
    ctx->pc = 0x481CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481CD4u;
            // 0x481cd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481CDCu; }
        if (ctx->pc != 0x481CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481CDCu; }
        if (ctx->pc != 0x481CDCu) { return; }
    }
    ctx->pc = 0x481CDCu;
label_481cdc:
    // 0x481cdc: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x481cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x481ce0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x481ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x481ce4: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x481CE4u;
    SET_GPR_U32(ctx, 31, 0x481CECu);
    ctx->pc = 0x481CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481CE4u;
            // 0x481ce8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481CECu; }
        if (ctx->pc != 0x481CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481CECu; }
        if (ctx->pc != 0x481CECu) { return; }
    }
    ctx->pc = 0x481CECu;
label_481cec:
    // 0x481cec: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x481cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x481cf0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x481cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x481cf4: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x481CF4u;
    SET_GPR_U32(ctx, 31, 0x481CFCu);
    ctx->pc = 0x481CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481CF4u;
            // 0x481cf8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481CFCu; }
        if (ctx->pc != 0x481CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481CFCu; }
        if (ctx->pc != 0x481CFCu) { return; }
    }
    ctx->pc = 0x481CFCu;
label_481cfc:
    // 0x481cfc: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x481cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x481d00: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x481d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x481d04: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x481D04u;
    SET_GPR_U32(ctx, 31, 0x481D0Cu);
    ctx->pc = 0x481D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481D04u;
            // 0x481d08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481D0Cu; }
        if (ctx->pc != 0x481D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481D0Cu; }
        if (ctx->pc != 0x481D0Cu) { return; }
    }
    ctx->pc = 0x481D0Cu;
label_481d0c:
    // 0x481d0c: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x481d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x481d10: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x481d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x481d14: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x481D14u;
    SET_GPR_U32(ctx, 31, 0x481D1Cu);
    ctx->pc = 0x481D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481D14u;
            // 0x481d18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481D1Cu; }
        if (ctx->pc != 0x481D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481D1Cu; }
        if (ctx->pc != 0x481D1Cu) { return; }
    }
    ctx->pc = 0x481D1Cu;
label_481d1c:
    // 0x481d1c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x481d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x481d20: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x481d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x481d24: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x481D24u;
    SET_GPR_U32(ctx, 31, 0x481D2Cu);
    ctx->pc = 0x481D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481D24u;
            // 0x481d28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481D2Cu; }
        if (ctx->pc != 0x481D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481D2Cu; }
        if (ctx->pc != 0x481D2Cu) { return; }
    }
    ctx->pc = 0x481D2Cu;
label_481d2c:
    // 0x481d2c: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x481d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x481d30: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x481d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x481d34: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x481D34u;
    SET_GPR_U32(ctx, 31, 0x481D3Cu);
    ctx->pc = 0x481D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481D34u;
            // 0x481d38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481D3Cu; }
        if (ctx->pc != 0x481D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481D3Cu; }
        if (ctx->pc != 0x481D3Cu) { return; }
    }
    ctx->pc = 0x481D3Cu;
label_481d3c:
    // 0x481d3c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x481d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481d44: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x481d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x481d48: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x481D48u;
    SET_GPR_U32(ctx, 31, 0x481D50u);
    ctx->pc = 0x481D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481D48u;
            // 0x481d4c: 0x24440448  addiu       $a0, $v0, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481D50u; }
        if (ctx->pc != 0x481D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481D50u; }
        if (ctx->pc != 0x481D50u) { return; }
    }
    ctx->pc = 0x481D50u;
label_481d50:
    // 0x481d50: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x481d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x481d54: 0x8e260064  lw          $a2, 0x64($s1)
    ctx->pc = 0x481d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x481d58: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x481D58u;
    SET_GPR_U32(ctx, 31, 0x481D60u);
    ctx->pc = 0x481D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481D58u;
            // 0x481d5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481D60u; }
        if (ctx->pc != 0x481D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481D60u; }
        if (ctx->pc != 0x481D60u) { return; }
    }
    ctx->pc = 0x481D60u;
label_481d60:
    // 0x481d60: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x481d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481d64: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x481d64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x481d68: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x481d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x481d6c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x481d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x481d70: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x481d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x481d74: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x481d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x481d78: 0xa040042c  sb          $zero, 0x42C($v0)
    ctx->pc = 0x481d78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1068), (uint8_t)GPR_U32(ctx, 0));
    // 0x481d7c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481d80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x481d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x481d84: 0xa0c80430  sb          $t0, 0x430($a2)
    ctx->pc = 0x481d84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1072), (uint8_t)GPR_U32(ctx, 8));
    // 0x481d88: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481d8c: 0xa0c70431  sb          $a3, 0x431($a2)
    ctx->pc = 0x481d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1073), (uint8_t)GPR_U32(ctx, 7));
    // 0x481d90: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481d94: 0xa0c80432  sb          $t0, 0x432($a2)
    ctx->pc = 0x481d94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1074), (uint8_t)GPR_U32(ctx, 8));
    // 0x481d98: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481d9c: 0xa0c80433  sb          $t0, 0x433($a2)
    ctx->pc = 0x481d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1075), (uint8_t)GPR_U32(ctx, 8));
    // 0x481da0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481da4: 0xa0c80434  sb          $t0, 0x434($a2)
    ctx->pc = 0x481da4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1076), (uint8_t)GPR_U32(ctx, 8));
    // 0x481da8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481dac: 0xa0c80435  sb          $t0, 0x435($a2)
    ctx->pc = 0x481dacu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1077), (uint8_t)GPR_U32(ctx, 8));
    // 0x481db0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481db4: 0xa0c70436  sb          $a3, 0x436($a2)
    ctx->pc = 0x481db4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1078), (uint8_t)GPR_U32(ctx, 7));
    // 0x481db8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481dbc: 0xa0c80437  sb          $t0, 0x437($a2)
    ctx->pc = 0x481dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1079), (uint8_t)GPR_U32(ctx, 8));
    // 0x481dc0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481dc4: 0xa0c00438  sb          $zero, 0x438($a2)
    ctx->pc = 0x481dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1080), (uint8_t)GPR_U32(ctx, 0));
    // 0x481dc8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481dcc: 0xa0c00439  sb          $zero, 0x439($a2)
    ctx->pc = 0x481dccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1081), (uint8_t)GPR_U32(ctx, 0));
    // 0x481dd0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481dd4: 0xa0c0043a  sb          $zero, 0x43A($a2)
    ctx->pc = 0x481dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1082), (uint8_t)GPR_U32(ctx, 0));
    // 0x481dd8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481ddc: 0xa0c7043b  sb          $a3, 0x43B($a2)
    ctx->pc = 0x481ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1083), (uint8_t)GPR_U32(ctx, 7));
    // 0x481de0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481de4: 0xa0c0043c  sb          $zero, 0x43C($a2)
    ctx->pc = 0x481de4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1084), (uint8_t)GPR_U32(ctx, 0));
    // 0x481de8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481dec: 0xa0c8043d  sb          $t0, 0x43D($a2)
    ctx->pc = 0x481decu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1085), (uint8_t)GPR_U32(ctx, 8));
    // 0x481df0: 0x8ca58a08  lw          $a1, -0x75F8($a1)
    ctx->pc = 0x481df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937096)));
    // 0x481df4: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x481df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x481df8: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x481df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x481dfc: 0xa0c50428  sb          $a1, 0x428($a2)
    ctx->pc = 0x481dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1064), (uint8_t)GPR_U32(ctx, 5));
    // 0x481e00: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x481e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
    // 0x481e04: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x481e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x481e08: 0xa0c40429  sb          $a0, 0x429($a2)
    ctx->pc = 0x481e08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1065), (uint8_t)GPR_U32(ctx, 4));
    // 0x481e0c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x481e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x481e10: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x481e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x481e14: 0xa0c3042a  sb          $v1, 0x42A($a2)
    ctx->pc = 0x481e14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1066), (uint8_t)GPR_U32(ctx, 3));
    // 0x481e18: 0x8c44a140  lw          $a0, -0x5EC0($v0)
    ctx->pc = 0x481e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943040)));
    // 0x481e1c: 0xc073e80  jal         func_1CFA00
    ctx->pc = 0x481E1Cu;
    SET_GPR_U32(ctx, 31, 0x481E24u);
    ctx->pc = 0x481E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481E1Cu;
            // 0x481e20: 0x24d00428  addiu       $s0, $a2, 0x428 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA00u;
    if (runtime->hasFunction(0x1CFA00u)) {
        auto targetFn = runtime->lookupFunction(0x1CFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481E24u; }
        if (ctx->pc != 0x481E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFA00_0x1cfa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481E24u; }
        if (ctx->pc != 0x481E24u) { return; }
    }
    ctx->pc = 0x481E24u;
label_481e24:
    // 0x481e24: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x481e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x481e28: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x481e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x481e2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x481e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481e30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x481e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x481e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481e38: 0x3e00008  jr          $ra
    ctx->pc = 0x481E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x481E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481E38u;
            // 0x481e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481E40u;
}
