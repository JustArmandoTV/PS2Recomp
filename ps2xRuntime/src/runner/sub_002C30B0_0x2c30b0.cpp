#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C30B0
// Address: 0x2c30b0 - 0x2c32f0
void sub_002C30B0_0x2c30b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C30B0_0x2c30b0");
#endif

    switch (ctx->pc) {
        case 0x2c30e0u: goto label_2c30e0;
        case 0x2c3134u: goto label_2c3134;
        case 0x2c31b0u: goto label_2c31b0;
        case 0x2c31d0u: goto label_2c31d0;
        case 0x2c31e4u: goto label_2c31e4;
        case 0x2c31f0u: goto label_2c31f0;
        case 0x2c31f4u: goto label_2c31f4;
        case 0x2c3218u: goto label_2c3218;
        case 0x2c32a0u: goto label_2c32a0;
        case 0x2c32a8u: goto label_2c32a8;
        default: break;
    }

    ctx->pc = 0x2c30b0u;

    // 0x2c30b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c30b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c30b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c30b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c30b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c30b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c30bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c30bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c30c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c30c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c30c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c30c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c30c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c30cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c30ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c30d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c30d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c30d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30d8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C30D8u;
    SET_GPR_U32(ctx, 31, 0x2C30E0u);
    ctx->pc = 0x2C30DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C30D8u;
            // 0x2c30dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C30E0u; }
        if (ctx->pc != 0x2C30E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C30E0u; }
        if (ctx->pc != 0x2C30E0u) { return; }
    }
    ctx->pc = 0x2C30E0u;
label_2c30e0:
    // 0x2c30e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c30e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c30e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c30e8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c30e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c30ec: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c30ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c30f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c30f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c30f4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c30f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c30f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c30f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c30fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c30fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c3100: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c3100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c3104: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c3104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c3108: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c3108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c310c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c310cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c3110: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c3110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c3114: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c3114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c3118: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c3118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c311c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c311cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c3120: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c3120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c3124: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c3124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c3128: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c3128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c312c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C312Cu;
    SET_GPR_U32(ctx, 31, 0x2C3134u);
    ctx->pc = 0x2C3130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C312Cu;
            // 0x2c3130: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3134u; }
        if (ctx->pc != 0x2C3134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3134u; }
        if (ctx->pc != 0x2C3134u) { return; }
    }
    ctx->pc = 0x2C3134u;
label_2c3134:
    // 0x2c3134: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c3134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c3138: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c3138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c313c: 0x246312b0  addiu       $v1, $v1, 0x12B0
    ctx->pc = 0x2c313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4784));
    // 0x2c3140: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2c3140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2c3144: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c3144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c3148: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c3148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c314c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c314cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c3150: 0xac440da0  sw          $a0, 0xDA0($v0)
    ctx->pc = 0x2c3150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3488), GPR_U32(ctx, 4));
    // 0x2c3154: 0x246312c0  addiu       $v1, $v1, 0x12C0
    ctx->pc = 0x2c3154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x2c3158: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c315c: 0x244212f8  addiu       $v0, $v0, 0x12F8
    ctx->pc = 0x2c315cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4856));
    // 0x2c3160: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c3160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c3164: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c3164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c3168: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c3168u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c316c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c316cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c3170: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c3170u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c3174: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c3174u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c3178: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c3178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c317c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c317cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c3180: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c3180u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c3184: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c3184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c3188: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c3188u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c318c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c318cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c3190: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c3190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c3194: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C3194u;
    {
        const bool branch_taken_0x2c3194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3194) {
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C319Cu;
    // 0x2c319c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c319cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c31a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c31a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c31a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c31a8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C31A8u;
    SET_GPR_U32(ctx, 31, 0x2C31B0u);
    ctx->pc = 0x2C31ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31A8u;
            // 0x2c31ac: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31B0u; }
        if (ctx->pc != 0x2C31B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31B0u; }
        if (ctx->pc != 0x2C31B0u) { return; }
    }
    ctx->pc = 0x2C31B0u;
label_2c31b0:
    // 0x2c31b0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c31b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c31b4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c31b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c31b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c31b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c31bc: 0x24a53250  addiu       $a1, $a1, 0x3250
    ctx->pc = 0x2c31bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12880));
    // 0x2c31c0: 0x24c62eb0  addiu       $a2, $a2, 0x2EB0
    ctx->pc = 0x2c31c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11952));
    // 0x2c31c4: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2c31c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c31c8: 0xc040840  jal         func_102100
    ctx->pc = 0x2C31C8u;
    SET_GPR_U32(ctx, 31, 0x2C31D0u);
    ctx->pc = 0x2C31CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31C8u;
            // 0x2c31cc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31D0u; }
        if (ctx->pc != 0x2C31D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31D0u; }
        if (ctx->pc != 0x2C31D0u) { return; }
    }
    ctx->pc = 0x2C31D0u;
label_2c31d0:
    // 0x2c31d0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c31d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c31d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c31d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c31d8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c31d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c31dc: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C31DCu;
    SET_GPR_U32(ctx, 31, 0x2C31E4u);
    ctx->pc = 0x2C31E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31DCu;
            // 0x2c31e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31E4u; }
        if (ctx->pc != 0x2C31E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31E4u; }
        if (ctx->pc != 0x2C31E4u) { return; }
    }
    ctx->pc = 0x2C31E4u;
label_2c31e4:
    // 0x2c31e4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c31e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c31e8: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C31E8u;
    SET_GPR_U32(ctx, 31, 0x2C31F0u);
    ctx->pc = 0x2C31ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31E8u;
            // 0x2c31ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31F0u; }
        if (ctx->pc != 0x2C31F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31F0u; }
        if (ctx->pc != 0x2C31F0u) { return; }
    }
    ctx->pc = 0x2C31F0u;
label_2c31f0:
    // 0x2c31f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c31f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c31f4:
    // 0x2c31f4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c31f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c31f8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c31f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c31fc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c31fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c3200: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c3200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3204: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c3204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c3208: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c3208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c320c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c320cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3210: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C3210u;
    SET_GPR_U32(ctx, 31, 0x2C3218u);
    ctx->pc = 0x2C3214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3210u;
            // 0x2c3214: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3218u; }
        if (ctx->pc != 0x2C3218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3218u; }
        if (ctx->pc != 0x2C3218u) { return; }
    }
    ctx->pc = 0x2C3218u;
label_2c3218:
    // 0x2c3218: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c3218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c321c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c321cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c3220: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C3220u;
    {
        const bool branch_taken_0x2c3220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3220u;
            // 0x2c3224: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3220) {
            ctx->pc = 0x2C31F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c31f4;
        }
    }
    ctx->pc = 0x2C3228u;
label_2c3228:
    // 0x2c3228: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c3228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c322c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c322cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3230: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c3230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3234: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c3234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3238: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c323c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c323cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3240: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3240u;
            // 0x2c3244: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3248u;
    // 0x2c3248: 0x0  nop
    ctx->pc = 0x2c3248u;
    // NOP
    // 0x2c324c: 0x0  nop
    ctx->pc = 0x2c324cu;
    // NOP
    // 0x2c3250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c3254: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c3258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c3258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c325c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c325cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c3260: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c3264: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c3264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2c3268: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c3268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c326c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c326cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c3270: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c3270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2c3274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3278: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c3278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2c327c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c327cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3280: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c3280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2c3284: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c3284u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c3288: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c3288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2c328c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c328cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c3290: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c3290u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3294: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c3294u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c3298: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2C3298u;
    SET_GPR_U32(ctx, 31, 0x2C32A0u);
    ctx->pc = 0x2C329Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3298u;
            // 0x2c329c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32A0u; }
        if (ctx->pc != 0x2C32A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32A0u; }
        if (ctx->pc != 0x2C32A0u) { return; }
    }
    ctx->pc = 0x2C32A0u;
label_2c32a0:
    // 0x2c32a0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2C32A0u;
    SET_GPR_U32(ctx, 31, 0x2C32A8u);
    ctx->pc = 0x2C32A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C32A0u;
            // 0x2c32a4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32A8u; }
        if (ctx->pc != 0x2C32A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32A8u; }
        if (ctx->pc != 0x2C32A8u) { return; }
    }
    ctx->pc = 0x2C32A8u;
label_2c32a8:
    // 0x2c32a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c32ac: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2c32acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2c32b0: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x2c32b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2c32b4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c32b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c32b8: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x2c32b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
    // 0x2c32bc: 0x24631270  addiu       $v1, $v1, 0x1270
    ctx->pc = 0x2c32bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4720));
    // 0x2c32c0: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x2c32c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
    // 0x2c32c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c32c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c32c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c32c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c32cc: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2c32ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c32d0: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x2c32d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c32d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c32d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c32d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c32d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c32dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c32dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c32e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C32E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C32E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C32E0u;
            // 0x2c32e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C32E8u;
    // 0x2c32e8: 0x0  nop
    ctx->pc = 0x2c32e8u;
    // NOP
    // 0x2c32ec: 0x0  nop
    ctx->pc = 0x2c32ecu;
    // NOP
}
