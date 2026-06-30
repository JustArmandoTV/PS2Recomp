#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B66A0
// Address: 0x4b66a0 - 0x4b6920
void sub_004B66A0_0x4b66a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B66A0_0x4b66a0");
#endif

    switch (ctx->pc) {
        case 0x4b66d0u: goto label_4b66d0;
        case 0x4b6724u: goto label_4b6724;
        case 0x4b67a8u: goto label_4b67a8;
        case 0x4b67c8u: goto label_4b67c8;
        case 0x4b67dcu: goto label_4b67dc;
        case 0x4b67e8u: goto label_4b67e8;
        case 0x4b67ecu: goto label_4b67ec;
        case 0x4b6810u: goto label_4b6810;
        case 0x4b6890u: goto label_4b6890;
        case 0x4b6898u: goto label_4b6898;
        default: break;
    }

    ctx->pc = 0x4b66a0u;

    // 0x4b66a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b66a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b66a4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4b66a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b66a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b66a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b66ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b66acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4b66b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b66b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b66b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b66b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b66b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b66b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b66bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b66bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b66c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b66c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b66c4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4b66c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b66c8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4B66C8u;
    SET_GPR_U32(ctx, 31, 0x4B66D0u);
    ctx->pc = 0x4B66CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B66C8u;
            // 0x4b66cc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B66D0u; }
        if (ctx->pc != 0x4B66D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B66D0u; }
        if (ctx->pc != 0x4B66D0u) { return; }
    }
    ctx->pc = 0x4B66D0u;
label_4b66d0:
    // 0x4b66d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b66d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4b66d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4b66d8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4b66d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4b66dc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4b66dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4b66e0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b66e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b66e4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4b66e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4b66e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4b66e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4b66ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b66ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b66f0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4b66f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x4b66f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b66f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4b66f8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4b66f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x4b66fc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4b66fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4b6700: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4b6700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x4b6704: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4b6704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4b6708: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4b6708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4b670c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4b670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x4b6710: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4b6710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x4b6714: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4b6714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4b6718: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4b6718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4b671c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x4B671Cu;
    SET_GPR_U32(ctx, 31, 0x4B6724u);
    ctx->pc = 0x4B6720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B671Cu;
            // 0x4b6720: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6724u; }
        if (ctx->pc != 0x4B6724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6724u; }
        if (ctx->pc != 0x4B6724u) { return; }
    }
    ctx->pc = 0x4B6724u;
label_4b6724:
    // 0x4b6724: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b6724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b6728: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4b6728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4b672c: 0x24630b70  addiu       $v1, $v1, 0xB70
    ctx->pc = 0x4b672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2928));
    // 0x4b6730: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4b6730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4b6734: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4b6734u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4b6738: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4b6738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4b673c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b673cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b6740: 0xac44a9a8  sw          $a0, -0x5658($v0)
    ctx->pc = 0x4b6740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945192), GPR_U32(ctx, 4));
    // 0x4b6744: 0x24630b80  addiu       $v1, $v1, 0xB80
    ctx->pc = 0x4b6744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2944));
    // 0x4b6748: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b6748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b674c: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x4b674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
    // 0x4b6750: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b6750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b6754: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4b6754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4b6758: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4b6758u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4b675c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4b675cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4b6760: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4b6760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4b6764: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4b6764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4b6768: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4b6768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4b676c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4b676cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4b6770: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4b6770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4b6774: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4b6774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4b6778: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4b6778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4b677c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4b677cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4b6780: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x4b6780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x4b6784: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x4b6784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x4b6788: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4b6788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4b678c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4B678Cu;
    {
        const bool branch_taken_0x4b678c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b678c) {
            ctx->pc = 0x4B6820u;
            goto label_4b6820;
        }
    }
    ctx->pc = 0x4B6794u;
    // 0x4b6794: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4b6794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4b6798: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4b6798u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4b679c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4b679cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4b67a0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4B67A0u;
    SET_GPR_U32(ctx, 31, 0x4B67A8u);
    ctx->pc = 0x4B67A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B67A0u;
            // 0x4b67a4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B67A8u; }
        if (ctx->pc != 0x4B67A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B67A8u; }
        if (ctx->pc != 0x4B67A8u) { return; }
    }
    ctx->pc = 0x4B67A8u;
label_4b67a8:
    // 0x4b67a8: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4b67a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x4b67ac: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x4b67acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
    // 0x4b67b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b67b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b67b4: 0x24a56840  addiu       $a1, $a1, 0x6840
    ctx->pc = 0x4b67b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26688));
    // 0x4b67b8: 0x24c66430  addiu       $a2, $a2, 0x6430
    ctx->pc = 0x4b67b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25648));
    // 0x4b67bc: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x4b67bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x4b67c0: 0xc040840  jal         func_102100
    ctx->pc = 0x4B67C0u;
    SET_GPR_U32(ctx, 31, 0x4B67C8u);
    ctx->pc = 0x4B67C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B67C0u;
            // 0x4b67c4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B67C8u; }
        if (ctx->pc != 0x4B67C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B67C8u; }
        if (ctx->pc != 0x4B67C8u) { return; }
    }
    ctx->pc = 0x4B67C8u;
label_4b67c8:
    // 0x4b67c8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4b67c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x4b67cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b67ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b67d0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4b67d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x4b67d4: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4B67D4u;
    SET_GPR_U32(ctx, 31, 0x4B67DCu);
    ctx->pc = 0x4B67D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B67D4u;
            // 0x4b67d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B67DCu; }
        if (ctx->pc != 0x4B67DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B67DCu; }
        if (ctx->pc != 0x4B67DCu) { return; }
    }
    ctx->pc = 0x4B67DCu;
label_4b67dc:
    // 0x4b67dc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4b67dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4b67e0: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4B67E0u;
    SET_GPR_U32(ctx, 31, 0x4B67E8u);
    ctx->pc = 0x4B67E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B67E0u;
            // 0x4b67e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B67E8u; }
        if (ctx->pc != 0x4B67E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B67E8u; }
        if (ctx->pc != 0x4B67E8u) { return; }
    }
    ctx->pc = 0x4B67E8u;
label_4b67e8:
    // 0x4b67e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b67e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b67ec:
    // 0x4b67ec: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4b67ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x4b67f0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4b67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4b67f4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4b67f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x4b67f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b67f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b67fc: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4b67fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x4b6800: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4b6800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4b6804: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b6804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b6808: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4B6808u;
    SET_GPR_U32(ctx, 31, 0x4B6810u);
    ctx->pc = 0x4B680Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6808u;
            // 0x4b680c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6810u; }
        if (ctx->pc != 0x4B6810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6810u; }
        if (ctx->pc != 0x4B6810u) { return; }
    }
    ctx->pc = 0x4B6810u;
label_4b6810:
    // 0x4b6810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4b6810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4b6814: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4b6814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4b6818: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4B6818u;
    {
        const bool branch_taken_0x4b6818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B681Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6818u;
            // 0x4b681c: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6818) {
            ctx->pc = 0x4B67ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b67ec;
        }
    }
    ctx->pc = 0x4B6820u;
label_4b6820:
    // 0x4b6820: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4b6820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6824: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b6824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b6828: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b6828u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b682c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b682cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b6830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b6830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b6834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b6834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b6838: 0x3e00008  jr          $ra
    ctx->pc = 0x4B6838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B683Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6838u;
            // 0x4b683c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B6840u;
    // 0x4b6840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b6840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b6844: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b6844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4b6848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b6848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b684c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b684cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4b6850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b6850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b6854: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4b6854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x4b6858: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b6858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4b685c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b685cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4b6860: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x4b6860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x4b6864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b6864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b6868: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b6868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b686c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b686cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6870: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x4b6870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x4b6874: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4b6874u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4b6878: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4b6878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x4b687c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4b687cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x4b6880: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x4b6880u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b6884: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x4b6884u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b6888: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4B6888u;
    SET_GPR_U32(ctx, 31, 0x4B6890u);
    ctx->pc = 0x4B688Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6888u;
            // 0x4b688c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6890u; }
        if (ctx->pc != 0x4B6890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6890u; }
        if (ctx->pc != 0x4B6890u) { return; }
    }
    ctx->pc = 0x4B6890u;
label_4b6890:
    // 0x4b6890: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x4B6890u;
    SET_GPR_U32(ctx, 31, 0x4B6898u);
    ctx->pc = 0x4B6894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6890u;
            // 0x4b6894: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6898u; }
        if (ctx->pc != 0x4B6898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6898u; }
        if (ctx->pc != 0x4B6898u) { return; }
    }
    ctx->pc = 0x4B6898u;
label_4b6898:
    // 0x4b6898: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b6898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4b689c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x4b689cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x4b68a0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4b68a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4b68a4: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x4b68a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x4b68a8: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x4b68a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x4b68ac: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x4b68acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x4b68b0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4b68b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x4b68b4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b68b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b68b8: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x4b68b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x4b68bc: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x4b68bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
    // 0x4b68c0: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x4b68c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
    // 0x4b68c4: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x4b68c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
    // 0x4b68c8: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x4b68c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
    // 0x4b68cc: 0x24840b20  addiu       $a0, $a0, 0xB20
    ctx->pc = 0x4b68ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2848));
    // 0x4b68d0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x4b68d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x4b68d4: 0x24630b60  addiu       $v1, $v1, 0xB60
    ctx->pc = 0x4b68d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2912));
    // 0x4b68d8: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x4b68d8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b68dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b68dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b68e0: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x4b68e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
    // 0x4b68e4: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x4b68e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
    // 0x4b68e8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4b68e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x4b68ec: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4b68ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4b68f0: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x4b68f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
    // 0x4b68f4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4b68f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4b68f8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4b68f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x4b68fc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x4b68fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x4b6900: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x4b6900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x4b6904: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x4b6904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x4b6908: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x4b6908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x4b690c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b690cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b6910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b6910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b6914: 0x3e00008  jr          $ra
    ctx->pc = 0x4B6914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6914u;
            // 0x4b6918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B691Cu;
    // 0x4b691c: 0x0  nop
    ctx->pc = 0x4b691cu;
    // NOP
}
