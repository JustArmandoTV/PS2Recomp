#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00509480
// Address: 0x509480 - 0x509610
void sub_00509480_0x509480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509480_0x509480");
#endif

    switch (ctx->pc) {
        case 0x5094f0u: goto label_5094f0;
        default: break;
    }

    ctx->pc = 0x509480u;

    // 0x509480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x509480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x509484: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x509484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x509488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x509488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x50948c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x50948cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x509490: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x509490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x509494: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x509494u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x509498: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x509498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x50949c: 0xc4b50058  lwc1        $f21, 0x58($a1)
    ctx->pc = 0x50949cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x5094a0: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x5094a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5094a4: 0x45010052  bc1t        . + 4 + (0x52 << 2)
    ctx->pc = 0x5094A4u;
    {
        const bool branch_taken_0x5094a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5094A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5094A4u;
            // 0x5094a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5094a4) {
            ctx->pc = 0x5095F0u;
            goto label_5095f0;
        }
    }
    ctx->pc = 0x5094ACu;
    // 0x5094ac: 0x82240074  lb          $a0, 0x74($s1)
    ctx->pc = 0x5094acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x5094b0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x5094b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x5094b4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x5094b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x5094b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5094b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x5094bc: 0x8063ffff  lb          $v1, -0x1($v1)
    ctx->pc = 0x5094bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x5094c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x5094c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x5094c4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x5094C4u;
    {
        const bool branch_taken_0x5094c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5094C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5094C4u;
            // 0x5094c8: 0x8e300024  lw          $s0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5094c4) {
            ctx->pc = 0x5094F8u;
            goto label_5094f8;
        }
    }
    ctx->pc = 0x5094CCu;
    // 0x5094cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x5094ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x5094d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5094d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5094d4: 0x0  nop
    ctx->pc = 0x5094d4u;
    // NOP
    // 0x5094d8: 0x46016803  div.s       $f0, $f13, $f1
    ctx->pc = 0x5094d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[0] = ctx->f[13] / ctx->f[1];
    // 0x5094dc: 0xc6340060  lwc1        $f20, 0x60($s1)
    ctx->pc = 0x5094dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5094e0: 0x0  nop
    ctx->pc = 0x5094e0u;
    // NOP
    // 0x5094e4: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x5094e4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x5094e8: 0xc04781c  jal         func_11E070
    ctx->pc = 0x5094E8u;
    SET_GPR_U32(ctx, 31, 0x5094F0u);
    ctx->pc = 0x5094ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5094E8u;
            // 0x5094ec: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5094F0u; }
        if (ctx->pc != 0x5094F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5094F0u; }
        if (ctx->pc != 0x5094F0u) { return; }
    }
    ctx->pc = 0x5094F0u;
label_5094f0:
    // 0x5094f0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x5094f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x5094f4: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x5094f4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_5094f8:
    // 0x5094f8: 0x82240075  lb          $a0, 0x75($s1)
    ctx->pc = 0x5094f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 117)));
    // 0x5094fc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x5094fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x509500: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x509500u;
    {
        const bool branch_taken_0x509500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x509500) {
            ctx->pc = 0x509504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509500u;
            // 0x509504: 0x3c034622  lui         $v1, 0x4622 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509518u;
            goto label_509518;
        }
    }
    ctx->pc = 0x509508u;
    // 0x509508: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x509508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x50950c: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x50950Cu;
    {
        const bool branch_taken_0x50950c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50950c) {
            ctx->pc = 0x509510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50950Cu;
            // 0x509510: 0x82240075  lb          $a0, 0x75($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 117)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509578u;
            goto label_509578;
        }
    }
    ctx->pc = 0x509514u;
    // 0x509514: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x509514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_509518:
    // 0x509518: 0x8e040af4  lw          $a0, 0xAF4($s0)
    ctx->pc = 0x509518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2804)));
    // 0x50951c: 0x3465f983  ori         $a1, $v1, 0xF983
    ctx->pc = 0x50951cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x509520: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x509520u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x509524: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x509524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x509528: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x509528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x50952c: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x50952cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x509530: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x509530u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x509534: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x509534u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x509538: 0x0  nop
    ctx->pc = 0x509538u;
    // NOP
    // 0x50953c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x50953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x509540: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x509540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x509544: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x509544u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x509548: 0x0  nop
    ctx->pc = 0x509548u;
    // NOP
    // 0x50954c: 0x1810  mfhi        $v1
    ctx->pc = 0x50954cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x509550: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x509550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x509554: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x509554u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x509558: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x509558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x50955c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x50955Cu;
    {
        const bool branch_taken_0x50955c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x50955c) {
            ctx->pc = 0x509560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50955Cu;
            // 0x509560: 0xae050af4  sw          $a1, 0xAF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2804), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509574u;
            goto label_509574;
        }
    }
    ctx->pc = 0x509564u;
    // 0x509564: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x509564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x509568: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x509568u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x50956c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x50956cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x509570: 0xae050af4  sw          $a1, 0xAF4($s0)
    ctx->pc = 0x509570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2804), GPR_U32(ctx, 5));
label_509574:
    // 0x509574: 0x82240075  lb          $a0, 0x75($s1)
    ctx->pc = 0x509574u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 117)));
label_509578:
    // 0x509578: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x509578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x50957c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x50957Cu;
    {
        const bool branch_taken_0x50957c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x50957c) {
            ctx->pc = 0x509580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50957Cu;
            // 0x509580: 0x3c034622  lui         $v1, 0x4622 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509594u;
            goto label_509594;
        }
    }
    ctx->pc = 0x509584u;
    // 0x509584: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x509584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x509588: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x509588u;
    {
        const bool branch_taken_0x509588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x509588) {
            ctx->pc = 0x50958Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509588u;
            // 0x50958c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5095F4u;
            goto label_5095f4;
        }
    }
    ctx->pc = 0x509590u;
    // 0x509590: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x509590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_509594:
    // 0x509594: 0x8e040af0  lw          $a0, 0xAF0($s0)
    ctx->pc = 0x509594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2800)));
    // 0x509598: 0x3465f983  ori         $a1, $v1, 0xF983
    ctx->pc = 0x509598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x50959c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x50959cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5095a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x5095a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x5095a4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x5095a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x5095a8: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x5095a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x5095ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5095acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5095b0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x5095b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x5095b4: 0x0  nop
    ctx->pc = 0x5095b4u;
    // NOP
    // 0x5095b8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x5095b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x5095bc: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x5095bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x5095c0: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x5095c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x5095c4: 0x0  nop
    ctx->pc = 0x5095c4u;
    // NOP
    // 0x5095c8: 0x1810  mfhi        $v1
    ctx->pc = 0x5095c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x5095cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x5095ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x5095d0: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x5095d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x5095d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x5095d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x5095d8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x5095D8u;
    {
        const bool branch_taken_0x5095d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5095d8) {
            ctx->pc = 0x5095DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5095D8u;
            // 0x5095dc: 0xae050af0  sw          $a1, 0xAF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2800), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5095F0u;
            goto label_5095f0;
        }
    }
    ctx->pc = 0x5095E0u;
    // 0x5095e0: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x5095e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x5095e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x5095e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x5095e8: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x5095e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x5095ec: 0xae050af0  sw          $a1, 0xAF0($s0)
    ctx->pc = 0x5095ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2800), GPR_U32(ctx, 5));
label_5095f0:
    // 0x5095f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5095f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_5095f4:
    // 0x5095f4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x5095f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x5095f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5095f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5095fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5095fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x509600: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x509600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x509604: 0x3e00008  jr          $ra
    ctx->pc = 0x509604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509604u;
            // 0x509608: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50960Cu;
    // 0x50960c: 0x0  nop
    ctx->pc = 0x50960cu;
    // NOP
}
