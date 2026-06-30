#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00267B50
// Address: 0x267b50 - 0x267e90
void sub_00267B50_0x267b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267B50_0x267b50");
#endif

    switch (ctx->pc) {
        case 0x267ba0u: goto label_267ba0;
        case 0x267bb4u: goto label_267bb4;
        case 0x267bf8u: goto label_267bf8;
        case 0x267c8cu: goto label_267c8c;
        case 0x267c98u: goto label_267c98;
        case 0x267cb0u: goto label_267cb0;
        case 0x267d0cu: goto label_267d0c;
        case 0x267d24u: goto label_267d24;
        case 0x267d6cu: goto label_267d6c;
        case 0x267de8u: goto label_267de8;
        default: break;
    }

    ctx->pc = 0x267b50u;

    // 0x267b50: 0x27bdd080  addiu       $sp, $sp, -0x2F80
    ctx->pc = 0x267b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294955136));
    // 0x267b54: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x267b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x267b58: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x267b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x267b5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x267b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x267b60: 0x27be00d0  addiu       $fp, $sp, 0xD0
    ctx->pc = 0x267b60u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x267b64: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x267b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x267b68: 0x27b700bc  addiu       $s7, $sp, 0xBC
    ctx->pc = 0x267b68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x267b6c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x267b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x267b70: 0x27b600b8  addiu       $s6, $sp, 0xB8
    ctx->pc = 0x267b70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x267b74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x267b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x267b78: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x267b78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x267b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x267b80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x267b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267b84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x267b88: 0x27b21030  addiu       $s2, $sp, 0x1030
    ctx->pc = 0x267b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4144));
    // 0x267b8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267b90: 0x27b100c8  addiu       $s1, $sp, 0xC8
    ctx->pc = 0x267b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x267b94: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x267b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
    // 0x267b98: 0x27b000b4  addiu       $s0, $sp, 0xB4
    ctx->pc = 0x267b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x267b9c: 0x0  nop
    ctx->pc = 0x267b9cu;
    // NOP
label_267ba0:
    // 0x267ba0: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x267ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x267ba4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x267ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ba8: 0x27a62f7c  addiu       $a2, $sp, 0x2F7C
    ctx->pc = 0x267ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12156));
    // 0x267bac: 0xc099d18  jal         func_267460
    ctx->pc = 0x267BACu;
    SET_GPR_U32(ctx, 31, 0x267BB4u);
    ctx->pc = 0x267BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267BACu;
            // 0x267bb0: 0xafa02f7c  sw          $zero, 0x2F7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267460u;
    if (runtime->hasFunction(0x267460u)) {
        auto targetFn = runtime->lookupFunction(0x267460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267BB4u; }
        if (ctx->pc != 0x267BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267460_0x267460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267BB4u; }
        if (ctx->pc != 0x267BB4u) { return; }
    }
    ctx->pc = 0x267BB4u;
label_267bb4:
    // 0x267bb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x267bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267bb8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x267BB8u;
    {
        const bool branch_taken_0x267bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x267bb8) {
            ctx->pc = 0x267BD8u;
            goto label_267bd8;
        }
    }
    ctx->pc = 0x267BC0u;
    // 0x267bc0: 0x8fa22f7c  lw          $v0, 0x2F7C($sp)
    ctx->pc = 0x267bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12156)));
    // 0x267bc4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x267bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267bc8: 0x1043006b  beq         $v0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x267BC8u;
    {
        const bool branch_taken_0x267bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x267bc8) {
            ctx->pc = 0x267D78u;
            goto label_267d78;
        }
    }
    ctx->pc = 0x267BD0u;
    // 0x267bd0: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x267BD0u;
    {
        const bool branch_taken_0x267bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267bd0) {
            ctx->pc = 0x267E58u;
            goto label_267e58;
        }
    }
    ctx->pc = 0x267BD8u;
label_267bd8:
    // 0x267bd8: 0x8ea80068  lw          $t0, 0x68($s5)
    ctx->pc = 0x267bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x267bdc: 0x8ea90064  lw          $t1, 0x64($s5)
    ctx->pc = 0x267bdcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x267be0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x267be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x267be4: 0x8eaa0060  lw          $t2, 0x60($s5)
    ctx->pc = 0x267be4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x267be8: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x267be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x267bec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267bf0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x267bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x267bf4: 0x0  nop
    ctx->pc = 0x267bf4u;
    // NOP
label_267bf8:
    // 0x267bf8: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x267bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267bfc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x267bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c00: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x267c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c04: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x267c04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x267c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x267c0c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x267c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x267c10: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x267c10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x267c14: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x267c14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x267c18: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x267c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x267c1c: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x267c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x267c20: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x267c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c24: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x267c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x267c28: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x267c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c2c: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x267c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x267c30: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x267c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c34: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x267c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x267c38: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x267c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c3c: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x267c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x267c40: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x267c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c44: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x267c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x267c48: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x267c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c4c: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x267c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x267c50: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x267c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c54: 0xe4e0002c  swc1        $f0, 0x2C($a3)
    ctx->pc = 0x267c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x267c58: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x267c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c5c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x267c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x267c60: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x267c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c64: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x267c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x267c68: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x267c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c6c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x267c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x267c70: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x267c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c74: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x267c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x267c78: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x267c78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x267c7c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x267C7Cu;
    {
        const bool branch_taken_0x267c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267C7Cu;
            // 0x267c80: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c7c) {
            ctx->pc = 0x267BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_267bf8;
        }
    }
    ctx->pc = 0x267C84u;
    // 0x267c84: 0xc09a66c  jal         func_2699B0
    ctx->pc = 0x267C84u;
    SET_GPR_U32(ctx, 31, 0x267C8Cu);
    ctx->pc = 0x267C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267C84u;
            // 0x267c88: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2699B0u;
    if (runtime->hasFunction(0x2699B0u)) {
        auto targetFn = runtime->lookupFunction(0x2699B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267C8Cu; }
        if (ctx->pc != 0x267C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002699B0_0x2699b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267C8Cu; }
        if (ctx->pc != 0x267C8Cu) { return; }
    }
    ctx->pc = 0x267C8Cu;
label_267c8c:
    // 0x267c8c: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x267c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x267c90: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x267c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x267c94: 0x0  nop
    ctx->pc = 0x267c94u;
    // NOP
label_267c98:
    // 0x267c98: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x267c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x267c9c: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x267c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267ca0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x267ca0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ca4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x267ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x267ca8: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x267CA8u;
    {
        const bool branch_taken_0x267ca8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x267CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267CA8u;
            // 0x267cac: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ca8) {
            ctx->pc = 0x267CE0u;
            goto label_267ce0;
        }
    }
    ctx->pc = 0x267CB0u;
label_267cb0:
    // 0x267cb0: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x267cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x267cb4: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x267cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267cb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x267cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267cbc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x267CBCu;
    {
        const bool branch_taken_0x267cbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x267cbc) {
            ctx->pc = 0x267CD0u;
            goto label_267cd0;
        }
    }
    ctx->pc = 0x267CC4u;
    // 0x267cc4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x267cc4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x267cc8: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x267cc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ccc: 0x0  nop
    ctx->pc = 0x267cccu;
    // NOP
label_267cd0:
    // 0x267cd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x267cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x267cd4: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x267CD4u;
    {
        const bool branch_taken_0x267cd4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x267cd4) {
            ctx->pc = 0x267CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_267cb0;
        }
    }
    ctx->pc = 0x267CDCu;
    // 0x267cdc: 0x0  nop
    ctx->pc = 0x267cdcu;
    // NOP
label_267ce0:
    // 0x267ce0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x267ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x267ce4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x267ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ce8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x267ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267cec: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x267cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x267cf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x267cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x267cf4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x267cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x267cf8: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x267cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x267cfc: 0x245300e0  addiu       $s3, $v0, 0xE0
    ctx->pc = 0x267cfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x267d00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x267d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d04: 0xc099b1c  jal         func_266C70
    ctx->pc = 0x267D04u;
    SET_GPR_U32(ctx, 31, 0x267D0Cu);
    ctx->pc = 0x267D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267D04u;
            // 0x267d08: 0xae600030  sw          $zero, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266C70u;
    if (runtime->hasFunction(0x266C70u)) {
        auto targetFn = runtime->lookupFunction(0x266C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267D0Cu; }
        if (ctx->pc != 0x267D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266C70_0x266c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267D0Cu; }
        if (ctx->pc != 0x267D0Cu) { return; }
    }
    ctx->pc = 0x267D0Cu;
label_267d0c:
    // 0x267d0c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x267d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x267d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d14: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x267d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x267d18: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x267d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d1c: 0xc099bb4  jal         func_266ED0
    ctx->pc = 0x267D1Cu;
    SET_GPR_U32(ctx, 31, 0x267D24u);
    ctx->pc = 0x267D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267D1Cu;
            // 0x267d20: 0x27a82f7c  addiu       $t0, $sp, 0x2F7C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266ED0u;
    if (runtime->hasFunction(0x266ED0u)) {
        auto targetFn = runtime->lookupFunction(0x266ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267D24u; }
        if (ctx->pc != 0x267D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266ED0_0x266ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267D24u; }
        if (ctx->pc != 0x267D24u) { return; }
    }
    ctx->pc = 0x267D24u;
label_267d24:
    // 0x267d24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x267d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267d28: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x267D28u;
    {
        const bool branch_taken_0x267d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x267d28) {
            ctx->pc = 0x267D48u;
            goto label_267d48;
        }
    }
    ctx->pc = 0x267D30u;
    // 0x267d30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x267d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x267d34: 0x28420037  slti        $v0, $v0, 0x37
    ctx->pc = 0x267d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x267d38: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x267D38u;
    {
        const bool branch_taken_0x267d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267D38u;
            // 0x267d3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d38) {
            ctx->pc = 0x267C98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_267c98;
        }
    }
    ctx->pc = 0x267D40u;
    // 0x267d40: 0xafa22f7c  sw          $v0, 0x2F7C($sp)
    ctx->pc = 0x267d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12156), GPR_U32(ctx, 2));
    // 0x267d44: 0x0  nop
    ctx->pc = 0x267d44u;
    // NOP
label_267d48:
    // 0x267d48: 0x8fa22f7c  lw          $v0, 0x2F7C($sp)
    ctx->pc = 0x267d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12156)));
    // 0x267d4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x267d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267d50: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x267D50u;
    {
        const bool branch_taken_0x267d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x267d50) {
            ctx->pc = 0x267D78u;
            goto label_267d78;
        }
    }
    ctx->pc = 0x267D58u;
    // 0x267d58: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x267d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x267d5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x267d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d60: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x267d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d64: 0xc099c4c  jal         func_267130
    ctx->pc = 0x267D64u;
    SET_GPR_U32(ctx, 31, 0x267D6Cu);
    ctx->pc = 0x267D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267D64u;
            // 0x267d68: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267130u;
    if (runtime->hasFunction(0x267130u)) {
        auto targetFn = runtime->lookupFunction(0x267130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267D6Cu; }
        if (ctx->pc != 0x267D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267130_0x267130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267D6Cu; }
        if (ctx->pc != 0x267D6Cu) { return; }
    }
    ctx->pc = 0x267D6Cu;
label_267d6c:
    // 0x267d6c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x267D6Cu;
    {
        const bool branch_taken_0x267d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267D6Cu;
            // 0x267d70: 0x8fa22f7c  lw          $v0, 0x2F7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d6c) {
            ctx->pc = 0x267E58u;
            goto label_267e58;
        }
    }
    ctx->pc = 0x267D74u;
    // 0x267d74: 0x0  nop
    ctx->pc = 0x267d74u;
    // NOP
label_267d78:
    // 0x267d78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x267d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267d7c: 0x1443ff88  bne         $v0, $v1, . + 4 + (-0x78 << 2)
    ctx->pc = 0x267D7Cu;
    {
        const bool branch_taken_0x267d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x267d7c) {
            ctx->pc = 0x267BA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_267ba0;
        }
    }
    ctx->pc = 0x267D84u;
    // 0x267d84: 0x8ea2005c  lw          $v0, 0x5C($s5)
    ctx->pc = 0x267d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x267d88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x267d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267d8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x267d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x267d90: 0xaea2005c  sw          $v0, 0x5C($s5)
    ctx->pc = 0x267d90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 2));
    // 0x267d94: 0x8ea2005c  lw          $v0, 0x5C($s5)
    ctx->pc = 0x267d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x267d98: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x267D98u;
    {
        const bool branch_taken_0x267d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x267d98) {
            ctx->pc = 0x267DB0u;
            goto label_267db0;
        }
    }
    ctx->pc = 0x267DA0u;
    // 0x267da0: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x267da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x267da4: 0x1000ff7e  b           . + 4 + (-0x82 << 2)
    ctx->pc = 0x267DA4u;
    {
        const bool branch_taken_0x267da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267DA4u;
            // 0x267da8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267da4) {
            ctx->pc = 0x267BA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_267ba0;
        }
    }
    ctx->pc = 0x267DACu;
    // 0x267dac: 0x0  nop
    ctx->pc = 0x267dacu;
    // NOP
label_267db0:
    // 0x267db0: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x267db0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x267db4: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x267DB4u;
    {
        const bool branch_taken_0x267db4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x267db4) {
            ctx->pc = 0x267E50u;
            goto label_267e50;
        }
    }
    ctx->pc = 0x267DBCu;
    // 0x267dbc: 0x8ea4006c  lw          $a0, 0x6C($s5)
    ctx->pc = 0x267dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x267dc0: 0x3c02b8d1  lui         $v0, 0xB8D1
    ctx->pc = 0x267dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47313 << 16));
    // 0x267dc4: 0x3443b717  ori         $v1, $v0, 0xB717
    ctx->pc = 0x267dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x267dc8: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x267dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x267dcc: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x267dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x267dd0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x267dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x267dd4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x267dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x267dd8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x267dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x267ddc: 0x8ea4005c  lw          $a0, 0x5C($s5)
    ctx->pc = 0x267ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x267de0: 0xc099fb4  jal         func_267ED0
    ctx->pc = 0x267DE0u;
    SET_GPR_U32(ctx, 31, 0x267DE8u);
    ctx->pc = 0x267DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267DE0u;
            // 0x267de4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267ED0u;
    if (runtime->hasFunction(0x267ED0u)) {
        auto targetFn = runtime->lookupFunction(0x267ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267DE8u; }
        if (ctx->pc != 0x267DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267ED0_0x267ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267DE8u; }
        if (ctx->pc != 0x267DE8u) { return; }
    }
    ctx->pc = 0x267DE8u;
label_267de8:
    // 0x267de8: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x267de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267dec: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x267decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267df0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x267df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x267df4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x267df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x267df8: 0xc6a10034  lwc1        $f1, 0x34($s5)
    ctx->pc = 0x267df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267dfc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x267dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x267e00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267e04: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x267e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x267e08: 0xc6a10038  lwc1        $f1, 0x38($s5)
    ctx->pc = 0x267e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267e0c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x267e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x267e10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267e14: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x267e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x267e18: 0xc6a1003c  lwc1        $f1, 0x3C($s5)
    ctx->pc = 0x267e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267e1c: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x267e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x267e20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267e24: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x267e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x267e28: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x267e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e2c: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x267e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x267e30: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x267e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e34: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x267e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x267e38: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x267e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e3c: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x267e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x267e40: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x267e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267e44: 0x1000ff56  b           . + 4 + (-0xAA << 2)
    ctx->pc = 0x267E44u;
    {
        const bool branch_taken_0x267e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267E44u;
            // 0x267e48: 0xe6a0003c  swc1        $f0, 0x3C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e44) {
            ctx->pc = 0x267BA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_267ba0;
        }
    }
    ctx->pc = 0x267E4Cu;
    // 0x267e4c: 0x0  nop
    ctx->pc = 0x267e4cu;
    // NOP
label_267e50:
    // 0x267e50: 0x8fa22f7c  lw          $v0, 0x2F7C($sp)
    ctx->pc = 0x267e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12156)));
    // 0x267e54: 0x0  nop
    ctx->pc = 0x267e54u;
    // NOP
label_267e58:
    // 0x267e58: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x267e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x267e5c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x267e5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x267e60: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x267e60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267e64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x267e64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267e68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x267e68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267e6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x267e6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267e70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x267e70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267e74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x267e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267e78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267e7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267e80: 0x3e00008  jr          $ra
    ctx->pc = 0x267E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267E80u;
            // 0x267e84: 0x27bd2f80  addiu       $sp, $sp, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 12160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267E88u;
    // 0x267e88: 0x0  nop
    ctx->pc = 0x267e88u;
    // NOP
    // 0x267e8c: 0x0  nop
    ctx->pc = 0x267e8cu;
    // NOP
}
