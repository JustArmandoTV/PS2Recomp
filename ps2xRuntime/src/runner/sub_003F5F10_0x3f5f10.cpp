#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F5F10
// Address: 0x3f5f10 - 0x3f62e0
void sub_003F5F10_0x3f5f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5F10_0x3f5f10");
#endif

    switch (ctx->pc) {
        case 0x3f5f80u: goto label_3f5f80;
        case 0x3f5f88u: goto label_3f5f88;
        case 0x3f5f94u: goto label_3f5f94;
        case 0x3f5fb8u: goto label_3f5fb8;
        case 0x3f5fc8u: goto label_3f5fc8;
        case 0x3f5fd4u: goto label_3f5fd4;
        case 0x3f5fdcu: goto label_3f5fdc;
        case 0x3f6034u: goto label_3f6034;
        case 0x3f6044u: goto label_3f6044;
        case 0x3f6050u: goto label_3f6050;
        case 0x3f6078u: goto label_3f6078;
        case 0x3f61a0u: goto label_3f61a0;
        case 0x3f61d8u: goto label_3f61d8;
        case 0x3f6220u: goto label_3f6220;
        case 0x3f6258u: goto label_3f6258;
        case 0x3f6274u: goto label_3f6274;
        case 0x3f62acu: goto label_3f62ac;
        default: break;
    }

    ctx->pc = 0x3f5f10u;

    // 0x3f5f10: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x3f5f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x3f5f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f5f18: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3f5f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x3f5f1c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3f5f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x3f5f20: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3f5f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x3f5f24: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3f5f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3f5f28: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3f5f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3f5f2c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3f5f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3f5f30: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3f5f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3f5f34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f5f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3f5f38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3f5f38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5f3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f5f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3f5f40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f5f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3f5f44: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3f5f44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3f5f48: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x3f5f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3f5f4c: 0x50830026  beql        $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3F5F4Cu;
    {
        const bool branch_taken_0x3f5f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f5f4c) {
            ctx->pc = 0x3F5F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5F4Cu;
            // 0x3f5f50: 0x8e760054  lw          $s6, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F5FE8u;
            goto label_3f5fe8;
        }
    }
    ctx->pc = 0x3F5F54u;
    // 0x3f5f54: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F5F54u;
    {
        const bool branch_taken_0x3f5f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5f54) {
            ctx->pc = 0x3F5F58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5F54u;
            // 0x3f5f58: 0x3c024395  lui         $v0, 0x4395 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17301 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F5F64u;
            goto label_3f5f64;
        }
    }
    ctx->pc = 0x3F5F5Cu;
    // 0x3f5f5c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x3F5F5Cu;
    {
        const bool branch_taken_0x3f5f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5F5Cu;
            // 0x3f5f60: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5f5c) {
            ctx->pc = 0x3F62B0u;
            goto label_3f62b0;
        }
    }
    ctx->pc = 0x3F5F64u;
label_3f5f64:
    // 0x3f5f64: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f5f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f5f68: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3f5f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3f5f6c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3f5f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x3f5f70: 0x24a5b2f0  addiu       $a1, $a1, -0x4D10
    ctx->pc = 0x3f5f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947568));
    // 0x3f5f74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f5f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3f5f78: 0xc0fd9ec  jal         func_3F67B0
    ctx->pc = 0x3F5F78u;
    SET_GPR_U32(ctx, 31, 0x3F5F80u);
    ctx->pc = 0x3F5F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5F78u;
            // 0x3f5f7c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F67B0u;
    if (runtime->hasFunction(0x3F67B0u)) {
        auto targetFn = runtime->lookupFunction(0x3F67B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5F80u; }
        if (ctx->pc != 0x3F5F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F67B0_0x3f67b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5F80u; }
        if (ctx->pc != 0x3F5F80u) { return; }
    }
    ctx->pc = 0x3F5F80u;
label_3f5f80:
    // 0x3f5f80: 0xc0d1c14  jal         func_347050
    ctx->pc = 0x3F5F80u;
    SET_GPR_U32(ctx, 31, 0x3F5F88u);
    ctx->pc = 0x3F5F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5F80u;
            // 0x3f5f84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5F88u; }
        if (ctx->pc != 0x3F5F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5F88u; }
        if (ctx->pc != 0x3F5F88u) { return; }
    }
    ctx->pc = 0x3F5F88u;
label_3f5f88:
    // 0x3f5f88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f5f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5f8c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3F5F8Cu;
    SET_GPR_U32(ctx, 31, 0x3F5F94u);
    ctx->pc = 0x3F5F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5F8Cu;
            // 0x3f5f90: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5F94u; }
        if (ctx->pc != 0x3F5F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5F94u; }
        if (ctx->pc != 0x3F5F94u) { return; }
    }
    ctx->pc = 0x3F5F94u;
label_3f5f94:
    // 0x3f5f94: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3f5f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x3f5f98: 0x3c024435  lui         $v0, 0x4435
    ctx->pc = 0x3f5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17461 << 16));
    // 0x3f5f9c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3f5f9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3f5fa0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3f5fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3f5fa4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3f5fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3f5fa8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3f5fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3f5fac: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x3f5facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3f5fb0: 0xc04ce50  jal         func_133940
    ctx->pc = 0x3F5FB0u;
    SET_GPR_U32(ctx, 31, 0x3F5FB8u);
    ctx->pc = 0x3F5FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5FB0u;
            // 0x3f5fb4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5FB8u; }
        if (ctx->pc != 0x3F5FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5FB8u; }
        if (ctx->pc != 0x3F5FB8u) { return; }
    }
    ctx->pc = 0x3F5FB8u;
label_3f5fb8:
    // 0x3f5fb8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f5fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f5fbc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3f5fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3f5fc0: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x3F5FC0u;
    SET_GPR_U32(ctx, 31, 0x3F5FC8u);
    ctx->pc = 0x3F5FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5FC0u;
            // 0x3f5fc4: 0x24a5b2f0  addiu       $a1, $a1, -0x4D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5FC8u; }
        if (ctx->pc != 0x3F5FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5FC8u; }
        if (ctx->pc != 0x3F5FC8u) { return; }
    }
    ctx->pc = 0x3F5FC8u;
label_3f5fc8:
    // 0x3f5fc8: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x3f5fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x3f5fcc: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x3F5FCCu;
    SET_GPR_U32(ctx, 31, 0x3F5FD4u);
    ctx->pc = 0x3F5FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5FCCu;
            // 0x3f5fd0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5FD4u; }
        if (ctx->pc != 0x3F5FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5FD4u; }
        if (ctx->pc != 0x3F5FD4u) { return; }
    }
    ctx->pc = 0x3F5FD4u;
label_3f5fd4:
    // 0x3f5fd4: 0xc0fd944  jal         func_3F6510
    ctx->pc = 0x3F5FD4u;
    SET_GPR_U32(ctx, 31, 0x3F5FDCu);
    ctx->pc = 0x3F5FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5FD4u;
            // 0x3f5fd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F6510u;
    if (runtime->hasFunction(0x3F6510u)) {
        auto targetFn = runtime->lookupFunction(0x3F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5FDCu; }
        if (ctx->pc != 0x3F5FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F6510_0x3f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5FDCu; }
        if (ctx->pc != 0x3F5FDCu) { return; }
    }
    ctx->pc = 0x3F5FDCu;
label_3f5fdc:
    // 0x3f5fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f5fe0: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x3f5fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
    // 0x3f5fe4: 0x8e760054  lw          $s6, 0x54($s3)
    ctx->pc = 0x3f5fe4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3f5fe8:
    // 0x3f5fe8: 0x52c000ae  beql        $s6, $zero, . + 4 + (0xAE << 2)
    ctx->pc = 0x3F5FE8u;
    {
        const bool branch_taken_0x3f5fe8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5fe8) {
            ctx->pc = 0x3F5FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5FE8u;
            // 0x3f5fec: 0x8e640230  lw          $a0, 0x230($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F62A4u;
            goto label_3f62a4;
        }
    }
    ctx->pc = 0x3F5FF0u;
    // 0x3f5ff0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3f5ff4: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x3f5ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
    // 0x3f5ff8: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x3f5ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3f5ffc: 0x3c1e0066  lui         $fp, 0x66
    ctx->pc = 0x3f5ffcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)102 << 16));
    // 0x3f6000: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x3f6000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3f6004: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x3f6004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3f6008: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f6008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f600c: 0x26710058  addiu       $s1, $s3, 0x58
    ctx->pc = 0x3f600cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x3f6010: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3f6010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3f6014: 0x8c77077c  lw          $s7, 0x77C($v1)
    ctx->pc = 0x3f6014u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
    // 0x3f6018: 0x2442b2c0  addiu       $v0, $v0, -0x4D40
    ctx->pc = 0x3f6018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x3f601c: 0x26100e84  addiu       $s0, $s0, 0xE84
    ctx->pc = 0x3f601cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3716));
    // 0x3f6020: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3f6020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3f6024: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3f6024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3f6028: 0xc454b2b4  lwc1        $f20, -0x4D4C($v0)
    ctx->pc = 0x3f6028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3f602c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3F602Cu;
    SET_GPR_U32(ctx, 31, 0x3F6034u);
    ctx->pc = 0x3F6030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F602Cu;
            // 0x3f6030: 0x27deb290  addiu       $fp, $fp, -0x4D70 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294947472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6034u; }
        if (ctx->pc != 0x3F6034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6034u; }
        if (ctx->pc != 0x3F6034u) { return; }
    }
    ctx->pc = 0x3F6034u;
label_3f6034:
    // 0x3f6034: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f6034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f6038: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x3f6038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3f603c: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x3F603Cu;
    SET_GPR_U32(ctx, 31, 0x3F6044u);
    ctx->pc = 0x3F6040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F603Cu;
            // 0x3f6040: 0x24a5b2f0  addiu       $a1, $a1, -0x4D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6044u; }
        if (ctx->pc != 0x3F6044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6044u; }
        if (ctx->pc != 0x3F6044u) { return; }
    }
    ctx->pc = 0x3F6044u;
label_3f6044:
    // 0x3f6044: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3f6044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3f6048: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x3F6048u;
    SET_GPR_U32(ctx, 31, 0x3F6050u);
    ctx->pc = 0x3F604Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6048u;
            // 0x3f604c: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6050u; }
        if (ctx->pc != 0x3F6050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6050u; }
        if (ctx->pc != 0x3F6050u) { return; }
    }
    ctx->pc = 0x3F6050u;
label_3f6050:
    // 0x3f6050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f6050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f6054: 0x243a004  sllv        $s4, $v1, $s2
    ctx->pc = 0x3f6054u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x3f6058: 0x2d41824  and         $v1, $s6, $s4
    ctx->pc = 0x3f6058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 20));
    // 0x3f605c: 0x1060008a  beqz        $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x3F605Cu;
    {
        const bool branch_taken_0x3f605c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f605c) {
            ctx->pc = 0x3F6288u;
            goto label_3f6288;
        }
    }
    ctx->pc = 0x3F6064u;
    // 0x3f6064: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3f6064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f6068: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3f6068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3f606c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x3f606cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3f6070: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3F6070u;
    SET_GPR_U32(ctx, 31, 0x3F6078u);
    ctx->pc = 0x3F6074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6070u;
            // 0x3f6074: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6078u; }
        if (ctx->pc != 0x3F6078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6078u; }
        if (ctx->pc != 0x3F6078u) { return; }
    }
    ctx->pc = 0x3F6078u;
label_3f6078:
    // 0x3f6078: 0xc7a20148  lwc1        $f2, 0x148($sp)
    ctx->pc = 0x3f6078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f607c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3f607cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f6080: 0x0  nop
    ctx->pc = 0x3f6080u;
    // NOP
    // 0x3f6084: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3f6084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f6088: 0x4501007f  bc1t        . + 4 + (0x7F << 2)
    ctx->pc = 0x3F6088u;
    {
        const bool branch_taken_0x3f6088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6088) {
            ctx->pc = 0x3F6288u;
            goto label_3f6288;
        }
    }
    ctx->pc = 0x3F6090u;
    // 0x3f6090: 0x3c034361  lui         $v1, 0x4361
    ctx->pc = 0x3f6090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17249 << 16));
    // 0x3f6094: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f6094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f6098: 0x0  nop
    ctx->pc = 0x3f6098u;
    // NOP
    // 0x3f609c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3f609cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f60a0: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x3F60A0u;
    {
        const bool branch_taken_0x3f60a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f60a0) {
            ctx->pc = 0x3F61E8u;
            goto label_3f61e8;
        }
    }
    ctx->pc = 0x3F60A8u;
    // 0x3f60a8: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x3f60a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x3f60ac: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3f60acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3f60b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f60b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f60b4: 0x0  nop
    ctx->pc = 0x3f60b4u;
    // NOP
    // 0x3f60b8: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x3f60b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
    // 0x3f60bc: 0x0  nop
    ctx->pc = 0x3f60bcu;
    // NOP
    // 0x3f60c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f60c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f60c4: 0x0  nop
    ctx->pc = 0x3f60c4u;
    // NOP
    // 0x3f60c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f60c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f60cc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3F60CCu;
    {
        const bool branch_taken_0x3f60cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f60cc) {
            ctx->pc = 0x3F60D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F60CCu;
            // 0x3f60d0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F60E4u;
            goto label_3f60e4;
        }
    }
    ctx->pc = 0x3F60D4u;
    // 0x3f60d4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f60d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3f60d8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3f60d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3f60dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F60DCu;
    {
        const bool branch_taken_0x3f60dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F60E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F60DCu;
            // 0x3f60e0: 0x3c0341c8  lui         $v1, 0x41C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f60dc) {
            ctx->pc = 0x3F60FCu;
            goto label_3f60fc;
        }
    }
    ctx->pc = 0x3F60E4u;
label_3f60e4:
    // 0x3f60e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3f60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3f60e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f60e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3f60ec: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3f60ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3f60f0: 0x0  nop
    ctx->pc = 0x3f60f0u;
    // NOP
    // 0x3f60f4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3f60f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3f60f8: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x3f60f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_3f60fc:
    // 0x3f60fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f60fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f6100: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F6100u;
    {
        const bool branch_taken_0x3f6100 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3F6104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6100u;
            // 0x3f6104: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6100) {
            ctx->pc = 0x3F6114u;
            goto label_3f6114;
        }
    }
    ctx->pc = 0x3F6108u;
    // 0x3f6108: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3f6108u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f610c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F610Cu;
    {
        const bool branch_taken_0x3f610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F610Cu;
            // 0x3f6110: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f610c) {
            ctx->pc = 0x3F6130u;
            goto label_3f6130;
        }
    }
    ctx->pc = 0x3F6114u;
label_3f6114:
    // 0x3f6114: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x3f6114u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x3f6118: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3f6118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3f611c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3f611cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3f6120: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f6120u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f6124: 0x0  nop
    ctx->pc = 0x3f6124u;
    // NOP
    // 0x3f6128: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f6128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3f612c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3f612cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3f6130:
    // 0x3f6130: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3f6130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f6134: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3f6134u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3f6138: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x3f6138u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3f613c: 0x3c0541c8  lui         $a1, 0x41C8
    ctx->pc = 0x3f613cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16840 << 16));
    // 0x3f6140: 0x4600085d  msub.s      $f1, $f1, $f0
    ctx->pc = 0x3f6140u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x3f6144: 0x64150001  daddiu      $s5, $zero, 0x1
    ctx->pc = 0x3f6144u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3f6148: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3f6148u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f614c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x3f614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3f6150: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x3f6150u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x3f6154: 0x3c61821  addu        $v1, $fp, $a2
    ctx->pc = 0x3f6154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x3f6158: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3f6158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f615c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3f615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f6160: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3f6160u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3f6164: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x3f6164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3f6168: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3f6168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3f616c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3f616cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f6170: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x3f6170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
    // 0x3f6174: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6174u;
    {
        const bool branch_taken_0x3f6174 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3F6178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6174u;
            // 0x3f6178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6174) {
            ctx->pc = 0x3F6190u;
            goto label_3f6190;
        }
    }
    ctx->pc = 0x3F617Cu;
    // 0x3f617c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3f617cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3f6180: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F6180u;
    {
        const bool branch_taken_0x3f6180 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6180) {
            ctx->pc = 0x3F6190u;
            goto label_3f6190;
        }
    }
    ctx->pc = 0x3F6188u;
    // 0x3f6188: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f6188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f618c: 0x0  nop
    ctx->pc = 0x3f618cu;
    // NOP
label_3f6190:
    // 0x3f6190: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F6190u;
    {
        const bool branch_taken_0x3f6190 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6190) {
            ctx->pc = 0x3F61B0u;
            goto label_3f61b0;
        }
    }
    ctx->pc = 0x3F6198u;
    // 0x3f6198: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x3F6198u;
    SET_GPR_U32(ctx, 31, 0x3F61A0u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F61A0u; }
        if (ctx->pc != 0x3F61A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F61A0u; }
        if (ctx->pc != 0x3F61A0u) { return; }
    }
    ctx->pc = 0x3F61A0u;
label_3f61a0:
    // 0x3f61a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F61A0u;
    {
        const bool branch_taken_0x3f61a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f61a0) {
            ctx->pc = 0x3F61B0u;
            goto label_3f61b0;
        }
    }
    ctx->pc = 0x3F61A8u;
    // 0x3f61a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3f61a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f61ac: 0x0  nop
    ctx->pc = 0x3f61acu;
    // NOP
label_3f61b0:
    // 0x3f61b0: 0x16a00007  bnez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F61B0u;
    {
        const bool branch_taken_0x3f61b0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f61b0) {
            ctx->pc = 0x3F61D0u;
            goto label_3f61d0;
        }
    }
    ctx->pc = 0x3F61B8u;
    // 0x3f61b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3f61b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f61bc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3f61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3f61c0: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x3f61c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
    // 0x3f61c4: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3F61C4u;
    {
        const bool branch_taken_0x3f61c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f61c4) {
            ctx->pc = 0x3F6288u;
            goto label_3f6288;
        }
    }
    ctx->pc = 0x3F61CCu;
    // 0x3f61cc: 0x0  nop
    ctx->pc = 0x3f61ccu;
    // NOP
label_3f61d0:
    // 0x3f61d0: 0xc10c9d8  jal         func_432760
    ctx->pc = 0x3F61D0u;
    SET_GPR_U32(ctx, 31, 0x3F61D8u);
    ctx->pc = 0x3F61D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F61D0u;
            // 0x3f61d4: 0x8e640230  lw          $a0, 0x230($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F61D8u; }
        if (ctx->pc != 0x3F61D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F61D8u; }
        if (ctx->pc != 0x3F61D8u) { return; }
    }
    ctx->pc = 0x3F61D8u;
label_3f61d8:
    // 0x3f61d8: 0x8e630234  lw          $v1, 0x234($s3)
    ctx->pc = 0x3f61d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x3f61dc: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x3f61dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x3f61e0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3F61E0u;
    {
        const bool branch_taken_0x3f61e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F61E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F61E0u;
            // 0x3f61e4: 0xae630234  sw          $v1, 0x234($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f61e0) {
            ctx->pc = 0x3F6288u;
            goto label_3f6288;
        }
    }
    ctx->pc = 0x3F61E8u;
label_3f61e8:
    // 0x3f61e8: 0x64150001  daddiu      $s5, $zero, 0x1
    ctx->pc = 0x3f61e8u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3f61ec: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x3f61ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3f61f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3f61f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f61f4: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x3f61f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
    // 0x3f61f8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F61F8u;
    {
        const bool branch_taken_0x3f61f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3F61FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F61F8u;
            // 0x3f61fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f61f8) {
            ctx->pc = 0x3F6210u;
            goto label_3f6210;
        }
    }
    ctx->pc = 0x3F6200u;
    // 0x3f6200: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3f6200u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3f6204: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F6204u;
    {
        const bool branch_taken_0x3f6204 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6204) {
            ctx->pc = 0x3F6210u;
            goto label_3f6210;
        }
    }
    ctx->pc = 0x3F620Cu;
    // 0x3f620c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f620cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f6210:
    // 0x3f6210: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F6210u;
    {
        const bool branch_taken_0x3f6210 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6210) {
            ctx->pc = 0x3F6230u;
            goto label_3f6230;
        }
    }
    ctx->pc = 0x3F6218u;
    // 0x3f6218: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x3F6218u;
    SET_GPR_U32(ctx, 31, 0x3F6220u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6220u; }
        if (ctx->pc != 0x3F6220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6220u; }
        if (ctx->pc != 0x3F6220u) { return; }
    }
    ctx->pc = 0x3F6220u;
label_3f6220:
    // 0x3f6220: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F6220u;
    {
        const bool branch_taken_0x3f6220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6220) {
            ctx->pc = 0x3F6230u;
            goto label_3f6230;
        }
    }
    ctx->pc = 0x3F6228u;
    // 0x3f6228: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3f6228u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f622c: 0x0  nop
    ctx->pc = 0x3f622cu;
    // NOP
label_3f6230:
    // 0x3f6230: 0x16a00007  bnez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F6230u;
    {
        const bool branch_taken_0x3f6230 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6230) {
            ctx->pc = 0x3F6250u;
            goto label_3f6250;
        }
    }
    ctx->pc = 0x3F6238u;
    // 0x3f6238: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3f6238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f623c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3f623cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3f6240: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x3f6240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
    // 0x3f6244: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F6244u;
    {
        const bool branch_taken_0x3f6244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f6244) {
            ctx->pc = 0x3F6288u;
            goto label_3f6288;
        }
    }
    ctx->pc = 0x3F624Cu;
    // 0x3f624c: 0x0  nop
    ctx->pc = 0x3f624cu;
    // NOP
label_3f6250:
    // 0x3f6250: 0xc10c9b4  jal         func_4326D0
    ctx->pc = 0x3F6250u;
    SET_GPR_U32(ctx, 31, 0x3F6258u);
    ctx->pc = 0x3F6254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6250u;
            // 0x3f6254: 0x8e640230  lw          $a0, 0x230($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6258u; }
        if (ctx->pc != 0x3F6258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6258u; }
        if (ctx->pc != 0x3F6258u) { return; }
    }
    ctx->pc = 0x3F6258u;
label_3f6258:
    // 0x3f6258: 0x8e630234  lw          $v1, 0x234($s3)
    ctx->pc = 0x3f6258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x3f625c: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x3f625cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x3f6260: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F6260u;
    {
        const bool branch_taken_0x3f6260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6260) {
            ctx->pc = 0x3F6288u;
            goto label_3f6288;
        }
    }
    ctx->pc = 0x3F6268u;
    // 0x3f6268: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3f6268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x3f626c: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x3F626Cu;
    SET_GPR_U32(ctx, 31, 0x3F6274u);
    ctx->pc = 0x3F6270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F626Cu;
            // 0x3f6270: 0x34440ea9  ori         $a0, $v0, 0xEA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3753);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6274u; }
        if (ctx->pc != 0x3F6274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6274u; }
        if (ctx->pc != 0x3F6274u) { return; }
    }
    ctx->pc = 0x3F6274u;
label_3f6274:
    // 0x3f6274: 0x8e630234  lw          $v1, 0x234($s3)
    ctx->pc = 0x3f6274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x3f6278: 0x2802027  not         $a0, $s4
    ctx->pc = 0x3f6278u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 20) | GPR_U64(ctx, 0)));
    // 0x3f627c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3f627cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3f6280: 0xae630234  sw          $v1, 0x234($s3)
    ctx->pc = 0x3f6280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 564), GPR_U32(ctx, 3));
    // 0x3f6284: 0x0  nop
    ctx->pc = 0x3f6284u;
    // NOP
label_3f6288:
    // 0x3f6288: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3f6288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3f628c: 0x257182b  sltu        $v1, $s2, $s7
    ctx->pc = 0x3f628cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x3f6290: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3f6290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3f6294: 0x1460ff6e  bnez        $v1, . + 4 + (-0x92 << 2)
    ctx->pc = 0x3F6294u;
    {
        const bool branch_taken_0x3f6294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6294u;
            // 0x3f6298: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6294) {
            ctx->pc = 0x3F6050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f6050;
        }
    }
    ctx->pc = 0x3F629Cu;
    // 0x3f629c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F629Cu;
    {
        const bool branch_taken_0x3f629c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f629c) {
            ctx->pc = 0x3F62ACu;
            goto label_3f62ac;
        }
    }
    ctx->pc = 0x3F62A4u;
label_3f62a4:
    // 0x3f62a4: 0xc10c9b4  jal         func_4326D0
    ctx->pc = 0x3F62A4u;
    SET_GPR_U32(ctx, 31, 0x3F62ACu);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F62ACu; }
        if (ctx->pc != 0x3F62ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F62ACu; }
        if (ctx->pc != 0x3F62ACu) { return; }
    }
    ctx->pc = 0x3F62ACu;
label_3f62ac:
    // 0x3f62ac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3f62acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3f62b0:
    // 0x3f62b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3f62b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3f62b4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3f62b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3f62b8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3f62b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f62bc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3f62bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f62c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3f62c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f62c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3f62c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f62c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3f62c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f62cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f62ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f62d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f62d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f62d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f62d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f62d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F62D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F62DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F62D8u;
            // 0x3f62dc: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F62E0u;
}
