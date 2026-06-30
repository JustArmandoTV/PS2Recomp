#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BB790
// Address: 0x4bb790 - 0x4bb9c0
void sub_004BB790_0x4bb790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BB790_0x4bb790");
#endif

    switch (ctx->pc) {
        case 0x4bb7c4u: goto label_4bb7c4;
        case 0x4bb7dcu: goto label_4bb7dc;
        case 0x4bb7e8u: goto label_4bb7e8;
        case 0x4bb84cu: goto label_4bb84c;
        case 0x4bb854u: goto label_4bb854;
        case 0x4bb874u: goto label_4bb874;
        case 0x4bb97cu: goto label_4bb97c;
        case 0x4bb984u: goto label_4bb984;
        case 0x4bb9a0u: goto label_4bb9a0;
        default: break;
    }

    ctx->pc = 0x4bb790u;

    // 0x4bb790: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4bb790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4bb794: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4bb794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4bb798: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4bb798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4bb79c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4bb79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4bb7a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4bb7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4bb7a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4bb7a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb7a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4bb7a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4bb7ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4bb7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb7b0: 0x90a20e3d  lbu         $v0, 0xE3D($a1)
    ctx->pc = 0x4bb7b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3645)));
    // 0x4bb7b4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4bb7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x4bb7b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4bb7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4bb7bc: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x4BB7BCu;
    SET_GPR_U32(ctx, 31, 0x4BB7C4u);
    ctx->pc = 0x4BB7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB7BCu;
            // 0x4bb7c0: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB7C4u; }
        if (ctx->pc != 0x4BB7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB7C4u; }
        if (ctx->pc != 0x4BB7C4u) { return; }
    }
    ctx->pc = 0x4BB7C4u;
label_4bb7c4:
    // 0x4bb7c4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x4bb7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4bb7c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4bb7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4bb7cc: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x4bb7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4bb7d0: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x4bb7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4bb7d4: 0xc04ce64  jal         func_133990
    ctx->pc = 0x4BB7D4u;
    SET_GPR_U32(ctx, 31, 0x4BB7DCu);
    ctx->pc = 0x4BB7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB7D4u;
            // 0x4bb7d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB7DCu; }
        if (ctx->pc != 0x4BB7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB7DCu; }
        if (ctx->pc != 0x4BB7DCu) { return; }
    }
    ctx->pc = 0x4BB7DCu;
label_4bb7dc:
    // 0x4bb7dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4bb7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4bb7e0: 0xc04cce4  jal         func_133390
    ctx->pc = 0x4BB7E0u;
    SET_GPR_U32(ctx, 31, 0x4BB7E8u);
    ctx->pc = 0x4BB7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB7E0u;
            // 0x4bb7e4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB7E8u; }
        if (ctx->pc != 0x4BB7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB7E8u; }
        if (ctx->pc != 0x4BB7E8u) { return; }
    }
    ctx->pc = 0x4BB7E8u;
label_4bb7e8:
    // 0x4bb7e8: 0x3c033eef  lui         $v1, 0x3EEF
    ctx->pc = 0x4bb7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16111 << 16));
    // 0x4bb7ec: 0x3463684c  ori         $v1, $v1, 0x684C
    ctx->pc = 0x4bb7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26700);
    // 0x4bb7f0: 0xc6040de4  lwc1        $f4, 0xDE4($s0)
    ctx->pc = 0x4bb7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4bb7f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4bb7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bb7f8: 0x0  nop
    ctx->pc = 0x4bb7f8u;
    // NOP
    // 0x4bb7fc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x4bb7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bb800: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x4BB800u;
    {
        const bool branch_taken_0x4bb800 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BB804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB800u;
            // 0x4bb804: 0xc7a20048  lwc1        $f2, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb800) {
            ctx->pc = 0x4BB87Cu;
            goto label_4bb87c;
        }
    }
    ctx->pc = 0x4BB808u;
    // 0x4bb808: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x4bb808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x4bb80c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4bb80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bb810: 0x0  nop
    ctx->pc = 0x4bb810u;
    // NOP
    // 0x4bb814: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x4bb814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bb818: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x4BB818u;
    {
        const bool branch_taken_0x4bb818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bb818) {
            ctx->pc = 0x4BB81Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB818u;
            // 0x4bb81c: 0x3c033e84  lui         $v1, 0x3E84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16004 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BB880u;
            goto label_4bb880;
        }
    }
    ctx->pc = 0x4BB820u;
    // 0x4bb820: 0x3c023f88  lui         $v0, 0x3F88
    ctx->pc = 0x4bb820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16264 << 16));
    // 0x4bb824: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x4bb824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
    // 0x4bb828: 0x3443e38e  ori         $v1, $v0, 0xE38E
    ctx->pc = 0x4bb828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58254);
    // 0x4bb82c: 0xae030de4  sw          $v1, 0xDE4($s0)
    ctx->pc = 0x4bb82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
    // 0x4bb830: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x4bb830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x4bb834: 0xc6010a7c  lwc1        $f1, 0xA7C($s0)
    ctx->pc = 0x4bb834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bb838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bb838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bb83c: 0x0  nop
    ctx->pc = 0x4bb83cu;
    // NOP
    // 0x4bb840: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4bb840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4bb844: 0xc0eea24  jal         func_3BA890
    ctx->pc = 0x4BB844u;
    SET_GPR_U32(ctx, 31, 0x4BB84Cu);
    ctx->pc = 0x4BB848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB844u;
            // 0x4bb848: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB84Cu; }
        if (ctx->pc != 0x4BB84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB84Cu; }
        if (ctx->pc != 0x4BB84Cu) { return; }
    }
    ctx->pc = 0x4BB84Cu;
label_4bb84c:
    // 0x4bb84c: 0xc040180  jal         func_100600
    ctx->pc = 0x4BB84Cu;
    SET_GPR_U32(ctx, 31, 0x4BB854u);
    ctx->pc = 0x4BB850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB84Cu;
            // 0x4bb850: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB854u; }
        if (ctx->pc != 0x4BB854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB854u; }
        if (ctx->pc != 0x4BB854u) { return; }
    }
    ctx->pc = 0x4BB854u;
label_4bb854:
    // 0x4bb854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bb854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb858: 0x50800052  beql        $a0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x4BB858u;
    {
        const bool branch_taken_0x4bb858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb858) {
            ctx->pc = 0x4BB85Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB858u;
            // 0x4bb85c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BB9A4u;
            goto label_4bb9a4;
        }
    }
    ctx->pc = 0x4BB860u;
    // 0x4bb860: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x4bb860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x4bb864: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x4bb864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x4bb868: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4bb868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4bb86c: 0xc11ebc4  jal         func_47AF10
    ctx->pc = 0x4BB86Cu;
    SET_GPR_U32(ctx, 31, 0x4BB874u);
    ctx->pc = 0x4BB870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB86Cu;
            // 0x4bb870: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB874u; }
        if (ctx->pc != 0x4BB874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB874u; }
        if (ctx->pc != 0x4BB874u) { return; }
    }
    ctx->pc = 0x4BB874u;
label_4bb874:
    // 0x4bb874: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x4BB874u;
    {
        const bool branch_taken_0x4bb874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb874) {
            ctx->pc = 0x4BB9A0u;
            goto label_4bb9a0;
        }
    }
    ctx->pc = 0x4BB87Cu;
label_4bb87c:
    // 0x4bb87c: 0x3c033e84  lui         $v1, 0x3E84
    ctx->pc = 0x4bb87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16004 << 16));
label_4bb880:
    // 0x4bb880: 0x3463bda1  ori         $v1, $v1, 0xBDA1
    ctx->pc = 0x4bb880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48545);
    // 0x4bb884: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4bb884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bb888: 0x0  nop
    ctx->pc = 0x4bb888u;
    // NOP
    // 0x4bb88c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x4bb88cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bb890: 0x45010043  bc1t        . + 4 + (0x43 << 2)
    ctx->pc = 0x4BB890u;
    {
        const bool branch_taken_0x4bb890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bb890) {
            ctx->pc = 0x4BB9A0u;
            goto label_4bb9a0;
        }
    }
    ctx->pc = 0x4BB898u;
    // 0x4bb898: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x4bb898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x4bb89c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4bb89cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bb8a0: 0x0  nop
    ctx->pc = 0x4bb8a0u;
    // NOP
    // 0x4bb8a4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x4bb8a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bb8a8: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x4BB8A8u;
    {
        const bool branch_taken_0x4bb8a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bb8a8) {
            ctx->pc = 0x4BB9A0u;
            goto label_4bb9a0;
        }
    }
    ctx->pc = 0x4BB8B0u;
    // 0x4bb8b0: 0x3c023eef  lui         $v0, 0x3EEF
    ctx->pc = 0x4bb8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16111 << 16));
    // 0x4bb8b4: 0x3442684c  ori         $v0, $v0, 0x684C
    ctx->pc = 0x4bb8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26700);
    // 0x4bb8b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bb8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bb8bc: 0x0  nop
    ctx->pc = 0x4bb8bcu;
    // NOP
    // 0x4bb8c0: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x4bb8c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bb8c4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x4BB8C4u;
    {
        const bool branch_taken_0x4bb8c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bb8c4) {
            ctx->pc = 0x4BB8C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB8C4u;
            // 0x4bb8c8: 0x46012041  sub.s       $f1, $f4, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BB8D4u;
            goto label_4bb8d4;
        }
    }
    ctx->pc = 0x4BB8CCu;
    // 0x4bb8cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4BB8CCu;
    {
        const bool branch_taken_0x4bb8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB8CCu;
            // 0x4bb8d0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb8cc) {
            ctx->pc = 0x4BB8F0u;
            goto label_4bb8f0;
        }
    }
    ctx->pc = 0x4BB8D4u;
label_4bb8d4:
    // 0x4bb8d4: 0x3c023cbd  lui         $v0, 0x3CBD
    ctx->pc = 0x4bb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15549 << 16));
    // 0x4bb8d8: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x4bb8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
    // 0x4bb8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bb8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bb8e0: 0x0  nop
    ctx->pc = 0x4bb8e0u;
    // NOP
    // 0x4bb8e4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4bb8e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x4bb8e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bb8e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4bb8ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4bb8ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_4bb8f0:
    // 0x4bb8f0: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x4bb8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bb8f4: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x4bb8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x4bb8f8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x4bb8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x4bb8fc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4bb8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4bb900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bb900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bb904: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4bb904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4bb908: 0x460200c1  sub.s       $f3, $f0, $f2
    ctx->pc = 0x4bb908u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4bb90c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4bb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4bb910: 0x24846e50  addiu       $a0, $a0, 0x6E50
    ctx->pc = 0x4bb910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28240));
    // 0x4bb914: 0x24636e20  addiu       $v1, $v1, 0x6E20
    ctx->pc = 0x4bb914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28192));
    // 0x4bb918: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x4bb918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4bb91c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4bb91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4bb920: 0x24e76e80  addiu       $a3, $a3, 0x6E80
    ctx->pc = 0x4bb920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28288));
    // 0x4bb924: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x4bb924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
    // 0x4bb928: 0xc4406e18  lwc1        $f0, 0x6E18($v0)
    ctx->pc = 0x4bb928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bb92c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x4bb92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4bb930: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x4bb930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bb934: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4bb934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4bb938: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x4bb938u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x4bb93c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bb93cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4bb940: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4bb940u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bb944: 0x0  nop
    ctx->pc = 0x4bb944u;
    // NOP
    // 0x4bb948: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bb948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bb94c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4bb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bb950: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x4bb950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4bb954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bb954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bb958: 0x0  nop
    ctx->pc = 0x4bb958u;
    // NOP
    // 0x4bb95c: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x4bb95cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x4bb960: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x4bb960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x4bb964: 0xe6000de4  swc1        $f0, 0xDE4($s0)
    ctx->pc = 0x4bb964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
    // 0x4bb968: 0x46031502  mul.s       $f20, $f2, $f3
    ctx->pc = 0x4bb968u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4bb96c: 0xc6000a7c  lwc1        $f0, 0xA7C($s0)
    ctx->pc = 0x4bb96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bb970: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4bb970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x4bb974: 0xc0eea24  jal         func_3BA890
    ctx->pc = 0x4BB974u;
    SET_GPR_U32(ctx, 31, 0x4BB97Cu);
    ctx->pc = 0x4BB978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB974u;
            // 0x4bb978: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB97Cu; }
        if (ctx->pc != 0x4BB97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB97Cu; }
        if (ctx->pc != 0x4BB97Cu) { return; }
    }
    ctx->pc = 0x4BB97Cu;
label_4bb97c:
    // 0x4bb97c: 0xc040180  jal         func_100600
    ctx->pc = 0x4BB97Cu;
    SET_GPR_U32(ctx, 31, 0x4BB984u);
    ctx->pc = 0x4BB980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB97Cu;
            // 0x4bb980: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB984u; }
        if (ctx->pc != 0x4BB984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB984u; }
        if (ctx->pc != 0x4BB984u) { return; }
    }
    ctx->pc = 0x4BB984u;
label_4bb984:
    // 0x4bb984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bb984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb988: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BB988u;
    {
        const bool branch_taken_0x4bb988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb988) {
            ctx->pc = 0x4BB9A0u;
            goto label_4bb9a0;
        }
    }
    ctx->pc = 0x4BB990u;
    // 0x4bb990: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x4bb990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x4bb994: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4bb994u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4bb998: 0xc11ebc4  jal         func_47AF10
    ctx->pc = 0x4BB998u;
    SET_GPR_U32(ctx, 31, 0x4BB9A0u);
    ctx->pc = 0x4BB99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB998u;
            // 0x4bb99c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB9A0u; }
        if (ctx->pc != 0x4BB9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB9A0u; }
        if (ctx->pc != 0x4BB9A0u) { return; }
    }
    ctx->pc = 0x4BB9A0u;
label_4bb9a0:
    // 0x4bb9a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4bb9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4bb9a4:
    // 0x4bb9a4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4bb9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4bb9a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4bb9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bb9ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4bb9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bb9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4BB9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BB9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB9B0u;
            // 0x4bb9b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BB9B8u;
    // 0x4bb9b8: 0x0  nop
    ctx->pc = 0x4bb9b8u;
    // NOP
    // 0x4bb9bc: 0x0  nop
    ctx->pc = 0x4bb9bcu;
    // NOP
}
