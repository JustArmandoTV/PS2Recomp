#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5950
// Address: 0x2c5950 - 0x2c5bd0
void sub_002C5950_0x2c5950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5950_0x2c5950");
#endif

    switch (ctx->pc) {
        case 0x2c5980u: goto label_2c5980;
        case 0x2c59d4u: goto label_2c59d4;
        case 0x2c5a48u: goto label_2c5a48;
        case 0x2c5a68u: goto label_2c5a68;
        case 0x2c5a7cu: goto label_2c5a7c;
        case 0x2c5a88u: goto label_2c5a88;
        case 0x2c5a8cu: goto label_2c5a8c;
        case 0x2c5ab0u: goto label_2c5ab0;
        case 0x2c5af4u: goto label_2c5af4;
        case 0x2c5afcu: goto label_2c5afc;
        case 0x2c5b1cu: goto label_2c5b1c;
        case 0x2c5b24u: goto label_2c5b24;
        case 0x2c5b68u: goto label_2c5b68;
        case 0x2c5b70u: goto label_2c5b70;
        default: break;
    }

    ctx->pc = 0x2c5950u;

    // 0x2c5950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c5950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c5954: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c5954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c5958: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c5958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c595c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c595cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c5960: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c5960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c5964: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c5964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c596c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c596cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5970: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c5970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5974: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c5974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5978: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C5978u;
    SET_GPR_U32(ctx, 31, 0x2C5980u);
    ctx->pc = 0x2C597Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5978u;
            // 0x2c597c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5980u; }
        if (ctx->pc != 0x2C5980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5980u; }
        if (ctx->pc != 0x2C5980u) { return; }
    }
    ctx->pc = 0x2C5980u;
label_2c5980:
    // 0x2c5980: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c5984: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c5988: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c5988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c598c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c5990: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c5990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c5994: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c5994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c5998: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c5998u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c599c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c59a0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c59a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c59a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c59a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c59a8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c59a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c59ac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c59acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c59b0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c59b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c59b4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c59b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c59b8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c59b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c59bc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c59bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c59c0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c59c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c59c4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c59c8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c59c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c59cc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C59CCu;
    SET_GPR_U32(ctx, 31, 0x2C59D4u);
    ctx->pc = 0x2C59D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C59CCu;
            // 0x2c59d0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59D4u; }
        if (ctx->pc != 0x2C59D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59D4u; }
        if (ctx->pc != 0x2C59D4u) { return; }
    }
    ctx->pc = 0x2C59D4u;
label_2c59d4:
    // 0x2c59d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c59d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c59d8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c59d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c59dc: 0x24630ce8  addiu       $v1, $v1, 0xCE8
    ctx->pc = 0x2c59dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3304));
    // 0x2c59e0: 0x2444ff90  addiu       $a0, $v0, -0x70
    ctx->pc = 0x2c59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
    // 0x2c59e4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c59e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c59e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c59ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c59f0: 0xac440de0  sw          $a0, 0xDE0($v0)
    ctx->pc = 0x2c59f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3552), GPR_U32(ctx, 4));
    // 0x2c59f4: 0x24630d00  addiu       $v1, $v1, 0xD00
    ctx->pc = 0x2c59f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
    // 0x2c59f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c59fc: 0x24420d38  addiu       $v0, $v0, 0xD38
    ctx->pc = 0x2c59fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3384));
    // 0x2c5a00: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c5a00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c5a04: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c5a04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c5a08: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c5a08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c5a0c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c5a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c5a10: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c5a10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c5a14: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c5a14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c5a18: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c5a18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c5a1c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c5a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c5a20: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c5a20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c5a24: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c5a24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c5a28: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c5a28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c5a2c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c5a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c5a30: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c5a30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c5a34: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C5A34u;
    {
        const bool branch_taken_0x2c5a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5a34) {
            ctx->pc = 0x2C5AC0u;
            goto label_2c5ac0;
        }
    }
    ctx->pc = 0x2C5A3Cu;
    // 0x2c5a3c: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x2c5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x2c5a40: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C5A40u;
    SET_GPR_U32(ctx, 31, 0x2C5A48u);
    ctx->pc = 0x2C5A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A40u;
            // 0x2c5a44: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A48u; }
        if (ctx->pc != 0x2C5A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A48u; }
        if (ctx->pc != 0x2C5A48u) { return; }
    }
    ctx->pc = 0x2C5A48u;
label_2c5a48:
    // 0x2c5a48: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c5a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c5a4c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c5a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c5a50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a54: 0x24a55ae0  addiu       $a1, $a1, 0x5AE0
    ctx->pc = 0x2c5a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23264));
    // 0x2c5a58: 0x24c64cc0  addiu       $a2, $a2, 0x4CC0
    ctx->pc = 0x2c5a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19648));
    // 0x2c5a5c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2c5a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c5a60: 0xc040840  jal         func_102100
    ctx->pc = 0x2C5A60u;
    SET_GPR_U32(ctx, 31, 0x2C5A68u);
    ctx->pc = 0x2C5A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A60u;
            // 0x2c5a64: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A68u; }
        if (ctx->pc != 0x2C5A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A68u; }
        if (ctx->pc != 0x2C5A68u) { return; }
    }
    ctx->pc = 0x2C5A68u;
label_2c5a68:
    // 0x2c5a68: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c5a68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c5a6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c5a6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a70: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c5a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c5a74: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C5A74u;
    SET_GPR_U32(ctx, 31, 0x2C5A7Cu);
    ctx->pc = 0x2C5A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A74u;
            // 0x2c5a78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A7Cu; }
        if (ctx->pc != 0x2C5A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A7Cu; }
        if (ctx->pc != 0x2C5A7Cu) { return; }
    }
    ctx->pc = 0x2C5A7Cu;
label_2c5a7c:
    // 0x2c5a7c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c5a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c5a80: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C5A80u;
    SET_GPR_U32(ctx, 31, 0x2C5A88u);
    ctx->pc = 0x2C5A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A80u;
            // 0x2c5a84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A88u; }
        if (ctx->pc != 0x2C5A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A88u; }
        if (ctx->pc != 0x2C5A88u) { return; }
    }
    ctx->pc = 0x2C5A88u;
label_2c5a88:
    // 0x2c5a88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c5a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5a8c:
    // 0x2c5a8c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c5a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c5a90: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c5a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c5a94: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c5a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c5a98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c5a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5a9c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c5aa0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c5aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c5aa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c5aa8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C5AA8u;
    SET_GPR_U32(ctx, 31, 0x2C5AB0u);
    ctx->pc = 0x2C5AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5AA8u;
            // 0x2c5aac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5AB0u; }
        if (ctx->pc != 0x2C5AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5AB0u; }
        if (ctx->pc != 0x2C5AB0u) { return; }
    }
    ctx->pc = 0x2C5AB0u;
label_2c5ab0:
    // 0x2c5ab0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c5ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c5ab4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c5ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c5ab8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C5AB8u;
    {
        const bool branch_taken_0x2c5ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5AB8u;
            // 0x2c5abc: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ab8) {
            ctx->pc = 0x2C5A8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c5a8c;
        }
    }
    ctx->pc = 0x2C5AC0u;
label_2c5ac0:
    // 0x2c5ac0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c5ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ac4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c5ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5ac8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c5ac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5acc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c5accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5AD8u;
            // 0x2c5adc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5AE0u;
    // 0x2c5ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c5ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c5ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c5ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5aec: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x2C5AECu;
    SET_GPR_U32(ctx, 31, 0x2C5AF4u);
    ctx->pc = 0x2C5AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5AECu;
            // 0x2c5af0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5AF4u; }
        if (ctx->pc != 0x2C5AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5AF4u; }
        if (ctx->pc != 0x2C5AF4u) { return; }
    }
    ctx->pc = 0x2C5AF4u;
label_2c5af4:
    // 0x2c5af4: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x2C5AF4u;
    SET_GPR_U32(ctx, 31, 0x2C5AFCu);
    ctx->pc = 0x2C5AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5AF4u;
            // 0x2c5af8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5AFCu; }
        if (ctx->pc != 0x2C5AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5AFCu; }
        if (ctx->pc != 0x2C5AFCu) { return; }
    }
    ctx->pc = 0x2C5AFCu;
label_2c5afc:
    // 0x2c5afc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c5b00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c5b04: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2c5b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x2c5b08: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2c5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x2c5b0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c5b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c5b10: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2c5b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2c5b14: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x2C5B14u;
    SET_GPR_U32(ctx, 31, 0x2C5B1Cu);
    ctx->pc = 0x2C5B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B14u;
            // 0x2c5b18: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B1Cu; }
        if (ctx->pc != 0x2C5B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B1Cu; }
        if (ctx->pc != 0x2C5B1Cu) { return; }
    }
    ctx->pc = 0x2C5B1Cu;
label_2c5b1c:
    // 0x2c5b1c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x2C5B1Cu;
    SET_GPR_U32(ctx, 31, 0x2C5B24u);
    ctx->pc = 0x2C5B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B1Cu;
            // 0x2c5b20: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B24u; }
        if (ctx->pc != 0x2C5B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B24u; }
        if (ctx->pc != 0x2C5B24u) { return; }
    }
    ctx->pc = 0x2C5B24u;
label_2c5b24:
    // 0x2c5b24: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2c5b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2c5b28: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x2c5b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2c5b2c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2c5b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2c5b30: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2c5b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x2c5b34: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2c5b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2c5b38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5b3c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2c5b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2c5b40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5b44: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2c5b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2c5b48: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x2c5b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x2c5b4c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2c5b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x2c5b50: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2c5b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x2c5b54: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2c5b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x2c5b58: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x2c5b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x2c5b5c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x2c5b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x2c5b60: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x2C5B60u;
    SET_GPR_U32(ctx, 31, 0x2C5B68u);
    ctx->pc = 0x2C5B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B60u;
            // 0x2c5b64: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B68u; }
        if (ctx->pc != 0x2C5B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B68u; }
        if (ctx->pc != 0x2C5B68u) { return; }
    }
    ctx->pc = 0x2C5B68u;
label_2c5b68:
    // 0x2c5b68: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x2C5B68u;
    SET_GPR_U32(ctx, 31, 0x2C5B70u);
    ctx->pc = 0x2C5B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B68u;
            // 0x2c5b6c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B70u; }
        if (ctx->pc != 0x2C5B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B70u; }
        if (ctx->pc != 0x2C5B70u) { return; }
    }
    ctx->pc = 0x2C5B70u;
label_2c5b70:
    // 0x2c5b70: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x2c5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x2c5b74: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2c5b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2c5b78: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x2c5b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x2c5b7c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2c5b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2c5b80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c5b84: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x2c5b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2c5b88: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x2c5b88u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5b8c: 0x24a5e860  addiu       $a1, $a1, -0x17A0
    ctx->pc = 0x2c5b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961248));
    // 0x2c5b90: 0x2484e8a0  addiu       $a0, $a0, -0x1760
    ctx->pc = 0x2c5b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961312));
    // 0x2c5b94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5b98: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x2c5b98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2c5b9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c5b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ba0: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x2c5ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
    // 0x2c5ba4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2c5ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2c5ba8: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x2c5ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x2c5bac: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2c5bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x2c5bb0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x2c5bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x2c5bb4: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2c5bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x2c5bb8: 0xa20300ec  sb          $v1, 0xEC($s0)
    ctx->pc = 0x2c5bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5bbc: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x2c5bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x2c5bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c5bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BC8u;
            // 0x2c5bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5BD0u;
}
