#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F5FE0
// Address: 0x4f5fe0 - 0x4f6510
void sub_004F5FE0_0x4f5fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5FE0_0x4f5fe0");
#endif

    switch (ctx->pc) {
        case 0x4f6030u: goto label_4f6030;
        case 0x4f6040u: goto label_4f6040;
        case 0x4f6050u: goto label_4f6050;
        case 0x4f6058u: goto label_4f6058;
        case 0x4f60d0u: goto label_4f60d0;
        case 0x4f60e8u: goto label_4f60e8;
        case 0x4f61acu: goto label_4f61ac;
        case 0x4f61b8u: goto label_4f61b8;
        case 0x4f61c8u: goto label_4f61c8;
        case 0x4f61d4u: goto label_4f61d4;
        case 0x4f61ecu: goto label_4f61ec;
        case 0x4f6210u: goto label_4f6210;
        case 0x4f622cu: goto label_4f622c;
        case 0x4f623cu: goto label_4f623c;
        case 0x4f6250u: goto label_4f6250;
        case 0x4f6294u: goto label_4f6294;
        case 0x4f6368u: goto label_4f6368;
        case 0x4f639cu: goto label_4f639c;
        case 0x4f63c0u: goto label_4f63c0;
        case 0x4f63fcu: goto label_4f63fc;
        case 0x4f6414u: goto label_4f6414;
        case 0x4f6434u: goto label_4f6434;
        case 0x4f6444u: goto label_4f6444;
        case 0x4f645cu: goto label_4f645c;
        case 0x4f647cu: goto label_4f647c;
        case 0x4f648cu: goto label_4f648c;
        case 0x4f64b0u: goto label_4f64b0;
        case 0x4f64ccu: goto label_4f64cc;
        case 0x4f64e8u: goto label_4f64e8;
        default: break;
    }

    ctx->pc = 0x4f5fe0u;

    // 0x4f5fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f5fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f5fe4: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x4f5fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x4f5fe8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4f5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4f5fec: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4f5fecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4f5ff0: 0x24428ab8  addiu       $v0, $v0, -0x7548
    ctx->pc = 0x4f5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937272));
    // 0x4f5ff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f5ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f5ff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f5ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f5ffc: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x4f5ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4f6000: 0xa0860026  sb          $a2, 0x26($a0)
    ctx->pc = 0x4f6000u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 6));
    // 0x4f6004: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4f6004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4f6008: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4f6008u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f600c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f600cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6010: 0xa085000c  sb          $a1, 0xC($a0)
    ctx->pc = 0x4f6010u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x4f6014: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4f6014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4f6018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f6018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f601c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f6020: 0xa0830025  sb          $v1, 0x25($a0)
    ctx->pc = 0x4f6020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x4f6024: 0xa0820027  sb          $v0, 0x27($a0)
    ctx->pc = 0x4f6024u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x4f6028: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4F6028u;
    SET_GPR_U32(ctx, 31, 0x4F6030u);
    ctx->pc = 0x4F602Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6028u;
            // 0x4f602c: 0x2604000d  addiu       $a0, $s0, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6030u; }
        if (ctx->pc != 0x4F6030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6030u; }
        if (ctx->pc != 0x4F6030u) { return; }
    }
    ctx->pc = 0x4F6030u;
label_4f6030:
    // 0x4f6030: 0x26040015  addiu       $a0, $s0, 0x15
    ctx->pc = 0x4f6030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
    // 0x4f6034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f6034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6038: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4F6038u;
    SET_GPR_U32(ctx, 31, 0x4F6040u);
    ctx->pc = 0x4F603Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6038u;
            // 0x4f603c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6040u; }
        if (ctx->pc != 0x4F6040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6040u; }
        if (ctx->pc != 0x4F6040u) { return; }
    }
    ctx->pc = 0x4F6040u;
label_4f6040:
    // 0x4f6040: 0x2604001d  addiu       $a0, $s0, 0x1D
    ctx->pc = 0x4f6040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 29));
    // 0x4f6044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f6044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6048: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4F6048u;
    SET_GPR_U32(ctx, 31, 0x4F6050u);
    ctx->pc = 0x4F604Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6048u;
            // 0x4f604c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6050u; }
        if (ctx->pc != 0x4F6050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6050u; }
        if (ctx->pc != 0x4F6050u) { return; }
    }
    ctx->pc = 0x4F6050u;
label_4f6050:
    // 0x4f6050: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x4f6050u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x4f6054: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4f6054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f6058:
    // 0x4f6058: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4f6058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4f605c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4f605cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x4f6060: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x4f6060u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4f6064: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4f6064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4f6068: 0x0  nop
    ctx->pc = 0x4f6068u;
    // NOP
    // 0x4f606c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4F606Cu;
    {
        const bool branch_taken_0x4f606c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f606c) {
            ctx->pc = 0x4F6058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f6058;
        }
    }
    ctx->pc = 0x4F6074u;
    // 0x4f6074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f6074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f6078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f6078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f607c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F607Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F6080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F607Cu;
            // 0x4f6080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F6084u;
    // 0x4f6084: 0x0  nop
    ctx->pc = 0x4f6084u;
    // NOP
    // 0x4f6088: 0x0  nop
    ctx->pc = 0x4f6088u;
    // NOP
    // 0x4f608c: 0x0  nop
    ctx->pc = 0x4f608cu;
    // NOP
    // 0x4f6090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f6090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f6094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f6094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f6098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f6098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f609c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f609cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f60a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f60a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f60a4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4F60A4u;
    {
        const bool branch_taken_0x4f60a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F60A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F60A4u;
            // 0x4f60a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f60a4) {
            ctx->pc = 0x4F60E8u;
            goto label_4f60e8;
        }
    }
    ctx->pc = 0x4F60ACu;
    // 0x4f60ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f60acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f60b0: 0x24424570  addiu       $v0, $v0, 0x4570
    ctx->pc = 0x4f60b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17776));
    // 0x4f60b4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F60B4u;
    {
        const bool branch_taken_0x4f60b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F60B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F60B4u;
            // 0x4f60b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f60b4) {
            ctx->pc = 0x4F60D0u;
            goto label_4f60d0;
        }
    }
    ctx->pc = 0x4F60BCu;
    // 0x4f60bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f60bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4f60c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f60c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f60c4: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x4f60c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
    // 0x4f60c8: 0xc075bf8  jal         func_1D6FE0
    ctx->pc = 0x4F60C8u;
    SET_GPR_U32(ctx, 31, 0x4F60D0u);
    ctx->pc = 0x4F60CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F60C8u;
            // 0x4f60cc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F60D0u; }
        if (ctx->pc != 0x4F60D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F60D0u; }
        if (ctx->pc != 0x4F60D0u) { return; }
    }
    ctx->pc = 0x4F60D0u;
label_4f60d0:
    // 0x4f60d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4f60d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x4f60d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f60d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4f60d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F60D8u;
    {
        const bool branch_taken_0x4f60d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f60d8) {
            ctx->pc = 0x4F60DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F60D8u;
            // 0x4f60dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F60ECu;
            goto label_4f60ec;
        }
    }
    ctx->pc = 0x4F60E0u;
    // 0x4f60e0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F60E0u;
    SET_GPR_U32(ctx, 31, 0x4F60E8u);
    ctx->pc = 0x4F60E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F60E0u;
            // 0x4f60e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F60E8u; }
        if (ctx->pc != 0x4F60E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F60E8u; }
        if (ctx->pc != 0x4F60E8u) { return; }
    }
    ctx->pc = 0x4F60E8u;
label_4f60e8:
    // 0x4f60e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4f60e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f60ec:
    // 0x4f60ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f60ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f60f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f60f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f60f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f60f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f60f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4F60F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F60FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F60F8u;
            // 0x4f60fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F6100u;
    // 0x4f6100: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x4f6100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x4f6104: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f6104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4f6108: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f6108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4f610c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f610cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4f6110: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f6110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4f6114: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f6114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f6118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f611c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f6120: 0x8c8400c0  lw          $a0, 0xC0($a0)
    ctx->pc = 0x4f6120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x4f6124: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F6124u;
    {
        const bool branch_taken_0x4f6124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f6124) {
            ctx->pc = 0x4F6128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6124u;
            // 0x4f6128: 0xc66100a8  lwc1        $f1, 0xA8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6144u;
            goto label_4f6144;
        }
    }
    ctx->pc = 0x4F612Cu;
    // 0x4f612c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4f612cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x4f6130: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x4f6130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x4f6134: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x4f6134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x4f6138: 0x548300ec  bnel        $a0, $v1, . + 4 + (0xEC << 2)
    ctx->pc = 0x4F6138u;
    {
        const bool branch_taken_0x4f6138 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f6138) {
            ctx->pc = 0x4F613Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6138u;
            // 0x4f613c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F64ECu;
            goto label_4f64ec;
        }
    }
    ctx->pc = 0x4F6140u;
    // 0x4f6140: 0xc66100a8  lwc1        $f1, 0xA8($s3)
    ctx->pc = 0x4f6140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f6144:
    // 0x4f6144: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f6144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6148: 0x0  nop
    ctx->pc = 0x4f6148u;
    // NOP
    // 0x4f614c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4f614cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f6150: 0x450000e5  bc1f        . + 4 + (0xE5 << 2)
    ctx->pc = 0x4F6150u;
    {
        const bool branch_taken_0x4f6150 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f6150) {
            ctx->pc = 0x4F64E8u;
            goto label_4f64e8;
        }
    }
    ctx->pc = 0x4F6158u;
    // 0x4f6158: 0x926300d0  lbu         $v1, 0xD0($s3)
    ctx->pc = 0x4f6158u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x4f615c: 0x106000e2  beqz        $v1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x4F615Cu;
    {
        const bool branch_taken_0x4f615c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f615c) {
            ctx->pc = 0x4F64E8u;
            goto label_4f64e8;
        }
    }
    ctx->pc = 0x4F6164u;
    // 0x4f6164: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f6164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4f6168: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f6168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4f616c: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x4f616cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x4f6170: 0x8c51e370  lw          $s1, -0x1C90($v0)
    ctx->pc = 0x4f6170u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
    // 0x4f6174: 0x8e6500d4  lw          $a1, 0xD4($s3)
    ctx->pc = 0x4f6174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x4f6178: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4f6178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x4f617c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4f617cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4f6180: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x4f6180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x4f6184: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x4f6184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x4f6188: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x4f6188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x4f618c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4f618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4f6190: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f6190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f6194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f6194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f6198: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4f6198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f619c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F619Cu;
    {
        const bool branch_taken_0x4f619c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F61A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F619Cu;
            // 0x4f61a0: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f619c) {
            ctx->pc = 0x4F61C0u;
            goto label_4f61c0;
        }
    }
    ctx->pc = 0x4F61A4u;
    // 0x4f61a4: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x4F61A4u;
    SET_GPR_U32(ctx, 31, 0x4F61ACu);
    ctx->pc = 0x4F61A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F61A4u;
            // 0x4f61a8: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F61ACu; }
        if (ctx->pc != 0x4F61ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F61ACu; }
        if (ctx->pc != 0x4F61ACu) { return; }
    }
    ctx->pc = 0x4F61ACu;
label_4f61ac:
    // 0x4f61ac: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x4f61acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x4f61b0: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4F61B0u;
    SET_GPR_U32(ctx, 31, 0x4F61B8u);
    ctx->pc = 0x4F61B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F61B0u;
            // 0x4f61b4: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F61B8u; }
        if (ctx->pc != 0x4F61B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F61B8u; }
        if (ctx->pc != 0x4F61B8u) { return; }
    }
    ctx->pc = 0x4F61B8u;
label_4f61b8:
    // 0x4f61b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4F61B8u;
    {
        const bool branch_taken_0x4f61b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F61BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F61B8u;
            // 0x4f61bc: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f61b8) {
            ctx->pc = 0x4F61D8u;
            goto label_4f61d8;
        }
    }
    ctx->pc = 0x4F61C0u;
label_4f61c0:
    // 0x4f61c0: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x4F61C0u;
    SET_GPR_U32(ctx, 31, 0x4F61C8u);
    ctx->pc = 0x4F61C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F61C0u;
            // 0x4f61c4: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F61C8u; }
        if (ctx->pc != 0x4F61C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F61C8u; }
        if (ctx->pc != 0x4F61C8u) { return; }
    }
    ctx->pc = 0x4F61C8u;
label_4f61c8:
    // 0x4f61c8: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x4f61c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x4f61cc: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4F61CCu;
    SET_GPR_U32(ctx, 31, 0x4F61D4u);
    ctx->pc = 0x4F61D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F61CCu;
            // 0x4f61d0: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F61D4u; }
        if (ctx->pc != 0x4F61D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F61D4u; }
        if (ctx->pc != 0x4F61D4u) { return; }
    }
    ctx->pc = 0x4F61D4u;
label_4f61d4:
    // 0x4f61d4: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x4f61d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_4f61d8:
    // 0x4f61d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f61d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f61dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4f61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f61e0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4f61e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x4f61e4: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x4F61E4u;
    SET_GPR_U32(ctx, 31, 0x4F61ECu);
    ctx->pc = 0x4F61E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F61E4u;
            // 0x4f61e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F61ECu; }
        if (ctx->pc != 0x4F61ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F61ECu; }
        if (ctx->pc != 0x4F61ECu) { return; }
    }
    ctx->pc = 0x4F61ECu;
label_4f61ec:
    // 0x4f61ec: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4f61ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4f61f0: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x4f61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x4f61f4: 0x8c42cbc0  lw          $v0, -0x3440($v0)
    ctx->pc = 0x4f61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953920)));
    // 0x4f61f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f61f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f61fc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x4F61FCu;
    {
        const bool branch_taken_0x4f61fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f61fc) {
            ctx->pc = 0x4F6200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F61FCu;
            // 0x4f6200: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6244u;
            goto label_4f6244;
        }
    }
    ctx->pc = 0x4F6204u;
    // 0x4f6204: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4f6204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4f6208: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x4F6208u;
    SET_GPR_U32(ctx, 31, 0x4F6210u);
    ctx->pc = 0x4F620Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6208u;
            // 0x4f620c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6210u; }
        if (ctx->pc != 0x4F6210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6210u; }
        if (ctx->pc != 0x4F6210u) { return; }
    }
    ctx->pc = 0x4F6210u;
label_4f6210:
    // 0x4f6210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f6210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6214: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4f6214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x4f6218: 0x26660060  addiu       $a2, $s3, 0x60
    ctx->pc = 0x4f6218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x4f621c: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x4f621cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x4f6220: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x4f6220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x4f6224: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4F6224u;
    SET_GPR_U32(ctx, 31, 0x4F622Cu);
    ctx->pc = 0x4F6228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6224u;
            // 0x4f6228: 0xafa00128  sw          $zero, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F622Cu; }
        if (ctx->pc != 0x4F622Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F622Cu; }
        if (ctx->pc != 0x4F622Cu) { return; }
    }
    ctx->pc = 0x4F622Cu;
label_4f622c:
    // 0x4f622c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f622cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6230: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x4f6230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x4f6234: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4F6234u;
    SET_GPR_U32(ctx, 31, 0x4F623Cu);
    ctx->pc = 0x4F6238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6234u;
            // 0x4f6238: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F623Cu; }
        if (ctx->pc != 0x4F623Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F623Cu; }
        if (ctx->pc != 0x4F623Cu) { return; }
    }
    ctx->pc = 0x4F623Cu;
label_4f623c:
    // 0x4f623c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4F623Cu;
    {
        const bool branch_taken_0x4f623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f623c) {
            ctx->pc = 0x4F6250u;
            goto label_4f6250;
        }
    }
    ctx->pc = 0x4F6244u;
label_4f6244:
    // 0x4f6244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f6244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6248: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4F6248u;
    SET_GPR_U32(ctx, 31, 0x4F6250u);
    ctx->pc = 0x4F624Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6248u;
            // 0x4f624c: 0x26660060  addiu       $a2, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6250u; }
        if (ctx->pc != 0x4F6250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6250u; }
        if (ctx->pc != 0x4F6250u) { return; }
    }
    ctx->pc = 0x4F6250u;
label_4f6250:
    // 0x4f6250: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4f6250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4f6254: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4f6254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4f6258: 0xc44ccbc8  lwc1        $f12, -0x3438($v0)
    ctx->pc = 0x4f6258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4f625c: 0xc46dcbcc  lwc1        $f13, -0x3434($v1)
    ctx->pc = 0x4f625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4f6260: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4f6260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4f6264: 0xc44ecbd0  lwc1        $f14, -0x3430($v0)
    ctx->pc = 0x4f6264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4f6268: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x4f6268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x4f626c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4f626cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4f6270: 0x8c42cbd8  lw          $v0, -0x3428($v0)
    ctx->pc = 0x4f6270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953944)));
    // 0x4f6274: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f6274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6278: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F6278u;
    {
        const bool branch_taken_0x4f6278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f6278) {
            ctx->pc = 0x4F627Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6278u;
            // 0x4f627c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F628Cu;
            goto label_4f628c;
        }
    }
    ctx->pc = 0x4F6280u;
    // 0x4f6280: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4f6280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4f6284: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4f6284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4f6288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f6288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f628c:
    // 0x4f628c: 0xc04ce50  jal         func_133940
    ctx->pc = 0x4F628Cu;
    SET_GPR_U32(ctx, 31, 0x4F6294u);
    ctx->pc = 0x4F6290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F628Cu;
            // 0x4f6290: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6294u; }
        if (ctx->pc != 0x4F6294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6294u; }
        if (ctx->pc != 0x4F6294u) { return; }
    }
    ctx->pc = 0x4F6294u;
label_4f6294:
    // 0x4f6294: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4f6294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4f6298: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x4f6298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x4f629c: 0x8c42cbe0  lw          $v0, -0x3420($v0)
    ctx->pc = 0x4f629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953952)));
    // 0x4f62a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f62a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f62a4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4F62A4u;
    {
        const bool branch_taken_0x4f62a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f62a4) {
            ctx->pc = 0x4F62E4u;
            goto label_4f62e4;
        }
    }
    ctx->pc = 0x4F62ACu;
    // 0x4f62ac: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x4f62acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x4f62b0: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x4f62b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x4f62b4: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x4f62b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4f62b8: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x4f62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x4f62bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f62bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f62c0: 0x0  nop
    ctx->pc = 0x4f62c0u;
    // NOP
    // 0x4f62c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4f62c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4f62c8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x4f62c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x4f62cc: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x4f62ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4f62d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f62d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f62d4: 0x0  nop
    ctx->pc = 0x4f62d4u;
    // NOP
    // 0x4f62d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4f62d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4f62dc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4F62DCu;
    {
        const bool branch_taken_0x4f62dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F62E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F62DCu;
            // 0x4f62e0: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f62dc) {
            ctx->pc = 0x4F632Cu;
            goto label_4f632c;
        }
    }
    ctx->pc = 0x4F62E4u;
label_4f62e4:
    // 0x4f62e4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4f62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4f62e8: 0x8c42cbe8  lw          $v0, -0x3418($v0)
    ctx->pc = 0x4f62e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953960)));
    // 0x4f62ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f62ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f62f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4F62F0u;
    {
        const bool branch_taken_0x4f62f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f62f0) {
            ctx->pc = 0x4F632Cu;
            goto label_4f632c;
        }
    }
    ctx->pc = 0x4F62F8u;
    // 0x4f62f8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x4f62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x4f62fc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x4f62fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4f6300: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x4f6300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4f6304: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x4f6304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x4f6308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f6308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f630c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4f630cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4f6310: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4f6310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4f6314: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x4f6314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x4f6318: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x4f6318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4f631c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f631cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6320: 0x0  nop
    ctx->pc = 0x4f6320u;
    // NOP
    // 0x4f6324: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4f6324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4f6328: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x4f6328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_4f632c:
    // 0x4f632c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4f632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4f6330: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x4f6330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x4f6334: 0x8c42cbf0  lw          $v0, -0x3410($v0)
    ctx->pc = 0x4f6334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953968)));
    // 0x4f6338: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f6338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f633c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F633Cu;
    {
        const bool branch_taken_0x4f633c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f633c) {
            ctx->pc = 0x4F6340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F633Cu;
            // 0x4f6340: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6360u;
            goto label_4f6360;
        }
    }
    ctx->pc = 0x4F6344u;
    // 0x4f6344: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x4f6344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4f6348: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4f6348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x4f634c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f634cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6350: 0x0  nop
    ctx->pc = 0x4f6350u;
    // NOP
    // 0x4f6354: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4f6354u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4f6358: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x4f6358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x4f635c: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x4f635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_4f6360:
    // 0x4f6360: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x4F6360u;
    SET_GPR_U32(ctx, 31, 0x4F6368u);
    ctx->pc = 0x4F6364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6360u;
            // 0x4f6364: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6368u; }
        if (ctx->pc != 0x4F6368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6368u; }
        if (ctx->pc != 0x4F6368u) { return; }
    }
    ctx->pc = 0x4F6368u;
label_4f6368:
    // 0x4f6368: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x4f6368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x4f636c: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x4f636cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4f6370: 0x50e0000c  beql        $a3, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4F6370u;
    {
        const bool branch_taken_0x4f6370 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f6370) {
            ctx->pc = 0x4F6374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6370u;
            // 0x4f6374: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F63A4u;
            goto label_4f63a4;
        }
    }
    ctx->pc = 0x4F6378u;
    // 0x4f6378: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4f6378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f637c: 0xc66c00a0  lwc1        $f12, 0xA0($s3)
    ctx->pc = 0x4f637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4f6380: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4f6380u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x4f6384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f6384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6388: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4f6388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f638c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4f638cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6390: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x4f6390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
    // 0x4f6394: 0xc04cff4  jal         func_133FD0
    ctx->pc = 0x4F6394u;
    SET_GPR_U32(ctx, 31, 0x4F639Cu);
    ctx->pc = 0x4F6398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6394u;
            // 0x4f6398: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F639Cu; }
        if (ctx->pc != 0x4F639Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F639Cu; }
        if (ctx->pc != 0x4F639Cu) { return; }
    }
    ctx->pc = 0x4F639Cu;
label_4f639c:
    // 0x4f639c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F639Cu;
    {
        const bool branch_taken_0x4f639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f639c) {
            ctx->pc = 0x4F63C0u;
            goto label_4f63c0;
        }
    }
    ctx->pc = 0x4F63A4u;
label_4f63a4:
    // 0x4f63a4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4f63a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x4f63a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f63a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f63ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4f63acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f63b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4f63b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f63b4: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4f63b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x4f63b8: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x4F63B8u;
    SET_GPR_U32(ctx, 31, 0x4F63C0u);
    ctx->pc = 0x4F63BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F63B8u;
            // 0x4f63bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F63C0u; }
        if (ctx->pc != 0x4F63C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F63C0u; }
        if (ctx->pc != 0x4F63C0u) { return; }
    }
    ctx->pc = 0x4F63C0u;
label_4f63c0:
    // 0x4f63c0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4f63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4f63c4: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x4f63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x4f63c8: 0x8c42cbf8  lw          $v0, -0x3408($v0)
    ctx->pc = 0x4f63c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953976)));
    // 0x4f63cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f63ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f63d0: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x4F63D0u;
    {
        const bool branch_taken_0x4f63d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f63d0) {
            ctx->pc = 0x4F63D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F63D0u;
            // 0x4f63d4: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6494u;
            goto label_4f6494;
        }
    }
    ctx->pc = 0x4F63D8u;
    // 0x4f63d8: 0x8e6300b0  lw          $v1, 0xB0($s3)
    ctx->pc = 0x4f63d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x4f63dc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4f63dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x4f63e0: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x4F63E0u;
    {
        const bool branch_taken_0x4f63e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f63e0) {
            ctx->pc = 0x4F63E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F63E0u;
            // 0x4f63e4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F644Cu;
            goto label_4f644c;
        }
    }
    ctx->pc = 0x4F63E8u;
    // 0x4f63e8: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x4f63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4f63ec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x4f63ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x4f63f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4f63f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4f63f4: 0xc074840  jal         func_1D2100
    ctx->pc = 0x4F63F4u;
    SET_GPR_U32(ctx, 31, 0x4F63FCu);
    ctx->pc = 0x4F63F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F63F4u;
            // 0x4f63f8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2100u;
    if (runtime->hasFunction(0x1D2100u)) {
        auto targetFn = runtime->lookupFunction(0x1D2100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F63FCu; }
        if (ctx->pc != 0x4F63FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2100_0x1d2100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F63FCu; }
        if (ctx->pc != 0x4F63FCu) { return; }
    }
    ctx->pc = 0x4F63FCu;
label_4f63fc:
    // 0x4f63fc: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x4f63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x4f6400: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4f6400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4f6404: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4f6404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f6408: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x4f6408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4f640c: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x4F640Cu;
    SET_GPR_U32(ctx, 31, 0x4F6414u);
    ctx->pc = 0x4F6410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F640Cu;
            // 0x4f6410: 0xc66c00a4  lwc1        $f12, 0xA4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6414u; }
        if (ctx->pc != 0x4F6414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6414u; }
        if (ctx->pc != 0x4F6414u) { return; }
    }
    ctx->pc = 0x4F6414u;
label_4f6414:
    // 0x4f6414: 0x8e6300b0  lw          $v1, 0xB0($s3)
    ctx->pc = 0x4f6414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x4f6418: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x4f6418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x4f641c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4f641cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6420: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4f6420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6424: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4f6424u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x4f6428: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x4f6428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4f642c: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x4F642Cu;
    SET_GPR_U32(ctx, 31, 0x4F6434u);
    ctx->pc = 0x4F6430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F642Cu;
            // 0x4f6430: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6434u; }
        if (ctx->pc != 0x4F6434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6434u; }
        if (ctx->pc != 0x4F6434u) { return; }
    }
    ctx->pc = 0x4F6434u;
label_4f6434:
    // 0x4f6434: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x4f6434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x4f6438: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4f6438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4f643c: 0xc0747e8  jal         func_1D1FA0
    ctx->pc = 0x4F643Cu;
    SET_GPR_U32(ctx, 31, 0x4F6444u);
    ctx->pc = 0x4F6440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F643Cu;
            // 0x4f6440: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FA0u;
    if (runtime->hasFunction(0x1D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6444u; }
        if (ctx->pc != 0x4F6444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1FA0_0x1d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6444u; }
        if (ctx->pc != 0x4F6444u) { return; }
    }
    ctx->pc = 0x4F6444u;
label_4f6444:
    // 0x4f6444: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x4F6444u;
    {
        const bool branch_taken_0x4f6444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f6444) {
            ctx->pc = 0x4F64E8u;
            goto label_4f64e8;
        }
    }
    ctx->pc = 0x4F644Cu;
label_4f644c:
    // 0x4f644c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x4f644cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x4f6450: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4f6450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4f6454: 0xc074840  jal         func_1D2100
    ctx->pc = 0x4F6454u;
    SET_GPR_U32(ctx, 31, 0x4F645Cu);
    ctx->pc = 0x4F6458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6454u;
            // 0x4f6458: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2100u;
    if (runtime->hasFunction(0x1D2100u)) {
        auto targetFn = runtime->lookupFunction(0x1D2100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F645Cu; }
        if (ctx->pc != 0x4F645Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2100_0x1d2100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F645Cu; }
        if (ctx->pc != 0x4F645Cu) { return; }
    }
    ctx->pc = 0x4F645Cu;
label_4f645c:
    // 0x4f645c: 0x8e6300b0  lw          $v1, 0xB0($s3)
    ctx->pc = 0x4f645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x4f6460: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x4f6460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x4f6464: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4f6464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6468: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4f6468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f646c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4f646cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x4f6470: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4f6470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f6474: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x4F6474u;
    SET_GPR_U32(ctx, 31, 0x4F647Cu);
    ctx->pc = 0x4F6478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6474u;
            // 0x4f6478: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F647Cu; }
        if (ctx->pc != 0x4F647Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F647Cu; }
        if (ctx->pc != 0x4F647Cu) { return; }
    }
    ctx->pc = 0x4F647Cu;
label_4f647c:
    // 0x4f647c: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x4f647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x4f6480: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f6480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f6484: 0xc0747e8  jal         func_1D1FA0
    ctx->pc = 0x4F6484u;
    SET_GPR_U32(ctx, 31, 0x4F648Cu);
    ctx->pc = 0x4F6488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6484u;
            // 0x4f6488: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FA0u;
    if (runtime->hasFunction(0x1D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F648Cu; }
        if (ctx->pc != 0x4F648Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1FA0_0x1d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F648Cu; }
        if (ctx->pc != 0x4F648Cu) { return; }
    }
    ctx->pc = 0x4F648Cu;
label_4f648c:
    // 0x4f648c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4F648Cu;
    {
        const bool branch_taken_0x4f648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f648c) {
            ctx->pc = 0x4F64E8u;
            goto label_4f64e8;
        }
    }
    ctx->pc = 0x4F6494u;
label_4f6494:
    // 0x4f6494: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x4f6494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4f6498: 0x50c0000e  beql        $a2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4F6498u;
    {
        const bool branch_taken_0x4f6498 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f6498) {
            ctx->pc = 0x4F649Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6498u;
            // 0x4f649c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F64D4u;
            goto label_4f64d4;
        }
    }
    ctx->pc = 0x4F64A0u;
    // 0x4f64a0: 0xc66c00a4  lwc1        $f12, 0xA4($s3)
    ctx->pc = 0x4f64a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4f64a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4f64a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f64a8: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x4F64A8u;
    SET_GPR_U32(ctx, 31, 0x4F64B0u);
    ctx->pc = 0x4F64ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F64A8u;
            // 0x4f64ac: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F64B0u; }
        if (ctx->pc != 0x4F64B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F64B0u; }
        if (ctx->pc != 0x4F64B0u) { return; }
    }
    ctx->pc = 0x4F64B0u;
label_4f64b0:
    // 0x4f64b0: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x4f64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x4f64b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4f64b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f64b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4f64b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f64bc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4f64bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x4f64c0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4f64c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4f64c4: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x4F64C4u;
    SET_GPR_U32(ctx, 31, 0x4F64CCu);
    ctx->pc = 0x4F64C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F64C4u;
            // 0x4f64c8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F64CCu; }
        if (ctx->pc != 0x4F64CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F64CCu; }
        if (ctx->pc != 0x4F64CCu) { return; }
    }
    ctx->pc = 0x4F64CCu;
label_4f64cc:
    // 0x4f64cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4F64CCu;
    {
        const bool branch_taken_0x4f64cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f64cc) {
            ctx->pc = 0x4F64E8u;
            goto label_4f64e8;
        }
    }
    ctx->pc = 0x4F64D4u;
label_4f64d4:
    // 0x4f64d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4f64d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f64d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4f64d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f64dc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4f64dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x4f64e0: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x4F64E0u;
    SET_GPR_U32(ctx, 31, 0x4F64E8u);
    ctx->pc = 0x4F64E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F64E0u;
            // 0x4f64e4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F64E8u; }
        if (ctx->pc != 0x4F64E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F64E8u; }
        if (ctx->pc != 0x4F64E8u) { return; }
    }
    ctx->pc = 0x4F64E8u;
label_4f64e8:
    // 0x4f64e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f64e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4f64ec:
    // 0x4f64ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f64ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f64f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f64f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f64f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f64f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f64f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f64f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f64fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F64FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F6500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F64FCu;
            // 0x4f6500: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F6504u;
    // 0x4f6504: 0x0  nop
    ctx->pc = 0x4f6504u;
    // NOP
    // 0x4f6508: 0x0  nop
    ctx->pc = 0x4f6508u;
    // NOP
    // 0x4f650c: 0x0  nop
    ctx->pc = 0x4f650cu;
    // NOP
}
