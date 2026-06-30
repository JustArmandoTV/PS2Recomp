#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175098
// Address: 0x175098 - 0x175200
void sub_00175098_0x175098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175098_0x175098");
#endif

    switch (ctx->pc) {
        case 0x1750c4u: goto label_1750c4;
        case 0x1750e4u: goto label_1750e4;
        case 0x175108u: goto label_175108;
        case 0x175118u: goto label_175118;
        case 0x175144u: goto label_175144;
        case 0x1751acu: goto label_1751ac;
        case 0x1751dcu: goto label_1751dc;
        case 0x1751e4u: goto label_1751e4;
        case 0x1751ecu: goto label_1751ec;
        default: break;
    }

    ctx->pc = 0x175098u;

    // 0x175098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17509c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17509cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1750a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1750a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1750a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1750a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1750a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1750acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1750b0: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1750B0u;
    {
        const bool branch_taken_0x1750b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1750B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1750B0u;
            // 0x1750b4: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750b0) {
            ctx->pc = 0x1750D0u;
            goto label_1750d0;
        }
    }
    ctx->pc = 0x1750B8u;
    // 0x1750b8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1750b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1750bc: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x1750BCu;
    SET_GPR_U32(ctx, 31, 0x1750C4u);
    ctx->pc = 0x1750C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1750BCu;
            // 0x1750c0: 0x24844770  addiu       $a0, $a0, 0x4770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750C4u; }
        if (ctx->pc != 0x1750C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750C4u; }
        if (ctx->pc != 0x1750C4u) { return; }
    }
    ctx->pc = 0x1750C4u;
label_1750c4:
    // 0x1750c4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1750C4u;
    {
        const bool branch_taken_0x1750c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1750C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1750C4u;
            // 0x1750c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750c4) {
            ctx->pc = 0x1751B0u;
            goto label_1751b0;
        }
    }
    ctx->pc = 0x1750CCu;
    // 0x1750cc: 0x0  nop
    ctx->pc = 0x1750ccu;
    // NOP
label_1750d0:
    // 0x1750d0: 0x82420072  lb          $v0, 0x72($s2)
    ctx->pc = 0x1750d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x1750d4: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1750D4u;
    {
        const bool branch_taken_0x1750d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1750D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1750D4u;
            // 0x1750d8: 0x82510001  lb          $s1, 0x1($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750d4) {
            ctx->pc = 0x1751ACu;
            goto label_1751ac;
        }
    }
    ctx->pc = 0x1750DCu;
    // 0x1750dc: 0xc0599d2  jal         func_166748
    ctx->pc = 0x1750DCu;
    SET_GPR_U32(ctx, 31, 0x1750E4u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750E4u; }
        if (ctx->pc != 0x1750E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750E4u; }
        if (ctx->pc != 0x1750E4u) { return; }
    }
    ctx->pc = 0x1750E4u;
label_1750e4:
    // 0x1750e4: 0x2622fffd  addiu       $v0, $s1, -0x3
    ctx->pc = 0x1750e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x1750e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1750e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1750ec: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1750ECu;
    {
        const bool branch_taken_0x1750ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1750F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1750ECu;
            // 0x1750f0: 0xa2500072  sb          $s0, 0x72($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750ec) {
            ctx->pc = 0x1751A4u;
            goto label_1751a4;
        }
    }
    ctx->pc = 0x1750F4u;
    // 0x1750f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1750f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1750f8: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1750F8u;
    {
        const bool branch_taken_0x1750f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1750FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1750F8u;
            // 0x1750fc: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750f8) {
            ctx->pc = 0x175110u;
            goto label_175110;
        }
    }
    ctx->pc = 0x175100u;
    // 0x175100: 0xc05ba76  jal         func_16E9D8
    ctx->pc = 0x175100u;
    SET_GPR_U32(ctx, 31, 0x175108u);
    ctx->pc = 0x175104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175100u;
            // 0x175104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9D8u;
    if (runtime->hasFunction(0x16E9D8u)) {
        auto targetFn = runtime->lookupFunction(0x16E9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175108u; }
        if (ctx->pc != 0x175108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E9D8_0x16e9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175108u; }
        if (ctx->pc != 0x175108u) { return; }
    }
    ctx->pc = 0x175108u;
label_175108:
    // 0x175108: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x175108u;
    {
        const bool branch_taken_0x175108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17510Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175108u;
            // 0x17510c: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175108) {
            ctx->pc = 0x175128u;
            goto label_175128;
        }
    }
    ctx->pc = 0x175110u;
label_175110:
    // 0x175110: 0xc05ba76  jal         func_16E9D8
    ctx->pc = 0x175110u;
    SET_GPR_U32(ctx, 31, 0x175118u);
    ctx->pc = 0x175114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175110u;
            // 0x175114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9D8u;
    if (runtime->hasFunction(0x16E9D8u)) {
        auto targetFn = runtime->lookupFunction(0x16E9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175118u; }
        if (ctx->pc != 0x175118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E9D8_0x16e9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175118u; }
        if (ctx->pc != 0x175118u) { return; }
    }
    ctx->pc = 0x175118u;
label_175118:
    // 0x175118: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x175118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17511c: 0x8c439d88  lw          $v1, -0x6278($v0)
    ctx->pc = 0x17511cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942088)));
    // 0x175120: 0xae4300a0  sw          $v1, 0xA0($s2)
    ctx->pc = 0x175120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
    // 0x175124: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x175124u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_175128:
    // 0x175128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x175128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17512c: 0x26103f1c  addiu       $s0, $s0, 0x3F1C
    ctx->pc = 0x17512cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16156));
    // 0x175130: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x175130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175134: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x175134u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175138: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x175138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x17513c: 0xc05cdb4  jal         func_1736D0
    ctx->pc = 0x17513Cu;
    SET_GPR_U32(ctx, 31, 0x175144u);
    ctx->pc = 0x175140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17513Cu;
            // 0x175140: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1736D0u;
    if (runtime->hasFunction(0x1736D0u)) {
        auto targetFn = runtime->lookupFunction(0x1736D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175144u; }
        if (ctx->pc != 0x175144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001736D0_0x1736d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175144u; }
        if (ctx->pc != 0x175144u) { return; }
    }
    ctx->pc = 0x175144u;
label_175144:
    // 0x175144: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x175144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x175148: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x175148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17514c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17514cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x175150: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x175150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x175154: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x175154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x175158: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x175158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17515c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17515cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x175160: 0xc4413f68  lwc1        $f1, 0x3F68($v0)
    ctx->pc = 0x175160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175164: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x175164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x175168: 0x0  nop
    ctx->pc = 0x175168u;
    // NOP
    // 0x17516c: 0x0  nop
    ctx->pc = 0x17516cu;
    // NOP
    // 0x175170: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x175170u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x175174: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x175174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x175178: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x175178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17517c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17517cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x175180: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x175180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x175184: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x175184u;
    {
        const bool branch_taken_0x175184 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x175188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175184u;
            // 0x175188: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175184) {
            ctx->pc = 0x1751A0u;
            goto label_1751a0;
        }
    }
    ctx->pc = 0x17518Cu;
    // 0x17518c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x17518cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x175190: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x175190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x175194: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x175194u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x175198: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x175198u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x17519c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17519cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1751a0:
    // 0x1751a0: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x1751a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_1751a4:
    // 0x1751a4: 0xc0599d8  jal         func_166760
    ctx->pc = 0x1751A4u;
    SET_GPR_U32(ctx, 31, 0x1751ACu);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751ACu; }
        if (ctx->pc != 0x1751ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751ACu; }
        if (ctx->pc != 0x1751ACu) { return; }
    }
    ctx->pc = 0x1751ACu;
label_1751ac:
    // 0x1751ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1751acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1751b0:
    // 0x1751b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1751b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1751b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1751b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1751b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1751b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1751bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1751BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1751C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1751BCu;
            // 0x1751c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1751C4u;
    // 0x1751c4: 0x0  nop
    ctx->pc = 0x1751c4u;
    // NOP
    // 0x1751c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1751c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1751cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1751ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1751d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1751d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1751d4: 0xc0599de  jal         func_166778
    ctx->pc = 0x1751D4u;
    SET_GPR_U32(ctx, 31, 0x1751DCu);
    ctx->pc = 0x1751D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1751D4u;
            // 0x1751d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751DCu; }
        if (ctx->pc != 0x1751DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751DCu; }
        if (ctx->pc != 0x1751DCu) { return; }
    }
    ctx->pc = 0x1751DCu;
label_1751dc:
    // 0x1751dc: 0xc05d480  jal         func_175200
    ctx->pc = 0x1751DCu;
    SET_GPR_U32(ctx, 31, 0x1751E4u);
    ctx->pc = 0x1751E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1751DCu;
            // 0x1751e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175200u;
    if (runtime->hasFunction(0x175200u)) {
        auto targetFn = runtime->lookupFunction(0x175200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751E4u; }
        if (ctx->pc != 0x1751E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175200_0x175200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751E4u; }
        if (ctx->pc != 0x1751E4u) { return; }
    }
    ctx->pc = 0x1751E4u;
label_1751e4:
    // 0x1751e4: 0xc0599e0  jal         func_166780
    ctx->pc = 0x1751E4u;
    SET_GPR_U32(ctx, 31, 0x1751ECu);
    ctx->pc = 0x1751E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1751E4u;
            // 0x1751e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751ECu; }
        if (ctx->pc != 0x1751ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751ECu; }
        if (ctx->pc != 0x1751ECu) { return; }
    }
    ctx->pc = 0x1751ECu;
label_1751ec:
    // 0x1751ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1751ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1751f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1751f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1751f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1751f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1751F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1751FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1751F8u;
            // 0x1751fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175200u;
}
