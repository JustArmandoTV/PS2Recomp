#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B9E30
// Address: 0x2b9e30 - 0x2b9fe0
void sub_002B9E30_0x2b9e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9E30_0x2b9e30");
#endif

    switch (ctx->pc) {
        case 0x2b9e60u: goto label_2b9e60;
        case 0x2b9eb4u: goto label_2b9eb4;
        case 0x2b9f48u: goto label_2b9f48;
        case 0x2b9f68u: goto label_2b9f68;
        case 0x2b9f7cu: goto label_2b9f7c;
        case 0x2b9f88u: goto label_2b9f88;
        case 0x2b9f8cu: goto label_2b9f8c;
        case 0x2b9fb0u: goto label_2b9fb0;
        default: break;
    }

    ctx->pc = 0x2b9e30u;

    // 0x2b9e30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b9e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b9e34: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2b9e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b9e38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b9e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b9e3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b9e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b9e40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b9e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b9e44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b9e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b9e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b9e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b9e50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b9e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9e54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b9e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9e58: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2B9E58u;
    SET_GPR_U32(ctx, 31, 0x2B9E60u);
    ctx->pc = 0x2B9E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9E58u;
            // 0x2b9e5c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E60u; }
        if (ctx->pc != 0x2B9E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9E60u; }
        if (ctx->pc != 0x2B9E60u) { return; }
    }
    ctx->pc = 0x2B9E60u;
label_2b9e60:
    // 0x2b9e60: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b9e64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b9e68: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2b9e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2b9e6c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2b9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2b9e70: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2b9e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2b9e74: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2b9e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2b9e78: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2b9e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2b9e7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b9e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b9e80: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2b9e80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2b9e84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b9e88: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2b9e88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2b9e8c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2b9e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b9e90: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2b9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2b9e94: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2b9e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2b9e98: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2b9e98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2b9e9c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2b9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2b9ea0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2b9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2b9ea4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2b9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b9ea8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2b9ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b9eac: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2B9EACu;
    SET_GPR_U32(ctx, 31, 0x2B9EB4u);
    ctx->pc = 0x2B9EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9EACu;
            // 0x2b9eb0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9EB4u; }
        if (ctx->pc != 0x2B9EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9EB4u; }
        if (ctx->pc != 0x2B9EB4u) { return; }
    }
    ctx->pc = 0x2B9EB4u;
label_2b9eb4:
    // 0x2b9eb4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b9eb8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2b9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2b9ebc: 0x24632518  addiu       $v1, $v1, 0x2518
    ctx->pc = 0x2b9ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9496));
    // 0x2b9ec0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2b9ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2b9ec4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2b9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2b9ec8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b9ecc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b9ed0: 0xac440ce0  sw          $a0, 0xCE0($v0)
    ctx->pc = 0x2b9ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3296), GPR_U32(ctx, 4));
    // 0x2b9ed4: 0x24632530  addiu       $v1, $v1, 0x2530
    ctx->pc = 0x2b9ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9520));
    // 0x2b9ed8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b9edc: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2b9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x2b9ee0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2b9ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2b9ee4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2b9ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2b9ee8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2b9ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2b9eec: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2b9eecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2b9ef0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2b9ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2b9ef4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2b9ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2b9ef8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2b9ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2b9efc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2b9efcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2b9f00: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2b9f00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2b9f04: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2b9f04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2b9f08: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2b9f08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2b9f0c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2b9f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2b9f10: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x2b9f10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x2b9f14: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x2b9f14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x2b9f18: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x2b9f18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x2b9f1c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x2b9f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x2b9f20: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x2b9f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x2b9f24: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x2b9f24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x2b9f28: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2b9f28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2b9f2c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B9F2Cu;
    {
        const bool branch_taken_0x2b9f2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9f2c) {
            ctx->pc = 0x2B9FC0u;
            goto label_2b9fc0;
        }
    }
    ctx->pc = 0x2B9F34u;
    // 0x2b9f34: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2b9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2b9f38: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2b9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b9f3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b9f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b9f40: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2B9F40u;
    SET_GPR_U32(ctx, 31, 0x2B9F48u);
    ctx->pc = 0x2B9F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9F40u;
            // 0x2b9f44: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F48u; }
        if (ctx->pc != 0x2B9F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F48u; }
        if (ctx->pc != 0x2B9F48u) { return; }
    }
    ctx->pc = 0x2B9F48u;
label_2b9f48:
    // 0x2b9f48: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2b9f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2b9f4c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2b9f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2b9f50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f54: 0x24a50d10  addiu       $a1, $a1, 0xD10
    ctx->pc = 0x2b9f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3344));
    // 0x2b9f58: 0x24c69bc0  addiu       $a2, $a2, -0x6440
    ctx->pc = 0x2b9f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941632));
    // 0x2b9f5c: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x2b9f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2b9f60: 0xc040840  jal         func_102100
    ctx->pc = 0x2B9F60u;
    SET_GPR_U32(ctx, 31, 0x2B9F68u);
    ctx->pc = 0x2B9F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9F60u;
            // 0x2b9f64: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F68u; }
        if (ctx->pc != 0x2B9F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F68u; }
        if (ctx->pc != 0x2B9F68u) { return; }
    }
    ctx->pc = 0x2B9F68u;
label_2b9f68:
    // 0x2b9f68: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2b9f68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2b9f6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b9f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f70: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2b9f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2b9f74: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2B9F74u;
    SET_GPR_U32(ctx, 31, 0x2B9F7Cu);
    ctx->pc = 0x2B9F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9F74u;
            // 0x2b9f78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F7Cu; }
        if (ctx->pc != 0x2B9F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F7Cu; }
        if (ctx->pc != 0x2B9F7Cu) { return; }
    }
    ctx->pc = 0x2B9F7Cu;
label_2b9f7c:
    // 0x2b9f7c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2b9f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2b9f80: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2B9F80u;
    SET_GPR_U32(ctx, 31, 0x2B9F88u);
    ctx->pc = 0x2B9F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9F80u;
            // 0x2b9f84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F88u; }
        if (ctx->pc != 0x2B9F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9F88u; }
        if (ctx->pc != 0x2B9F88u) { return; }
    }
    ctx->pc = 0x2B9F88u;
label_2b9f88:
    // 0x2b9f88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b9f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f8c:
    // 0x2b9f8c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2b9f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2b9f90: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2b9f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2b9f94: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2b9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2b9f98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b9f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9f9c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2b9f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2b9fa0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2b9fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2b9fa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b9fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b9fa8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2B9FA8u;
    SET_GPR_U32(ctx, 31, 0x2B9FB0u);
    ctx->pc = 0x2B9FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9FA8u;
            // 0x2b9fac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9FB0u; }
        if (ctx->pc != 0x2B9FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9FB0u; }
        if (ctx->pc != 0x2B9FB0u) { return; }
    }
    ctx->pc = 0x2B9FB0u;
label_2b9fb0:
    // 0x2b9fb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b9fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b9fb4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2b9fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2b9fb8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B9FB8u;
    {
        const bool branch_taken_0x2b9fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9FB8u;
            // 0x2b9fbc: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fb8) {
            ctx->pc = 0x2B9F8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b9f8c;
        }
    }
    ctx->pc = 0x2B9FC0u;
label_2b9fc0:
    // 0x2b9fc0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2b9fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9fc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b9fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b9fc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b9fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b9fcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b9fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9fd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9fd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9FD8u;
            // 0x2b9fdc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9FE0u;
}
