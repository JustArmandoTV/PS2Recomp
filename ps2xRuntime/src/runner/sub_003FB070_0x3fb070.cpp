#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FB070
// Address: 0x3fb070 - 0x3fb3a0
void sub_003FB070_0x3fb070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB070_0x3fb070");
#endif

    switch (ctx->pc) {
        case 0x3fb0c8u: goto label_3fb0c8;
        case 0x3fb10cu: goto label_3fb10c;
        case 0x3fb128u: goto label_3fb128;
        case 0x3fb154u: goto label_3fb154;
        case 0x3fb170u: goto label_3fb170;
        case 0x3fb180u: goto label_3fb180;
        case 0x3fb18cu: goto label_3fb18c;
        case 0x3fb19cu: goto label_3fb19c;
        case 0x3fb1e4u: goto label_3fb1e4;
        case 0x3fb1f0u: goto label_3fb1f0;
        case 0x3fb1fcu: goto label_3fb1fc;
        case 0x3fb288u: goto label_3fb288;
        case 0x3fb2bcu: goto label_3fb2bc;
        case 0x3fb2ccu: goto label_3fb2cc;
        case 0x3fb2dcu: goto label_3fb2dc;
        case 0x3fb2f0u: goto label_3fb2f0;
        case 0x3fb318u: goto label_3fb318;
        case 0x3fb34cu: goto label_3fb34c;
        default: break;
    }

    ctx->pc = 0x3fb070u;

    // 0x3fb070: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3fb070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3fb074: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3fb074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3fb078: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3fb078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3fb07c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3fb07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3fb080: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3fb080u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb084: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3fb084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3fb088: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3fb088u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb08c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3fb08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3fb090: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3fb090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb094: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3fb094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3fb098: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3fb098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb09c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3fb09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3fb0a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fb0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb0a4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3fb0a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3fb0a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3fb0a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3fb0ac: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x3fb0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3fb0b0: 0x94a30c7e  lhu         $v1, 0xC7E($a1)
    ctx->pc = 0x3fb0b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 3198)));
    // 0x3fb0b4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3fb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3fb0b8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3fb0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3fb0bc: 0x26850c6c  addiu       $a1, $s4, 0xC6C
    ctx->pc = 0x3fb0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3180));
    // 0x3fb0c0: 0xc0c5f58  jal         func_317D60
    ctx->pc = 0x3FB0C0u;
    SET_GPR_U32(ctx, 31, 0x3FB0C8u);
    ctx->pc = 0x3FB0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB0C0u;
            // 0x3fb0c4: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317D60u;
    if (runtime->hasFunction(0x317D60u)) {
        auto targetFn = runtime->lookupFunction(0x317D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB0C8u; }
        if (ctx->pc != 0x3FB0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317D60_0x317d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB0C8u; }
        if (ctx->pc != 0x3FB0C8u) { return; }
    }
    ctx->pc = 0x3FB0C8u;
label_3fb0c8:
    // 0x3fb0c8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3fb0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3fb0cc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3fb0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3fb0d0: 0xc6810c84  lwc1        $f1, 0xC84($s4)
    ctx->pc = 0x3fb0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fb0d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3fb0d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fb0d8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3fb0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3fb0dc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3fb0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3fb0e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3fb0e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3fb0e4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x3FB0E4u;
    {
        const bool branch_taken_0x3fb0e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FB0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB0E4u;
            // 0x3fb0e8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb0e4) {
            ctx->pc = 0x3FB130u;
            goto label_3fb130;
        }
    }
    ctx->pc = 0x3FB0ECu;
    // 0x3fb0ec: 0xaea000c4  sw          $zero, 0xC4($s5)
    ctx->pc = 0x3fb0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 0));
    // 0x3fb0f0: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x3fb0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x3fb0f4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3fb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3fb0f8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x3fb0f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3fb0fc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3fb0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3fb100: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3fb100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3fb104: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3FB104u;
    SET_GPR_U32(ctx, 31, 0x3FB10Cu);
    ctx->pc = 0x3FB108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB104u;
            // 0x3fb108: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB10Cu; }
        if (ctx->pc != 0x3FB10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB10Cu; }
        if (ctx->pc != 0x3FB10Cu) { return; }
    }
    ctx->pc = 0x3FB10Cu;
label_3fb10c:
    // 0x3fb10c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3fb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3fb110: 0x26a40050  addiu       $a0, $s5, 0x50
    ctx->pc = 0x3fb110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x3fb114: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x3fb114u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3fb118: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3fb118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3fb11c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3fb11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3fb120: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3FB120u;
    SET_GPR_U32(ctx, 31, 0x3FB128u);
    ctx->pc = 0x3FB124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB120u;
            // 0x3fb124: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB128u; }
        if (ctx->pc != 0x3FB128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB128u; }
        if (ctx->pc != 0x3FB128u) { return; }
    }
    ctx->pc = 0x3FB128u;
label_3fb128:
    // 0x3fb128: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3FB128u;
    {
        const bool branch_taken_0x3fb128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB128u;
            // 0x3fb12c: 0x26a40080  addiu       $a0, $s5, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb128) {
            ctx->pc = 0x3FB174u;
            goto label_3fb174;
        }
    }
    ctx->pc = 0x3FB130u;
label_3fb130:
    // 0x3fb130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fb130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fb134: 0x26a40050  addiu       $a0, $s5, 0x50
    ctx->pc = 0x3fb134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x3fb138: 0xaea200c4  sw          $v0, 0xC4($s5)
    ctx->pc = 0x3fb138u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 2));
    // 0x3fb13c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3fb13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3fb140: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x3fb140u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3fb144: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3fb144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3fb148: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3fb148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3fb14c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3FB14Cu;
    SET_GPR_U32(ctx, 31, 0x3FB154u);
    ctx->pc = 0x3FB150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB14Cu;
            // 0x3fb150: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB154u; }
        if (ctx->pc != 0x3FB154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB154u; }
        if (ctx->pc != 0x3FB154u) { return; }
    }
    ctx->pc = 0x3FB154u;
label_3fb154:
    // 0x3fb154: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3fb154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3fb158: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x3fb158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x3fb15c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x3fb15cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3fb160: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3fb160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3fb164: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3fb164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3fb168: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3FB168u;
    SET_GPR_U32(ctx, 31, 0x3FB170u);
    ctx->pc = 0x3FB16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB168u;
            // 0x3fb16c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB170u; }
        if (ctx->pc != 0x3FB170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB170u; }
        if (ctx->pc != 0x3FB170u) { return; }
    }
    ctx->pc = 0x3FB170u;
label_3fb170:
    // 0x3fb170: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x3fb170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
label_3fb174:
    // 0x3fb174: 0x26a50050  addiu       $a1, $s5, 0x50
    ctx->pc = 0x3fb174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x3fb178: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3FB178u;
    SET_GPR_U32(ctx, 31, 0x3FB180u);
    ctx->pc = 0x3FB17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB178u;
            // 0x3fb17c: 0x26a60040  addiu       $a2, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB180u; }
        if (ctx->pc != 0x3FB180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB180u; }
        if (ctx->pc != 0x3FB180u) { return; }
    }
    ctx->pc = 0x3FB180u;
label_3fb180:
    // 0x3fb180: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x3fb180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x3fb184: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3FB184u;
    SET_GPR_U32(ctx, 31, 0x3FB18Cu);
    ctx->pc = 0x3FB188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB184u;
            // 0x3fb188: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB18Cu; }
        if (ctx->pc != 0x3FB18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB18Cu; }
        if (ctx->pc != 0x3FB18Cu) { return; }
    }
    ctx->pc = 0x3FB18Cu;
label_3fb18c:
    // 0x3fb18c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3fb18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3fb190: 0x26a50080  addiu       $a1, $s5, 0x80
    ctx->pc = 0x3fb190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x3fb194: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x3FB194u;
    SET_GPR_U32(ctx, 31, 0x3FB19Cu);
    ctx->pc = 0x3FB198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB194u;
            // 0x3fb198: 0x26860820  addiu       $a2, $s4, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB19Cu; }
        if (ctx->pc != 0x3FB19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB19Cu; }
        if (ctx->pc != 0x3FB19Cu) { return; }
    }
    ctx->pc = 0x3FB19Cu;
label_3fb19c:
    // 0x3fb19c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x3fb19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fb1a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3fb1a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3fb1a4: 0x0  nop
    ctx->pc = 0x3fb1a4u;
    // NOP
    // 0x3fb1a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3fb1a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3fb1ac: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x3FB1ACu;
    {
        const bool branch_taken_0x3fb1ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fb1ac) {
            ctx->pc = 0x3FB1B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB1ACu;
            // 0x3fb1b0: 0x26920820  addiu       $s2, $s4, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 2080));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FB1D8u;
            goto label_3fb1d8;
        }
    }
    ctx->pc = 0x3FB1B4u;
    // 0x3fb1b4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x3fb1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fb1b8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3fb1b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3fb1bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3FB1BCu;
    {
        const bool branch_taken_0x3fb1bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fb1bc) {
            ctx->pc = 0x3FB1D4u;
            goto label_3fb1d4;
        }
    }
    ctx->pc = 0x3FB1C4u;
    // 0x3fb1c4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x3fb1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fb1c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3fb1c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3fb1cc: 0x45030041  bc1tl       . + 4 + (0x41 << 2)
    ctx->pc = 0x3FB1CCu;
    {
        const bool branch_taken_0x3fb1cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fb1cc) {
            ctx->pc = 0x3FB1D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB1CCu;
            // 0x3fb1d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FB2D4u;
            goto label_3fb2d4;
        }
    }
    ctx->pc = 0x3FB1D4u;
label_3fb1d4:
    // 0x3fb1d4: 0x26920820  addiu       $s2, $s4, 0x820
    ctx->pc = 0x3fb1d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 2080));
label_3fb1d8:
    // 0x3fb1d8: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x3fb1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x3fb1dc: 0xc04cc08  jal         func_133020
    ctx->pc = 0x3FB1DCu;
    SET_GPR_U32(ctx, 31, 0x3FB1E4u);
    ctx->pc = 0x3FB1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB1DCu;
            // 0x3fb1e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB1E4u; }
        if (ctx->pc != 0x3FB1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB1E4u; }
        if (ctx->pc != 0x3FB1E4u) { return; }
    }
    ctx->pc = 0x3FB1E4u;
label_3fb1e4:
    // 0x3fb1e4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3fb1e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3fb1e8: 0xc04cc14  jal         func_133050
    ctx->pc = 0x3FB1E8u;
    SET_GPR_U32(ctx, 31, 0x3FB1F0u);
    ctx->pc = 0x3FB1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB1E8u;
            // 0x3fb1ec: 0x26a40080  addiu       $a0, $s5, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB1F0u; }
        if (ctx->pc != 0x3FB1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB1F0u; }
        if (ctx->pc != 0x3FB1F0u) { return; }
    }
    ctx->pc = 0x3FB1F0u;
label_3fb1f0:
    // 0x3fb1f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fb1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb1f4: 0xc04cc14  jal         func_133050
    ctx->pc = 0x3FB1F4u;
    SET_GPR_U32(ctx, 31, 0x3FB1FCu);
    ctx->pc = 0x3FB1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB1F4u;
            // 0x3fb1f8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB1FCu; }
        if (ctx->pc != 0x3FB1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB1FCu; }
        if (ctx->pc != 0x3FB1FCu) { return; }
    }
    ctx->pc = 0x3FB1FCu;
label_3fb1fc:
    // 0x3fb1fc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3fb1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3fb200: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3fb200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3fb204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fb204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fb208: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x3fb208u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x3fb20c: 0x0  nop
    ctx->pc = 0x3fb20cu;
    // NOP
    // 0x3fb210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3fb210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fb214: 0x0  nop
    ctx->pc = 0x3fb214u;
    // NOP
    // 0x3fb218: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3fb218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3fb21c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3FB21Cu;
    {
        const bool branch_taken_0x3fb21c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fb21c) {
            ctx->pc = 0x3FB220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB21Cu;
            // 0x3fb220: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FB22Cu;
            goto label_3fb22c;
        }
    }
    ctx->pc = 0x3FB224u;
    // 0x3fb224: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3fb224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb228: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3fb228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3fb22c:
    // 0x3fb22c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3fb22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3fb230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3fb230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fb234: 0x0  nop
    ctx->pc = 0x3fb234u;
    // NOP
    // 0x3fb238: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3fb238u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3fb23c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3FB23Cu;
    {
        const bool branch_taken_0x3fb23c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FB240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB23Cu;
            // 0x3fb240: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb23c) {
            ctx->pc = 0x3FB248u;
            goto label_3fb248;
        }
    }
    ctx->pc = 0x3FB244u;
    // 0x3fb244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3fb244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fb248:
    // 0x3fb248: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3fb248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3fb24c: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x3fb24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x3fb250: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3fb250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3fb254: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3fb254u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fb258: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3fb258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3fb25c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3fb25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3fb260: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3fb260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3fb264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fb264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fb268: 0x0  nop
    ctx->pc = 0x3fb268u;
    // NOP
    // 0x3fb26c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3fb26cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3fb270: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3fb270u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3fb274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3fb274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fb278: 0x0  nop
    ctx->pc = 0x3fb278u;
    // NOP
    // 0x3fb27c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3fb27cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3fb280: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x3FB280u;
    SET_GPR_U32(ctx, 31, 0x3FB288u);
    ctx->pc = 0x3FB284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB280u;
            // 0x3fb284: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB288u; }
        if (ctx->pc != 0x3FB288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB288u; }
        if (ctx->pc != 0x3FB288u) { return; }
    }
    ctx->pc = 0x3FB288u;
label_3fb288:
    // 0x3fb288: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3fb288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x3fb28c: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x3fb28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x3fb290: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3fb290u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3fb294: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3fb294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3fb298: 0x0  nop
    ctx->pc = 0x3fb298u;
    // NOP
    // 0x3fb29c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3fb29cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3fb2a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fb2a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3fb2a4: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x3fb2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fb2a8: 0xc7ad00c4  lwc1        $f13, 0xC4($sp)
    ctx->pc = 0x3fb2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3fb2ac: 0xc7ae00c8  lwc1        $f14, 0xC8($sp)
    ctx->pc = 0x3fb2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3fb2b0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3fb2b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3fb2b4: 0xc04f3bc  jal         func_13CEF0
    ctx->pc = 0x3FB2B4u;
    SET_GPR_U32(ctx, 31, 0x3FB2BCu);
    ctx->pc = 0x3FB2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB2B4u;
            // 0x3fb2b8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CEF0u;
    if (runtime->hasFunction(0x13CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB2BCu; }
        if (ctx->pc != 0x3FB2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CEF0_0x13cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB2BCu; }
        if (ctx->pc != 0x3FB2BCu) { return; }
    }
    ctx->pc = 0x3FB2BCu;
label_3fb2bc:
    // 0x3fb2bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3fb2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb2c0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3fb2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3fb2c4: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3FB2C4u;
    SET_GPR_U32(ctx, 31, 0x3FB2CCu);
    ctx->pc = 0x3FB2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB2C4u;
            // 0x3fb2c8: 0x268607e0  addiu       $a2, $s4, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB2CCu; }
        if (ctx->pc != 0x3FB2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB2CCu; }
        if (ctx->pc != 0x3FB2CCu) { return; }
    }
    ctx->pc = 0x3FB2CCu;
label_3fb2cc:
    // 0x3fb2cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3FB2CCu;
    {
        const bool branch_taken_0x3fb2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb2cc) {
            ctx->pc = 0x3FB2DCu;
            goto label_3fb2dc;
        }
    }
    ctx->pc = 0x3FB2D4u;
label_3fb2d4:
    // 0x3fb2d4: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x3FB2D4u;
    SET_GPR_U32(ctx, 31, 0x3FB2DCu);
    ctx->pc = 0x3FB2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB2D4u;
            // 0x3fb2d8: 0x268507e0  addiu       $a1, $s4, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB2DCu; }
        if (ctx->pc != 0x3FB2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB2DCu; }
        if (ctx->pc != 0x3FB2DCu) { return; }
    }
    ctx->pc = 0x3FB2DCu;
label_3fb2dc:
    // 0x3fb2dc: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3fb2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3fb2e0: 0x26a40090  addiu       $a0, $s5, 0x90
    ctx->pc = 0x3fb2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x3fb2e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3fb2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb2e8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3FB2E8u;
    SET_GPR_U32(ctx, 31, 0x3FB2F0u);
    ctx->pc = 0x3FB2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB2E8u;
            // 0x3fb2ec: 0x24c6b810  addiu       $a2, $a2, -0x47F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB2F0u; }
        if (ctx->pc != 0x3FB2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB2F0u; }
        if (ctx->pc != 0x3FB2F0u) { return; }
    }
    ctx->pc = 0x3FB2F0u;
label_3fb2f0:
    // 0x3fb2f0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x3fb2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fb2f4: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x3fb2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x3fb2f8: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x3fb2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x3fb2fc: 0x26a60050  addiu       $a2, $s5, 0x50
    ctx->pc = 0x3fb2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x3fb300: 0xe6a000a0  swc1        $f0, 0xA0($s5)
    ctx->pc = 0x3fb300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 160), bits); }
    // 0x3fb304: 0x269102c0  addiu       $s1, $s4, 0x2C0
    ctx->pc = 0x3fb304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
    // 0x3fb308: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x3fb308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fb30c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3fb30cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb310: 0xc0bc5e8  jal         func_2F17A0
    ctx->pc = 0x3FB310u;
    SET_GPR_U32(ctx, 31, 0x3FB318u);
    ctx->pc = 0x3FB314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB310u;
            // 0x3fb314: 0xe6a000a4  swc1        $f0, 0xA4($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 164), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F17A0u;
    if (runtime->hasFunction(0x2F17A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F17A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB318u; }
        if (ctx->pc != 0x3FB318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F17A0_0x2f17a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB318u; }
        if (ctx->pc != 0x3FB318u) { return; }
    }
    ctx->pc = 0x3FB318u;
label_3fb318:
    // 0x3fb318: 0xe6a000b0  swc1        $f0, 0xB0($s5)
    ctx->pc = 0x3fb318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 176), bits); }
    // 0x3fb31c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fb31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb320: 0xc6a300a0  lwc1        $f3, 0xA0($s5)
    ctx->pc = 0x3fb320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3fb324: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x3fb324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x3fb328: 0xc6a100a4  lwc1        $f1, 0xA4($s5)
    ctx->pc = 0x3fb328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fb32c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3fb32cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fb330: 0x0  nop
    ctx->pc = 0x3fb330u;
    // NOP
    // 0x3fb334: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x3fb334u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3fb338: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x3fb338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3fb33c: 0xc6a200b0  lwc1        $f2, 0xB0($s5)
    ctx->pc = 0x3fb33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3fb340: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x3fb340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x3fb344: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x3FB344u;
    SET_GPR_U32(ctx, 31, 0x3FB34Cu);
    ctx->pc = 0x3FB348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB344u;
            // 0x3fb348: 0xe6a000a8  swc1        $f0, 0xA8($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB34Cu; }
        if (ctx->pc != 0x3FB34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB34Cu; }
        if (ctx->pc != 0x3FB34Cu) { return; }
    }
    ctx->pc = 0x3FB34Cu;
label_3fb34c:
    // 0x3fb34c: 0xc6a100a8  lwc1        $f1, 0xA8($s5)
    ctx->pc = 0x3fb34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fb350: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3fb350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3fb354: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3fb354u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x3fb358: 0xe6a000b8  swc1        $f0, 0xB8($s5)
    ctx->pc = 0x3fb358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 184), bits); }
    // 0x3fb35c: 0xaea300c0  sw          $v1, 0xC0($s5)
    ctx->pc = 0x3fb35cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 3));
    // 0x3fb360: 0xaeb300cc  sw          $s3, 0xCC($s5)
    ctx->pc = 0x3fb360u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 19));
    // 0x3fb364: 0xaea000c8  sw          $zero, 0xC8($s5)
    ctx->pc = 0x3fb364u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 200), GPR_U32(ctx, 0));
    // 0x3fb368: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3fb368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3fb36c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3fb36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3fb370: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3fb370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fb374: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3fb374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3fb378: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3fb378u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fb37c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3fb37cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fb380: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3fb380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fb384: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3fb384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fb388: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3fb388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fb38c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB38Cu;
            // 0x3fb390: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FB394u;
    // 0x3fb394: 0x0  nop
    ctx->pc = 0x3fb394u;
    // NOP
    // 0x3fb398: 0x0  nop
    ctx->pc = 0x3fb398u;
    // NOP
    // 0x3fb39c: 0x0  nop
    ctx->pc = 0x3fb39cu;
    // NOP
}
