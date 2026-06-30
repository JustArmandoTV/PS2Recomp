#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030F000
// Address: 0x30f000 - 0x30f1a0
void sub_0030F000_0x30f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F000_0x30f000");
#endif

    switch (ctx->pc) {
        case 0x30f084u: goto label_30f084;
        case 0x30f08cu: goto label_30f08c;
        case 0x30f09cu: goto label_30f09c;
        case 0x30f0bcu: goto label_30f0bc;
        case 0x30f0e8u: goto label_30f0e8;
        case 0x30f11cu: goto label_30f11c;
        case 0x30f138u: goto label_30f138;
        case 0x30f148u: goto label_30f148;
        case 0x30f158u: goto label_30f158;
        case 0x30f168u: goto label_30f168;
        default: break;
    }

    ctx->pc = 0x30f000u;

    // 0x30f000: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x30f000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x30f004: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30f008: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x30f008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x30f00c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x30f00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x30f010: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x30f010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x30f014: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x30f014u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f018: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x30f018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x30f01c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x30f01cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f020: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x30f020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x30f024: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x30f024u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f028: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30f028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30f02c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x30f02cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f030: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30f030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x30f034: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x30f034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f038: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30f038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30f03c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x30f03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x30f040: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30f040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30f044: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30f044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30f048: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30f048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30f04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30f04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f050: 0x7843f490  lq          $v1, -0xB70($v0)
    ctx->pc = 0x30f050u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 4294964368)));
    // 0x30f054: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30f058: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x30f058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x30f05c: 0x7842f480  lq          $v0, -0xB80($v0)
    ctx->pc = 0x30f05cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 4294964352)));
    // 0x30f060: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x30f060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x30f064: 0x84820066  lh          $v0, 0x66($a0)
    ctx->pc = 0x30f064u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 102)));
    // 0x30f068: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x30f068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30f06c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x30F06Cu;
    {
        const bool branch_taken_0x30f06c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F06Cu;
            // 0x30f070: 0x261300d8  addiu       $s3, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f06c) {
            ctx->pc = 0x30F084u;
            goto label_30f084;
        }
    }
    ctx->pc = 0x30F074u;
    // 0x30f074: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x30f074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f078: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x30f078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f07c: 0xc04cc90  jal         func_133240
    ctx->pc = 0x30F07Cu;
    SET_GPR_U32(ctx, 31, 0x30F084u);
    ctx->pc = 0x30F080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F07Cu;
            // 0x30f080: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F084u; }
        if (ctx->pc != 0x30F084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F084u; }
        if (ctx->pc != 0x30F084u) { return; }
    }
    ctx->pc = 0x30F084u;
label_30f084:
    // 0x30f084: 0xc04cc14  jal         func_133050
    ctx->pc = 0x30F084u;
    SET_GPR_U32(ctx, 31, 0x30F08Cu);
    ctx->pc = 0x30F088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F084u;
            // 0x30f088: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F08Cu; }
        if (ctx->pc != 0x30F08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F08Cu; }
        if (ctx->pc != 0x30F08Cu) { return; }
    }
    ctx->pc = 0x30F08Cu;
label_30f08c:
    // 0x30f08c: 0x86120066  lh          $s2, 0x66($s0)
    ctx->pc = 0x30f08cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x30f090: 0x1a400025  blez        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x30F090u;
    {
        const bool branch_taken_0x30f090 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x30F094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F090u;
            // 0x30f094: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f090) {
            ctx->pc = 0x30F128u;
            goto label_30f128;
        }
    }
    ctx->pc = 0x30F098u;
    // 0x30f098: 0x128840  sll         $s1, $s2, 1
    ctx->pc = 0x30f098u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_30f09c:
    // 0x30f09c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x30f09cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f0a0: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x30f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x30f0a4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x30f0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x30f0a8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x30f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30f0ac: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x30f0acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30f0b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30f0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f0b4: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x30F0B4u;
    SET_GPR_U32(ctx, 31, 0x30F0BCu);
    ctx->pc = 0x30F0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F0B4u;
            // 0x30f0b8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F0BCu; }
        if (ctx->pc != 0x30F0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F0BCu; }
        if (ctx->pc != 0x30F0BCu) { return; }
    }
    ctx->pc = 0x30F0BCu;
label_30f0bc:
    // 0x30f0bc: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x30f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x30f0c0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x30f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x30f0c4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x30f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x30f0c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x30f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30f0cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30f0d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f0d4: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x30f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x30f0d8: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x30f0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x30f0dc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x30f0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30f0e0: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x30F0E0u;
    SET_GPR_U32(ctx, 31, 0x30F0E8u);
    ctx->pc = 0x30F0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F0E0u;
            // 0x30f0e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F0E8u; }
        if (ctx->pc != 0x30F0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F0E8u; }
        if (ctx->pc != 0x30F0E8u) { return; }
    }
    ctx->pc = 0x30F0E8u;
label_30f0e8:
    // 0x30f0e8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x30f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30f0ec: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x30f0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30f0f0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x30f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30f0f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30f0f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f0fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30f100: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30f100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30f104: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30f104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f108: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x30f108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x30f10c: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x30f10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x30f110: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x30f110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30f114: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x30F114u;
    SET_GPR_U32(ctx, 31, 0x30F11Cu);
    ctx->pc = 0x30F118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F114u;
            // 0x30f118: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F11Cu; }
        if (ctx->pc != 0x30F11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F11Cu; }
        if (ctx->pc != 0x30F11Cu) { return; }
    }
    ctx->pc = 0x30F11Cu;
label_30f11c:
    // 0x30f11c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x30f11cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x30f120: 0x1e40ffde  bgtz        $s2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x30F120u;
    {
        const bool branch_taken_0x30f120 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x30F124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F120u;
            // 0x30f124: 0x2631fffe  addiu       $s1, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f120) {
            ctx->pc = 0x30F09Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30f09c;
        }
    }
    ctx->pc = 0x30F128u;
label_30f128:
    // 0x30f128: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30f128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f12c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30f12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f130: 0xc04cafc  jal         func_132BF0
    ctx->pc = 0x30F130u;
    SET_GPR_U32(ctx, 31, 0x30F138u);
    ctx->pc = 0x30F134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F130u;
            // 0x30f134: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F138u; }
        if (ctx->pc != 0x30F138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F138u; }
        if (ctx->pc != 0x30F138u) { return; }
    }
    ctx->pc = 0x30F138u;
label_30f138:
    // 0x30f138: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30f138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f13c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x30f13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f140: 0xc04cafc  jal         func_132BF0
    ctx->pc = 0x30F140u;
    SET_GPR_U32(ctx, 31, 0x30F148u);
    ctx->pc = 0x30F144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F140u;
            // 0x30f144: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F148u; }
        if (ctx->pc != 0x30F148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F148u; }
        if (ctx->pc != 0x30F148u) { return; }
    }
    ctx->pc = 0x30F148u;
label_30f148:
    // 0x30f148: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30f148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f14c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30f14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f150: 0xc04cafc  jal         func_132BF0
    ctx->pc = 0x30F150u;
    SET_GPR_U32(ctx, 31, 0x30F158u);
    ctx->pc = 0x30F154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F150u;
            // 0x30f154: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F158u; }
        if (ctx->pc != 0x30F158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F158u; }
        if (ctx->pc != 0x30F158u) { return; }
    }
    ctx->pc = 0x30F158u;
label_30f158:
    // 0x30f158: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x30f158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x30f15c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x30f15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f160: 0xc04cb8c  jal         func_132E30
    ctx->pc = 0x30F160u;
    SET_GPR_U32(ctx, 31, 0x30F168u);
    ctx->pc = 0x30F164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F160u;
            // 0x30f164: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F168u; }
        if (ctx->pc != 0x30F168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F168u; }
        if (ctx->pc != 0x30F168u) { return; }
    }
    ctx->pc = 0x30F168u;
label_30f168:
    // 0x30f168: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x30f168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30f16c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30f16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30f170: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x30f170u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30f174: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x30f174u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30f178: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x30f178u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30f17c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x30f17cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30f180: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30f180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30f184: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30f184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30f188: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30f188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f18c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30f18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f190: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30f190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f194: 0x3e00008  jr          $ra
    ctx->pc = 0x30F194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F194u;
            // 0x30f198: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30F19Cu;
    // 0x30f19c: 0x0  nop
    ctx->pc = 0x30f19cu;
    // NOP
}
