#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C8370
// Address: 0x2c8370 - 0x2c85b0
void sub_002C8370_0x2c8370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8370_0x2c8370");
#endif

    switch (ctx->pc) {
        case 0x2c83a0u: goto label_2c83a0;
        case 0x2c83f4u: goto label_2c83f4;
        case 0x2c8470u: goto label_2c8470;
        case 0x2c8490u: goto label_2c8490;
        case 0x2c84a4u: goto label_2c84a4;
        case 0x2c84b0u: goto label_2c84b0;
        case 0x2c84b4u: goto label_2c84b4;
        case 0x2c84d8u: goto label_2c84d8;
        case 0x2c8560u: goto label_2c8560;
        case 0x2c8568u: goto label_2c8568;
        default: break;
    }

    ctx->pc = 0x2c8370u;

    // 0x2c8370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c8370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c8374: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c8374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c8378: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c8378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c837c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c837cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c8380: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c8380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c8384: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c8384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c838c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c838cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8390: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c8390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8394: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c8394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8398: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C8398u;
    SET_GPR_U32(ctx, 31, 0x2C83A0u);
    ctx->pc = 0x2C839Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8398u;
            // 0x2c839c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83A0u; }
        if (ctx->pc != 0x2C83A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83A0u; }
        if (ctx->pc != 0x2C83A0u) { return; }
    }
    ctx->pc = 0x2C83A0u;
label_2c83a0:
    // 0x2c83a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c83a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c83a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c83a8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c83a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c83ac: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c83acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c83b0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c83b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c83b4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c83b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c83b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c83b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c83bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c83bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c83c0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c83c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c83c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c83c8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c83c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c83cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c83ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c83d0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c83d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c83d4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c83d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c83d8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c83d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c83dc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c83dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c83e0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c83e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c83e4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c83e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c83e8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c83e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c83ec: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C83ECu;
    SET_GPR_U32(ctx, 31, 0x2C83F4u);
    ctx->pc = 0x2C83F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C83ECu;
            // 0x2c83f0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83F4u; }
        if (ctx->pc != 0x2C83F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83F4u; }
        if (ctx->pc != 0x2C83F4u) { return; }
    }
    ctx->pc = 0x2C83F4u;
label_2c83f4:
    // 0x2c83f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c83f8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c83f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c83fc: 0x24630790  addiu       $v1, $v1, 0x790
    ctx->pc = 0x2c83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1936));
    // 0x2c8400: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2c8400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2c8404: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c8404u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c8408: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c8408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c840c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c840cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c8410: 0xac440e08  sw          $a0, 0xE08($v0)
    ctx->pc = 0x2c8410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3592), GPR_U32(ctx, 4));
    // 0x2c8414: 0x246307a0  addiu       $v1, $v1, 0x7A0
    ctx->pc = 0x2c8414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1952));
    // 0x2c8418: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c841c: 0x244207d8  addiu       $v0, $v0, 0x7D8
    ctx->pc = 0x2c841cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2008));
    // 0x2c8420: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c8420u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c8424: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c8424u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c8428: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c8428u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c842c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c842cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c8430: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c8430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c8434: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c8434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c8438: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c8438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c843c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c843cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c8440: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c8440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c8444: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c8444u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c8448: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c8448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c844c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c844cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c8450: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c8450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c8454: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C8454u;
    {
        const bool branch_taken_0x2c8454 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8454) {
            ctx->pc = 0x2C84E8u;
            goto label_2c84e8;
        }
    }
    ctx->pc = 0x2C845Cu;
    // 0x2c845c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c845cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c8460: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c8460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c8464: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c8464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c8468: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C8468u;
    SET_GPR_U32(ctx, 31, 0x2C8470u);
    ctx->pc = 0x2C846Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8468u;
            // 0x2c846c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8470u; }
        if (ctx->pc != 0x2C8470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8470u; }
        if (ctx->pc != 0x2C8470u) { return; }
    }
    ctx->pc = 0x2C8470u;
label_2c8470:
    // 0x2c8470: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2c8470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2c8474: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2c8474u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2c8478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c847c: 0x24a58510  addiu       $a1, $a1, -0x7AF0
    ctx->pc = 0x2c847cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935824));
    // 0x2c8480: 0x24c68160  addiu       $a2, $a2, -0x7EA0
    ctx->pc = 0x2c8480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934880));
    // 0x2c8484: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2c8484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c8488: 0xc040840  jal         func_102100
    ctx->pc = 0x2C8488u;
    SET_GPR_U32(ctx, 31, 0x2C8490u);
    ctx->pc = 0x2C848Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8488u;
            // 0x2c848c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8490u; }
        if (ctx->pc != 0x2C8490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8490u; }
        if (ctx->pc != 0x2C8490u) { return; }
    }
    ctx->pc = 0x2C8490u;
label_2c8490:
    // 0x2c8490: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c8490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c8494: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c8494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8498: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c8498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c849c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C849Cu;
    SET_GPR_U32(ctx, 31, 0x2C84A4u);
    ctx->pc = 0x2C84A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C849Cu;
            // 0x2c84a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C84A4u; }
        if (ctx->pc != 0x2C84A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C84A4u; }
        if (ctx->pc != 0x2C84A4u) { return; }
    }
    ctx->pc = 0x2C84A4u;
label_2c84a4:
    // 0x2c84a4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c84a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c84a8: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C84A8u;
    SET_GPR_U32(ctx, 31, 0x2C84B0u);
    ctx->pc = 0x2C84ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C84A8u;
            // 0x2c84ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C84B0u; }
        if (ctx->pc != 0x2C84B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C84B0u; }
        if (ctx->pc != 0x2C84B0u) { return; }
    }
    ctx->pc = 0x2C84B0u;
label_2c84b0:
    // 0x2c84b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c84b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c84b4:
    // 0x2c84b4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c84b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c84b8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c84b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c84bc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c84bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c84c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c84c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c84c4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c84c8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c84c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c84cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c84d0: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C84D0u;
    SET_GPR_U32(ctx, 31, 0x2C84D8u);
    ctx->pc = 0x2C84D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C84D0u;
            // 0x2c84d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C84D8u; }
        if (ctx->pc != 0x2C84D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C84D8u; }
        if (ctx->pc != 0x2C84D8u) { return; }
    }
    ctx->pc = 0x2C84D8u;
label_2c84d8:
    // 0x2c84d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c84d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c84dc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c84dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c84e0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C84E0u;
    {
        const bool branch_taken_0x2c84e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C84E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C84E0u;
            // 0x2c84e4: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84e0) {
            ctx->pc = 0x2C84B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c84b4;
        }
    }
    ctx->pc = 0x2C84E8u;
label_2c84e8:
    // 0x2c84e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c84e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c84ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c84ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c84f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c84f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c84f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c84f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c84f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c84f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c84fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c84fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8500: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8500u;
            // 0x2c8504: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8508u;
    // 0x2c8508: 0x0  nop
    ctx->pc = 0x2c8508u;
    // NOP
    // 0x2c850c: 0x0  nop
    ctx->pc = 0x2c850cu;
    // NOP
    // 0x2c8510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c8510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8514: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c8518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c8518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c851c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c851cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8524: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c8524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2c8528: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c852c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c852cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c8530: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c8530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2c8534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8538: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c8538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2c853c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c853cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8540: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c8540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2c8544: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c8544u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c8548: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c8548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2c854c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c854cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c8550: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c8550u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8554: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c8554u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c8558: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2C8558u;
    SET_GPR_U32(ctx, 31, 0x2C8560u);
    ctx->pc = 0x2C855Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8558u;
            // 0x2c855c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8560u; }
        if (ctx->pc != 0x2C8560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8560u; }
        if (ctx->pc != 0x2C8560u) { return; }
    }
    ctx->pc = 0x2C8560u;
label_2c8560:
    // 0x2c8560: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2C8560u;
    SET_GPR_U32(ctx, 31, 0x2C8568u);
    ctx->pc = 0x2C8564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8560u;
            // 0x2c8564: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8568u; }
        if (ctx->pc != 0x2C8568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8568u; }
        if (ctx->pc != 0x2C8568u) { return; }
    }
    ctx->pc = 0x2C8568u;
label_2c8568:
    // 0x2c8568: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c8568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c856c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2c856cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2c8570: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x2c8570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2c8574: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c8578: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x2c8578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
    // 0x2c857c: 0x24630750  addiu       $v1, $v1, 0x750
    ctx->pc = 0x2c857cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x2c8580: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x2c8580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
    // 0x2c8584: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c8584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8588: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c8588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c858c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2c858cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8590: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x2c8590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8594: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c8594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c8598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c859c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c859cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c85a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C85A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C85A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C85A0u;
            // 0x2c85a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C85A8u;
    // 0x2c85a8: 0x0  nop
    ctx->pc = 0x2c85a8u;
    // NOP
    // 0x2c85ac: 0x0  nop
    ctx->pc = 0x2c85acu;
    // NOP
}
