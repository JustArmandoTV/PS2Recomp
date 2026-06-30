#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00504B50
// Address: 0x504b50 - 0x504e70
void sub_00504B50_0x504b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504B50_0x504b50");
#endif

    switch (ctx->pc) {
        case 0x504b80u: goto label_504b80;
        case 0x504bd4u: goto label_504bd4;
        case 0x504c58u: goto label_504c58;
        case 0x504c78u: goto label_504c78;
        case 0x504c8cu: goto label_504c8c;
        case 0x504c98u: goto label_504c98;
        case 0x504c9cu: goto label_504c9c;
        case 0x504cc0u: goto label_504cc0;
        case 0x504d04u: goto label_504d04;
        case 0x504d0cu: goto label_504d0c;
        case 0x504d4cu: goto label_504d4c;
        case 0x504d90u: goto label_504d90;
        case 0x504e34u: goto label_504e34;
        case 0x504e4cu: goto label_504e4c;
        default: break;
    }

    ctx->pc = 0x504b50u;

    // 0x504b50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x504b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x504b54: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x504b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x504b58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x504b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x504b5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x504b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x504b60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x504b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x504b64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x504b64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x504b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x504b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x504b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x504b70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x504b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504b74: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x504b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504b78: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x504B78u;
    SET_GPR_U32(ctx, 31, 0x504B80u);
    ctx->pc = 0x504B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504B78u;
            // 0x504b7c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504B80u; }
        if (ctx->pc != 0x504B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504B80u; }
        if (ctx->pc != 0x504B80u) { return; }
    }
    ctx->pc = 0x504B80u;
label_504b80:
    // 0x504b80: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x504b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x504b84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x504b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x504b88: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x504b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x504b8c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x504b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x504b90: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x504b90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x504b94: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x504b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x504b98: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x504b98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x504b9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x504b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x504ba0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x504ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x504ba4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x504ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x504ba8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x504ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x504bac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x504bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x504bb0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x504bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x504bb4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x504bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x504bb8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x504bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x504bbc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x504bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x504bc0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x504bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x504bc4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x504bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x504bc8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x504bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x504bcc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x504BCCu;
    SET_GPR_U32(ctx, 31, 0x504BD4u);
    ctx->pc = 0x504BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504BCCu;
            // 0x504bd0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504BD4u; }
        if (ctx->pc != 0x504BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504BD4u; }
        if (ctx->pc != 0x504BD4u) { return; }
    }
    ctx->pc = 0x504BD4u;
label_504bd4:
    // 0x504bd4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x504bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x504bd8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x504bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x504bdc: 0x24634cc0  addiu       $v1, $v1, 0x4CC0
    ctx->pc = 0x504bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19648));
    // 0x504be0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x504be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x504be4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x504be4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x504be8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x504be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x504bec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x504becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x504bf0: 0xac44aaf0  sw          $a0, -0x5510($v0)
    ctx->pc = 0x504bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945520), GPR_U32(ctx, 4));
    // 0x504bf4: 0x24634cd0  addiu       $v1, $v1, 0x4CD0
    ctx->pc = 0x504bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19664));
    // 0x504bf8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x504bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x504bfc: 0x24424d08  addiu       $v0, $v0, 0x4D08
    ctx->pc = 0x504bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19720));
    // 0x504c00: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x504c00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x504c04: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x504c04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x504c08: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x504c08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x504c0c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x504c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x504c10: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x504c10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x504c14: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x504c14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x504c18: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x504c18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x504c1c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x504c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x504c20: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x504c20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x504c24: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x504c24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x504c28: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x504c28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x504c2c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x504c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x504c30: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x504c30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x504c34: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x504C34u;
    {
        const bool branch_taken_0x504c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x504c34) {
            ctx->pc = 0x504CD0u;
            goto label_504cd0;
        }
    }
    ctx->pc = 0x504C3Cu;
    // 0x504c3c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x504c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x504c40: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x504c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x504c44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x504c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x504c48: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x504c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x504c4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x504c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x504c50: 0xc040138  jal         func_1004E0
    ctx->pc = 0x504C50u;
    SET_GPR_U32(ctx, 31, 0x504C58u);
    ctx->pc = 0x504C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504C50u;
            // 0x504c54: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504C58u; }
        if (ctx->pc != 0x504C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504C58u; }
        if (ctx->pc != 0x504C58u) { return; }
    }
    ctx->pc = 0x504C58u;
label_504c58:
    // 0x504c58: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x504c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
    // 0x504c5c: 0x3c060050  lui         $a2, 0x50
    ctx->pc = 0x504c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)80 << 16));
    // 0x504c60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x504c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504c64: 0x24a54cf0  addiu       $a1, $a1, 0x4CF0
    ctx->pc = 0x504c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19696));
    // 0x504c68: 0x24c64910  addiu       $a2, $a2, 0x4910
    ctx->pc = 0x504c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18704));
    // 0x504c6c: 0x240702d0  addiu       $a3, $zero, 0x2D0
    ctx->pc = 0x504c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    // 0x504c70: 0xc040840  jal         func_102100
    ctx->pc = 0x504C70u;
    SET_GPR_U32(ctx, 31, 0x504C78u);
    ctx->pc = 0x504C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504C70u;
            // 0x504c74: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504C78u; }
        if (ctx->pc != 0x504C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504C78u; }
        if (ctx->pc != 0x504C78u) { return; }
    }
    ctx->pc = 0x504C78u;
label_504c78:
    // 0x504c78: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x504c78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x504c7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x504c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504c80: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x504c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x504c84: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x504C84u;
    SET_GPR_U32(ctx, 31, 0x504C8Cu);
    ctx->pc = 0x504C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504C84u;
            // 0x504c88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504C8Cu; }
        if (ctx->pc != 0x504C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504C8Cu; }
        if (ctx->pc != 0x504C8Cu) { return; }
    }
    ctx->pc = 0x504C8Cu;
label_504c8c:
    // 0x504c8c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x504c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x504c90: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x504C90u;
    SET_GPR_U32(ctx, 31, 0x504C98u);
    ctx->pc = 0x504C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504C90u;
            // 0x504c94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504C98u; }
        if (ctx->pc != 0x504C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504C98u; }
        if (ctx->pc != 0x504C98u) { return; }
    }
    ctx->pc = 0x504C98u;
label_504c98:
    // 0x504c98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x504c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_504c9c:
    // 0x504c9c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x504c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x504ca0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x504ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x504ca4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x504ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x504ca8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x504ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x504cac: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x504cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x504cb0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x504cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x504cb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x504cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x504cb8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x504CB8u;
    SET_GPR_U32(ctx, 31, 0x504CC0u);
    ctx->pc = 0x504CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504CB8u;
            // 0x504cbc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504CC0u; }
        if (ctx->pc != 0x504CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504CC0u; }
        if (ctx->pc != 0x504CC0u) { return; }
    }
    ctx->pc = 0x504CC0u;
label_504cc0:
    // 0x504cc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x504cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x504cc4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x504cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x504cc8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x504CC8u;
    {
        const bool branch_taken_0x504cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x504CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504CC8u;
            // 0x504ccc: 0x265202d0  addiu       $s2, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504cc8) {
            ctx->pc = 0x504C9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_504c9c;
        }
    }
    ctx->pc = 0x504CD0u;
label_504cd0:
    // 0x504cd0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x504cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504cd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x504cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x504cd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x504cd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x504cdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x504cdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504ce0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x504ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504ce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x504CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504CE8u;
            // 0x504cec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504CF0u;
    // 0x504cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x504cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x504cf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x504cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x504cf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x504cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x504cfc: 0xc14139c  jal         func_504E70
    ctx->pc = 0x504CFCu;
    SET_GPR_U32(ctx, 31, 0x504D04u);
    ctx->pc = 0x504D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504CFCu;
            // 0x504d00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504E70u;
    if (runtime->hasFunction(0x504E70u)) {
        auto targetFn = runtime->lookupFunction(0x504E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504D04u; }
        if (ctx->pc != 0x504D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00504E70_0x504e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504D04u; }
        if (ctx->pc != 0x504D04u) { return; }
    }
    ctx->pc = 0x504D04u;
label_504d04:
    // 0x504d04: 0xc140c98  jal         func_503260
    ctx->pc = 0x504D04u;
    SET_GPR_U32(ctx, 31, 0x504D0Cu);
    ctx->pc = 0x504D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504D04u;
            // 0x504d08: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x503260u;
    if (runtime->hasFunction(0x503260u)) {
        auto targetFn = runtime->lookupFunction(0x503260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504D0Cu; }
        if (ctx->pc != 0x504D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00503260_0x503260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504D0Cu; }
        if (ctx->pc != 0x504D0Cu) { return; }
    }
    ctx->pc = 0x504D0Cu;
label_504d0c:
    // 0x504d0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x504d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x504d10: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x504d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x504d14: 0x24424ae0  addiu       $v0, $v0, 0x4AE0
    ctx->pc = 0x504d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19168));
    // 0x504d18: 0x24634b20  addiu       $v1, $v1, 0x4B20
    ctx->pc = 0x504d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19232));
    // 0x504d1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x504d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x504d20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x504d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d24: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x504d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x504d28: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x504d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x504d2c: 0x24424b88  addiu       $v0, $v0, 0x4B88
    ctx->pc = 0x504d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19336));
    // 0x504d30: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x504d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x504d34: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x504D34u;
    {
        const bool branch_taken_0x504d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x504D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504D34u;
            // 0x504d38: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504d34) {
            ctx->pc = 0x504D40u;
            goto label_504d40;
        }
    }
    ctx->pc = 0x504D3Cu;
    // 0x504d3c: 0x260600e0  addiu       $a2, $s0, 0xE0
    ctx->pc = 0x504d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_504d40:
    // 0x504d40: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x504d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x504d44: 0xc140c44  jal         func_503110
    ctx->pc = 0x504D44u;
    SET_GPR_U32(ctx, 31, 0x504D4Cu);
    ctx->pc = 0x504D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504D44u;
            // 0x504d48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x503110u;
    if (runtime->hasFunction(0x503110u)) {
        auto targetFn = runtime->lookupFunction(0x503110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504D4Cu; }
        if (ctx->pc != 0x504D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00503110_0x503110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504D4Cu; }
        if (ctx->pc != 0x504D4Cu) { return; }
    }
    ctx->pc = 0x504D4Cu;
label_504d4c:
    // 0x504d4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x504d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x504d50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x504d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x504d54: 0x24634bd0  addiu       $v1, $v1, 0x4BD0
    ctx->pc = 0x504d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19408));
    // 0x504d58: 0x24424c10  addiu       $v0, $v0, 0x4C10
    ctx->pc = 0x504d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19472));
    // 0x504d5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x504d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x504d60: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x504d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x504d64: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x504d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x504d68: 0x24634c78  addiu       $v1, $v1, 0x4C78
    ctx->pc = 0x504d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19576));
    // 0x504d6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x504d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504d70: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x504d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x504d74: 0xae0002c0  sw          $zero, 0x2C0($s0)
    ctx->pc = 0x504d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
    // 0x504d78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x504d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504d7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504d80: 0x3e00008  jr          $ra
    ctx->pc = 0x504D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504D80u;
            // 0x504d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504D88u;
    // 0x504d88: 0x0  nop
    ctx->pc = 0x504d88u;
    // NOP
    // 0x504d8c: 0x0  nop
    ctx->pc = 0x504d8cu;
    // NOP
label_504d90:
    // 0x504d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x504d94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x504d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x504d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x504d9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x504d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x504da0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x504da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504da4: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x504DA4u;
    {
        const bool branch_taken_0x504da4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x504DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504DA4u;
            // 0x504da8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504da4) {
            ctx->pc = 0x504E4Cu;
            goto label_504e4c;
        }
    }
    ctx->pc = 0x504DACu;
    // 0x504dac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x504dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x504db0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x504db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x504db4: 0x24634ae0  addiu       $v1, $v1, 0x4AE0
    ctx->pc = 0x504db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19168));
    // 0x504db8: 0x24424b20  addiu       $v0, $v0, 0x4B20
    ctx->pc = 0x504db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19232));
    // 0x504dbc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x504dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x504dc0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x504dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x504dc4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x504dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x504dc8: 0x24634b88  addiu       $v1, $v1, 0x4B88
    ctx->pc = 0x504dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19336));
    // 0x504dcc: 0x262200f0  addiu       $v0, $s1, 0xF0
    ctx->pc = 0x504dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x504dd0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x504DD0u;
    {
        const bool branch_taken_0x504dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x504DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504DD0u;
            // 0x504dd4: 0xae2300e0  sw          $v1, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504dd0) {
            ctx->pc = 0x504DF0u;
            goto label_504df0;
        }
    }
    ctx->pc = 0x504DD8u;
    // 0x504dd8: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x504dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x504ddc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x504DDCu;
    {
        const bool branch_taken_0x504ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x504ddc) {
            ctx->pc = 0x504DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504DDCu;
            // 0x504de0: 0x262200e0  addiu       $v0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504DF4u;
            goto label_504df4;
        }
    }
    ctx->pc = 0x504DE4u;
    // 0x504de4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x504de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x504de8: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x504de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x504dec: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x504decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
label_504df0:
    // 0x504df0: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x504df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_504df4:
    // 0x504df4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x504DF4u;
    {
        const bool branch_taken_0x504df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x504df4) {
            ctx->pc = 0x504E08u;
            goto label_504e08;
        }
    }
    ctx->pc = 0x504DFCu;
    // 0x504dfc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x504dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x504e00: 0x244247e0  addiu       $v0, $v0, 0x47E0
    ctx->pc = 0x504e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18400));
    // 0x504e04: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x504e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_504e08:
    // 0x504e08: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x504E08u;
    {
        const bool branch_taken_0x504e08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x504e08) {
            ctx->pc = 0x504E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504E08u;
            // 0x504e0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504E38u;
            goto label_504e38;
        }
    }
    ctx->pc = 0x504E10u;
    // 0x504e10: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x504e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x504e14: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x504e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x504e18: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x504e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
    // 0x504e1c: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x504e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
    // 0x504e20: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x504e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x504e24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x504e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504e28: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x504e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x504e2c: 0xc0aee40  jal         func_2BB900
    ctx->pc = 0x504E2Cu;
    SET_GPR_U32(ctx, 31, 0x504E34u);
    ctx->pc = 0x504E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504E2Cu;
            // 0x504e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504E34u; }
        if (ctx->pc != 0x504E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504E34u; }
        if (ctx->pc != 0x504E34u) { return; }
    }
    ctx->pc = 0x504E34u;
label_504e34:
    // 0x504e34: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x504e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_504e38:
    // 0x504e38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x504e38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x504e3c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x504E3Cu;
    {
        const bool branch_taken_0x504e3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x504e3c) {
            ctx->pc = 0x504E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504E3Cu;
            // 0x504e40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504E50u;
            goto label_504e50;
        }
    }
    ctx->pc = 0x504E44u;
    // 0x504e44: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x504E44u;
    SET_GPR_U32(ctx, 31, 0x504E4Cu);
    ctx->pc = 0x504E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504E44u;
            // 0x504e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504E4Cu; }
        if (ctx->pc != 0x504E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504E4Cu; }
        if (ctx->pc != 0x504E4Cu) { return; }
    }
    ctx->pc = 0x504E4Cu;
label_504e4c:
    // 0x504e4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x504e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_504e50:
    // 0x504e50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x504e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504e54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x504e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x504E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504E5Cu;
            // 0x504e60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504E64u;
    // 0x504e64: 0x0  nop
    ctx->pc = 0x504e64u;
    // NOP
    // 0x504e68: 0x0  nop
    ctx->pc = 0x504e68u;
    // NOP
    // 0x504e6c: 0x0  nop
    ctx->pc = 0x504e6cu;
    // NOP
}
