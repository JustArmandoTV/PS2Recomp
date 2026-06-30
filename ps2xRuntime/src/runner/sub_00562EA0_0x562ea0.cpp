#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00562EA0
// Address: 0x562ea0 - 0x563380
void sub_00562EA0_0x562ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00562EA0_0x562ea0");
#endif

    switch (ctx->pc) {
        case 0x562ed8u: goto label_562ed8;
        case 0x562ee4u: goto label_562ee4;
        case 0x562f00u: goto label_562f00;
        case 0x562f10u: goto label_562f10;
        case 0x562f1cu: goto label_562f1c;
        case 0x562f30u: goto label_562f30;
        case 0x562f48u: goto label_562f48;
        case 0x563354u: goto label_563354;
        default: break;
    }

    ctx->pc = 0x562ea0u;

    // 0x562ea0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x562ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x562ea4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x562ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x562ea8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x562ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x562eac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x562eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x562eb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x562eb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562eb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x562eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x562eb8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x562eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x562ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x562ec0: 0x8c910044  lw          $s1, 0x44($a0)
    ctx->pc = 0x562ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x562ec4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x562ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562ec8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x562ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562ecc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x562eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x562ed0: 0xc04cc90  jal         func_133240
    ctx->pc = 0x562ED0u;
    SET_GPR_U32(ctx, 31, 0x562ED8u);
    ctx->pc = 0x562ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562ED0u;
            // 0x562ed4: 0x262602c0  addiu       $a2, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562ED8u; }
        if (ctx->pc != 0x562ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562ED8u; }
        if (ctx->pc != 0x562ED8u) { return; }
    }
    ctx->pc = 0x562ED8u;
label_562ed8:
    // 0x562ed8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x562ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x562edc: 0xc04cc44  jal         func_133110
    ctx->pc = 0x562EDCu;
    SET_GPR_U32(ctx, 31, 0x562EE4u);
    ctx->pc = 0x562EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562EDCu;
            // 0x562ee0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562EE4u; }
        if (ctx->pc != 0x562EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562EE4u; }
        if (ctx->pc != 0x562EE4u) { return; }
    }
    ctx->pc = 0x562EE4u;
label_562ee4:
    // 0x562ee4: 0x8e230a6c  lw          $v1, 0xA6C($s1)
    ctx->pc = 0x562ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2668)));
    // 0x562ee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x562ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x562eec: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x562EECu;
    {
        const bool branch_taken_0x562eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x562eec) {
            ctx->pc = 0x562EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562EECu;
            // 0x562ef0: 0x26250830  addiu       $a1, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562F08u;
            goto label_562f08;
        }
    }
    ctx->pc = 0x562EF4u;
    // 0x562ef4: 0x8e240a60  lw          $a0, 0xA60($s1)
    ctx->pc = 0x562ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2656)));
    // 0x562ef8: 0xc0eecc8  jal         func_3BB320
    ctx->pc = 0x562EF8u;
    SET_GPR_U32(ctx, 31, 0x562F00u);
    ctx->pc = 0x562EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562EF8u;
            // 0x562efc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB320u;
    if (runtime->hasFunction(0x3BB320u)) {
        auto targetFn = runtime->lookupFunction(0x3BB320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562F00u; }
        if (ctx->pc != 0x562F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB320_0x3bb320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562F00u; }
        if (ctx->pc != 0x562F00u) { return; }
    }
    ctx->pc = 0x562F00u;
label_562f00:
    // 0x562f00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x562F00u;
    {
        const bool branch_taken_0x562f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x562F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562F00u;
            // 0x562f04: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x562f00) {
            ctx->pc = 0x562F14u;
            goto label_562f14;
        }
    }
    ctx->pc = 0x562F08u;
label_562f08:
    // 0x562f08: 0xc04c720  jal         func_131C80
    ctx->pc = 0x562F08u;
    SET_GPR_U32(ctx, 31, 0x562F10u);
    ctx->pc = 0x562F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562F08u;
            // 0x562f0c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562F10u; }
        if (ctx->pc != 0x562F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562F10u; }
        if (ctx->pc != 0x562F10u) { return; }
    }
    ctx->pc = 0x562F10u;
label_562f10:
    // 0x562f10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x562f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_562f14:
    // 0x562f14: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x562F14u;
    SET_GPR_U32(ctx, 31, 0x562F1Cu);
    ctx->pc = 0x562F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562F14u;
            // 0x562f18: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562F1Cu; }
        if (ctx->pc != 0x562F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562F1Cu; }
        if (ctx->pc != 0x562F1Cu) { return; }
    }
    ctx->pc = 0x562F1Cu;
label_562f1c:
    // 0x562f1c: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x562f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x562f20: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x562f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x562f24: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x562f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x562f28: 0xc04cca0  jal         func_133280
    ctx->pc = 0x562F28u;
    SET_GPR_U32(ctx, 31, 0x562F30u);
    ctx->pc = 0x562F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562F28u;
            // 0x562f2c: 0x24c6faa0  addiu       $a2, $a2, -0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562F30u; }
        if (ctx->pc != 0x562F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562F30u; }
        if (ctx->pc != 0x562F30u) { return; }
    }
    ctx->pc = 0x562F30u;
label_562f30:
    // 0x562f30: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x562f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x562f34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x562f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x562f38: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x562f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x562f3c: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x562f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x562f40: 0xc13d9dc  jal         func_4F6770
    ctx->pc = 0x562F40u;
    SET_GPR_U32(ctx, 31, 0x562F48u);
    ctx->pc = 0x562F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x562F40u;
            // 0x562f44: 0x26080008  addiu       $t0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6770u;
    if (runtime->hasFunction(0x4F6770u)) {
        auto targetFn = runtime->lookupFunction(0x4F6770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562F48u; }
        if (ctx->pc != 0x562F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6770_0x4f6770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x562F48u; }
        if (ctx->pc != 0x562F48u) { return; }
    }
    ctx->pc = 0x562F48u;
label_562f48:
    // 0x562f48: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x562f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x562f4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x562f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x562f50: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x562f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x562f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x562f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x562f58: 0x0  nop
    ctx->pc = 0x562f58u;
    // NOP
    // 0x562f5c: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x562f5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x562f60: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
    ctx->pc = 0x562F60u;
    {
        const bool branch_taken_0x562f60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x562f60) {
            ctx->pc = 0x562F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562F60u;
            // 0x562f64: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563018u;
            goto label_563018;
        }
    }
    ctx->pc = 0x562F68u;
    // 0x562f68: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x562f68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x562f6c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x562f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x562f70: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x562f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x562f74: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x562f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x562f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x562f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x562f7c: 0x0  nop
    ctx->pc = 0x562f7cu;
    // NOP
    // 0x562f80: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x562f80u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x562f84: 0x0  nop
    ctx->pc = 0x562f84u;
    // NOP
    // 0x562f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x562f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x562f8c: 0x0  nop
    ctx->pc = 0x562f8cu;
    // NOP
    // 0x562f90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x562f90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x562f94: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x562F94u;
    {
        const bool branch_taken_0x562f94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x562f94) {
            ctx->pc = 0x562F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562F94u;
            // 0x562f98: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x562FACu;
            goto label_562fac;
        }
    }
    ctx->pc = 0x562F9Cu;
    // 0x562f9c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x562f9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x562fa0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x562fa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x562fa4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x562FA4u;
    {
        const bool branch_taken_0x562fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x562fa4) {
            ctx->pc = 0x562FC0u;
            goto label_562fc0;
        }
    }
    ctx->pc = 0x562FACu;
label_562fac:
    // 0x562fac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x562facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x562fb0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x562fb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x562fb4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x562fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x562fb8: 0x0  nop
    ctx->pc = 0x562fb8u;
    // NOP
    // 0x562fbc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x562fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_562fc0:
    // 0x562fc0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x562FC0u;
    {
        const bool branch_taken_0x562fc0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x562fc0) {
            ctx->pc = 0x562FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x562FC0u;
            // 0x562fc4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x562FD4u;
            goto label_562fd4;
        }
    }
    ctx->pc = 0x562FC8u;
    // 0x562fc8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x562fc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x562fcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x562FCCu;
    {
        const bool branch_taken_0x562fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x562FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562FCCu;
            // 0x562fd0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x562fcc) {
            ctx->pc = 0x562FECu;
            goto label_562fec;
        }
    }
    ctx->pc = 0x562FD4u;
label_562fd4:
    // 0x562fd4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x562fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x562fd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x562fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x562fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x562fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x562fe0: 0x0  nop
    ctx->pc = 0x562fe0u;
    // NOP
    // 0x562fe4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x562fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x562fe8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x562fe8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_562fec:
    // 0x562fec: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x562fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x562ff0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x562ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x562ff4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x562ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x562ff8: 0x0  nop
    ctx->pc = 0x562ff8u;
    // NOP
    // 0x562ffc: 0x46022841  sub.s       $f1, $f5, $f2
    ctx->pc = 0x562ffcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x563000: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x563000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563004: 0x0  nop
    ctx->pc = 0x563004u;
    // NOP
    // 0x563008: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x563008u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x56300c: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x56300cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x563010: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x563010u;
    {
        const bool branch_taken_0x563010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563010u;
            // 0x563014: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563010) {
            ctx->pc = 0x563148u;
            goto label_563148;
        }
    }
    ctx->pc = 0x563018u;
label_563018:
    // 0x563018: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x563018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x56301c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x56301cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563020: 0x0  nop
    ctx->pc = 0x563020u;
    // NOP
    // 0x563024: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x563024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x563028: 0x45020048  bc1fl       . + 4 + (0x48 << 2)
    ctx->pc = 0x563028u;
    {
        const bool branch_taken_0x563028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x563028) {
            ctx->pc = 0x56302Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563028u;
            // 0x56302c: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56314Cu;
            goto label_56314c;
        }
    }
    ctx->pc = 0x563030u;
    // 0x563030: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x563030u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x563034: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x563034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x563038: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x563038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x56303c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x56303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x563040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563044: 0x0  nop
    ctx->pc = 0x563044u;
    // NOP
    // 0x563048: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x563048u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[6] = ctx->f[1] / ctx->f[0];
    // 0x56304c: 0x0  nop
    ctx->pc = 0x56304cu;
    // NOP
    // 0x563050: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x563050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563054: 0x0  nop
    ctx->pc = 0x563054u;
    // NOP
    // 0x563058: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x563058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x56305c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x56305Cu;
    {
        const bool branch_taken_0x56305c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x56305c) {
            ctx->pc = 0x563068u;
            goto label_563068;
        }
    }
    ctx->pc = 0x563064u;
    // 0x563064: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x563064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_563068:
    // 0x563068: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x563068u;
    {
        const bool branch_taken_0x563068 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x563068) {
            ctx->pc = 0x56306Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563068u;
            // 0x56306c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56307Cu;
            goto label_56307c;
        }
    }
    ctx->pc = 0x563070u;
    // 0x563070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x563070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563074: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x563074u;
    {
        const bool branch_taken_0x563074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563074u;
            // 0x563078: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563074) {
            ctx->pc = 0x563094u;
            goto label_563094;
        }
    }
    ctx->pc = 0x56307Cu;
label_56307c:
    // 0x56307c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x56307cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x563080: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x563080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x563084: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563088: 0x0  nop
    ctx->pc = 0x563088u;
    // NOP
    // 0x56308c: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x56308cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x563090: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x563090u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_563094:
    // 0x563094: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x563094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x563098: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x563098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x56309c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x56309cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x5630a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x5630a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5630a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x5630a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x5630a8: 0x0  nop
    ctx->pc = 0x5630a8u;
    // NOP
    // 0x5630ac: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x5630acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x5630b0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x5630b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x5630b4: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x5630b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x5630b8: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x5630b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x5630bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5630bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5630c0: 0x0  nop
    ctx->pc = 0x5630c0u;
    // NOP
    // 0x5630c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x5630c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5630c8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x5630C8u;
    {
        const bool branch_taken_0x5630c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5630c8) {
            ctx->pc = 0x5630CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5630C8u;
            // 0x5630cc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5630E0u;
            goto label_5630e0;
        }
    }
    ctx->pc = 0x5630D0u;
    // 0x5630d0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5630d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5630d4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x5630d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x5630d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x5630D8u;
    {
        const bool branch_taken_0x5630d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5630d8) {
            ctx->pc = 0x5630F4u;
            goto label_5630f4;
        }
    }
    ctx->pc = 0x5630E0u;
label_5630e0:
    // 0x5630e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x5630e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x5630e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5630e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5630e8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x5630e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x5630ec: 0x0  nop
    ctx->pc = 0x5630ecu;
    // NOP
    // 0x5630f0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x5630f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_5630f4:
    // 0x5630f4: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5630F4u;
    {
        const bool branch_taken_0x5630f4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x5630f4) {
            ctx->pc = 0x5630F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5630F4u;
            // 0x5630f8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563108u;
            goto label_563108;
        }
    }
    ctx->pc = 0x5630FCu;
    // 0x5630fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x5630fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563100: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x563100u;
    {
        const bool branch_taken_0x563100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563100u;
            // 0x563104: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563100) {
            ctx->pc = 0x563120u;
            goto label_563120;
        }
    }
    ctx->pc = 0x563108u;
label_563108:
    // 0x563108: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x563108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x56310c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x56310cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x563110: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563114: 0x0  nop
    ctx->pc = 0x563114u;
    // NOP
    // 0x563118: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x563118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x56311c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x56311cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_563120:
    // 0x563120: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x563120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x563124: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x563124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x563128: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x563128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x56312c: 0x0  nop
    ctx->pc = 0x56312cu;
    // NOP
    // 0x563130: 0x46051040  add.s       $f1, $f2, $f5
    ctx->pc = 0x563130u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x563134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x563134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563138: 0x0  nop
    ctx->pc = 0x563138u;
    // NOP
    // 0x56313c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x56313cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x563140: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x563140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x563144: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x563144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_563148:
    // 0x563148: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x563148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_56314c:
    // 0x56314c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x56314cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x563150: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x563150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x563154: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x563154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x563158: 0x0  nop
    ctx->pc = 0x563158u;
    // NOP
    // 0x56315c: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x56315cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x563160: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
    ctx->pc = 0x563160u;
    {
        const bool branch_taken_0x563160 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x563160) {
            ctx->pc = 0x563164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563160u;
            // 0x563164: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563218u;
            goto label_563218;
        }
    }
    ctx->pc = 0x563168u;
    // 0x563168: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x563168u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x56316c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x56316cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x563170: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x563170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x563174: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x563174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x563178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x56317c: 0x0  nop
    ctx->pc = 0x56317cu;
    // NOP
    // 0x563180: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x563180u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x563184: 0x0  nop
    ctx->pc = 0x563184u;
    // NOP
    // 0x563188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x563188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x56318c: 0x0  nop
    ctx->pc = 0x56318cu;
    // NOP
    // 0x563190: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x563190u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x563194: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x563194u;
    {
        const bool branch_taken_0x563194 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x563194) {
            ctx->pc = 0x563198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563194u;
            // 0x563198: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5631ACu;
            goto label_5631ac;
        }
    }
    ctx->pc = 0x56319Cu;
    // 0x56319c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x56319cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5631a0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x5631a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x5631a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x5631A4u;
    {
        const bool branch_taken_0x5631a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5631a4) {
            ctx->pc = 0x5631C0u;
            goto label_5631c0;
        }
    }
    ctx->pc = 0x5631ACu;
label_5631ac:
    // 0x5631ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x5631acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x5631b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5631b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5631b4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x5631b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x5631b8: 0x0  nop
    ctx->pc = 0x5631b8u;
    // NOP
    // 0x5631bc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x5631bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_5631c0:
    // 0x5631c0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5631C0u;
    {
        const bool branch_taken_0x5631c0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x5631c0) {
            ctx->pc = 0x5631C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5631C0u;
            // 0x5631c4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5631D4u;
            goto label_5631d4;
        }
    }
    ctx->pc = 0x5631C8u;
    // 0x5631c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x5631c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5631cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x5631CCu;
    {
        const bool branch_taken_0x5631cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5631D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5631CCu;
            // 0x5631d0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5631cc) {
            ctx->pc = 0x5631ECu;
            goto label_5631ec;
        }
    }
    ctx->pc = 0x5631D4u;
label_5631d4:
    // 0x5631d4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x5631d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x5631d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5631d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5631dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5631dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5631e0: 0x0  nop
    ctx->pc = 0x5631e0u;
    // NOP
    // 0x5631e4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x5631e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x5631e8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x5631e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_5631ec:
    // 0x5631ec: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x5631ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x5631f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x5631f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x5631f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x5631f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x5631f8: 0x0  nop
    ctx->pc = 0x5631f8u;
    // NOP
    // 0x5631fc: 0x46022841  sub.s       $f1, $f5, $f2
    ctx->pc = 0x5631fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x563200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x563200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563204: 0x0  nop
    ctx->pc = 0x563204u;
    // NOP
    // 0x563208: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x563208u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x56320c: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x56320cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x563210: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x563210u;
    {
        const bool branch_taken_0x563210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563210u;
            // 0x563214: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563210) {
            ctx->pc = 0x563348u;
            goto label_563348;
        }
    }
    ctx->pc = 0x563218u;
label_563218:
    // 0x563218: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x563218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x56321c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x56321cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563220: 0x0  nop
    ctx->pc = 0x563220u;
    // NOP
    // 0x563224: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x563224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x563228: 0x45020048  bc1fl       . + 4 + (0x48 << 2)
    ctx->pc = 0x563228u;
    {
        const bool branch_taken_0x563228 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x563228) {
            ctx->pc = 0x56322Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563228u;
            // 0x56322c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56334Cu;
            goto label_56334c;
        }
    }
    ctx->pc = 0x563230u;
    // 0x563230: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x563230u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x563234: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x563234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x563238: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x563238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x56323c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x56323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x563240: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563244: 0x0  nop
    ctx->pc = 0x563244u;
    // NOP
    // 0x563248: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x563248u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[6] = ctx->f[1] / ctx->f[0];
    // 0x56324c: 0x0  nop
    ctx->pc = 0x56324cu;
    // NOP
    // 0x563250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x563250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563254: 0x0  nop
    ctx->pc = 0x563254u;
    // NOP
    // 0x563258: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x563258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x56325c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x56325Cu;
    {
        const bool branch_taken_0x56325c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x56325c) {
            ctx->pc = 0x563268u;
            goto label_563268;
        }
    }
    ctx->pc = 0x563264u;
    // 0x563264: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x563264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_563268:
    // 0x563268: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x563268u;
    {
        const bool branch_taken_0x563268 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x563268) {
            ctx->pc = 0x56326Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563268u;
            // 0x56326c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56327Cu;
            goto label_56327c;
        }
    }
    ctx->pc = 0x563270u;
    // 0x563270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x563270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563274: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x563274u;
    {
        const bool branch_taken_0x563274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563274u;
            // 0x563278: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563274) {
            ctx->pc = 0x563294u;
            goto label_563294;
        }
    }
    ctx->pc = 0x56327Cu;
label_56327c:
    // 0x56327c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x56327cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x563280: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x563280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x563284: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563288: 0x0  nop
    ctx->pc = 0x563288u;
    // NOP
    // 0x56328c: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x56328cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x563290: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x563290u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_563294:
    // 0x563294: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x563294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x563298: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x563298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x56329c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x56329cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x5632a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x5632a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5632a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x5632a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x5632a8: 0x0  nop
    ctx->pc = 0x5632a8u;
    // NOP
    // 0x5632ac: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x5632acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x5632b0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x5632b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x5632b4: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x5632b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x5632b8: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x5632b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x5632bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5632bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5632c0: 0x0  nop
    ctx->pc = 0x5632c0u;
    // NOP
    // 0x5632c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x5632c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5632c8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x5632C8u;
    {
        const bool branch_taken_0x5632c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5632c8) {
            ctx->pc = 0x5632CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5632C8u;
            // 0x5632cc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5632E0u;
            goto label_5632e0;
        }
    }
    ctx->pc = 0x5632D0u;
    // 0x5632d0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5632d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5632d4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x5632d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x5632d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x5632D8u;
    {
        const bool branch_taken_0x5632d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5632d8) {
            ctx->pc = 0x5632F4u;
            goto label_5632f4;
        }
    }
    ctx->pc = 0x5632E0u;
label_5632e0:
    // 0x5632e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x5632e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x5632e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5632e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5632e8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x5632e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x5632ec: 0x0  nop
    ctx->pc = 0x5632ecu;
    // NOP
    // 0x5632f0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x5632f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_5632f4:
    // 0x5632f4: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5632F4u;
    {
        const bool branch_taken_0x5632f4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x5632f4) {
            ctx->pc = 0x5632F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5632F4u;
            // 0x5632f8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563308u;
            goto label_563308;
        }
    }
    ctx->pc = 0x5632FCu;
    // 0x5632fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x5632fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563300: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x563300u;
    {
        const bool branch_taken_0x563300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563300u;
            // 0x563304: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563300) {
            ctx->pc = 0x563320u;
            goto label_563320;
        }
    }
    ctx->pc = 0x563308u;
label_563308:
    // 0x563308: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x563308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x56330c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x56330cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x563310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563314: 0x0  nop
    ctx->pc = 0x563314u;
    // NOP
    // 0x563318: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x563318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x56331c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x56331cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_563320:
    // 0x563320: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x563320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x563324: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x563324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x563328: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x563328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x56332c: 0x0  nop
    ctx->pc = 0x56332cu;
    // NOP
    // 0x563330: 0x46051040  add.s       $f1, $f2, $f5
    ctx->pc = 0x563330u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x563334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x563334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563338: 0x0  nop
    ctx->pc = 0x563338u;
    // NOP
    // 0x56333c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x56333cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x563340: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x563340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x563344: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x563344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_563348:
    // 0x563348: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x563348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_56334c:
    // 0x56334c: 0xc04cc08  jal         func_133020
    ctx->pc = 0x56334Cu;
    SET_GPR_U32(ctx, 31, 0x563354u);
    ctx->pc = 0x563350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56334Cu;
            // 0x563350: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563354u; }
        if (ctx->pc != 0x563354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563354u; }
        if (ctx->pc != 0x563354u) { return; }
    }
    ctx->pc = 0x563354u;
label_563354:
    // 0x563354: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x563354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x563358: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x563358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x56335c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x56335cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x563360: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x563360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x563364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x563364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x563368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x563368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x56336c: 0x3e00008  jr          $ra
    ctx->pc = 0x56336Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x563370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56336Cu;
            // 0x563370: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x563374u;
    // 0x563374: 0x0  nop
    ctx->pc = 0x563374u;
    // NOP
    // 0x563378: 0x0  nop
    ctx->pc = 0x563378u;
    // NOP
    // 0x56337c: 0x0  nop
    ctx->pc = 0x56337cu;
    // NOP
}
