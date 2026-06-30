#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014ABD0
// Address: 0x14abd0 - 0x14ad30
void sub_0014ABD0_0x14abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ABD0_0x14abd0");
#endif

    switch (ctx->pc) {
        case 0x14ac08u: goto label_14ac08;
        case 0x14ac14u: goto label_14ac14;
        case 0x14ac24u: goto label_14ac24;
        case 0x14ac30u: goto label_14ac30;
        case 0x14ac5cu: goto label_14ac5c;
        case 0x14ac6cu: goto label_14ac6c;
        case 0x14ac74u: goto label_14ac74;
        case 0x14ac80u: goto label_14ac80;
        case 0x14ac8cu: goto label_14ac8c;
        case 0x14acb4u: goto label_14acb4;
        case 0x14acc0u: goto label_14acc0;
        case 0x14acd0u: goto label_14acd0;
        case 0x14acecu: goto label_14acec;
        case 0x14ad08u: goto label_14ad08;
        default: break;
    }

    ctx->pc = 0x14abd0u;

    // 0x14abd0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x14abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x14abd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14abd8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14abd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14abdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14abdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14abe0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14abe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abe4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14abe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14abe8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14abe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14abecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14abf0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14abf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abf4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x14abf4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x14abf8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x14abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x14abfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14abfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac00: 0xc04cce4  jal         func_133390
    ctx->pc = 0x14AC00u;
    SET_GPR_U32(ctx, 31, 0x14AC08u);
    ctx->pc = 0x14AC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC00u;
            // 0x14ac04: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC08u; }
        if (ctx->pc != 0x14AC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC08u; }
        if (ctx->pc != 0x14AC08u) { return; }
    }
    ctx->pc = 0x14AC08u;
label_14ac08:
    // 0x14ac08: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14ac08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14ac0c: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x14AC0Cu;
    SET_GPR_U32(ctx, 31, 0x14AC14u);
    ctx->pc = 0x14AC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC0Cu;
            // 0x14ac10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC14u; }
        if (ctx->pc != 0x14AC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC14u; }
        if (ctx->pc != 0x14AC14u) { return; }
    }
    ctx->pc = 0x14AC14u;
label_14ac14:
    // 0x14ac14: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x14ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x14ac18: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x14ac18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14ac1c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x14AC1Cu;
    SET_GPR_U32(ctx, 31, 0x14AC24u);
    ctx->pc = 0x14AC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC1Cu;
            // 0x14ac20: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC24u; }
        if (ctx->pc != 0x14AC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC24u; }
        if (ctx->pc != 0x14AC24u) { return; }
    }
    ctx->pc = 0x14AC24u;
label_14ac24:
    // 0x14ac24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ac24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac28: 0xc052c14  jal         func_14B050
    ctx->pc = 0x14AC28u;
    SET_GPR_U32(ctx, 31, 0x14AC30u);
    ctx->pc = 0x14AC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC28u;
            // 0x14ac2c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B050u;
    if (runtime->hasFunction(0x14B050u)) {
        auto targetFn = runtime->lookupFunction(0x14B050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC30u; }
        if (ctx->pc != 0x14AC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B050_0x14b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC30u; }
        if (ctx->pc != 0x14AC30u) { return; }
    }
    ctx->pc = 0x14AC30u;
label_14ac30:
    // 0x14ac30: 0xc6340000  lwc1        $f20, 0x0($s1)
    ctx->pc = 0x14ac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14ac34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14ac38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14ac38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14ac3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ac3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14ac40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac44: 0x46146b03  div.s       $f12, $f13, $f20
    ctx->pc = 0x14ac44u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[12] = ctx->f[13] / ctx->f[20];
    // 0x14ac48: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x14ac48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x14ac4c: 0x0  nop
    ctx->pc = 0x14ac4cu;
    // NOP
    // 0x14ac50: 0x0  nop
    ctx->pc = 0x14ac50u;
    // NOP
    // 0x14ac54: 0xc04ce50  jal         func_133940
    ctx->pc = 0x14AC54u;
    SET_GPR_U32(ctx, 31, 0x14AC5Cu);
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC5Cu; }
        if (ctx->pc != 0x14AC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC5Cu; }
        if (ctx->pc != 0x14AC5Cu) { return; }
    }
    ctx->pc = 0x14AC5Cu;
label_14ac5c:
    // 0x14ac5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14ac5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ac60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac64: 0xc04cd60  jal         func_133580
    ctx->pc = 0x14AC64u;
    SET_GPR_U32(ctx, 31, 0x14AC6Cu);
    ctx->pc = 0x14AC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC64u;
            // 0x14ac68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC6Cu; }
        if (ctx->pc != 0x14AC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC6Cu; }
        if (ctx->pc != 0x14AC6Cu) { return; }
    }
    ctx->pc = 0x14AC6Cu;
label_14ac6c:
    // 0x14ac6c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x14AC6Cu;
    SET_GPR_U32(ctx, 31, 0x14AC74u);
    ctx->pc = 0x14AC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC6Cu;
            // 0x14ac70: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC74u; }
        if (ctx->pc != 0x14AC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC74u; }
        if (ctx->pc != 0x14AC74u) { return; }
    }
    ctx->pc = 0x14AC74u;
label_14ac74:
    // 0x14ac74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14ac78: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x14AC78u;
    SET_GPR_U32(ctx, 31, 0x14AC80u);
    ctx->pc = 0x14AC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC78u;
            // 0x14ac7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC80u; }
        if (ctx->pc != 0x14AC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC80u; }
        if (ctx->pc != 0x14AC80u) { return; }
    }
    ctx->pc = 0x14AC80u;
label_14ac80:
    // 0x14ac80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac84: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x14AC84u;
    SET_GPR_U32(ctx, 31, 0x14AC8Cu);
    ctx->pc = 0x14AC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC84u;
            // 0x14ac88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC8Cu; }
        if (ctx->pc != 0x14AC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC8Cu; }
        if (ctx->pc != 0x14AC8Cu) { return; }
    }
    ctx->pc = 0x14AC8Cu;
label_14ac8c:
    // 0x14ac8c: 0x4614a802  mul.s       $f0, $f21, $f20
    ctx->pc = 0x14ac8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x14ac90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14ac94: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x14ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x14ac98: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x14ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x14ac9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ac9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aca0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14aca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aca4: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x14aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x14aca8: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x14aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x14acac: 0xc04cca0  jal         func_133280
    ctx->pc = 0x14ACACu;
    SET_GPR_U32(ctx, 31, 0x14ACB4u);
    ctx->pc = 0x14ACB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ACACu;
            // 0x14acb0: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACB4u; }
        if (ctx->pc != 0x14ACB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACB4u; }
        if (ctx->pc != 0x14ACB4u) { return; }
    }
    ctx->pc = 0x14ACB4u;
label_14acb4:
    // 0x14acb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14acb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acb8: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x14ACB8u;
    SET_GPR_U32(ctx, 31, 0x14ACC0u);
    ctx->pc = 0x14ACBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ACB8u;
            // 0x14acbc: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACC0u; }
        if (ctx->pc != 0x14ACC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACC0u; }
        if (ctx->pc != 0x14ACC0u) { return; }
    }
    ctx->pc = 0x14ACC0u;
label_14acc0:
    // 0x14acc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14acc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14acc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acc8: 0xc04cd60  jal         func_133580
    ctx->pc = 0x14ACC8u;
    SET_GPR_U32(ctx, 31, 0x14ACD0u);
    ctx->pc = 0x14ACCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ACC8u;
            // 0x14accc: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACD0u; }
        if (ctx->pc != 0x14ACD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACD0u; }
        if (ctx->pc != 0x14ACD0u) { return; }
    }
    ctx->pc = 0x14ACD0u;
label_14acd0:
    // 0x14acd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14acd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14acd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acd8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14acd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14acdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14acdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ace0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14ace0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x14ace4: 0xc04ce50  jal         func_133940
    ctx->pc = 0x14ACE4u;
    SET_GPR_U32(ctx, 31, 0x14ACECu);
    ctx->pc = 0x14ACE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ACE4u;
            // 0x14ace8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACECu; }
        if (ctx->pc != 0x14ACECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACECu; }
        if (ctx->pc != 0x14ACECu) { return; }
    }
    ctx->pc = 0x14ACECu;
label_14acec:
    // 0x14acec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14acecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14acf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14acf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acf4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14acf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14acf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14acf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acfc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14acfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x14ad00: 0xc04ce50  jal         func_133940
    ctx->pc = 0x14AD00u;
    SET_GPR_U32(ctx, 31, 0x14AD08u);
    ctx->pc = 0x14AD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD00u;
            // 0x14ad04: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD08u; }
        if (ctx->pc != 0x14AD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD08u; }
        if (ctx->pc != 0x14AD08u) { return; }
    }
    ctx->pc = 0x14AD08u;
label_14ad08:
    // 0x14ad08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14ad08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ad0c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14ad10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14ad10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ad14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14ad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14ad18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14ad18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ad1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ad1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ad20: 0x3e00008  jr          $ra
    ctx->pc = 0x14AD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD20u;
            // 0x14ad24: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14AD28u;
    // 0x14ad28: 0x0  nop
    ctx->pc = 0x14ad28u;
    // NOP
    // 0x14ad2c: 0x0  nop
    ctx->pc = 0x14ad2cu;
    // NOP
}
