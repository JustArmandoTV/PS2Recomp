#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038D780
// Address: 0x38d780 - 0x38d8d0
void sub_0038D780_0x38d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D780_0x38d780");
#endif

    switch (ctx->pc) {
        case 0x38d7c0u: goto label_38d7c0;
        case 0x38d7f0u: goto label_38d7f0;
        case 0x38d804u: goto label_38d804;
        case 0x38d80cu: goto label_38d80c;
        case 0x38d8bcu: goto label_38d8bc;
        default: break;
    }

    ctx->pc = 0x38d780u;

    // 0x38d780: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x38d780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x38d784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38d784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38d788: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38d788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38d78c: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x38d78cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
    // 0x38d790: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x38d790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x38d794: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x38D794u;
    {
        const bool branch_taken_0x38d794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D794u;
            // 0x38d798: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d794) {
            ctx->pc = 0x38D8BCu;
            goto label_38d8bc;
        }
    }
    ctx->pc = 0x38D79Cu;
    // 0x38d79c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x38d79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d7a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x38d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38d7a4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x38d7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x38d7a8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x38d7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d7ac: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x38d7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x38d7b0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x38d7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d7b4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x38d7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x38d7b8: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x38D7B8u;
    SET_GPR_U32(ctx, 31, 0x38D7C0u);
    ctx->pc = 0x38D7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D7B8u;
            // 0x38d7bc: 0x24c50020  addiu       $a1, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D7C0u; }
        if (ctx->pc != 0x38D7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D7C0u; }
        if (ctx->pc != 0x38D7C0u) { return; }
    }
    ctx->pc = 0x38D7C0u;
label_38d7c0:
    // 0x38d7c0: 0xc6020188  lwc1        $f2, 0x188($s0)
    ctx->pc = 0x38d7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38d7c4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x38d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x38d7c8: 0xc6010184  lwc1        $f1, 0x184($s0)
    ctx->pc = 0x38d7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38d7cc: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x38d7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x38d7d0: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x38d7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d7d4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x38d7d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38d7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38d7dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38d7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d7e0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x38d7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x38d7e4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x38d7e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x38d7e8: 0xc04cb6c  jal         func_132DB0
    ctx->pc = 0x38D7E8u;
    SET_GPR_U32(ctx, 31, 0x38D7F0u);
    ctx->pc = 0x38D7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D7E8u;
            // 0x38d7ec: 0xe7a20078  swc1        $f2, 0x78($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DB0u;
    if (runtime->hasFunction(0x132DB0u)) {
        auto targetFn = runtime->lookupFunction(0x132DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D7F0u; }
        if (ctx->pc != 0x38D7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DB0_0x132db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D7F0u; }
        if (ctx->pc != 0x38D7F0u) { return; }
    }
    ctx->pc = 0x38D7F0u;
label_38d7f0:
    // 0x38d7f0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x38d7f4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x38d7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x38d7f8: 0x24c65f68  addiu       $a2, $a2, 0x5F68
    ctx->pc = 0x38d7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24424));
    // 0x38d7fc: 0xc04cafc  jal         func_132BF0
    ctx->pc = 0x38D7FCu;
    SET_GPR_U32(ctx, 31, 0x38D804u);
    ctx->pc = 0x38D800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D7FCu;
            // 0x38d800: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D804u; }
        if (ctx->pc != 0x38D804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D804u; }
        if (ctx->pc != 0x38D804u) { return; }
    }
    ctx->pc = 0x38D804u;
label_38d804:
    // 0x38d804: 0xc040180  jal         func_100600
    ctx->pc = 0x38D804u;
    SET_GPR_U32(ctx, 31, 0x38D80Cu);
    ctx->pc = 0x38D808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D804u;
            // 0x38d808: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D80Cu; }
        if (ctx->pc != 0x38D80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D80Cu; }
        if (ctx->pc != 0x38D80Cu) { return; }
    }
    ctx->pc = 0x38D80Cu;
label_38d80c:
    // 0x38d80c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38d80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d810: 0x5080002b  beql        $a0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x38D810u;
    {
        const bool branch_taken_0x38d810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d810) {
            ctx->pc = 0x38D814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D810u;
            // 0x38d814: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D8C0u;
            goto label_38d8c0;
        }
    }
    ctx->pc = 0x38D818u;
    // 0x38d818: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x38d818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x38d81c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x38d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x38d820: 0xc4415fa8  lwc1        $f1, 0x5FA8($v0)
    ctx->pc = 0x38d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38d824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38d824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38d828: 0x0  nop
    ctx->pc = 0x38d828u;
    // NOP
    // 0x38d82c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38d82cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38d830: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x38D830u;
    {
        const bool branch_taken_0x38d830 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38d830) {
            ctx->pc = 0x38D834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D830u;
            // 0x38d834: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D848u;
            goto label_38d848;
        }
    }
    ctx->pc = 0x38D838u;
    // 0x38d838: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38d838u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x38d83c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x38d83cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x38d840: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38D840u;
    {
        const bool branch_taken_0x38d840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d840) {
            ctx->pc = 0x38D85Cu;
            goto label_38d85c;
        }
    }
    ctx->pc = 0x38D848u;
label_38d848:
    // 0x38d848: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38d848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38d84c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38d84cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x38d850: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x38d850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x38d854: 0x0  nop
    ctx->pc = 0x38d854u;
    // NOP
    // 0x38d858: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x38d858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_38d85c:
    // 0x38d85c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x38d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x38d860: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x38d860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x38d864: 0x24635f78  addiu       $v1, $v1, 0x5F78
    ctx->pc = 0x38d864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24440));
    // 0x38d868: 0x3c090065  lui         $t1, 0x65
    ctx->pc = 0x38d868u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)101 << 16));
    // 0x38d86c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x38d86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x38d870: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x38d870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x38d874: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x38d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x38d878: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x38d878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x38d87c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x38d87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x38d880: 0x3c0a0065  lui         $t2, 0x65
    ctx->pc = 0x38d880u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)101 << 16));
    // 0x38d884: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x38d884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x38d888: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x38d888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38d88c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x38d88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x38d890: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x38d890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38d894: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x38d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x38d898: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x38d898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38d89c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x38d89cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x38d8a0: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x38d8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x38d8a4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x38d8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x38d8a8: 0x25295f88  addiu       $t1, $t1, 0x5F88
    ctx->pc = 0x38d8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24456));
    // 0x38d8ac: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x38d8acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x38d8b0: 0x254a5f98  addiu       $t2, $t2, 0x5F98
    ctx->pc = 0x38d8b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24472));
    // 0x38d8b4: 0xc0db488  jal         func_36D220
    ctx->pc = 0x38D8B4u;
    SET_GPR_U32(ctx, 31, 0x38D8BCu);
    ctx->pc = 0x38D8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D8B4u;
            // 0x38d8b8: 0x27ab0070  addiu       $t3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D8BCu; }
        if (ctx->pc != 0x38D8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D8BCu; }
        if (ctx->pc != 0x38D8BCu) { return; }
    }
    ctx->pc = 0x38D8BCu;
label_38d8bc:
    // 0x38d8bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38d8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38d8c0:
    // 0x38d8c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38d8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x38D8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D8C4u;
            // 0x38d8c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38D8CCu;
    // 0x38d8cc: 0x0  nop
    ctx->pc = 0x38d8ccu;
    // NOP
}
