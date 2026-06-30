#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00340C00
// Address: 0x340c00 - 0x340ed0
void sub_00340C00_0x340c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340C00_0x340c00");
#endif

    switch (ctx->pc) {
        case 0x340c30u: goto label_340c30;
        case 0x340c40u: goto label_340c40;
        case 0x340c48u: goto label_340c48;
        case 0x340cb8u: goto label_340cb8;
        case 0x340d68u: goto label_340d68;
        case 0x340dd0u: goto label_340dd0;
        case 0x340de4u: goto label_340de4;
        case 0x340e64u: goto label_340e64;
        case 0x340e7cu: goto label_340e7c;
        case 0x340e94u: goto label_340e94;
        case 0x340eacu: goto label_340eac;
        default: break;
    }

    ctx->pc = 0x340c00u;

    // 0x340c00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x340c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x340c04: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x340c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x340c08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x340c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x340c0c: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x340c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x340c10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x340c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x340c14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x340c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x340c18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x340c18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340c1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x340c20: 0x26640ccc  addiu       $a0, $s3, 0xCCC
    ctx->pc = 0x340c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3276));
    // 0x340c24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x340c28: 0xc04a508  jal         func_129420
    ctx->pc = 0x340C28u;
    SET_GPR_U32(ctx, 31, 0x340C30u);
    ctx->pc = 0x340C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340C28u;
            // 0x340c2c: 0x24120008  addiu       $s2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340C30u; }
        if (ctx->pc != 0x340C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340C30u; }
        if (ctx->pc != 0x340C30u) { return; }
    }
    ctx->pc = 0x340C30u;
label_340c30:
    // 0x340c30: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x340c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x340c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x340c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340c38: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x340C38u;
    SET_GPR_U32(ctx, 31, 0x340C40u);
    ctx->pc = 0x340C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340C38u;
            // 0x340c3c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340C40u; }
        if (ctx->pc != 0x340C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340C40u; }
        if (ctx->pc != 0x340C40u) { return; }
    }
    ctx->pc = 0x340C40u;
label_340c40:
    // 0x340c40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x340c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340c44: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x340c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_340c48:
    // 0x340c48: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x340c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x340c4c: 0x80430ce6  lb          $v1, 0xCE6($v0)
    ctx->pc = 0x340c4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3302)));
    // 0x340c50: 0x460001b  bltz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x340C50u;
    {
        const bool branch_taken_0x340c50 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x340c50) {
            ctx->pc = 0x340CC0u;
            goto label_340cc0;
        }
    }
    ctx->pc = 0x340C58u;
    // 0x340c58: 0x24480cee  addiu       $t0, $v0, 0xCEE
    ctx->pc = 0x340c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 3310));
    // 0x340c5c: 0x80420cee  lb          $v0, 0xCEE($v0)
    ctx->pc = 0x340c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3310)));
    // 0x340c60: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x340C60u;
    {
        const bool branch_taken_0x340c60 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x340c60) {
            ctx->pc = 0x340CC0u;
            goto label_340cc0;
        }
    }
    ctx->pc = 0x340C68u;
    // 0x340c68: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x340c68u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x340c6c: 0x2404ffe0  addiu       $a0, $zero, -0x20
    ctx->pc = 0x340c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x340c70: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x340c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x340c74: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x340c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x340c78: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x340c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x340c7c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x340c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x340c80: 0x2402ff9f  addiu       $v0, $zero, -0x61
    ctx->pc = 0x340c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967199));
    // 0x340c84: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x340c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x340c88: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x340c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x340c8c: 0xa2050000  sb          $a1, 0x0($s0)
    ctx->pc = 0x340c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x340c90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x340c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340c94: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x340c94u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x340c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x340c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340c9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x340c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340ca0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x340ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x340ca4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x340ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340ca8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x340ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x340cac: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x340cacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x340cb0: 0xc0c90f4  jal         func_3243D0
    ctx->pc = 0x340CB0u;
    SET_GPR_U32(ctx, 31, 0x340CB8u);
    ctx->pc = 0x340CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340CB0u;
            // 0x340cb4: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3243D0u;
    if (runtime->hasFunction(0x3243D0u)) {
        auto targetFn = runtime->lookupFunction(0x3243D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340CB8u; }
        if (ctx->pc != 0x340CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003243D0_0x3243d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340CB8u; }
        if (ctx->pc != 0x340CB8u) { return; }
    }
    ctx->pc = 0x340CB8u;
label_340cb8:
    // 0x340cb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x340CB8u;
    {
        const bool branch_taken_0x340cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340CB8u;
            // 0x340cbc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340cb8) {
            ctx->pc = 0x340CC8u;
            goto label_340cc8;
        }
    }
    ctx->pc = 0x340CC0u;
label_340cc0:
    // 0x340cc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x340CC0u;
    {
        const bool branch_taken_0x340cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340CC0u;
            // 0x340cc4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340cc0) {
            ctx->pc = 0x340CD8u;
            goto label_340cd8;
        }
    }
    ctx->pc = 0x340CC8u;
label_340cc8:
    // 0x340cc8: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x340cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x340ccc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x340CCCu;
    {
        const bool branch_taken_0x340ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x340CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340CCCu;
            // 0x340cd0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340ccc) {
            ctx->pc = 0x340C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_340c48;
        }
    }
    ctx->pc = 0x340CD4u;
    // 0x340cd4: 0x0  nop
    ctx->pc = 0x340cd4u;
    // NOP
label_340cd8:
    // 0x340cd8: 0x8e660cd4  lw          $a2, 0xCD4($s3)
    ctx->pc = 0x340cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3284)));
    // 0x340cdc: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x340cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x340ce0: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x340ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
    // 0x340ce4: 0x34444dd3  ori         $a0, $v0, 0x4DD3
    ctx->pc = 0x340ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
    // 0x340ce8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x340ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x340cec: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x340cecu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x340cf0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x340cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x340cf4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x340cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x340cf8: 0x2810  mfhi        $a1
    ctx->pc = 0x340cf8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x340cfc: 0x860019  multu       $a0, $a2
    ctx->pc = 0x340cfcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x340d00: 0xa6650cbe  sh          $a1, 0xCBE($s3)
    ctx->pc = 0x340d00u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3262), (uint16_t)GPR_U32(ctx, 5));
    // 0x340d04: 0x0  nop
    ctx->pc = 0x340d04u;
    // NOP
    // 0x340d08: 0x2010  mfhi        $a0
    ctx->pc = 0x340d08u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x340d0c: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x340d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x340d10: 0x440019  multu       $v0, $a0
    ctx->pc = 0x340d10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x340d14: 0x1010  mfhi        $v0
    ctx->pc = 0x340d14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x340d18: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x340d18u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x340d1c: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x340d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x340d20: 0x0  nop
    ctx->pc = 0x340d20u;
    // NOP
    // 0x340d24: 0x1010  mfhi        $v0
    ctx->pc = 0x340d24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x340d28: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x340d28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x340d2c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x340D2Cu;
    {
        const bool branch_taken_0x340d2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x340D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340D2Cu;
            // 0x340d30: 0xa2620cbd  sb          $v0, 0xCBD($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3261), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340d2c) {
            ctx->pc = 0x340D48u;
            goto label_340d48;
        }
    }
    ctx->pc = 0x340D34u;
    // 0x340d34: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x340d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x340d38: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x340d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x340d3c: 0xa6620cbe  sh          $v0, 0xCBE($s3)
    ctx->pc = 0x340d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3262), (uint16_t)GPR_U32(ctx, 2));
    // 0x340d40: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x340d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x340d44: 0xa2620cbd  sb          $v0, 0xCBD($s3)
    ctx->pc = 0x340d44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3261), (uint8_t)GPR_U32(ctx, 2));
label_340d48:
    // 0x340d48: 0xa2630cbc  sb          $v1, 0xCBC($s3)
    ctx->pc = 0x340d48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3260), (uint8_t)GPR_U32(ctx, 3));
    // 0x340d4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x340d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340d50: 0xae72077c  sw          $s2, 0x77C($s3)
    ctx->pc = 0x340d50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1916), GPR_U32(ctx, 18));
    // 0x340d54: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x340d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x340d58: 0x8e620780  lw          $v0, 0x780($s3)
    ctx->pc = 0x340d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1920)));
    // 0x340d5c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x340d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x340d60: 0xc0cc874  jal         func_3321D0
    ctx->pc = 0x340D60u;
    SET_GPR_U32(ctx, 31, 0x340D68u);
    ctx->pc = 0x340D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340D60u;
            // 0x340d64: 0xae620784  sw          $v0, 0x784($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3321D0u;
    if (runtime->hasFunction(0x3321D0u)) {
        auto targetFn = runtime->lookupFunction(0x3321D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340D68u; }
        if (ctx->pc != 0x340D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003321D0_0x3321d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340D68u; }
        if (ctx->pc != 0x340D68u) { return; }
    }
    ctx->pc = 0x340D68u;
label_340d68:
    // 0x340d68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x340d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x340d6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x340d6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x340d70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x340d70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340d74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340d78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x340D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340D7Cu;
            // 0x340d80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x340D84u;
    // 0x340d84: 0x0  nop
    ctx->pc = 0x340d84u;
    // NOP
    // 0x340d88: 0x0  nop
    ctx->pc = 0x340d88u;
    // NOP
    // 0x340d8c: 0x0  nop
    ctx->pc = 0x340d8cu;
    // NOP
    // 0x340d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x340d94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x340d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x340d98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x340d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x340d9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x340da0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x340da4: 0x8c850d14  lw          $a1, 0xD14($a0)
    ctx->pc = 0x340da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3348)));
    // 0x340da8: 0x8c500ed0  lw          $s0, 0xED0($v0)
    ctx->pc = 0x340da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x340dac: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x340DACu;
    {
        const bool branch_taken_0x340dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x340DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340DACu;
            // 0x340db0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340dac) {
            ctx->pc = 0x340DECu;
            goto label_340dec;
        }
    }
    ctx->pc = 0x340DB4u;
    // 0x340db4: 0x8e220d18  lw          $v0, 0xD18($s1)
    ctx->pc = 0x340db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3352)));
    // 0x340db8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x340DB8u;
    {
        const bool branch_taken_0x340db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340db8) {
            ctx->pc = 0x340DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340DB8u;
            // 0x340dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340DF0u;
            goto label_340df0;
        }
    }
    ctx->pc = 0x340DC0u;
    // 0x340dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340dc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x340dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340dc8: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x340DC8u;
    SET_GPR_U32(ctx, 31, 0x340DD0u);
    ctx->pc = 0x340DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340DC8u;
            // 0x340dcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340DD0u; }
        if (ctx->pc != 0x340DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340DD0u; }
        if (ctx->pc != 0x340DD0u) { return; }
    }
    ctx->pc = 0x340DD0u;
label_340dd0:
    // 0x340dd0: 0x8e250d18  lw          $a1, 0xD18($s1)
    ctx->pc = 0x340dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3352)));
    // 0x340dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340dd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x340dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340ddc: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x340DDCu;
    SET_GPR_U32(ctx, 31, 0x340DE4u);
    ctx->pc = 0x340DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340DDCu;
            // 0x340de0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340DE4u; }
        if (ctx->pc != 0x340DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340DE4u; }
        if (ctx->pc != 0x340DE4u) { return; }
    }
    ctx->pc = 0x340DE4u;
label_340de4:
    // 0x340de4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x340DE4u;
    {
        const bool branch_taken_0x340de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340DE4u;
            // 0x340de8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340de4) {
            ctx->pc = 0x340DF0u;
            goto label_340df0;
        }
    }
    ctx->pc = 0x340DECu;
label_340dec:
    // 0x340dec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x340decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340df0:
    // 0x340df0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x340df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340df4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x340DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340DFCu;
            // 0x340e00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x340E04u;
    // 0x340e04: 0x0  nop
    ctx->pc = 0x340e04u;
    // NOP
    // 0x340e08: 0x0  nop
    ctx->pc = 0x340e08u;
    // NOP
    // 0x340e0c: 0x0  nop
    ctx->pc = 0x340e0cu;
    // NOP
    // 0x340e10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x340e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x340e14: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x340e14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x340e18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x340e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x340e1c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x340e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x340e20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x340e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x340e24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x340e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x340e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x340e2c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x340e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x340e30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x340e34: 0x24c600b0  addiu       $a2, $a2, 0xB0
    ctx->pc = 0x340e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x340e38: 0x8c678a08  lw          $a3, -0x75F8($v1)
    ctx->pc = 0x340e38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x340e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340e40: 0x8c51a348  lw          $s1, -0x5CB8($v0)
    ctx->pc = 0x340e40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x340e44: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x340e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x340e48: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x340e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x340e4c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x340e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x340e50: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x340e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
    // 0x340e54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x340e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x340e58: 0x80520000  lb          $s2, 0x0($v0)
    ctx->pc = 0x340e58u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x340e5c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x340E5Cu;
    SET_GPR_U32(ctx, 31, 0x340E64u);
    ctx->pc = 0x340E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340E5Cu;
            // 0x340e60: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340E64u; }
        if (ctx->pc != 0x340E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340E64u; }
        if (ctx->pc != 0x340E64u) { return; }
    }
    ctx->pc = 0x340E64u;
label_340e64:
    // 0x340e64: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x340e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x340e68: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x340e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x340e6c: 0x26060d14  addiu       $a2, $s0, 0xD14
    ctx->pc = 0x340e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3348));
    // 0x340e70: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x340e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x340e74: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x340E74u;
    SET_GPR_U32(ctx, 31, 0x340E7Cu);
    ctx->pc = 0x340E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340E74u;
            // 0x340e78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340E7Cu; }
        if (ctx->pc != 0x340E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340E7Cu; }
        if (ctx->pc != 0x340E7Cu) { return; }
    }
    ctx->pc = 0x340E7Cu;
label_340e7c:
    // 0x340e7c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x340e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x340e80: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x340e80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340e84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x340e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x340e88: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x340e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x340e8c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x340E8Cu;
    SET_GPR_U32(ctx, 31, 0x340E94u);
    ctx->pc = 0x340E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340E8Cu;
            // 0x340e90: 0x24c600c8  addiu       $a2, $a2, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340E94u; }
        if (ctx->pc != 0x340E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340E94u; }
        if (ctx->pc != 0x340E94u) { return; }
    }
    ctx->pc = 0x340E94u;
label_340e94:
    // 0x340e94: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x340e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x340e98: 0x26060d18  addiu       $a2, $s0, 0xD18
    ctx->pc = 0x340e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3352));
    // 0x340e9c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x340e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x340ea0: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x340ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x340ea4: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x340EA4u;
    SET_GPR_U32(ctx, 31, 0x340EACu);
    ctx->pc = 0x340EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340EA4u;
            // 0x340ea8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340EACu; }
        if (ctx->pc != 0x340EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340EACu; }
        if (ctx->pc != 0x340EACu) { return; }
    }
    ctx->pc = 0x340EACu;
label_340eac:
    // 0x340eac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x340eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x340eb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x340eb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340eb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340eb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x340EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340EBCu;
            // 0x340ec0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x340EC4u;
    // 0x340ec4: 0x0  nop
    ctx->pc = 0x340ec4u;
    // NOP
    // 0x340ec8: 0x0  nop
    ctx->pc = 0x340ec8u;
    // NOP
    // 0x340ecc: 0x0  nop
    ctx->pc = 0x340eccu;
    // NOP
}
