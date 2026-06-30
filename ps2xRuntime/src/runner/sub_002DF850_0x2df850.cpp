#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DF850
// Address: 0x2df850 - 0x2dfb90
void sub_002DF850_0x2df850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF850_0x2df850");
#endif

    switch (ctx->pc) {
        case 0x2df8bcu: goto label_2df8bc;
        case 0x2df8d8u: goto label_2df8d8;
        case 0x2df914u: goto label_2df914;
        case 0x2df930u: goto label_2df930;
        case 0x2df944u: goto label_2df944;
        case 0x2df988u: goto label_2df988;
        case 0x2df994u: goto label_2df994;
        case 0x2df9bcu: goto label_2df9bc;
        case 0x2df9c8u: goto label_2df9c8;
        case 0x2df9ecu: goto label_2df9ec;
        case 0x2df9f8u: goto label_2df9f8;
        case 0x2dfa04u: goto label_2dfa04;
        case 0x2dfa38u: goto label_2dfa38;
        case 0x2dfa50u: goto label_2dfa50;
        case 0x2dfa80u: goto label_2dfa80;
        case 0x2dfa88u: goto label_2dfa88;
        case 0x2dfaa0u: goto label_2dfaa0;
        case 0x2dfb3cu: goto label_2dfb3c;
        case 0x2dfb48u: goto label_2dfb48;
        default: break;
    }

    ctx->pc = 0x2df850u;

    // 0x2df850: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2df850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2df854: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2df854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2df858: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2df858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2df85c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2df85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2df860: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2df860u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df864: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2df864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2df868: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x2df868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x2df86c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2df86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2df870: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2df870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2df874: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2df874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2df878: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x2df878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x2df87c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2df87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2df880: 0x344223f0  ori         $v0, $v0, 0x23F0
    ctx->pc = 0x2df880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9200);
    // 0x2df884: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2df884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2df888: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2df888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2df88c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2df88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2df890: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2df890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2df894: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2df894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2df898: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2df898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df89c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2df89cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2df8a0: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2df8a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df8a4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2df8a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2df8a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2df8a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2df8ac: 0x8c73000c  lw          $s3, 0xC($v1)
    ctx->pc = 0x2df8acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2df8b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2df8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2df8b4: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2DF8B4u;
    SET_GPR_U32(ctx, 31, 0x2DF8BCu);
    ctx->pc = 0x2DF8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF8B4u;
            // 0x2df8b8: 0xafa800b0  sw          $t0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF8BCu; }
        if (ctx->pc != 0x2DF8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF8BCu; }
        if (ctx->pc != 0x2DF8BCu) { return; }
    }
    ctx->pc = 0x2DF8BCu;
label_2df8bc:
    // 0x2df8bc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2df8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2df8c0: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2df8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2df8c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2df8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2df8c8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2df8c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2df8cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2df8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2df8d0: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2DF8D0u;
    SET_GPR_U32(ctx, 31, 0x2DF8D8u);
    ctx->pc = 0x2DF8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF8D0u;
            // 0x2df8d4: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF8D8u; }
        if (ctx->pc != 0x2DF8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF8D8u; }
        if (ctx->pc != 0x2DF8D8u) { return; }
    }
    ctx->pc = 0x2DF8D8u;
label_2df8d8:
    // 0x2df8d8: 0x1260009b  beqz        $s3, . + 4 + (0x9B << 2)
    ctx->pc = 0x2DF8D8u;
    {
        const bool branch_taken_0x2df8d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF8D8u;
            // 0x2df8dc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df8d8) {
            ctx->pc = 0x2DFB48u;
            goto label_2dfb48;
        }
    }
    ctx->pc = 0x2DF8E0u;
    // 0x2df8e0: 0xa6400050  sh          $zero, 0x50($s2)
    ctx->pc = 0x2df8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x2df8e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2df8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2df8e8: 0xa6400056  sh          $zero, 0x56($s2)
    ctx->pc = 0x2df8e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2df8ec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2df8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2df8f0: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x2df8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x2df8f4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2df8f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df8f8: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x2df8f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2df8fc: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x2df8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2df900: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2df900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2df904: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2df904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2df908: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2df908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df90c: 0xc0bc5b0  jal         func_2F16C0
    ctx->pc = 0x2DF90Cu;
    SET_GPR_U32(ctx, 31, 0x2DF914u);
    ctx->pc = 0x2DF910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF90Cu;
            // 0x2df910: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F16C0u;
    if (runtime->hasFunction(0x2F16C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F16C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF914u; }
        if (ctx->pc != 0x2DF914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F16C0_0x2f16c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF914u; }
        if (ctx->pc != 0x2DF914u) { return; }
    }
    ctx->pc = 0x2DF914u;
label_2df914:
    // 0x2df914: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2df914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df918: 0x0  nop
    ctx->pc = 0x2df918u;
    // NOP
    // 0x2df91c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2df91cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df920: 0x4501006f  bc1t        . + 4 + (0x6F << 2)
    ctx->pc = 0x2DF920u;
    {
        const bool branch_taken_0x2df920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df920) {
            ctx->pc = 0x2DFAE0u;
            goto label_2dfae0;
        }
    }
    ctx->pc = 0x2DF928u;
    // 0x2df928: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2df928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df92c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2df92cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df930:
    // 0x2df930: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2df930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2df934: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2df934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df938: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x2df938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2df93c: 0xc0bc5b0  jal         func_2F16C0
    ctx->pc = 0x2DF93Cu;
    SET_GPR_U32(ctx, 31, 0x2DF944u);
    ctx->pc = 0x2DF940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF93Cu;
            // 0x2df940: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F16C0u;
    if (runtime->hasFunction(0x2F16C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F16C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF944u; }
        if (ctx->pc != 0x2DF944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F16C0_0x2f16c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF944u; }
        if (ctx->pc != 0x2DF944u) { return; }
    }
    ctx->pc = 0x2DF944u;
label_2df944:
    // 0x2df944: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x2df944u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2df948: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x2df948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df94c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2DF94Cu;
    {
        const bool branch_taken_0x2df94c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df94c) {
            ctx->pc = 0x2DF978u;
            goto label_2df978;
        }
    }
    ctx->pc = 0x2DF954u;
    // 0x2df954: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2df954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df958: 0x0  nop
    ctx->pc = 0x2df958u;
    // NOP
    // 0x2df95c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2df95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df960: 0x45010057  bc1t        . + 4 + (0x57 << 2)
    ctx->pc = 0x2DF960u;
    {
        const bool branch_taken_0x2df960 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df960) {
            ctx->pc = 0x2DFAC0u;
            goto label_2dfac0;
        }
    }
    ctx->pc = 0x2DF968u;
    // 0x2df968: 0x9663001c  lhu         $v1, 0x1C($s3)
    ctx->pc = 0x2df968u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2df96c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2df96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2df970: 0x16030053  bne         $s0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x2DF970u;
    {
        const bool branch_taken_0x2df970 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2df970) {
            ctx->pc = 0x2DFAC0u;
            goto label_2dfac0;
        }
    }
    ctx->pc = 0x2DF978u;
label_2df978:
    // 0x2df978: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2df978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2df97c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2df97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2df980: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2DF980u;
    SET_GPR_U32(ctx, 31, 0x2DF988u);
    ctx->pc = 0x2DF984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF980u;
            // 0x2df984: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF988u; }
        if (ctx->pc != 0x2DF988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF988u; }
        if (ctx->pc != 0x2DF988u) { return; }
    }
    ctx->pc = 0x2DF988u;
label_2df988:
    // 0x2df988: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2df988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2df98c: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2DF98Cu;
    SET_GPR_U32(ctx, 31, 0x2DF994u);
    ctx->pc = 0x2DF990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF98Cu;
            // 0x2df990: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF994u; }
        if (ctx->pc != 0x2DF994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF994u; }
        if (ctx->pc != 0x2DF994u) { return; }
    }
    ctx->pc = 0x2DF994u;
label_2df994:
    // 0x2df994: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2df994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df998: 0x0  nop
    ctx->pc = 0x2df998u;
    // NOP
    // 0x2df99c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2df99cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df9a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DF9A0u;
    {
        const bool branch_taken_0x2df9a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DF9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF9A0u;
            // 0x2df9a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df9a0) {
            ctx->pc = 0x2DF9ACu;
            goto label_2df9ac;
        }
    }
    ctx->pc = 0x2DF9A8u;
    // 0x2df9a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2df9a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df9ac:
    // 0x2df9ac: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2df9acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2df9b0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2df9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2df9b4: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2DF9B4u;
    SET_GPR_U32(ctx, 31, 0x2DF9BCu);
    ctx->pc = 0x2DF9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF9B4u;
            // 0x2df9b8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9BCu; }
        if (ctx->pc != 0x2DF9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9BCu; }
        if (ctx->pc != 0x2DF9BCu) { return; }
    }
    ctx->pc = 0x2DF9BCu;
label_2df9bc:
    // 0x2df9bc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2df9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2df9c0: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x2DF9C0u;
    SET_GPR_U32(ctx, 31, 0x2DF9C8u);
    ctx->pc = 0x2DF9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF9C0u;
            // 0x2df9c4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9C8u; }
        if (ctx->pc != 0x2DF9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9C8u; }
        if (ctx->pc != 0x2DF9C8u) { return; }
    }
    ctx->pc = 0x2DF9C8u;
label_2df9c8:
    // 0x2df9c8: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2df9c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df9cc: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x2DF9CCu;
    {
        const bool branch_taken_0x2df9cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df9cc) {
            ctx->pc = 0x2DFAC0u;
            goto label_2dfac0;
        }
    }
    ctx->pc = 0x2DF9D4u;
    // 0x2df9d4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2df9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2df9d8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2df9d8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2df9dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df9e0: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2df9e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x2df9e4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2DF9E4u;
    SET_GPR_U32(ctx, 31, 0x2DF9ECu);
    ctx->pc = 0x2DF9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF9E4u;
            // 0x2df9e8: 0x562821  addu        $a1, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9ECu; }
        if (ctx->pc != 0x2DF9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9ECu; }
        if (ctx->pc != 0x2DF9ECu) { return; }
    }
    ctx->pc = 0x2DF9ECu;
label_2df9ec:
    // 0x2df9ec: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2df9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2df9f0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2DF9F0u;
    SET_GPR_U32(ctx, 31, 0x2DF9F8u);
    ctx->pc = 0x2DF9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF9F0u;
            // 0x2df9f4: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9F8u; }
        if (ctx->pc != 0x2DF9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9F8u; }
        if (ctx->pc != 0x2DF9F8u) { return; }
    }
    ctx->pc = 0x2DF9F8u;
label_2df9f8:
    // 0x2df9f8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2df9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2df9fc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2DF9FCu;
    SET_GPR_U32(ctx, 31, 0x2DFA04u);
    ctx->pc = 0x2DFA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF9FCu;
            // 0x2dfa00: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA04u; }
        if (ctx->pc != 0x2DFA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA04u; }
        if (ctx->pc != 0x2DFA04u) { return; }
    }
    ctx->pc = 0x2DFA04u;
label_2dfa04:
    // 0x2dfa04: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x2dfa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2dfa08: 0xae530040  sw          $s3, 0x40($s2)
    ctx->pc = 0x2dfa08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 19));
    // 0x2dfa0c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2dfa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2dfa10: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2dfa10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2dfa14: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2dfa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2dfa18: 0xa6420052  sh          $v0, 0x52($s2)
    ctx->pc = 0x2dfa18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 82), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dfa1c: 0xa65e0054  sh          $fp, 0x54($s2)
    ctx->pc = 0x2dfa1cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 84), (uint16_t)GPR_U32(ctx, 30));
    // 0x2dfa20: 0xa6430050  sh          $v1, 0x50($s2)
    ctx->pc = 0x2dfa20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dfa24: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x2dfa24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dfa28: 0x2455ffff  addiu       $s5, $v0, -0x1
    ctx->pc = 0x2dfa28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2dfa2c: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x2dfa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x2dfa30: 0x15a100  sll         $s4, $s5, 4
    ctx->pc = 0x2dfa30u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2dfa34: 0x0  nop
    ctx->pc = 0x2dfa34u;
    // NOP
label_2dfa38:
    // 0x2dfa38: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2dfa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2dfa3c: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x2dfa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2dfa40: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2dfa40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dfa44: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2dfa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dfa48: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2DFA48u;
    SET_GPR_U32(ctx, 31, 0x2DFA50u);
    ctx->pc = 0x2DFA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFA48u;
            // 0x2dfa4c: 0x742021  addu        $a0, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA50u; }
        if (ctx->pc != 0x2DFA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA50u; }
        if (ctx->pc != 0x2DFA50u) { return; }
    }
    ctx->pc = 0x2DFA50u;
label_2dfa50:
    // 0x2dfa50: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x2dfa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfa54: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2dfa54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2dfa58: 0x2694fff0  addiu       $s4, $s4, -0x10
    ctx->pc = 0x2dfa58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x2dfa5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dfa5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dfa60: 0x16a0fff5  bnez        $s5, . + 4 + (-0xB << 2)
    ctx->pc = 0x2DFA60u;
    {
        const bool branch_taken_0x2dfa60 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFA60u;
            // 0x2dfa64: 0xe6400048  swc1        $f0, 0x48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfa60) {
            ctx->pc = 0x2DFA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dfa38;
        }
    }
    ctx->pc = 0x2DFA68u;
    // 0x2dfa68: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2dfa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2dfa6c: 0x10a900  sll         $s5, $s0, 4
    ctx->pc = 0x2dfa6cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2dfa70: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2dfa70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dfa74: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2dfa74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa78: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2DFA78u;
    SET_GPR_U32(ctx, 31, 0x2DFA80u);
    ctx->pc = 0x2DFA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFA78u;
            // 0x2dfa7c: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA80u; }
        if (ctx->pc != 0x2DFA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA80u; }
        if (ctx->pc != 0x2DFA80u) { return; }
    }
    ctx->pc = 0x2DFA80u;
label_2dfa80:
    // 0x2dfa80: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DFA80u;
    {
        const bool branch_taken_0x2dfa80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFA80u;
            // 0x2dfa84: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfa80) {
            ctx->pc = 0x2DFAB0u;
            goto label_2dfab0;
        }
    }
    ctx->pc = 0x2DFA88u;
label_2dfa88:
    // 0x2dfa88: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2dfa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2dfa8c: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x2dfa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2dfa90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2dfa90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dfa94: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2dfa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dfa98: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2DFA98u;
    SET_GPR_U32(ctx, 31, 0x2DFAA0u);
    ctx->pc = 0x2DFA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFA98u;
            // 0x2dfa9c: 0x752021  addu        $a0, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFAA0u; }
        if (ctx->pc != 0x2DFAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFAA0u; }
        if (ctx->pc != 0x2DFAA0u) { return; }
    }
    ctx->pc = 0x2DFAA0u;
label_2dfaa0:
    // 0x2dfaa0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2dfaa0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2dfaa4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2dfaa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2dfaa8: 0x1680fff7  bnez        $s4, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DFAA8u;
    {
        const bool branch_taken_0x2dfaa8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFAA8u;
            // 0x2dfaac: 0x26b5fff0  addiu       $s5, $s5, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfaa8) {
            ctx->pc = 0x2DFA88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dfa88;
        }
    }
    ctx->pc = 0x2DFAB0u;
label_2dfab0:
    // 0x2dfab0: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x2dfab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfab4: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2dfab4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2dfab8: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x2dfab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x2dfabc: 0x0  nop
    ctx->pc = 0x2dfabcu;
    // NOP
label_2dfac0:
    // 0x2dfac0: 0x9663001c  lhu         $v1, 0x1C($s3)
    ctx->pc = 0x2dfac0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dfac4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2dfac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2dfac8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2dfac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2dfacc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dfaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dfad0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2dfad0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dfad4: 0x1460ff96  bnez        $v1, . + 4 + (-0x6A << 2)
    ctx->pc = 0x2DFAD4u;
    {
        const bool branch_taken_0x2dfad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFAD4u;
            // 0x2dfad8: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfad4) {
            ctx->pc = 0x2DF930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2df930;
        }
    }
    ctx->pc = 0x2DFADCu;
    // 0x2dfadc: 0x0  nop
    ctx->pc = 0x2dfadcu;
    // NOP
label_2dfae0:
    // 0x2dfae0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2dfae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfae4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2dfae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dfae8: 0x0  nop
    ctx->pc = 0x2dfae8u;
    // NOP
    // 0x2dfaec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2dfaecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dfaf0: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x2DFAF0u;
    {
        const bool branch_taken_0x2dfaf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfaf0) {
            ctx->pc = 0x2DFAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFAF0u;
            // 0x2dfaf4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DFB4Cu;
            goto label_2dfb4c;
        }
    }
    ctx->pc = 0x2DFAF8u;
    // 0x2dfaf8: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2dfaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfafc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2dfafcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dfb00: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2DFB00u;
    {
        const bool branch_taken_0x2dfb00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfb00) {
            ctx->pc = 0x2DFB48u;
            goto label_2dfb48;
        }
    }
    ctx->pc = 0x2DFB08u;
    // 0x2dfb08: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x2dfb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfb0c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2dfb0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dfb10: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2DFB10u;
    {
        const bool branch_taken_0x2dfb10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfb10) {
            ctx->pc = 0x2DFB48u;
            goto label_2dfb48;
        }
    }
    ctx->pc = 0x2DFB18u;
    // 0x2dfb18: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2dfb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2dfb1c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2dfb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2dfb20: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x2dfb20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x2dfb24: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x2dfb24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dfb28: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x2dfb28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2dfb2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2dfb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2dfb30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2dfb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dfb34: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2DFB34u;
    SET_GPR_U32(ctx, 31, 0x2DFB3Cu);
    ctx->pc = 0x2DFB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFB34u;
            // 0x2dfb38: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB3Cu; }
        if (ctx->pc != 0x2DFB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB3Cu; }
        if (ctx->pc != 0x2DFB3Cu) { return; }
    }
    ctx->pc = 0x2DFB3Cu;
label_2dfb3c:
    // 0x2dfb3c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2dfb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2dfb40: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2DFB40u;
    SET_GPR_U32(ctx, 31, 0x2DFB48u);
    ctx->pc = 0x2DFB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFB40u;
            // 0x2dfb44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB48u; }
        if (ctx->pc != 0x2DFB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB48u; }
        if (ctx->pc != 0x2DFB48u) { return; }
    }
    ctx->pc = 0x2DFB48u;
label_2dfb48:
    // 0x2dfb48: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2dfb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2dfb4c:
    // 0x2dfb4c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2dfb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dfb50: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2dfb50u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dfb54: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2dfb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dfb58: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2dfb58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dfb5c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2dfb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dfb60: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2dfb60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dfb64: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2dfb64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dfb68: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2dfb68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dfb6c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2dfb6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dfb70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2dfb70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dfb74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2dfb74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfb78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dfb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFB7Cu;
            // 0x2dfb80: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DFB84u;
    // 0x2dfb84: 0x0  nop
    ctx->pc = 0x2dfb84u;
    // NOP
    // 0x2dfb88: 0x0  nop
    ctx->pc = 0x2dfb88u;
    // NOP
    // 0x2dfb8c: 0x0  nop
    ctx->pc = 0x2dfb8cu;
    // NOP
}
