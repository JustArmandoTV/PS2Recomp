#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003917F0
// Address: 0x3917f0 - 0x3918c0
void sub_003917F0_0x3917f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003917F0_0x3917f0");
#endif

    switch (ctx->pc) {
        case 0x391818u: goto label_391818;
        case 0x3918a4u: goto label_3918a4;
        default: break;
    }

    ctx->pc = 0x3917f0u;

    // 0x3917f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3917f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3917f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3917f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3917f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3917f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3917fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3917fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x391800: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x391800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x391804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x391804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391808: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x391808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x39180c: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x39180cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
    // 0x391810: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x391810u;
    SET_GPR_U32(ctx, 31, 0x391818u);
    ctx->pc = 0x391814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391810u;
            // 0x391814: 0xc4740018  lwc1        $f20, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391818u; }
        if (ctx->pc != 0x391818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391818u; }
        if (ctx->pc != 0x391818u) { return; }
    }
    ctx->pc = 0x391818u;
label_391818:
    // 0x391818: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x391818u;
    {
        const bool branch_taken_0x391818 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x391818) {
            ctx->pc = 0x39181Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391818u;
            // 0x39181c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39182Cu;
            goto label_39182c;
        }
    }
    ctx->pc = 0x391820u;
    // 0x391820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391824: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x391824u;
    {
        const bool branch_taken_0x391824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391824u;
            // 0x391828: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x391824) {
            ctx->pc = 0x391844u;
            goto label_391844;
        }
    }
    ctx->pc = 0x39182Cu;
label_39182c:
    // 0x39182c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39182cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x391830: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x391830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x391834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x391834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391838: 0x0  nop
    ctx->pc = 0x391838u;
    // NOP
    // 0x39183c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39183cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x391840: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x391840u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_391844:
    // 0x391844: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x391844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x391848: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x391848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
    // 0x39184c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39184cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x391850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391854: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x391854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x391858: 0x3c02fefb  lui         $v0, 0xFEFB
    ctx->pc = 0x391858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65275 << 16));
    // 0x39185c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x39185cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x391860: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x391864: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x391864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x391868: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x391868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x39186c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x39186cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x391870: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x391870u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391874: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x391874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x391878: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x391878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39187c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x39187cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x391880: 0xe4800154  swc1        $f0, 0x154($a0)
    ctx->pc = 0x391880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
    // 0x391884: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x391884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x391888: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x391888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x39188c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x39188cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x391890: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x391890u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x391894: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x391894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x391898: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x391898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x39189c: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x39189Cu;
    SET_GPR_U32(ctx, 31, 0x3918A4u);
    ctx->pc = 0x3918A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39189Cu;
            // 0x3918a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3918A4u; }
        if (ctx->pc != 0x3918A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3918A4u; }
        if (ctx->pc != 0x3918A4u) { return; }
    }
    ctx->pc = 0x3918A4u;
label_3918a4:
    // 0x3918a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3918a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3918a8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x3918a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x3918ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3918acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3918b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3918b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3918b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3918b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3918b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3918B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3918BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3918B8u;
            // 0x3918bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3918C0u;
}
