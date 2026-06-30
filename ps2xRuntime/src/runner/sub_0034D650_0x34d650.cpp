#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034D650
// Address: 0x34d650 - 0x34d860
void sub_0034D650_0x34d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D650_0x34d650");
#endif

    switch (ctx->pc) {
        case 0x34d698u: goto label_34d698;
        case 0x34d754u: goto label_34d754;
        case 0x34d7acu: goto label_34d7ac;
        case 0x34d7bcu: goto label_34d7bc;
        case 0x34d7c8u: goto label_34d7c8;
        default: break;
    }

    ctx->pc = 0x34d650u;

    // 0x34d650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34d650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34d654: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34d654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34d658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34d658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34d65c: 0x24425a68  addiu       $v0, $v0, 0x5A68
    ctx->pc = 0x34d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23144));
    // 0x34d660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d664: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34d664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34d668: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34d668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34d66c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34d66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d670: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x34d670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x34d674: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34d674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x34d678: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x34d678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x34d67c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x34d67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34d680: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x34d680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x34d684: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x34d684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x34d688: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x34d688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x34d68c: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x34d68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x34d690: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x34D690u;
    SET_GPR_U32(ctx, 31, 0x34D698u);
    ctx->pc = 0x34D694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D690u;
            // 0x34d694: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D698u; }
        if (ctx->pc != 0x34D698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D698u; }
        if (ctx->pc != 0x34D698u) { return; }
    }
    ctx->pc = 0x34D698u;
label_34d698:
    // 0x34d698: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x34d698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x34d69c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34d69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d6a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34d6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d6a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x34D6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D6A8u;
            // 0x34d6ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D6B0u;
    // 0x34d6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x34D6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D6B8u;
    // 0x34d6b8: 0x0  nop
    ctx->pc = 0x34d6b8u;
    // NOP
    // 0x34d6bc: 0x0  nop
    ctx->pc = 0x34d6bcu;
    // NOP
    // 0x34d6c0: 0x8073234  j           func_1CC8D0
    ctx->pc = 0x34D6C0u;
    ctx->pc = 0x34D6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D6C0u;
            // 0x34d6c4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x34D6C8u;
    // 0x34d6c8: 0x0  nop
    ctx->pc = 0x34d6c8u;
    // NOP
    // 0x34d6cc: 0x0  nop
    ctx->pc = 0x34d6ccu;
    // NOP
    // 0x34d6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x34D6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D6D8u;
    // 0x34d6d8: 0x0  nop
    ctx->pc = 0x34d6d8u;
    // NOP
    // 0x34d6dc: 0x0  nop
    ctx->pc = 0x34d6dcu;
    // NOP
    // 0x34d6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x34D6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D6E8u;
    // 0x34d6e8: 0x0  nop
    ctx->pc = 0x34d6e8u;
    // NOP
    // 0x34d6ec: 0x0  nop
    ctx->pc = 0x34d6ecu;
    // NOP
    // 0x34d6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x34D6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D6F8u;
    // 0x34d6f8: 0x0  nop
    ctx->pc = 0x34d6f8u;
    // NOP
    // 0x34d6fc: 0x0  nop
    ctx->pc = 0x34d6fcu;
    // NOP
    // 0x34d700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34d700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34d704: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34d704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x34d708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34d708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34d70c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d710: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x34d710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x34d714: 0x90a30c88  lbu         $v1, 0xC88($a1)
    ctx->pc = 0x34d714u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3208)));
    // 0x34d718: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x34D718u;
    {
        const bool branch_taken_0x34d718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D718u;
            // 0x34d71c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d718) {
            ctx->pc = 0x34D790u;
            goto label_34d790;
        }
    }
    ctx->pc = 0x34D720u;
    // 0x34d720: 0x8ca40cb4  lw          $a0, 0xCB4($a1)
    ctx->pc = 0x34d720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3252)));
    // 0x34d724: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x34d724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34d728: 0x5483001a  bnel        $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x34D728u;
    {
        const bool branch_taken_0x34d728 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34d728) {
            ctx->pc = 0x34D72Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D728u;
            // 0x34d72c: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D794u;
            goto label_34d794;
        }
    }
    ctx->pc = 0x34D730u;
    // 0x34d730: 0xc4a10844  lwc1        $f1, 0x844($a1)
    ctx->pc = 0x34d730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d738: 0x0  nop
    ctx->pc = 0x34d738u;
    // NOP
    // 0x34d73c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x34d73cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d740: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x34D740u;
    {
        const bool branch_taken_0x34d740 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34d740) {
            ctx->pc = 0x34D790u;
            goto label_34d790;
        }
    }
    ctx->pc = 0x34D748u;
    // 0x34d748: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x34d748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x34d74c: 0xc0d3698  jal         func_34DA60
    ctx->pc = 0x34D74Cu;
    SET_GPR_U32(ctx, 31, 0x34D754u);
    ctx->pc = 0x34D750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D74Cu;
            // 0x34d750: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DA60u;
    if (runtime->hasFunction(0x34DA60u)) {
        auto targetFn = runtime->lookupFunction(0x34DA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D754u; }
        if (ctx->pc != 0x34D754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DA60_0x34da60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D754u; }
        if (ctx->pc != 0x34D754u) { return; }
    }
    ctx->pc = 0x34D754u;
label_34d754:
    // 0x34d754: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x34d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x34d758: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x34d758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d75c: 0x8c6502c0  lw          $a1, 0x2C0($v1)
    ctx->pc = 0x34d75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 704)));
    // 0x34d760: 0x8c6402c4  lw          $a0, 0x2C4($v1)
    ctx->pc = 0x34d760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 708)));
    // 0x34d764: 0x8c6302c8  lw          $v1, 0x2C8($v1)
    ctx->pc = 0x34d764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 712)));
    // 0x34d768: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x34d768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34d76c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34d770: 0x50c30005  beql        $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D770u;
    {
        const bool branch_taken_0x34d770 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x34d770) {
            ctx->pc = 0x34D774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D770u;
            // 0x34d774: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D788u;
            goto label_34d788;
        }
    }
    ctx->pc = 0x34D778u;
    // 0x34d778: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34d778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x34d77c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x34d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x34d780: 0xa0600c88  sb          $zero, 0xC88($v1)
    ctx->pc = 0x34d780u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3208), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d784: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x34d784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_34d788:
    // 0x34d788: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34d788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34d78c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x34d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_34d790:
    // 0x34d790: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x34d790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_34d794:
    // 0x34d794: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x34d794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x34d798: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x34d798u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34d79c: 0x5020000e  beql        $at, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x34D79Cu;
    {
        const bool branch_taken_0x34d79c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d79c) {
            ctx->pc = 0x34D7A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D79Cu;
            // 0x34d7a0: 0xc6020010  lwc1        $f2, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D7D8u;
            goto label_34d7d8;
        }
    }
    ctx->pc = 0x34D7A4u;
    // 0x34d7a4: 0xc0d367c  jal         func_34D9F0
    ctx->pc = 0x34D7A4u;
    SET_GPR_U32(ctx, 31, 0x34D7ACu);
    ctx->pc = 0x34D7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D7A4u;
            // 0x34d7a8: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34D9F0u;
    if (runtime->hasFunction(0x34D9F0u)) {
        auto targetFn = runtime->lookupFunction(0x34D9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D7ACu; }
        if (ctx->pc != 0x34D7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034D9F0_0x34d9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D7ACu; }
        if (ctx->pc != 0x34D7ACu) { return; }
    }
    ctx->pc = 0x34D7ACu;
label_34d7ac:
    // 0x34d7ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34d7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d7b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34d7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d7b4: 0xc04a508  jal         func_129420
    ctx->pc = 0x34D7B4u;
    SET_GPR_U32(ctx, 31, 0x34D7BCu);
    ctx->pc = 0x34D7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D7B4u;
            // 0x34d7b8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D7BCu; }
        if (ctx->pc != 0x34D7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D7BCu; }
        if (ctx->pc != 0x34D7BCu) { return; }
    }
    ctx->pc = 0x34D7BCu;
label_34d7bc:
    // 0x34d7bc: 0x92050006  lbu         $a1, 0x6($s0)
    ctx->pc = 0x34d7bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x34d7c0: 0xc14c6cc  jal         func_531B30
    ctx->pc = 0x34D7C0u;
    SET_GPR_U32(ctx, 31, 0x34D7C8u);
    ctx->pc = 0x34D7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D7C0u;
            // 0x34d7c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x531B30u;
    if (runtime->hasFunction(0x531B30u)) {
        auto targetFn = runtime->lookupFunction(0x531B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D7C8u; }
        if (ctx->pc != 0x34D7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00531B30_0x531b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D7C8u; }
        if (ctx->pc != 0x34D7C8u) { return; }
    }
    ctx->pc = 0x34D7C8u;
label_34d7c8:
    // 0x34d7c8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x34d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x34d7cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34d7d0: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x34d7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x34d7d4: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x34d7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34d7d8:
    // 0x34d7d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34d7d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d7dc: 0x0  nop
    ctx->pc = 0x34d7dcu;
    // NOP
    // 0x34d7e0: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x34d7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d7e4: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
    ctx->pc = 0x34D7E4u;
    {
        const bool branch_taken_0x34d7e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34d7e4) {
            ctx->pc = 0x34D7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D7E4u;
            // 0x34d7e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D854u;
            goto label_34d854;
        }
    }
    ctx->pc = 0x34D7ECu;
    // 0x34d7ec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x34d7f0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x34d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x34d7f4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x34d7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d7f8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x34d7f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x34d7fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34d7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d800: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x34D800u;
    {
        const bool branch_taken_0x34d800 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D800u;
            // 0x34d804: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d800) {
            ctx->pc = 0x34D810u;
            goto label_34d810;
        }
    }
    ctx->pc = 0x34D808u;
    // 0x34d808: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x34D808u;
    {
        const bool branch_taken_0x34d808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D808u;
            // 0x34d80c: 0xe6010010  swc1        $f1, 0x10($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d808) {
            ctx->pc = 0x34D850u;
            goto label_34d850;
        }
    }
    ctx->pc = 0x34D810u;
label_34d810:
    // 0x34d810: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x34d810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x34d814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d818: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x34D818u;
    {
        const bool branch_taken_0x34d818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34d818) {
            ctx->pc = 0x34D81Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D818u;
            // 0x34d81c: 0xa2000005  sb          $zero, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D83Cu;
            goto label_34d83c;
        }
    }
    ctx->pc = 0x34D820u;
    // 0x34d820: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D820u;
    {
        const bool branch_taken_0x34d820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d820) {
            ctx->pc = 0x34D824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D820u;
            // 0x34d824: 0xa2000005  sb          $zero, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D830u;
            goto label_34d830;
        }
    }
    ctx->pc = 0x34D828u;
    // 0x34d828: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34D828u;
    {
        const bool branch_taken_0x34d828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d828) {
            ctx->pc = 0x34D850u;
            goto label_34d850;
        }
    }
    ctx->pc = 0x34D830u;
label_34d830:
    // 0x34d830: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x34d830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d834: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34D834u;
    {
        const bool branch_taken_0x34d834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D834u;
            // 0x34d838: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d834) {
            ctx->pc = 0x34D850u;
            goto label_34d850;
        }
    }
    ctx->pc = 0x34D83Cu;
label_34d83c:
    // 0x34d83c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x34d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34d840: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x34d840u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d844: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x34d844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34d848: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34d848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34d84c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_34d850:
    // 0x34d850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34d850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34d854:
    // 0x34d854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d858: 0x3e00008  jr          $ra
    ctx->pc = 0x34D858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D858u;
            // 0x34d85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D860u;
}
