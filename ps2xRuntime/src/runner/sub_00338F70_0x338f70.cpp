#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00338F70
// Address: 0x338f70 - 0x339080
void sub_00338F70_0x338f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338F70_0x338f70");
#endif

    switch (ctx->pc) {
        case 0x338fb8u: goto label_338fb8;
        case 0x339038u: goto label_339038;
        case 0x339050u: goto label_339050;
        default: break;
    }

    ctx->pc = 0x338f70u;

    // 0x338f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338f74: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x338f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x338f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x338f7c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x338f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x338f80: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x338f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338f84: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x338f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338f88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x338f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x338f8c: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x338f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x338f90: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x338f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338f94: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x338f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338f98: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x338f98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x338f9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x338f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x338fa0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x338FA0u;
    {
        const bool branch_taken_0x338fa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x338FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338FA0u;
            // 0x338fa4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338fa0) {
            ctx->pc = 0x338FB8u;
            goto label_338fb8;
        }
    }
    ctx->pc = 0x338FA8u;
    // 0x338fa8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x338fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x338fac: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x338facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x338fb0: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x338FB0u;
    SET_GPR_U32(ctx, 31, 0x338FB8u);
    ctx->pc = 0x338FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338FB0u;
            // 0x338fb4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338FB8u; }
        if (ctx->pc != 0x338FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338FB8u; }
        if (ctx->pc != 0x338FB8u) { return; }
    }
    ctx->pc = 0x338FB8u;
label_338fb8:
    // 0x338fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x338FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338FBCu;
            // 0x338fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x338FC4u;
    // 0x338fc4: 0x0  nop
    ctx->pc = 0x338fc4u;
    // NOP
    // 0x338fc8: 0x0  nop
    ctx->pc = 0x338fc8u;
    // NOP
    // 0x338fcc: 0x0  nop
    ctx->pc = 0x338fccu;
    // NOP
    // 0x338fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x338fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x338fd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x338fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x338fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x338fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x338fdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338fe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x338fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338fe4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x338FE4u;
    {
        const bool branch_taken_0x338fe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x338FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338FE4u;
            // 0x338fe8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338fe4) {
            ctx->pc = 0x339050u;
            goto label_339050;
        }
    }
    ctx->pc = 0x338FECu;
    // 0x338fec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x338fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x338ff0: 0x24424f90  addiu       $v0, $v0, 0x4F90
    ctx->pc = 0x338ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20368));
    // 0x338ff4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x338FF4u;
    {
        const bool branch_taken_0x338ff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x338FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338FF4u;
            // 0x338ff8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338ff4) {
            ctx->pc = 0x339038u;
            goto label_339038;
        }
    }
    ctx->pc = 0x338FFCu;
    // 0x338ffc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x338ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x339000: 0x2442a7e0  addiu       $v0, $v0, -0x5820
    ctx->pc = 0x339000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944736));
    // 0x339004: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x339004u;
    {
        const bool branch_taken_0x339004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x339008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339004u;
            // 0x339008: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339004) {
            ctx->pc = 0x339038u;
            goto label_339038;
        }
    }
    ctx->pc = 0x33900Cu;
    // 0x33900c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x339010: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x339010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
    // 0x339014: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x339014u;
    {
        const bool branch_taken_0x339014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x339018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339014u;
            // 0x339018: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339014) {
            ctx->pc = 0x339038u;
            goto label_339038;
        }
    }
    ctx->pc = 0x33901Cu;
    // 0x33901c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33901cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x339020: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x339020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x339024: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x339024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
    // 0x339028: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x339028u;
    {
        const bool branch_taken_0x339028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33902Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339028u;
            // 0x33902c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339028) {
            ctx->pc = 0x339038u;
            goto label_339038;
        }
    }
    ctx->pc = 0x339030u;
    // 0x339030: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x339030u;
    SET_GPR_U32(ctx, 31, 0x339038u);
    ctx->pc = 0x339034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339030u;
            // 0x339034: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339038u; }
        if (ctx->pc != 0x339038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339038u; }
        if (ctx->pc != 0x339038u) { return; }
    }
    ctx->pc = 0x339038u;
label_339038:
    // 0x339038: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x339038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x33903c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33903cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x339040: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x339040u;
    {
        const bool branch_taken_0x339040 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x339040) {
            ctx->pc = 0x339044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x339040u;
            // 0x339044: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x339054u;
            goto label_339054;
        }
    }
    ctx->pc = 0x339048u;
    // 0x339048: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x339048u;
    SET_GPR_U32(ctx, 31, 0x339050u);
    ctx->pc = 0x33904Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339048u;
            // 0x33904c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339050u; }
        if (ctx->pc != 0x339050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339050u; }
        if (ctx->pc != 0x339050u) { return; }
    }
    ctx->pc = 0x339050u;
label_339050:
    // 0x339050: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x339050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_339054:
    // 0x339054: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x339054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33905c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33905cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339060: 0x3e00008  jr          $ra
    ctx->pc = 0x339060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339060u;
            // 0x339064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339068u;
    // 0x339068: 0x0  nop
    ctx->pc = 0x339068u;
    // NOP
    // 0x33906c: 0x0  nop
    ctx->pc = 0x33906cu;
    // NOP
    // 0x339070: 0x3e00008  jr          $ra
    ctx->pc = 0x339070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339070u;
            // 0x339074: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339078u;
    // 0x339078: 0x0  nop
    ctx->pc = 0x339078u;
    // NOP
    // 0x33907c: 0x0  nop
    ctx->pc = 0x33907cu;
    // NOP
}
