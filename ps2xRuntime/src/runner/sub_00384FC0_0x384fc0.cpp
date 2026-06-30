#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384FC0
// Address: 0x384fc0 - 0x3851a0
void sub_00384FC0_0x384fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384FC0_0x384fc0");
#endif

    switch (ctx->pc) {
        case 0x38503cu: goto label_38503c;
        case 0x385088u: goto label_385088;
        case 0x3850acu: goto label_3850ac;
        case 0x3850b4u: goto label_3850b4;
        case 0x3850c0u: goto label_3850c0;
        case 0x3850c8u: goto label_3850c8;
        case 0x3850d4u: goto label_3850d4;
        case 0x3850f8u: goto label_3850f8;
        case 0x385114u: goto label_385114;
        case 0x385120u: goto label_385120;
        case 0x385134u: goto label_385134;
        case 0x385144u: goto label_385144;
        case 0x38514cu: goto label_38514c;
        case 0x385154u: goto label_385154;
        case 0x38517cu: goto label_38517c;
        default: break;
    }

    ctx->pc = 0x384fc0u;

    // 0x384fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x384fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x384fc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x384fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x384fc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x384fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x384fcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x384fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x384fd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x384fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x384fd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x384fd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x384fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x384fdc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x384fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384fe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x384fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x384fe4: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x384fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x384fe8: 0x8ca50d98  lw          $a1, 0xD98($a1)
    ctx->pc = 0x384fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
    // 0x384fec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x384fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x384ff0: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x384ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x384ff4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x384ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x384ff8: 0x54600061  bnel        $v1, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x384FF8u;
    {
        const bool branch_taken_0x384ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x384ff8) {
            ctx->pc = 0x384FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x384FF8u;
            // 0x384ffc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x385180u;
            goto label_385180;
        }
    }
    ctx->pc = 0x385000u;
    // 0x385000: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x385000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x385004: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x385004u;
    {
        const bool branch_taken_0x385004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x385004) {
            ctx->pc = 0x385008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x385004u;
            // 0x385008: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x385024u;
            goto label_385024;
        }
    }
    ctx->pc = 0x38500Cu;
    // 0x38500c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38500cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x385010: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x385010u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x385014: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x385014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x385018: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x385018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x38501c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38501cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x385020: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x385020u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_385024:
    // 0x385024: 0x12200055  beqz        $s1, . + 4 + (0x55 << 2)
    ctx->pc = 0x385024u;
    {
        const bool branch_taken_0x385024 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x385024) {
            ctx->pc = 0x38517Cu;
            goto label_38517c;
        }
    }
    ctx->pc = 0x38502Cu;
    // 0x38502c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385030: 0xae320018  sw          $s2, 0x18($s1)
    ctx->pc = 0x385030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
    // 0x385034: 0xc0d1dc8  jal         func_347720
    ctx->pc = 0x385034u;
    SET_GPR_U32(ctx, 31, 0x38503Cu);
    ctx->pc = 0x385038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385034u;
            // 0x385038: 0x26300210  addiu       $s0, $s1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38503Cu; }
        if (ctx->pc != 0x38503Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38503Cu; }
        if (ctx->pc != 0x38503Cu) { return; }
    }
    ctx->pc = 0x38503Cu;
label_38503c:
    // 0x38503c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x38503cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x385040: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x385040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x385044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x385044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x385048: 0x0  nop
    ctx->pc = 0x385048u;
    // NOP
    // 0x38504c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38504cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x385050: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x385050u;
    {
        const bool branch_taken_0x385050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x385050) {
            ctx->pc = 0x385054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x385050u;
            // 0x385054: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x385068u;
            goto label_385068;
        }
    }
    ctx->pc = 0x385058u;
    // 0x385058: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x385058u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x38505c: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x38505cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x385060: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x385060u;
    {
        const bool branch_taken_0x385060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385060u;
            // 0x385064: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385060) {
            ctx->pc = 0x385080u;
            goto label_385080;
        }
    }
    ctx->pc = 0x385068u;
label_385068:
    // 0x385068: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x385068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38506c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38506cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x385070: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x385070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x385074: 0x0  nop
    ctx->pc = 0x385074u;
    // NOP
    // 0x385078: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x385078u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x38507c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38507cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_385080:
    // 0x385080: 0xc0d1dc8  jal         func_347720
    ctx->pc = 0x385080u;
    SET_GPR_U32(ctx, 31, 0x385088u);
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385088u; }
        if (ctx->pc != 0x385088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385088u; }
        if (ctx->pc != 0x385088u) { return; }
    }
    ctx->pc = 0x385088u;
label_385088:
    // 0x385088: 0x3c03404f  lui         $v1, 0x404F
    ctx->pc = 0x385088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16463 << 16));
    // 0x38508c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38508cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385090: 0x3463684c  ori         $v1, $v1, 0x684C
    ctx->pc = 0x385090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26700);
    // 0x385094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385098: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x385098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x38509c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x38509cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3850a0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3850a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3850a4: 0xc0d8aac  jal         func_362AB0
    ctx->pc = 0x3850A4u;
    SET_GPR_U32(ctx, 31, 0x3850ACu);
    ctx->pc = 0x3850A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3850A4u;
            // 0x3850a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362AB0u;
    if (runtime->hasFunction(0x362AB0u)) {
        auto targetFn = runtime->lookupFunction(0x362AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3850ACu; }
        if (ctx->pc != 0x3850ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362AB0_0x362ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3850ACu; }
        if (ctx->pc != 0x3850ACu) { return; }
    }
    ctx->pc = 0x3850ACu;
label_3850ac:
    // 0x3850ac: 0xc0d2344  jal         func_348D10
    ctx->pc = 0x3850ACu;
    SET_GPR_U32(ctx, 31, 0x3850B4u);
    ctx->pc = 0x3850B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3850ACu;
            // 0x3850b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348D10u;
    if (runtime->hasFunction(0x348D10u)) {
        auto targetFn = runtime->lookupFunction(0x348D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3850B4u; }
        if (ctx->pc != 0x3850B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348D10_0x348d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3850B4u; }
        if (ctx->pc != 0x3850B4u) { return; }
    }
    ctx->pc = 0x3850B4u;
label_3850b4:
    // 0x3850b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3850b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3850b8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3850B8u;
    SET_GPR_U32(ctx, 31, 0x3850C0u);
    ctx->pc = 0x3850BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3850B8u;
            // 0x3850bc: 0x262401e0  addiu       $a0, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3850C0u; }
        if (ctx->pc != 0x3850C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3850C0u; }
        if (ctx->pc != 0x3850C0u) { return; }
    }
    ctx->pc = 0x3850C0u;
label_3850c0:
    // 0x3850c0: 0xc0d2340  jal         func_348D00
    ctx->pc = 0x3850C0u;
    SET_GPR_U32(ctx, 31, 0x3850C8u);
    ctx->pc = 0x3850C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3850C0u;
            // 0x3850c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348D00u;
    if (runtime->hasFunction(0x348D00u)) {
        auto targetFn = runtime->lookupFunction(0x348D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3850C8u; }
        if (ctx->pc != 0x3850C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348D00_0x348d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3850C8u; }
        if (ctx->pc != 0x3850C8u) { return; }
    }
    ctx->pc = 0x3850C8u;
label_3850c8:
    // 0x3850c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3850c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3850cc: 0xc04c720  jal         func_131C80
    ctx->pc = 0x3850CCu;
    SET_GPR_U32(ctx, 31, 0x3850D4u);
    ctx->pc = 0x3850D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3850CCu;
            // 0x3850d0: 0x262401f0  addiu       $a0, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3850D4u; }
        if (ctx->pc != 0x3850D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3850D4u; }
        if (ctx->pc != 0x3850D4u) { return; }
    }
    ctx->pc = 0x3850D4u;
label_3850d4:
    // 0x3850d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3850d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3850d8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x3850d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x3850dc: 0xae2301d0  sw          $v1, 0x1D0($s1)
    ctx->pc = 0x3850dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 3));
    // 0x3850e0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3850e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3850e4: 0xae3303a0  sw          $s3, 0x3A0($s1)
    ctx->pc = 0x3850e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 19));
    // 0x3850e8: 0xae2001d4  sw          $zero, 0x1D4($s1)
    ctx->pc = 0x3850e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
    // 0x3850ec: 0xae2001d8  sw          $zero, 0x1D8($s1)
    ctx->pc = 0x3850ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 472), GPR_U32(ctx, 0));
    // 0x3850f0: 0xc040180  jal         func_100600
    ctx->pc = 0x3850F0u;
    SET_GPR_U32(ctx, 31, 0x3850F8u);
    ctx->pc = 0x3850F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3850F0u;
            // 0x3850f4: 0xae220200  sw          $v0, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3850F8u; }
        if (ctx->pc != 0x3850F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3850F8u; }
        if (ctx->pc != 0x3850F8u) { return; }
    }
    ctx->pc = 0x3850F8u;
label_3850f8:
    // 0x3850f8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3850F8u;
    {
        const bool branch_taken_0x3850f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3850f8) {
            ctx->pc = 0x3850FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3850F8u;
            // 0x3850fc: 0xae2203a4  sw          $v0, 0x3A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x385118u;
            goto label_385118;
        }
    }
    ctx->pc = 0x385100u;
    // 0x385100: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x385100u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x385104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x385104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385108: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x385108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38510c: 0xc0e1468  jal         func_3851A0
    ctx->pc = 0x38510Cu;
    SET_GPR_U32(ctx, 31, 0x385114u);
    ctx->pc = 0x385110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38510Cu;
            // 0x385110: 0x24c65c80  addiu       $a2, $a2, 0x5C80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3851A0u;
    if (runtime->hasFunction(0x3851A0u)) {
        auto targetFn = runtime->lookupFunction(0x3851A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385114u; }
        if (ctx->pc != 0x385114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003851A0_0x3851a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385114u; }
        if (ctx->pc != 0x385114u) { return; }
    }
    ctx->pc = 0x385114u;
label_385114:
    // 0x385114: 0xae2203a4  sw          $v0, 0x3A4($s1)
    ctx->pc = 0x385114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 2));
label_385118:
    // 0x385118: 0xc0e1154  jal         func_384550
    ctx->pc = 0x385118u;
    SET_GPR_U32(ctx, 31, 0x385120u);
    ctx->pc = 0x38511Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385118u;
            // 0x38511c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384550u;
    if (runtime->hasFunction(0x384550u)) {
        auto targetFn = runtime->lookupFunction(0x384550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385120u; }
        if (ctx->pc != 0x385120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384550_0x384550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385120u; }
        if (ctx->pc != 0x385120u) { return; }
    }
    ctx->pc = 0x385120u;
label_385120:
    // 0x385120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x385120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385124: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x385124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x385128: 0x24a55c40  addiu       $a1, $a1, 0x5C40
    ctx->pc = 0x385128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23616));
    // 0x38512c: 0xc0f6518  jal         func_3D9460
    ctx->pc = 0x38512Cu;
    SET_GPR_U32(ctx, 31, 0x385134u);
    ctx->pc = 0x385130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38512Cu;
            // 0x385130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9460u;
    if (runtime->hasFunction(0x3D9460u)) {
        auto targetFn = runtime->lookupFunction(0x3D9460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385134u; }
        if (ctx->pc != 0x385134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D9460_0x3d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385134u; }
        if (ctx->pc != 0x385134u) { return; }
    }
    ctx->pc = 0x385134u;
label_385134:
    // 0x385134: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x385134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x385138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38513c: 0xc0f6518  jal         func_3D9460
    ctx->pc = 0x38513Cu;
    SET_GPR_U32(ctx, 31, 0x385144u);
    ctx->pc = 0x385140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38513Cu;
            // 0x385140: 0x24a55c60  addiu       $a1, $a1, 0x5C60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9460u;
    if (runtime->hasFunction(0x3D9460u)) {
        auto targetFn = runtime->lookupFunction(0x3D9460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385144u; }
        if (ctx->pc != 0x385144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D9460_0x3d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385144u; }
        if (ctx->pc != 0x385144u) { return; }
    }
    ctx->pc = 0x385144u;
label_385144:
    // 0x385144: 0xc0f64e8  jal         func_3D93A0
    ctx->pc = 0x385144u;
    SET_GPR_U32(ctx, 31, 0x38514Cu);
    ctx->pc = 0x385148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385144u;
            // 0x385148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D93A0u;
    if (runtime->hasFunction(0x3D93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3D93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38514Cu; }
        if (ctx->pc != 0x38514Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D93A0_0x3d93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38514Cu; }
        if (ctx->pc != 0x38514Cu) { return; }
    }
    ctx->pc = 0x38514Cu;
label_38514c:
    // 0x38514c: 0xc0e10e0  jal         func_384380
    ctx->pc = 0x38514Cu;
    SET_GPR_U32(ctx, 31, 0x385154u);
    ctx->pc = 0x385150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38514Cu;
            // 0x385150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384380u;
    if (runtime->hasFunction(0x384380u)) {
        auto targetFn = runtime->lookupFunction(0x384380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385154u; }
        if (ctx->pc != 0x385154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384380_0x384380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385154u; }
        if (ctx->pc != 0x385154u) { return; }
    }
    ctx->pc = 0x385154u;
label_385154:
    // 0x385154: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x385154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x385158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x385158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38515c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38515cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385160: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x385160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x385164: 0xae62005c  sw          $v0, 0x5C($s3)
    ctx->pc = 0x385164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
    // 0x385168: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x385168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38516c: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x38516cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x385170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x385170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x385174: 0xc07626c  jal         func_1D89B0
    ctx->pc = 0x385174u;
    SET_GPR_U32(ctx, 31, 0x38517Cu);
    ctx->pc = 0x385178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385174u;
            // 0x385178: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38517Cu; }
        if (ctx->pc != 0x38517Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38517Cu; }
        if (ctx->pc != 0x38517Cu) { return; }
    }
    ctx->pc = 0x38517Cu;
label_38517c:
    // 0x38517c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x38517cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_385180:
    // 0x385180: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x385180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x385184: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x385184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x385188: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x385188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38518c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38518cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x385190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385194: 0x3e00008  jr          $ra
    ctx->pc = 0x385194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385194u;
            // 0x385198: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38519Cu;
    // 0x38519c: 0x0  nop
    ctx->pc = 0x38519cu;
    // NOP
}
