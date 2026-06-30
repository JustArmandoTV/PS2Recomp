#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151DF0
// Address: 0x151df0 - 0x151ed0
void sub_00151DF0_0x151df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151DF0_0x151df0");
#endif

    switch (ctx->pc) {
        case 0x151e6cu: goto label_151e6c;
        case 0x151e7cu: goto label_151e7c;
        case 0x151e8cu: goto label_151e8c;
        case 0x151e9cu: goto label_151e9c;
        default: break;
    }

    ctx->pc = 0x151df0u;

    // 0x151df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151df4: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x151df4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x151df8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x151df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x151dfc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x151dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x151e00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151e04: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x151e04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x151e08: 0x8ca8001c  lw          $t0, 0x1C($a1)
    ctx->pc = 0x151e08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x151e0c: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x151e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x151e10: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x151e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x151e14: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x151e14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x151e18: 0xae060040  sw          $a2, 0x40($s0)
    ctx->pc = 0x151e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
    // 0x151e1c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x151e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x151e20: 0x30a50e77  andi        $a1, $a1, 0xE77
    ctx->pc = 0x151e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3703);
    // 0x151e24: 0x50a3001b  beql        $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x151E24u;
    {
        const bool branch_taken_0x151e24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x151e24) {
            ctx->pc = 0x151E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151E24u;
            // 0x151e28: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151E94u;
            goto label_151e94;
        }
    }
    ctx->pc = 0x151E2Cu;
    // 0x151e2c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x151e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x151e30: 0x50a30014  beql        $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x151E30u;
    {
        const bool branch_taken_0x151e30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x151e30) {
            ctx->pc = 0x151E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151E30u;
            // 0x151e34: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151E84u;
            goto label_151e84;
        }
    }
    ctx->pc = 0x151E38u;
    // 0x151e38: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x151e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x151e3c: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x151E3Cu;
    {
        const bool branch_taken_0x151e3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x151e3c) {
            ctx->pc = 0x151E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151E3Cu;
            // 0x151e40: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151E74u;
            goto label_151e74;
        }
    }
    ctx->pc = 0x151E44u;
    // 0x151e44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x151e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151e48: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151E48u;
    {
        const bool branch_taken_0x151e48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x151e48) {
            ctx->pc = 0x151E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151E48u;
            // 0x151e4c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151E64u;
            goto label_151e64;
        }
    }
    ctx->pc = 0x151E50u;
    // 0x151e50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151e54: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x151E54u;
    {
        const bool branch_taken_0x151e54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x151e54) {
            ctx->pc = 0x151E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151E54u;
            // 0x151e58: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x151EA0u;
            goto label_151ea0;
        }
    }
    ctx->pc = 0x151E5Cu;
    // 0x151e5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x151E5Cu;
    {
        const bool branch_taken_0x151e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e5c) {
            ctx->pc = 0x151E9Cu;
            goto label_151e9c;
        }
    }
    ctx->pc = 0x151E64u;
label_151e64:
    // 0x151e64: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x151E64u;
    SET_GPR_U32(ctx, 31, 0x151E6Cu);
    ctx->pc = 0x151E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151E64u;
            // 0x151e68: 0x2606000c  addiu       $a2, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E6Cu; }
        if (ctx->pc != 0x151E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E6Cu; }
        if (ctx->pc != 0x151E6Cu) { return; }
    }
    ctx->pc = 0x151E6Cu;
label_151e6c:
    // 0x151e6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x151E6Cu;
    {
        const bool branch_taken_0x151e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e6c) {
            ctx->pc = 0x151E9Cu;
            goto label_151e9c;
        }
    }
    ctx->pc = 0x151E74u;
label_151e74:
    // 0x151e74: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x151E74u;
    SET_GPR_U32(ctx, 31, 0x151E7Cu);
    ctx->pc = 0x151E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151E74u;
            // 0x151e78: 0x2606000c  addiu       $a2, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E7Cu; }
        if (ctx->pc != 0x151E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E7Cu; }
        if (ctx->pc != 0x151E7Cu) { return; }
    }
    ctx->pc = 0x151E7Cu;
label_151e7c:
    // 0x151e7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x151E7Cu;
    {
        const bool branch_taken_0x151e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e7c) {
            ctx->pc = 0x151E9Cu;
            goto label_151e9c;
        }
    }
    ctx->pc = 0x151E84u;
label_151e84:
    // 0x151e84: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x151E84u;
    SET_GPR_U32(ctx, 31, 0x151E8Cu);
    ctx->pc = 0x151E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151E84u;
            // 0x151e88: 0x2606000c  addiu       $a2, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E8Cu; }
        if (ctx->pc != 0x151E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E8Cu; }
        if (ctx->pc != 0x151E8Cu) { return; }
    }
    ctx->pc = 0x151E8Cu;
label_151e8c:
    // 0x151e8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151E8Cu;
    {
        const bool branch_taken_0x151e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e8c) {
            ctx->pc = 0x151E9Cu;
            goto label_151e9c;
        }
    }
    ctx->pc = 0x151E94u;
label_151e94:
    // 0x151e94: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x151E94u;
    SET_GPR_U32(ctx, 31, 0x151E9Cu);
    ctx->pc = 0x151E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151E94u;
            // 0x151e98: 0x2606000c  addiu       $a2, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E9Cu; }
        if (ctx->pc != 0x151E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E9Cu; }
        if (ctx->pc != 0x151E9Cu) { return; }
    }
    ctx->pc = 0x151E9Cu;
label_151e9c:
    // 0x151e9c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x151e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151ea0:
    // 0x151ea0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x151ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151ea4: 0x0  nop
    ctx->pc = 0x151ea4u;
    // NOP
    // 0x151ea8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x151ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151eac: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x151EACu;
    {
        const bool branch_taken_0x151eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x151eac) {
            ctx->pc = 0x151EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151EACu;
            // 0x151eb0: 0xc6010038  lwc1        $f1, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x151EB4u;
            goto label_151eb4;
        }
    }
    ctx->pc = 0x151EB4u;
label_151eb4:
    // 0x151eb4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x151eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151eb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x151eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x151ebc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x151ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x151ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x151ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x151EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151EC8u;
            // 0x151ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151ED0u;
}
