#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002872B0
// Address: 0x2872b0 - 0x287390
void sub_002872B0_0x2872b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002872B0_0x2872b0");
#endif

    switch (ctx->pc) {
        case 0x2872e0u: goto label_2872e0;
        case 0x287370u: goto label_287370;
        default: break;
    }

    ctx->pc = 0x2872b0u;

    // 0x2872b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2872b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2872b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2872b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2872b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2872b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2872bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2872bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2872c0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2872c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2872c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2872c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2872c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2872cc: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x2872ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2872d0: 0x4800015  bltz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2872D0u;
    {
        const bool branch_taken_0x2872d0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2872D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2872D0u;
            // 0x2872d4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2872d0) {
            ctx->pc = 0x287328u;
            goto label_287328;
        }
    }
    ctx->pc = 0x2872D8u;
    // 0x2872d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2872d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2872dc: 0x0  nop
    ctx->pc = 0x2872dcu;
    // NOP
label_2872e0:
    // 0x2872e0: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2872e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2872e4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2872e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2872e8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2872E8u;
    {
        const bool branch_taken_0x2872e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2872e8) {
            ctx->pc = 0x287318u;
            goto label_287318;
        }
    }
    ctx->pc = 0x2872F0u;
    // 0x2872f0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2872f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2872f4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2872f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872f8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2872f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2872fc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2872fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x287300: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x287300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287304: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x287304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x287308: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x287308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28730c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28730cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x287310: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x287310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287314: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x287314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_287318:
    // 0x287318: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x287318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28731c: 0x481fff0  bgez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x28731Cu;
    {
        const bool branch_taken_0x28731c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x287320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28731Cu;
            // 0x287320: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28731c) {
            ctx->pc = 0x2872E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2872e0;
        }
    }
    ctx->pc = 0x287324u;
    // 0x287324: 0x0  nop
    ctx->pc = 0x287324u;
    // NOP
label_287328:
    // 0x287328: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x287328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28732c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x28732cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x287330: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x287330u;
    {
        const bool branch_taken_0x287330 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x287334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287330u;
            // 0x287334: 0x38903  sra         $s1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287330) {
            ctx->pc = 0x287340u;
            goto label_287340;
        }
    }
    ctx->pc = 0x287338u;
    // 0x287338: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x287338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x28733c: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x28733cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
label_287340:
    // 0x287340: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x287340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x287344: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x287344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x287348: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x287348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x28734c: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x28734cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x287350: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x287350u;
    {
        const bool branch_taken_0x287350 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x287350) {
            ctx->pc = 0x287370u;
            goto label_287370;
        }
    }
    ctx->pc = 0x287358u;
    // 0x287358: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x287358u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28735c: 0x225082a  slt         $at, $s1, $a1
    ctx->pc = 0x28735cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x287360: 0x221280a  movz        $a1, $s1, $at
    ctx->pc = 0x287360u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x287364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287368: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x287368u;
    SET_GPR_U32(ctx, 31, 0x287370u);
    ctx->pc = 0x28736Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287368u;
            // 0x28736c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287370u; }
        if (ctx->pc != 0x287370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287370u; }
        if (ctx->pc != 0x287370u) { return; }
    }
    ctx->pc = 0x287370u;
label_287370:
    // 0x287370: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x287370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x287374: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x287374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x287378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28737c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28737cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287380: 0x3e00008  jr          $ra
    ctx->pc = 0x287380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287380u;
            // 0x287384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287388u;
    // 0x287388: 0x0  nop
    ctx->pc = 0x287388u;
    // NOP
    // 0x28738c: 0x0  nop
    ctx->pc = 0x28738cu;
    // NOP
}
