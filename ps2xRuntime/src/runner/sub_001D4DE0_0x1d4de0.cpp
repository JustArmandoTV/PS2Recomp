#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4DE0
// Address: 0x1d4de0 - 0x1d4fa0
void sub_001D4DE0_0x1d4de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4DE0_0x1d4de0");
#endif

    switch (ctx->pc) {
        case 0x1d4e04u: goto label_1d4e04;
        case 0x1d4e10u: goto label_1d4e10;
        case 0x1d4e1cu: goto label_1d4e1c;
        case 0x1d4e2cu: goto label_1d4e2c;
        case 0x1d4e70u: goto label_1d4e70;
        case 0x1d4e80u: goto label_1d4e80;
        case 0x1d4e8cu: goto label_1d4e8c;
        case 0x1d4f18u: goto label_1d4f18;
        default: break;
    }

    ctx->pc = 0x1d4de0u;

    // 0x1d4de0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1d4de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1d4de4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d4de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d4de8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d4dec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d4decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d4df0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d4df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4df4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d4df4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d4df8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d4df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4dfc: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x1D4DFCu;
    SET_GPR_U32(ctx, 31, 0x1D4E04u);
    ctx->pc = 0x1D4E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4DFCu;
            // 0x1d4e00: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E04u; }
        if (ctx->pc != 0x1D4E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E04u; }
        if (ctx->pc != 0x1D4E04u) { return; }
    }
    ctx->pc = 0x1D4E04u;
label_1d4e04:
    // 0x1d4e04: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d4e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d4e08: 0xc04c774  jal         func_131DD0
    ctx->pc = 0x1D4E08u;
    SET_GPR_U32(ctx, 31, 0x1D4E10u);
    ctx->pc = 0x1D4E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E08u;
            // 0x1d4e0c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131DD0u;
    if (runtime->hasFunction(0x131DD0u)) {
        auto targetFn = runtime->lookupFunction(0x131DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E10u; }
        if (ctx->pc != 0x1D4E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131DD0_0x131dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E10u; }
        if (ctx->pc != 0x1D4E10u) { return; }
    }
    ctx->pc = 0x1D4E10u;
label_1d4e10:
    // 0x1d4e10: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d4e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d4e14: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x1D4E14u;
    SET_GPR_U32(ctx, 31, 0x1D4E1Cu);
    ctx->pc = 0x1D4E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E14u;
            // 0x1d4e18: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E1Cu; }
        if (ctx->pc != 0x1D4E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E1Cu; }
        if (ctx->pc != 0x1D4E1Cu) { return; }
    }
    ctx->pc = 0x1D4E1Cu;
label_1d4e1c:
    // 0x1d4e1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d4e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e20: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d4e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d4e24: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1D4E24u;
    SET_GPR_U32(ctx, 31, 0x1D4E2Cu);
    ctx->pc = 0x1D4E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E24u;
            // 0x1d4e28: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E2Cu; }
        if (ctx->pc != 0x1D4E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E2Cu; }
        if (ctx->pc != 0x1D4E2Cu) { return; }
    }
    ctx->pc = 0x1D4E2Cu;
label_1d4e2c:
    // 0x1d4e2c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1d4e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4e30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4e30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4e34: 0x0  nop
    ctx->pc = 0x1d4e34u;
    // NOP
    // 0x1d4e38: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d4e38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4e3c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4E3Cu;
    {
        const bool branch_taken_0x1d4e3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4e3c) {
            ctx->pc = 0x1D4E5Cu;
            goto label_1d4e5c;
        }
    }
    ctx->pc = 0x1D4E44u;
    // 0x1d4e44: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1d4e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4e48: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d4e48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4e4c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4E4Cu;
    {
        const bool branch_taken_0x1d4e4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4e4c) {
            ctx->pc = 0x1D4E5Cu;
            goto label_1d4e5c;
        }
    }
    ctx->pc = 0x1D4E54u;
    // 0x1d4e54: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1D4E54u;
    {
        const bool branch_taken_0x1d4e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E54u;
            // 0x1d4e58: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e54) {
            ctx->pc = 0x1D4F88u;
            goto label_1d4f88;
        }
    }
    ctx->pc = 0x1D4E5Cu;
label_1d4e5c:
    // 0x1d4e5c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1d4e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1d4e60: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d4e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d4e64: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x1d4e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x1d4e68: 0xc04cc08  jal         func_133020
    ctx->pc = 0x1D4E68u;
    SET_GPR_U32(ctx, 31, 0x1D4E70u);
    ctx->pc = 0x1D4E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E68u;
            // 0x1d4e6c: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E70u; }
        if (ctx->pc != 0x1D4E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E70u; }
        if (ctx->pc != 0x1D4E70u) { return; }
    }
    ctx->pc = 0x1D4E70u;
label_1d4e70:
    // 0x1d4e70: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1d4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1d4e74: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1d4e74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1d4e78: 0xc04cc14  jal         func_133050
    ctx->pc = 0x1D4E78u;
    SET_GPR_U32(ctx, 31, 0x1D4E80u);
    ctx->pc = 0x1D4E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E78u;
            // 0x1d4e7c: 0x2484c540  addiu       $a0, $a0, -0x3AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E80u; }
        if (ctx->pc != 0x1D4E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E80u; }
        if (ctx->pc != 0x1D4E80u) { return; }
    }
    ctx->pc = 0x1D4E80u;
label_1d4e80:
    // 0x1d4e80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d4e80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d4e84: 0xc04cc14  jal         func_133050
    ctx->pc = 0x1D4E84u;
    SET_GPR_U32(ctx, 31, 0x1D4E8Cu);
    ctx->pc = 0x1D4E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E84u;
            // 0x1d4e88: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E8Cu; }
        if (ctx->pc != 0x1D4E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E8Cu; }
        if (ctx->pc != 0x1D4E8Cu) { return; }
    }
    ctx->pc = 0x1D4E8Cu;
label_1d4e8c:
    // 0x1d4e8c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1d4e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d4e90: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1d4e94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d4e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4e98: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x1d4e98u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x1d4e9c: 0x0  nop
    ctx->pc = 0x1d4e9cu;
    // NOP
    // 0x1d4ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4ea4: 0x0  nop
    ctx->pc = 0x1d4ea4u;
    // NOP
    // 0x1d4ea8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d4ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4eac: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4EACu;
    {
        const bool branch_taken_0x1d4eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4eac) {
            ctx->pc = 0x1D4EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4EACu;
            // 0x1d4eb0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4EBCu;
            goto label_1d4ebc;
        }
    }
    ctx->pc = 0x1D4EB4u;
    // 0x1d4eb4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4eb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4eb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d4ebc:
    // 0x1d4ebc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d4ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d4ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4ec4: 0x0  nop
    ctx->pc = 0x1d4ec4u;
    // NOP
    // 0x1d4ec8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d4ec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4ecc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4ECCu;
    {
        const bool branch_taken_0x1d4ecc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4ECCu;
            // 0x1d4ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ecc) {
            ctx->pc = 0x1D4ED8u;
            goto label_1d4ed8;
        }
    }
    ctx->pc = 0x1D4ED4u;
    // 0x1d4ed4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d4ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ed8:
    // 0x1d4ed8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d4ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d4edc: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x1d4edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x1d4ee0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1d4ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d4ee4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d4ee4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4ee8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d4ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d4eec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4eecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4ef0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d4ef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d4ef4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d4ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4ef8: 0x0  nop
    ctx->pc = 0x1d4ef8u;
    // NOP
    // 0x1d4efc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4efcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4f00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d4f00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d4f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4f08: 0x0  nop
    ctx->pc = 0x1d4f08u;
    // NOP
    // 0x1d4f0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4f0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4f10: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x1D4F10u;
    SET_GPR_U32(ctx, 31, 0x1D4F18u);
    ctx->pc = 0x1D4F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F10u;
            // 0x1d4f14: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F18u; }
        if (ctx->pc != 0x1D4F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F18u; }
        if (ctx->pc != 0x1D4F18u) { return; }
    }
    ctx->pc = 0x1D4F18u;
label_1d4f18:
    // 0x1d4f18: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x1d4f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d4f1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d4f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4f20: 0x0  nop
    ctx->pc = 0x1d4f20u;
    // NOP
    // 0x1d4f24: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1d4f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4f28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4F28u;
    {
        const bool branch_taken_0x1d4f28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F28u;
            // 0x1d4f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f28) {
            ctx->pc = 0x1D4F34u;
            goto label_1d4f34;
        }
    }
    ctx->pc = 0x1D4F30u;
    // 0x1d4f30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d4f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4f34:
    // 0x1d4f34: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4F34u;
    {
        const bool branch_taken_0x1d4f34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d4f34) {
            ctx->pc = 0x1D4F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F34u;
            // 0x1d4f38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4F48u;
            goto label_1d4f48;
        }
    }
    ctx->pc = 0x1D4F3Cu;
    // 0x1d4f3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4f40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4F40u;
    {
        const bool branch_taken_0x1d4f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F40u;
            // 0x1d4f44: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f40) {
            ctx->pc = 0x1D4F60u;
            goto label_1d4f60;
        }
    }
    ctx->pc = 0x1D4F48u;
label_1d4f48:
    // 0x1d4f48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d4f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d4f4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d4f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d4f50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d4f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4f54: 0x0  nop
    ctx->pc = 0x1d4f54u;
    // NOP
    // 0x1d4f58: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x1d4f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1d4f5c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1d4f5cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1d4f60:
    // 0x1d4f60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4f64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d4f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1d4f68: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d4f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d4f6c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d4f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4f70: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1d4f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d4f74: 0x0  nop
    ctx->pc = 0x1d4f74u;
    // NOP
    // 0x1d4f78: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1d4f78u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d4f7c: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x1d4f7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1d4f80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d4f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d4f84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d4f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d4f88:
    // 0x1d4f88: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d4f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d4f8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d4f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4f90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d4f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d4f94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F94u;
            // 0x1d4f98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4F9Cu;
    // 0x1d4f9c: 0x0  nop
    ctx->pc = 0x1d4f9cu;
    // NOP
}
