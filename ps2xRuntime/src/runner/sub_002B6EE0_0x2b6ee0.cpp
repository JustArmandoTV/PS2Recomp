#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6EE0
// Address: 0x2b6ee0 - 0x2b7000
void sub_002B6EE0_0x2b6ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6EE0_0x2b6ee0");
#endif

    switch (ctx->pc) {
        case 0x2b6f28u: goto label_2b6f28;
        case 0x2b6f3cu: goto label_2b6f3c;
        case 0x2b6f50u: goto label_2b6f50;
        case 0x2b6f64u: goto label_2b6f64;
        case 0x2b6f78u: goto label_2b6f78;
        case 0x2b6f80u: goto label_2b6f80;
        case 0x2b6f88u: goto label_2b6f88;
        case 0x2b6fb8u: goto label_2b6fb8;
        case 0x2b6fccu: goto label_2b6fcc;
        case 0x2b6fe4u: goto label_2b6fe4;
        default: break;
    }

    ctx->pc = 0x2b6ee0u;

    // 0x2b6ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6ee4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b6ee8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6eec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b6eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6ef4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b6ef4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b6ef8: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x2b6ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x2b6efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f00: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x2b6f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x2b6f04: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2b6f04u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2b6f08: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x2b6f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x2b6f0c: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x2b6f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x2b6f10: 0xa48000c0  sh          $zero, 0xC0($a0)
    ctx->pc = 0x2b6f10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b6f14: 0xa48000c2  sh          $zero, 0xC2($a0)
    ctx->pc = 0x2b6f14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 194), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b6f18: 0xa48200c4  sh          $v0, 0xC4($a0)
    ctx->pc = 0x2b6f18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6f1c: 0xa48000c6  sh          $zero, 0xC6($a0)
    ctx->pc = 0x2b6f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 198), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b6f20: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B6F20u;
    SET_GPR_U32(ctx, 31, 0x2B6F28u);
    ctx->pc = 0x2B6F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F20u;
            // 0x2b6f24: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F28u; }
        if (ctx->pc != 0x2B6F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F28u; }
        if (ctx->pc != 0x2B6F28u) { return; }
    }
    ctx->pc = 0x2B6F28u;
label_2b6f28:
    // 0x2b6f28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b6f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6f2c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2b6f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2b6f30: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b6f30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b6f34: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B6F34u;
    SET_GPR_U32(ctx, 31, 0x2B6F3Cu);
    ctx->pc = 0x2B6F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F34u;
            // 0x2b6f38: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F3Cu; }
        if (ctx->pc != 0x2B6F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F3Cu; }
        if (ctx->pc != 0x2B6F3Cu) { return; }
    }
    ctx->pc = 0x2B6F3Cu;
label_2b6f3c:
    // 0x2b6f3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b6f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6f40: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2b6f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2b6f44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b6f44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b6f48: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B6F48u;
    SET_GPR_U32(ctx, 31, 0x2B6F50u);
    ctx->pc = 0x2B6F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F48u;
            // 0x2b6f4c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F50u; }
        if (ctx->pc != 0x2B6F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F50u; }
        if (ctx->pc != 0x2B6F50u) { return; }
    }
    ctx->pc = 0x2B6F50u;
label_2b6f50:
    // 0x2b6f50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b6f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6f54: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x2b6f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2b6f58: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b6f58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b6f5c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B6F5Cu;
    SET_GPR_U32(ctx, 31, 0x2B6F64u);
    ctx->pc = 0x2B6F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F5Cu;
            // 0x2b6f60: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F64u; }
        if (ctx->pc != 0x2B6F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F64u; }
        if (ctx->pc != 0x2B6F64u) { return; }
    }
    ctx->pc = 0x2B6F64u;
label_2b6f64:
    // 0x2b6f64: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x2b6f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x2b6f68: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x2b6f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2b6f6c: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x2b6f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x2b6f70: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B6F70u;
    SET_GPR_U32(ctx, 31, 0x2B6F78u);
    ctx->pc = 0x2B6F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F70u;
            // 0x2b6f74: 0xa2000108  sb          $zero, 0x108($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F78u; }
        if (ctx->pc != 0x2B6F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F78u; }
        if (ctx->pc != 0x2B6F78u) { return; }
    }
    ctx->pc = 0x2B6F78u;
label_2b6f78:
    // 0x2b6f78: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B6F78u;
    SET_GPR_U32(ctx, 31, 0x2B6F80u);
    ctx->pc = 0x2B6F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F78u;
            // 0x2b6f7c: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F80u; }
        if (ctx->pc != 0x2B6F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F80u; }
        if (ctx->pc != 0x2B6F80u) { return; }
    }
    ctx->pc = 0x2B6F80u;
label_2b6f80:
    // 0x2b6f80: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B6F80u;
    SET_GPR_U32(ctx, 31, 0x2B6F88u);
    ctx->pc = 0x2B6F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F80u;
            // 0x2b6f84: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F88u; }
        if (ctx->pc != 0x2B6F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F88u; }
        if (ctx->pc != 0x2B6F88u) { return; }
    }
    ctx->pc = 0x2B6F88u;
label_2b6f88:
    // 0x2b6f88: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2b6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2b6f8c: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x2b6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x2b6f90: 0xc4401360  lwc1        $f0, 0x1360($v0)
    ctx->pc = 0x2b6f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6f94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b6f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b6f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f9c: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x2b6f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x2b6fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6fa4: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x2b6fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x2b6fa8: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x2b6fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x2b6fac: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x2b6facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x2b6fb0: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B6FB0u;
    SET_GPR_U32(ctx, 31, 0x2B6FB8u);
    ctx->pc = 0x2B6FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6FB0u;
            // 0x2b6fb4: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6FB8u; }
        if (ctx->pc != 0x2B6FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6FB8u; }
        if (ctx->pc != 0x2B6FB8u) { return; }
    }
    ctx->pc = 0x2B6FB8u;
label_2b6fb8:
    // 0x2b6fb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b6fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6fbc: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2b6fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2b6fc0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b6fc0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b6fc4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B6FC4u;
    SET_GPR_U32(ctx, 31, 0x2B6FCCu);
    ctx->pc = 0x2B6FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6FC4u;
            // 0x2b6fc8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6FCCu; }
        if (ctx->pc != 0x2B6FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6FCCu; }
        if (ctx->pc != 0x2B6FCCu) { return; }
    }
    ctx->pc = 0x2B6FCCu;
label_2b6fcc:
    // 0x2b6fcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b6fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6fd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b6fd4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b6fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b6fd8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2b6fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2b6fdc: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B6FDCu;
    SET_GPR_U32(ctx, 31, 0x2B6FE4u);
    ctx->pc = 0x2B6FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6FDCu;
            // 0x2b6fe0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6FE4u; }
        if (ctx->pc != 0x2B6FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6FE4u; }
        if (ctx->pc != 0x2B6FE4u) { return; }
    }
    ctx->pc = 0x2B6FE4u;
label_2b6fe4:
    // 0x2b6fe4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b6fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6fe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6FF0u;
            // 0x2b6ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6FF8u;
    // 0x2b6ff8: 0x0  nop
    ctx->pc = 0x2b6ff8u;
    // NOP
    // 0x2b6ffc: 0x0  nop
    ctx->pc = 0x2b6ffcu;
    // NOP
}
