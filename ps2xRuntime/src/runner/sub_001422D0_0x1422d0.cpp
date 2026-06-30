#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001422D0
// Address: 0x1422d0 - 0x142820
void sub_001422D0_0x1422d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001422D0_0x1422d0");
#endif

    switch (ctx->pc) {
        case 0x142320u: goto label_142320;
        case 0x1423b0u: goto label_1423b0;
        case 0x1423d8u: goto label_1423d8;
        case 0x1423fcu: goto label_1423fc;
        case 0x1424e8u: goto label_1424e8;
        case 0x1424f8u: goto label_1424f8;
        case 0x1425acu: goto label_1425ac;
        case 0x1426a0u: goto label_1426a0;
        case 0x1426c8u: goto label_1426c8;
        case 0x1426e8u: goto label_1426e8;
        case 0x142708u: goto label_142708;
        case 0x142714u: goto label_142714;
        case 0x142720u: goto label_142720;
        case 0x142748u: goto label_142748;
        case 0x14277cu: goto label_14277c;
        case 0x142788u: goto label_142788;
        case 0x142794u: goto label_142794;
        default: break;
    }

    ctx->pc = 0x1422d0u;

    // 0x1422d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1422d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1422d4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1422d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1422d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1422d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1422dc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1422dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1422e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1422e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1422e4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1422e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1422e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1422ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1422ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1422f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1422f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1422f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1422f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1422fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1422fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142300: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x142300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x142304: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x142304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x142308: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x142308u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14230c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14230cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142310: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x142310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x142314: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x142314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142318: 0xc056b04  jal         func_15AC10
    ctx->pc = 0x142318u;
    SET_GPR_U32(ctx, 31, 0x142320u);
    ctx->pc = 0x14231Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142318u;
            // 0x14231c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC10u;
    if (runtime->hasFunction(0x15AC10u)) {
        auto targetFn = runtime->lookupFunction(0x15AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142320u; }
        if (ctx->pc != 0x142320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC10_0x15ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142320u; }
        if (ctx->pc != 0x142320u) { return; }
    }
    ctx->pc = 0x142320u;
label_142320:
    // 0x142320: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x142320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x142324: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x142324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x142328: 0xac405810  sw          $zero, 0x5810($v0)
    ctx->pc = 0x142328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22544), GPR_U32(ctx, 0));
    // 0x14232c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x14232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x142330: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x142330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x142334: 0xac605820  sw          $zero, 0x5820($v1)
    ctx->pc = 0x142334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22560), GPR_U32(ctx, 0));
    // 0x142338: 0xac405824  sw          $zero, 0x5824($v0)
    ctx->pc = 0x142338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 0));
    // 0x14233c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14233cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142340: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142344: 0x1663000c  bne         $s3, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x142344u;
    {
        const bool branch_taken_0x142344 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x142348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142344u;
            // 0x142348: 0xac444ab4  sw          $a0, 0x4AB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 19124), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142344) {
            ctx->pc = 0x142378u;
            goto label_142378;
        }
    }
    ctx->pc = 0x14234Cu;
    // 0x14234c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14234cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x142350: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x142350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x142354: 0xac435810  sw          $v1, 0x5810($v0)
    ctx->pc = 0x142354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22544), GPR_U32(ctx, 3));
    // 0x142358: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x142358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14235c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14235cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x142360: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x142360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x142364: 0xac644ab4  sw          $a0, 0x4AB4($v1)
    ctx->pc = 0x142364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19124), GPR_U32(ctx, 4));
    // 0x142368: 0x8f838040  lw          $v1, -0x7FC0($gp)
    ctx->pc = 0x142368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934592)));
    // 0x14236c: 0xac455820  sw          $a1, 0x5820($v0)
    ctx->pc = 0x14236cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22560), GPR_U32(ctx, 5));
    // 0x142370: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142374: 0xac434ab8  sw          $v1, 0x4AB8($v0)
    ctx->pc = 0x142374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19128), GPR_U32(ctx, 3));
label_142378:
    // 0x142378: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x142378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14237c: 0x12a40010  beq         $s5, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14237Cu;
    {
        const bool branch_taken_0x14237c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        if (branch_taken_0x14237c) {
            ctx->pc = 0x1423C0u;
            goto label_1423c0;
        }
    }
    ctx->pc = 0x142384u;
    // 0x142384: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142388: 0x12a40003  beq         $s5, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142388u;
    {
        const bool branch_taken_0x142388 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        if (branch_taken_0x142388) {
            ctx->pc = 0x142398u;
            goto label_142398;
        }
    }
    ctx->pc = 0x142390u;
    // 0x142390: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x142390u;
    {
        const bool branch_taken_0x142390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142390u;
            // 0x142394: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142390) {
            ctx->pc = 0x1423E8u;
            goto label_1423e8;
        }
    }
    ctx->pc = 0x142398u;
label_142398:
    // 0x142398: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x142398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14239c: 0x8c425848  lw          $v0, 0x5848($v0)
    ctx->pc = 0x14239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22600)));
    // 0x1423a0: 0x50440019  beql        $v0, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1423A0u;
    {
        const bool branch_taken_0x1423a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1423a0) {
            ctx->pc = 0x1423A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1423A0u;
            // 0x1423a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x142408u;
            goto label_142408;
        }
    }
    ctx->pc = 0x1423A8u;
    // 0x1423a8: 0xc057250  jal         func_15C940
    ctx->pc = 0x1423A8u;
    SET_GPR_U32(ctx, 31, 0x1423B0u);
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423B0u; }
        if (ctx->pc != 0x1423B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423B0u; }
        if (ctx->pc != 0x1423B0u) { return; }
    }
    ctx->pc = 0x1423B0u;
label_1423b0:
    // 0x1423b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1423b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1423b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1423b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1423b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1423B8u;
    {
        const bool branch_taken_0x1423b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1423BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1423B8u;
            // 0x1423bc: 0xac435848  sw          $v1, 0x5848($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423b8) {
            ctx->pc = 0x142404u;
            goto label_142404;
        }
    }
    ctx->pc = 0x1423C0u;
label_1423c0:
    // 0x1423c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1423c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1423c4: 0x8c425848  lw          $v0, 0x5848($v0)
    ctx->pc = 0x1423c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22600)));
    // 0x1423c8: 0x1044000e  beq         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1423C8u;
    {
        const bool branch_taken_0x1423c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1423c8) {
            ctx->pc = 0x142404u;
            goto label_142404;
        }
    }
    ctx->pc = 0x1423D0u;
    // 0x1423d0: 0xc057250  jal         func_15C940
    ctx->pc = 0x1423D0u;
    SET_GPR_U32(ctx, 31, 0x1423D8u);
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423D8u; }
        if (ctx->pc != 0x1423D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423D8u; }
        if (ctx->pc != 0x1423D8u) { return; }
    }
    ctx->pc = 0x1423D8u;
label_1423d8:
    // 0x1423d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1423d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1423dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1423dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1423e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1423E0u;
    {
        const bool branch_taken_0x1423e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1423E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1423E0u;
            // 0x1423e4: 0xac435848  sw          $v1, 0x5848($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423e0) {
            ctx->pc = 0x142404u;
            goto label_142404;
        }
    }
    ctx->pc = 0x1423E8u;
label_1423e8:
    // 0x1423e8: 0x8c425848  lw          $v0, 0x5848($v0)
    ctx->pc = 0x1423e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22600)));
    // 0x1423ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1423ECu;
    {
        const bool branch_taken_0x1423ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1423ec) {
            ctx->pc = 0x142404u;
            goto label_142404;
        }
    }
    ctx->pc = 0x1423F4u;
    // 0x1423f4: 0xc057250  jal         func_15C940
    ctx->pc = 0x1423F4u;
    SET_GPR_U32(ctx, 31, 0x1423FCu);
    ctx->pc = 0x1423F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1423F4u;
            // 0x1423f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423FCu; }
        if (ctx->pc != 0x1423FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423FCu; }
        if (ctx->pc != 0x1423FCu) { return; }
    }
    ctx->pc = 0x1423FCu;
label_1423fc:
    // 0x1423fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1423fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x142400: 0xac405848  sw          $zero, 0x5848($v0)
    ctx->pc = 0x142400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22600), GPR_U32(ctx, 0));
label_142404:
    // 0x142404: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x142404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_142408:
    // 0x142408: 0x1282000a  beq         $s4, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x142408u;
    {
        const bool branch_taken_0x142408 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x142408) {
            ctx->pc = 0x142434u;
            goto label_142434;
        }
    }
    ctx->pc = 0x142410u;
    // 0x142410: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x142410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x142414: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x142414u;
    {
        const bool branch_taken_0x142414 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x142414) {
            ctx->pc = 0x142434u;
            goto label_142434;
        }
    }
    ctx->pc = 0x14241Cu;
    // 0x14241c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14241cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142420: 0x16830035  bne         $s4, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x142420u;
    {
        const bool branch_taken_0x142420 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x142420) {
            ctx->pc = 0x1424F8u;
            goto label_1424f8;
        }
    }
    ctx->pc = 0x142428u;
    // 0x142428: 0x8f828230  lw          $v0, -0x7DD0($gp)
    ctx->pc = 0x142428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935088)));
    // 0x14242c: 0x14430032  bne         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x14242Cu;
    {
        const bool branch_taken_0x14242c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14242c) {
            ctx->pc = 0x1424F8u;
            goto label_1424f8;
        }
    }
    ctx->pc = 0x142434u;
label_142434:
    // 0x142434: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142438: 0xdf868238  ld          $a2, -0x7DC8($gp)
    ctx->pc = 0x142438u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294935096)));
    // 0x14243c: 0x8c474ab4  lw          $a3, 0x4AB4($v0)
    ctx->pc = 0x14243cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19124)));
    // 0x142440: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x142440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x142444: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x142444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x142448: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x142448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14244c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14244cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142450: 0x34e70010  ori         $a3, $a3, 0x10
    ctx->pc = 0x142450u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
    // 0x142454: 0x24424ac0  addiu       $v0, $v0, 0x4AC0
    ctx->pc = 0x142454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19136));
    // 0x142458: 0xac674ab4  sw          $a3, 0x4AB4($v1)
    ctx->pc = 0x142458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19124), GPR_U32(ctx, 7));
    // 0x14245c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x14245cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x142460: 0x16440009  bne         $s2, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x142460u;
    {
        const bool branch_taken_0x142460 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x142464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142460u;
            // 0x142464: 0xa4460004  sh          $a2, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142460) {
            ctx->pc = 0x142488u;
            goto label_142488;
        }
    }
    ctx->pc = 0x142468u;
    // 0x142468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x142468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14246c: 0x56630004  bnel        $s3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14246Cu;
    {
        const bool branch_taken_0x14246c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x14246c) {
            ctx->pc = 0x142470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14246Cu;
            // 0x142470: 0x34a30008  ori         $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142480u;
            goto label_142480;
        }
    }
    ctx->pc = 0x142474u;
    // 0x142474: 0x34a30004  ori         $v1, $a1, 0x4
    ctx->pc = 0x142474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x142478: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x142478u;
    {
        const bool branch_taken_0x142478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14247Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142478u;
            // 0x14247c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142478) {
            ctx->pc = 0x1424A4u;
            goto label_1424a4;
        }
    }
    ctx->pc = 0x142480u;
label_142480:
    // 0x142480: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x142480u;
    {
        const bool branch_taken_0x142480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142480u;
            // 0x142484: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142480) {
            ctx->pc = 0x1424A4u;
            goto label_1424a4;
        }
    }
    ctx->pc = 0x142488u;
label_142488:
    // 0x142488: 0x8f838224  lw          $v1, -0x7DDC($gp)
    ctx->pc = 0x142488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935076)));
    // 0x14248c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14248Cu;
    {
        const bool branch_taken_0x14248c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14248c) {
            ctx->pc = 0x142490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14248Cu;
            // 0x142490: 0x34a30002  ori         $v1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1424A0u;
            goto label_1424a0;
        }
    }
    ctx->pc = 0x142494u;
    // 0x142494: 0x34a30001  ori         $v1, $a1, 0x1
    ctx->pc = 0x142494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x142498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x142498u;
    {
        const bool branch_taken_0x142498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14249Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142498u;
            // 0x14249c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142498) {
            ctx->pc = 0x1424A4u;
            goto label_1424a4;
        }
    }
    ctx->pc = 0x1424A0u;
label_1424a0:
    // 0x1424a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1424a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1424a4:
    // 0x1424a4: 0x8f83821c  lw          $v1, -0x7DE4($gp)
    ctx->pc = 0x1424a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
    // 0x1424a8: 0x8f848230  lw          $a0, -0x7DD0($gp)
    ctx->pc = 0x1424a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935088)));
    // 0x1424ac: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1424ACu;
    {
        const bool branch_taken_0x1424ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1424B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1424ACu;
            // 0x1424b0: 0xa4430006  sh          $v1, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1424ac) {
            ctx->pc = 0x1424C4u;
            goto label_1424c4;
        }
    }
    ctx->pc = 0x1424B4u;
    // 0x1424b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1424b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1424b8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1424b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1424bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1424BCu;
    {
        const bool branch_taken_0x1424bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1424C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1424BCu;
            // 0x1424c0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1424bc) {
            ctx->pc = 0x1424F8u;
            goto label_1424f8;
        }
    }
    ctx->pc = 0x1424C4u;
label_1424c4:
    // 0x1424c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1424c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1424c8: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1424C8u;
    {
        const bool branch_taken_0x1424c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1424c8) {
            ctx->pc = 0x1424F8u;
            goto label_1424f8;
        }
    }
    ctx->pc = 0x1424D0u;
    // 0x1424d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1424d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1424d4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1424d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1424d8: 0x248449c0  addiu       $a0, $a0, 0x49C0
    ctx->pc = 0x1424d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18880));
    // 0x1424dc: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x1424dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x1424e0: 0xc04e4f4  jal         func_1393D0
    ctx->pc = 0x1424E0u;
    SET_GPR_U32(ctx, 31, 0x1424E8u);
    ctx->pc = 0x1424E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1424E0u;
            // 0x1424e4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393D0u;
    if (runtime->hasFunction(0x1393D0u)) {
        auto targetFn = runtime->lookupFunction(0x1393D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1424E8u; }
        if (ctx->pc != 0x1424E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393D0_0x1393d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1424E8u; }
        if (ctx->pc != 0x1424E8u) { return; }
    }
    ctx->pc = 0x1424E8u;
label_1424e8:
    // 0x1424e8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1424e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1424ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1424ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1424f0: 0xc04e4f8  jal         func_1393E0
    ctx->pc = 0x1424F0u;
    SET_GPR_U32(ctx, 31, 0x1424F8u);
    ctx->pc = 0x1424F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1424F0u;
            // 0x1424f4: 0x24845a30  addiu       $a0, $a0, 0x5A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393E0u;
    if (runtime->hasFunction(0x1393E0u)) {
        auto targetFn = runtime->lookupFunction(0x1393E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1424F8u; }
        if (ctx->pc != 0x1424F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393E0_0x1393e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1424F8u; }
        if (ctx->pc != 0x1424F8u) { return; }
    }
    ctx->pc = 0x1424F8u;
label_1424f8:
    // 0x1424f8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1424f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1424fc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1424fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x142500: 0x8c442058  lw          $a0, 0x2058($v0)
    ctx->pc = 0x142500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8280)));
    // 0x142504: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142508: 0x8c422034  lw          $v0, 0x2034($v0)
    ctx->pc = 0x142508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8244)));
    // 0x14250c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14250Cu;
    {
        const bool branch_taken_0x14250c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14250Cu;
            // 0x142510: 0xac644aac  sw          $a0, 0x4AAC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 19116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14250c) {
            ctx->pc = 0x14251Cu;
            goto label_14251c;
        }
    }
    ctx->pc = 0x142514u;
    // 0x142514: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x142514u;
    {
        const bool branch_taken_0x142514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142514u;
            // 0x142518: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142514) {
            ctx->pc = 0x142520u;
            goto label_142520;
        }
    }
    ctx->pc = 0x14251Cu;
label_14251c:
    // 0x14251c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x14251cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_142520:
    // 0x142520: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142524: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x142524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x142528: 0x1283007f  beq         $s4, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x142528u;
    {
        const bool branch_taken_0x142528 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x14252Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142528u;
            // 0x14252c: 0xac444ab0  sw          $a0, 0x4AB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 19120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142528) {
            ctx->pc = 0x142728u;
            goto label_142728;
        }
    }
    ctx->pc = 0x142530u;
    // 0x142530: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x142530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142534: 0x1282007c  beq         $s4, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x142534u;
    {
        const bool branch_taken_0x142534 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x142534) {
            ctx->pc = 0x142728u;
            goto label_142728;
        }
    }
    ctx->pc = 0x14253Cu;
    // 0x14253c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x142540: 0x5282000b  beql        $s4, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x142540u;
    {
        const bool branch_taken_0x142540 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x142540) {
            ctx->pc = 0x142544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142540u;
            // 0x142544: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x142570u;
            goto label_142570;
        }
    }
    ctx->pc = 0x142548u;
    // 0x142548: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x142548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14254c: 0x52830003  beql        $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14254Cu;
    {
        const bool branch_taken_0x14254c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x14254c) {
            ctx->pc = 0x142550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14254Cu;
            // 0x142550: 0x8f828230  lw          $v0, -0x7DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935088)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14255Cu;
            goto label_14255c;
        }
    }
    ctx->pc = 0x142554u;
    // 0x142554: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x142554u;
    {
        const bool branch_taken_0x142554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142554) {
            ctx->pc = 0x14273Cu;
            goto label_14273c;
        }
    }
    ctx->pc = 0x14255Cu;
label_14255c:
    // 0x14255c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14255Cu;
    {
        const bool branch_taken_0x14255c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14255c) {
            ctx->pc = 0x14256Cu;
            goto label_14256c;
        }
    }
    ctx->pc = 0x142564u;
    // 0x142564: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x142564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x142568: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x142568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_14256c:
    // 0x14256c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_142570:
    // 0x142570: 0x52420005  beql        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142570u;
    {
        const bool branch_taken_0x142570 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x142570) {
            ctx->pc = 0x142574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142570u;
            // 0x142574: 0xc7808054  lwc1        $f0, -0x7FAC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x142588u;
            goto label_142588;
        }
    }
    ctx->pc = 0x142578u;
    // 0x142578: 0x52400009  beql        $s2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x142578u;
    {
        const bool branch_taken_0x142578 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x142578) {
            ctx->pc = 0x14257Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142578u;
            // 0x14257c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1425A0u;
            goto label_1425a0;
        }
    }
    ctx->pc = 0x142580u;
    // 0x142580: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x142580u;
    {
        const bool branch_taken_0x142580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142580u;
            // 0x142584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142580) {
            ctx->pc = 0x1425A4u;
            goto label_1425a4;
        }
    }
    ctx->pc = 0x142588u;
label_142588:
    // 0x142588: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x142588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x14258c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14258cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142590: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142594: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x142594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142598: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x142598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14259c: 0xe4404a7c  swc1        $f0, 0x4A7C($v0)
    ctx->pc = 0x14259cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 19068), bits); }
label_1425a0:
    // 0x1425a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1425a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1425a4:
    // 0x1425a4: 0xc04f204  jal         func_13C810
    ctx->pc = 0x1425A4u;
    SET_GPR_U32(ctx, 31, 0x1425ACu);
    ctx->pc = 0x13C810u;
    if (runtime->hasFunction(0x13C810u)) {
        auto targetFn = runtime->lookupFunction(0x13C810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1425ACu; }
        if (ctx->pc != 0x1425ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C810_0x13c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1425ACu; }
        if (ctx->pc != 0x1425ACu) { return; }
    }
    ctx->pc = 0x1425ACu;
label_1425ac:
    // 0x1425ac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1425acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1425b0: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1425B0u;
    {
        const bool branch_taken_0x1425b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1425B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1425B0u;
            // 0x1425b4: 0xac515850  sw          $s1, 0x5850($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22608), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425b0) {
            ctx->pc = 0x142618u;
            goto label_142618;
        }
    }
    ctx->pc = 0x1425B8u;
    // 0x1425b8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1425b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1425bc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1425bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1425c0: 0xac404a74  sw          $zero, 0x4A74($v0)
    ctx->pc = 0x1425c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19060), GPR_U32(ctx, 0));
    // 0x1425c4: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1425c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1425c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1425c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1425cc: 0xac604a70  sw          $zero, 0x4A70($v1)
    ctx->pc = 0x1425ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19056), GPR_U32(ctx, 0));
    // 0x1425d0: 0xc44149a0  lwc1        $f1, 0x49A0($v0)
    ctx->pc = 0x1425d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1425d4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1425d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1425d8: 0xac604a78  sw          $zero, 0x4A78($v1)
    ctx->pc = 0x1425d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19064), GPR_U32(ctx, 0));
    // 0x1425dc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1425dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1425e0: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x1425e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x1425e4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1425e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1425e8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1425e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1425ec: 0xc44049a4  lwc1        $f0, 0x49A4($v0)
    ctx->pc = 0x1425ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1425f0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1425f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1425f4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1425f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1425f8: 0xac404a7c  sw          $zero, 0x4A7C($v0)
    ctx->pc = 0x1425f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19068), GPR_U32(ctx, 0));
    // 0x1425fc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1425fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x142600: 0xe4a04a84  swc1        $f0, 0x4A84($a1)
    ctx->pc = 0x142600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 19076), bits); }
    // 0x142604: 0xc48049a8  lwc1        $f0, 0x49A8($a0)
    ctx->pc = 0x142604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 18856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142608: 0xe4c14a80  swc1        $f1, 0x4A80($a2)
    ctx->pc = 0x142608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 19072), bits); }
    // 0x14260c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14260cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x142610: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x142610u;
    {
        const bool branch_taken_0x142610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142610u;
            // 0x142614: 0xe4604a88  swc1        $f0, 0x4A88($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 19080), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142610) {
            ctx->pc = 0x142690u;
            goto label_142690;
        }
    }
    ctx->pc = 0x142618u;
label_142618:
    // 0x142618: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14261c: 0x3c09005d  lui         $t1, 0x5D
    ctx->pc = 0x14261cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)93 << 16));
    // 0x142620: 0xc44149a0  lwc1        $f1, 0x49A0($v0)
    ctx->pc = 0x142620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142624: 0x3c0a005d  lui         $t2, 0x5D
    ctx->pc = 0x142624u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)93 << 16));
    // 0x142628: 0xc52249a8  lwc1        $f2, 0x49A8($t1)
    ctx->pc = 0x142628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 18856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14262c: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x14262cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x142630: 0x3c0b005d  lui         $t3, 0x5D
    ctx->pc = 0x142630u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)93 << 16));
    // 0x142634: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x142634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x142638: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14263c: 0x3c07005d  lui         $a3, 0x5D
    ctx->pc = 0x14263cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)93 << 16));
    // 0x142640: 0xc44049a4  lwc1        $f0, 0x49A4($v0)
    ctx->pc = 0x142640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142644: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x142644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x142648: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x142648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x14264c: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x14264cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x142650: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x142650u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x142654: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142658: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x142658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14265c: 0xe5404a74  swc1        $f0, 0x4A74($t2)
    ctx->pc = 0x14265cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 19060), bits); }
    // 0x142660: 0xc4a049b4  lwc1        $f0, 0x49B4($a1)
    ctx->pc = 0x142660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 18868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142664: 0xe5614a70  swc1        $f1, 0x4A70($t3)
    ctx->pc = 0x142664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 19056), bits); }
    // 0x142668: 0xc4e149b0  lwc1        $f1, 0x49B0($a3)
    ctx->pc = 0x142668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 18864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14266c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14266cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x142670: 0xe4804a84  swc1        $f0, 0x4A84($a0)
    ctx->pc = 0x142670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 19076), bits); }
    // 0x142674: 0xc46049b8  lwc1        $f0, 0x49B8($v1)
    ctx->pc = 0x142674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142678: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x142678u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x14267c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x14267cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x142680: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x142680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x142684: 0xe5024a78  swc1        $f2, 0x4A78($t0)
    ctx->pc = 0x142684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 19064), bits); }
    // 0x142688: 0xe4c14a80  swc1        $f1, 0x4A80($a2)
    ctx->pc = 0x142688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 19072), bits); }
    // 0x14268c: 0xe4404a88  swc1        $f0, 0x4A88($v0)
    ctx->pc = 0x14268cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 19080), bits); }
label_142690:
    // 0x142690: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x142690u;
    {
        const bool branch_taken_0x142690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x142690) {
            ctx->pc = 0x1426BCu;
            goto label_1426bc;
        }
    }
    ctx->pc = 0x142698u;
    // 0x142698: 0xc04f220  jal         func_13C880
    ctx->pc = 0x142698u;
    SET_GPR_U32(ctx, 31, 0x1426A0u);
    ctx->pc = 0x14269Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142698u;
            // 0x14269c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C880u;
    if (runtime->hasFunction(0x13C880u)) {
        auto targetFn = runtime->lookupFunction(0x13C880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1426A0u; }
        if (ctx->pc != 0x1426A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C880_0x13c880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1426A0u; }
        if (ctx->pc != 0x1426A0u) { return; }
    }
    ctx->pc = 0x1426A0u;
label_1426a0:
    // 0x1426a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1426a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1426a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1426a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1426a8: 0x8c635824  lw          $v1, 0x5824($v1)
    ctx->pc = 0x1426a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
    // 0x1426ac: 0xac50584c  sw          $s0, 0x584C($v0)
    ctx->pc = 0x1426acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22604), GPR_U32(ctx, 16));
    // 0x1426b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1426b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1426b4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1426b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1426b8: 0xac435824  sw          $v1, 0x5824($v0)
    ctx->pc = 0x1426b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 3));
label_1426bc:
    // 0x1426bc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1426bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1426c0: 0xc05722c  jal         func_15C8B0
    ctx->pc = 0x1426C0u;
    SET_GPR_U32(ctx, 31, 0x1426C8u);
    ctx->pc = 0x1426C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1426C0u;
            // 0x1426c4: 0x24844a70  addiu       $a0, $a0, 0x4A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8B0u;
    if (runtime->hasFunction(0x15C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1426C8u; }
        if (ctx->pc != 0x1426C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8B0_0x15c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1426C8u; }
        if (ctx->pc != 0x1426C8u) { return; }
    }
    ctx->pc = 0x1426C8u;
label_1426c8:
    // 0x1426c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1426c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1426cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1426ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1426d0: 0x8c635824  lw          $v1, 0x5824($v1)
    ctx->pc = 0x1426d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
    // 0x1426d4: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1426d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1426d8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1426D8u;
    {
        const bool branch_taken_0x1426d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1426DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1426D8u;
            // 0x1426dc: 0xac435824  sw          $v1, 0x5824($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1426d8) {
            ctx->pc = 0x1426F0u;
            goto label_1426f0;
        }
    }
    ctx->pc = 0x1426E0u;
    // 0x1426e0: 0xc057398  jal         func_15CE60
    ctx->pc = 0x1426E0u;
    SET_GPR_U32(ctx, 31, 0x1426E8u);
    ctx->pc = 0x15CE60u;
    if (runtime->hasFunction(0x15CE60u)) {
        auto targetFn = runtime->lookupFunction(0x15CE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1426E8u; }
        if (ctx->pc != 0x1426E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CE60_0x15ce60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1426E8u; }
        if (ctx->pc != 0x1426E8u) { return; }
    }
    ctx->pc = 0x1426E8u;
label_1426e8:
    // 0x1426e8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1426E8u;
    {
        const bool branch_taken_0x1426e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1426e8) {
            ctx->pc = 0x14273Cu;
            goto label_14273c;
        }
    }
    ctx->pc = 0x1426F0u;
label_1426f0:
    // 0x1426f0: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1426f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1426f4: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x1426f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x1426f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1426f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1426fc: 0x24a51fa0  addiu       $a1, $a1, 0x1FA0
    ctx->pc = 0x1426fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8096));
    // 0x142700: 0xc04cd60  jal         func_133580
    ctx->pc = 0x142700u;
    SET_GPR_U32(ctx, 31, 0x142708u);
    ctx->pc = 0x142704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142700u;
            // 0x142704: 0x24c65a30  addiu       $a2, $a2, 0x5A30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142708u; }
        if (ctx->pc != 0x142708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142708u; }
        if (ctx->pc != 0x142708u) { return; }
    }
    ctx->pc = 0x142708u;
label_142708:
    // 0x142708: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x142708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14270c: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x14270Cu;
    SET_GPR_U32(ctx, 31, 0x142714u);
    ctx->pc = 0x142710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14270Cu;
            // 0x142710: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142714u; }
        if (ctx->pc != 0x142714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142714u; }
        if (ctx->pc != 0x142714u) { return; }
    }
    ctx->pc = 0x142714u;
label_142714:
    // 0x142714: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x142714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142718: 0xc057318  jal         func_15CC60
    ctx->pc = 0x142718u;
    SET_GPR_U32(ctx, 31, 0x142720u);
    ctx->pc = 0x14271Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142718u;
            // 0x14271c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CC60u;
    if (runtime->hasFunction(0x15CC60u)) {
        auto targetFn = runtime->lookupFunction(0x15CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142720u; }
        if (ctx->pc != 0x142720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CC60_0x15cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142720u; }
        if (ctx->pc != 0x142720u) { return; }
    }
    ctx->pc = 0x142720u;
label_142720:
    // 0x142720: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x142720u;
    {
        const bool branch_taken_0x142720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142720) {
            ctx->pc = 0x14273Cu;
            goto label_14273c;
        }
    }
    ctx->pc = 0x142728u;
label_142728:
    // 0x142728: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x142728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14272c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14272cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x142730: 0x8c635824  lw          $v1, 0x5824($v1)
    ctx->pc = 0x142730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
    // 0x142734: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x142734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x142738: 0xac435824  sw          $v1, 0x5824($v0)
    ctx->pc = 0x142738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 3));
label_14273c:
    // 0x14273c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14273cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x142740: 0xc050628  jal         func_1418A0
    ctx->pc = 0x142740u;
    SET_GPR_U32(ctx, 31, 0x142748u);
    ctx->pc = 0x142744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142740u;
            // 0x142744: 0x24848448  addiu       $a0, $a0, -0x7BB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1418A0u;
    if (runtime->hasFunction(0x1418A0u)) {
        auto targetFn = runtime->lookupFunction(0x1418A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142748u; }
        if (ctx->pc != 0x142748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001418A0_0x1418a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142748u; }
        if (ctx->pc != 0x142748u) { return; }
    }
    ctx->pc = 0x142748u;
label_142748:
    // 0x142748: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x142748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14274c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14274cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x142750: 0x8c475824  lw          $a3, 0x5824($v0)
    ctx->pc = 0x142750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x142754: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x142754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x142758: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x142758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x14275c: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x14275cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x142760: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x142760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x142764: 0x24a55520  addiu       $a1, $a1, 0x5520
    ctx->pc = 0x142764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
    // 0x142768: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x142768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14276c: 0x24c65a30  addiu       $a2, $a2, 0x5A30
    ctx->pc = 0x14276cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23088));
    // 0x142770: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x142770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x142774: 0xc04cd60  jal         func_133580
    ctx->pc = 0x142774u;
    SET_GPR_U32(ctx, 31, 0x14277Cu);
    ctx->pc = 0x142778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142774u;
            // 0x142778: 0xac435824  sw          $v1, 0x5824($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14277Cu; }
        if (ctx->pc != 0x14277Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14277Cu; }
        if (ctx->pc != 0x14277Cu) { return; }
    }
    ctx->pc = 0x14277Cu;
label_14277c:
    // 0x14277c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14277cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142780: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x142780u;
    SET_GPR_U32(ctx, 31, 0x142788u);
    ctx->pc = 0x142784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142780u;
            // 0x142784: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142788u; }
        if (ctx->pc != 0x142788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142788u; }
        if (ctx->pc != 0x142788u) { return; }
    }
    ctx->pc = 0x142788u;
label_142788:
    // 0x142788: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x142788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14278c: 0xc04fd58  jal         func_13F560
    ctx->pc = 0x14278Cu;
    SET_GPR_U32(ctx, 31, 0x142794u);
    ctx->pc = 0x142790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14278Cu;
            // 0x142790: 0x8c445824  lw          $a0, 0x5824($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F560u;
    if (runtime->hasFunction(0x13F560u)) {
        auto targetFn = runtime->lookupFunction(0x13F560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142794u; }
        if (ctx->pc != 0x142794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F560_0x13f560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142794u; }
        if (ctx->pc != 0x142794u) { return; }
    }
    ctx->pc = 0x142794u;
label_142794:
    // 0x142794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x142794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142798: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x142798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14279c: 0xaf80825c  sw          $zero, -0x7DA4($gp)
    ctx->pc = 0x14279cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935132), GPR_U32(ctx, 0));
    // 0x1427a0: 0xaf858258  sw          $a1, -0x7DA8($gp)
    ctx->pc = 0x1427a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935128), GPR_U32(ctx, 5));
    // 0x1427a4: 0xaf948250  sw          $s4, -0x7DB0($gp)
    ctx->pc = 0x1427a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935120), GPR_U32(ctx, 20));
    // 0x1427a8: 0x12840011  beq         $s4, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1427A8u;
    {
        const bool branch_taken_0x1427a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x1427ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1427A8u;
            // 0x1427ac: 0xaf85826c  sw          $a1, -0x7D94($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427a8) {
            ctx->pc = 0x1427F0u;
            goto label_1427f0;
        }
    }
    ctx->pc = 0x1427B0u;
    // 0x1427b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1427b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1427b4: 0x5283000c  beql        $s4, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1427B4u;
    {
        const bool branch_taken_0x1427b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x1427b4) {
            ctx->pc = 0x1427B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1427B4u;
            // 0x1427b8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1427E8u;
            goto label_1427e8;
        }
    }
    ctx->pc = 0x1427BCu;
    // 0x1427bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1427bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1427c0: 0x52830007  beql        $s4, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1427C0u;
    {
        const bool branch_taken_0x1427c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x1427c0) {
            ctx->pc = 0x1427C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1427C0u;
            // 0x1427c4: 0xaf848268  sw          $a0, -0x7D98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1427E0u;
            goto label_1427e0;
        }
    }
    ctx->pc = 0x1427C8u;
    // 0x1427c8: 0x52850003  beql        $s4, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1427C8u;
    {
        const bool branch_taken_0x1427c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 5));
        if (branch_taken_0x1427c8) {
            ctx->pc = 0x1427CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1427C8u;
            // 0x1427cc: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1427D8u;
            goto label_1427d8;
        }
    }
    ctx->pc = 0x1427D0u;
    // 0x1427d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1427D0u;
    {
        const bool branch_taken_0x1427d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1427D0u;
            // 0x1427d4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427d0) {
            ctx->pc = 0x1427FCu;
            goto label_1427fc;
        }
    }
    ctx->pc = 0x1427D8u;
label_1427d8:
    // 0x1427d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1427D8u;
    {
        const bool branch_taken_0x1427d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1427D8u;
            // 0x1427dc: 0xaf838268  sw          $v1, -0x7D98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427d8) {
            ctx->pc = 0x1427F8u;
            goto label_1427f8;
        }
    }
    ctx->pc = 0x1427E0u;
label_1427e0:
    // 0x1427e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1427E0u;
    {
        const bool branch_taken_0x1427e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1427E0u;
            // 0x1427e4: 0xaf80826c  sw          $zero, -0x7D94($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427e0) {
            ctx->pc = 0x1427F8u;
            goto label_1427f8;
        }
    }
    ctx->pc = 0x1427E8u;
label_1427e8:
    // 0x1427e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1427E8u;
    {
        const bool branch_taken_0x1427e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1427E8u;
            // 0x1427ec: 0xaf838268  sw          $v1, -0x7D98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427e8) {
            ctx->pc = 0x1427F8u;
            goto label_1427f8;
        }
    }
    ctx->pc = 0x1427F0u;
label_1427f0:
    // 0x1427f0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1427f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1427f4: 0xaf838268  sw          $v1, -0x7D98($gp)
    ctx->pc = 0x1427f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935144), GPR_U32(ctx, 3));
label_1427f8:
    // 0x1427f8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1427f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1427fc:
    // 0x1427fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1427fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x142800: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x142800u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x142804: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x142804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x142808: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x142808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14280c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14280cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142810: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x142810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142814: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x142814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142818: 0x3e00008  jr          $ra
    ctx->pc = 0x142818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14281Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142818u;
            // 0x14281c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142820u;
}
