#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E3D40
// Address: 0x2e3d40 - 0x2e4210
void sub_002E3D40_0x2e3d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3D40_0x2e3d40");
#endif

    switch (ctx->pc) {
        case 0x2e3db4u: goto label_2e3db4;
        case 0x2e3dc0u: goto label_2e3dc0;
        case 0x2e3de0u: goto label_2e3de0;
        case 0x2e3df0u: goto label_2e3df0;
        case 0x2e3e18u: goto label_2e3e18;
        case 0x2e3e28u: goto label_2e3e28;
        case 0x2e3e7cu: goto label_2e3e7c;
        case 0x2e3fb0u: goto label_2e3fb0;
        case 0x2e3fb8u: goto label_2e3fb8;
        case 0x2e3fc8u: goto label_2e3fc8;
        case 0x2e4044u: goto label_2e4044;
        case 0x2e4058u: goto label_2e4058;
        case 0x2e406cu: goto label_2e406c;
        case 0x2e4084u: goto label_2e4084;
        case 0x2e40f0u: goto label_2e40f0;
        case 0x2e4128u: goto label_2e4128;
        case 0x2e413cu: goto label_2e413c;
        case 0x2e4148u: goto label_2e4148;
        case 0x2e418cu: goto label_2e418c;
        default: break;
    }

    ctx->pc = 0x2e3d40u;

    // 0x2e3d40: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2e3d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2e3d44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e3d48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e3d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e3d4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e3d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e3d50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e3d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e3d54: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e3d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e3d58: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2e3d58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e3d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e3d60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e3d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e3d64: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e3d64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e3d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e3d6c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e3d6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e3d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e3d74: 0x3a83000e  xori        $v1, $s4, 0xE
    ctx->pc = 0x2e3d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)14);
    // 0x2e3d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e3d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e3d7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e3d80: 0x8c440ec8  lw          $a0, 0xEC8($v0)
    ctx->pc = 0x2e3d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x2e3d84: 0xafa70104  sw          $a3, 0x104($sp)
    ctx->pc = 0x2e3d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 7));
    // 0x2e3d88: 0x8c960008  lw          $s6, 0x8($a0)
    ctx->pc = 0x2e3d88u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e3d8c: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2e3d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e3d90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3D90u;
    {
        const bool branch_taken_0x2e3d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D90u;
            // 0x2e3d94: 0xafa80100  sw          $t0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d90) {
            ctx->pc = 0x2E3DA0u;
            goto label_2e3da0;
        }
    }
    ctx->pc = 0x2E3D98u;
    // 0x2e3d98: 0x3a820009  xori        $v0, $s4, 0x9
    ctx->pc = 0x2e3d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)9);
    // 0x2e3d9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e3d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e3da0:
    // 0x2e3da0: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x2e3da0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e3da4: 0x3a820003  xori        $v0, $s4, 0x3
    ctx->pc = 0x2e3da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)3);
    // 0x2e3da8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e3da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e3dac: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x2E3DACu;
    SET_GPR_U32(ctx, 31, 0x2E3DB4u);
    ctx->pc = 0x2E3DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DACu;
            // 0x2e3db0: 0xa3a200f0  sb          $v0, 0xF0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3DB4u; }
        if (ctx->pc != 0x2E3DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3DB4u; }
        if (ctx->pc != 0x2E3DB4u) { return; }
    }
    ctx->pc = 0x2E3DB4u;
label_2e3db4:
    // 0x2e3db4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e3db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2e3db8: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x2E3DB8u;
    SET_GPR_U32(ctx, 31, 0x2E3DC0u);
    ctx->pc = 0x2E3DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DB8u;
            // 0x2e3dbc: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3DC0u; }
        if (ctx->pc != 0x2E3DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3DC0u; }
        if (ctx->pc != 0x2E3DC0u) { return; }
    }
    ctx->pc = 0x2E3DC0u;
label_2e3dc0:
    // 0x2e3dc0: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x2e3dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x2e3dc4: 0x26c4000c  addiu       $a0, $s6, 0xC
    ctx->pc = 0x2e3dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x2e3dc8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2e3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e3dcc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e3dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3dd0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2e3dd0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e3dd4: 0x1010  mfhi        $v0
    ctx->pc = 0x2e3dd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e3dd8: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x2E3DD8u;
    SET_GPR_U32(ctx, 31, 0x2E3DE0u);
    ctx->pc = 0x2E3DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DD8u;
            // 0x2e3ddc: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3DE0u; }
        if (ctx->pc != 0x2E3DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3DE0u; }
        if (ctx->pc != 0x2E3DE0u) { return; }
    }
    ctx->pc = 0x2E3DE0u;
label_2e3de0:
    // 0x2e3de0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e3de0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e3de4: 0x26c4000c  addiu       $a0, $s6, 0xC
    ctx->pc = 0x2e3de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x2e3de8: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x2E3DE8u;
    SET_GPR_U32(ctx, 31, 0x2E3DF0u);
    ctx->pc = 0x2E3DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DE8u;
            // 0x2e3dec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3DF0u; }
        if (ctx->pc != 0x2E3DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3DF0u; }
        if (ctx->pc != 0x2E3DF0u) { return; }
    }
    ctx->pc = 0x2E3DF0u;
label_2e3df0:
    // 0x2e3df0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2e3df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e3df4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e3df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e3df8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e3df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e3dfc: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x2e3dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2e3e00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e3e00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e3e04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e3e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3e08: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2e3e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2e3e0c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2e3e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e3e10: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2E3E10u;
    SET_GPR_U32(ctx, 31, 0x2E3E18u);
    ctx->pc = 0x2E3E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E10u;
            // 0x2e3e14: 0xa3a000ef  sb          $zero, 0xEF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 239), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E18u; }
        if (ctx->pc != 0x2E3E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E18u; }
        if (ctx->pc != 0x2E3E18u) { return; }
    }
    ctx->pc = 0x2E3E18u;
label_2e3e18:
    // 0x2e3e18: 0x8fb30104  lw          $s3, 0x104($sp)
    ctx->pc = 0x2e3e18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2e3e1c: 0x27b20108  addiu       $s2, $sp, 0x108
    ctx->pc = 0x2e3e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2e3e20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e3e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e24: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2e3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2e3e28:
    // 0x2e3e28: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2e3e28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e3e2c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2e3e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2e3e30: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x2e3e30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e3e34: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2e3e34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e3e38: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2e3e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2e3e3c: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3E3Cu;
    {
        const bool branch_taken_0x2e3e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e3e3c) {
            ctx->pc = 0x2E3E48u;
            goto label_2e3e48;
        }
    }
    ctx->pc = 0x2E3E44u;
    // 0x2e3e44: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x2e3e44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_2e3e48:
    // 0x2e3e48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e3e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e3e4c: 0x237182a  slt         $v1, $s1, $s7
    ctx->pc = 0x2e3e4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2e3e50: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2e3e50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2e3e54: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E3E54u;
    {
        const bool branch_taken_0x2e3e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E54u;
            // 0x2e3e58: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e54) {
            ctx->pc = 0x2E3E28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e3e28;
        }
    }
    ctx->pc = 0x2E3E5Cu;
    // 0x2e3e5c: 0x235082a  slt         $at, $s1, $s5
    ctx->pc = 0x2e3e5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2e3e60: 0x102000dd  beqz        $at, . + 4 + (0xDD << 2)
    ctx->pc = 0x2E3E60u;
    {
        const bool branch_taken_0x2e3e60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3e60) {
            ctx->pc = 0x2E41D8u;
            goto label_2e41d8;
        }
    }
    ctx->pc = 0x2E3E68u;
    // 0x2e3e68: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2e3e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2e3e6c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2e3e6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e3e70: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2e3e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2e3e74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e3e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e3e78: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x2e3e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_2e3e7c:
    // 0x2e3e7c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2e3e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e3e80: 0x12830041  beq         $s4, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E3E80u;
    {
        const bool branch_taken_0x2e3e80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E3E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E80u;
            // 0x2e3e84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e80) {
            ctx->pc = 0x2E3F88u;
            goto label_2e3f88;
        }
    }
    ctx->pc = 0x2E3E88u;
    // 0x2e3e88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3e8c: 0x1283002a  beq         $s4, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2E3E8Cu;
    {
        const bool branch_taken_0x2e3e8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e3e8c) {
            ctx->pc = 0x2E3F38u;
            goto label_2e3f38;
        }
    }
    ctx->pc = 0x2E3E94u;
    // 0x2e3e94: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2e3e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e3e98: 0x12830003  beq         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3E98u;
    {
        const bool branch_taken_0x2e3e98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e3e98) {
            ctx->pc = 0x2E3EA8u;
            goto label_2e3ea8;
        }
    }
    ctx->pc = 0x2E3EA0u;
    // 0x2e3ea0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2E3EA0u;
    {
        const bool branch_taken_0x2e3ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3ea0) {
            ctx->pc = 0x2E3FB0u;
            goto label_2e3fb0;
        }
    }
    ctx->pc = 0x2E3EA8u;
label_2e3ea8:
    // 0x2e3ea8: 0x16370009  bne         $s1, $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E3EA8u;
    {
        const bool branch_taken_0x2e3ea8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        if (branch_taken_0x2e3ea8) {
            ctx->pc = 0x2E3ED0u;
            goto label_2e3ed0;
        }
    }
    ctx->pc = 0x2E3EB0u;
    // 0x2e3eb0: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x2e3eb0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e3eb4: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x2e3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2e3eb8: 0x3004001f  andi        $a0, $zero, 0x1F
    ctx->pc = 0x2e3eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x2e3ebc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2e3ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2e3ec0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e3ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e3ec4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2E3EC4u;
    {
        const bool branch_taken_0x2e3ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3EC4u;
            // 0x2e3ec8: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ec4) {
            ctx->pc = 0x2E3FF8u;
            goto label_2e3ff8;
        }
    }
    ctx->pc = 0x2E3ECCu;
    // 0x2e3ecc: 0x0  nop
    ctx->pc = 0x2e3eccu;
    // NOP
label_2e3ed0:
    // 0x2e3ed0: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x2e3ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2e3ed4: 0x16230008  bne         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3ED4u;
    {
        const bool branch_taken_0x2e3ed4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e3ed4) {
            ctx->pc = 0x2E3EF8u;
            goto label_2e3ef8;
        }
    }
    ctx->pc = 0x2E3EDCu;
    // 0x2e3edc: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x2e3edcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e3ee0: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x2e3ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2e3ee4: 0x64040004  daddiu      $a0, $zero, 0x4
    ctx->pc = 0x2e3ee4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x2e3ee8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2e3ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2e3eec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e3eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e3ef0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2E3EF0u;
    {
        const bool branch_taken_0x2e3ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3EF0u;
            // 0x2e3ef4: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ef0) {
            ctx->pc = 0x2E3FF8u;
            goto label_2e3ff8;
        }
    }
    ctx->pc = 0x2E3EF8u;
label_2e3ef8:
    // 0x2e3ef8: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x2e3ef8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e3efc: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E3EFCu;
    {
        const bool branch_taken_0x2e3efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3efc) {
            ctx->pc = 0x2E3FB0u;
            goto label_2e3fb0;
        }
    }
    ctx->pc = 0x2E3F04u;
    // 0x2e3f04: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x2e3f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e3f08: 0x16230029  bne         $s1, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E3F08u;
    {
        const bool branch_taken_0x2e3f08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e3f08) {
            ctx->pc = 0x2E3FB0u;
            goto label_2e3fb0;
        }
    }
    ctx->pc = 0x2E3F10u;
    // 0x2e3f10: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x2e3f10u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e3f14: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x2e3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2e3f18: 0x64040010  daddiu      $a0, $zero, 0x10
    ctx->pc = 0x2e3f18u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x2e3f1c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2e3f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e3f20: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2e3f20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f24: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2e3f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2e3f28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e3f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e3f2c: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x2e3f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e3f30: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2E3F30u;
    {
        const bool branch_taken_0x2e3f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F30u;
            // 0x2e3f34: 0xa2660001  sb          $a2, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f30) {
            ctx->pc = 0x2E41C0u;
            goto label_2e41c0;
        }
    }
    ctx->pc = 0x2E3F38u;
label_2e3f38:
    // 0x2e3f38: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x2e3f38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e3f3c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E3F3Cu;
    {
        const bool branch_taken_0x2e3f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3f3c) {
            ctx->pc = 0x2E3FB0u;
            goto label_2e3fb0;
        }
    }
    ctx->pc = 0x2E3F44u;
    // 0x2e3f44: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x2e3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e3f48: 0x16230019  bne         $s1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E3F48u;
    {
        const bool branch_taken_0x2e3f48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e3f48) {
            ctx->pc = 0x2E3FB0u;
            goto label_2e3fb0;
        }
    }
    ctx->pc = 0x2E3F50u;
    // 0x2e3f50: 0x93a300ef  lbu         $v1, 0xEF($sp)
    ctx->pc = 0x2e3f50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 239)));
    // 0x2e3f54: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E3F54u;
    {
        const bool branch_taken_0x2e3f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3f54) {
            ctx->pc = 0x2E3FB0u;
            goto label_2e3fb0;
        }
    }
    ctx->pc = 0x2E3F5Cu;
    // 0x2e3f5c: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x2e3f5cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e3f60: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x2e3f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2e3f64: 0x64040010  daddiu      $a0, $zero, 0x10
    ctx->pc = 0x2e3f64u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x2e3f68: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2e3f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e3f6c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2e3f6cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f70: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2e3f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2e3f74: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e3f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e3f78: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x2e3f78u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e3f7c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x2E3F7Cu;
    {
        const bool branch_taken_0x2e3f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F7Cu;
            // 0x2e3f80: 0xa2660001  sb          $a2, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f7c) {
            ctx->pc = 0x2E41C0u;
            goto label_2e41c0;
        }
    }
    ctx->pc = 0x2E3F84u;
    // 0x2e3f84: 0x0  nop
    ctx->pc = 0x2e3f84u;
    // NOP
label_2e3f88:
    // 0x2e3f88: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x2e3f88u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e3f8c: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x2e3f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2e3f90: 0x64040010  daddiu      $a0, $zero, 0x10
    ctx->pc = 0x2e3f90u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x2e3f94: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2e3f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e3f98: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2e3f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2e3f9c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e3f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e3fa0: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x2e3fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e3fa4: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2E3FA4u;
    {
        const bool branch_taken_0x2e3fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3FA4u;
            // 0x2e3fa8: 0xa2660001  sb          $a2, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3fa4) {
            ctx->pc = 0x2E41C0u;
            goto label_2e41c0;
        }
    }
    ctx->pc = 0x2E3FACu;
    // 0x2e3fac: 0x0  nop
    ctx->pc = 0x2e3facu;
    // NOP
label_2e3fb0:
    // 0x2e3fb0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x2E3FB0u;
    SET_GPR_U32(ctx, 31, 0x2E3FB8u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3FB8u; }
        if (ctx->pc != 0x2E3FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3FB8u; }
        if (ctx->pc != 0x2E3FB8u) { return; }
    }
    ctx->pc = 0x2E3FB8u;
label_2e3fb8:
    // 0x2e3fb8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e3fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2e3fbc: 0x21740  sll         $v0, $v0, 29
    ctx->pc = 0x2e3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
    // 0x2e3fc0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x2E3FC0u;
    SET_GPR_U32(ctx, 31, 0x2E3FC8u);
    ctx->pc = 0x2E3FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3FC0u;
            // 0x2e3fc4: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3FC8u; }
        if (ctx->pc != 0x2E3FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3FC8u; }
        if (ctx->pc != 0x2E3FC8u) { return; }
    }
    ctx->pc = 0x2E3FC8u;
label_2e3fc8:
    // 0x2e3fc8: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2e3fc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e3fcc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2e3fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e3fd0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2e3fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e3fd4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2e3fd4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2e3fd8: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2e3fd8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e3fdc: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x2e3fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2e3fe0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e3fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e3fe4: 0x2010  mfhi        $a0
    ctx->pc = 0x2e3fe4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2e3fe8: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2e3fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2e3fec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e3fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e3ff0: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x2e3ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e3ff4: 0x0  nop
    ctx->pc = 0x2e3ff4u;
    // NOP
label_2e3ff8:
    // 0x2e3ff8: 0x13c00037  beqz        $fp, . + 4 + (0x37 << 2)
    ctx->pc = 0x2E3FF8u;
    {
        const bool branch_taken_0x2e3ff8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3ff8) {
            ctx->pc = 0x2E40D8u;
            goto label_2e40d8;
        }
    }
    ctx->pc = 0x2E4000u;
    // 0x2e4000: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2e4000u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e4004: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e4004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4008: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2e4008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2e400c: 0x2484fff9  addiu       $a0, $a0, -0x7
    ctx->pc = 0x2e400cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
    // 0x2e4010: 0x2c81000b  sltiu       $at, $a0, 0xB
    ctx->pc = 0x2e4010u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2e4014: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E4014u;
    {
        const bool branch_taken_0x2e4014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4014u;
            // 0x2e4018: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4014) {
            ctx->pc = 0x2E40D0u;
            goto label_2e40d0;
        }
    }
    ctx->pc = 0x2E401Cu;
    // 0x2e401c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2e401cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2e4020: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e4020u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e4024: 0x24c61ba0  addiu       $a2, $a2, 0x1BA0
    ctx->pc = 0x2e4024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7072));
    // 0x2e4028: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2e4028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2e402c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2e402cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e4030: 0x800008  jr          $a0
    ctx->pc = 0x2E4030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E4038u: goto label_2e4038;
            case 0x2E4050u: goto label_2e4050;
            case 0x2E4060u: goto label_2e4060;
            case 0x2E4078u: goto label_2e4078;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E4038u;
label_2e4038:
    // 0x2e4038: 0x26c4000c  addiu       $a0, $s6, 0xC
    ctx->pc = 0x2e4038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x2e403c: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x2E403Cu;
    SET_GPR_U32(ctx, 31, 0x2E4044u);
    ctx->pc = 0x2E4040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E403Cu;
            // 0x2e4040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4044u; }
        if (ctx->pc != 0x2E4044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4044u; }
        if (ctx->pc != 0x2E4044u) { return; }
    }
    ctx->pc = 0x2E4044u;
label_2e4044:
    // 0x2e4044: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2E4044u;
    {
        const bool branch_taken_0x2e4044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4044u;
            // 0x2e4048: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4044) {
            ctx->pc = 0x2E40D0u;
            goto label_2e40d0;
        }
    }
    ctx->pc = 0x2E404Cu;
    // 0x2e404c: 0x0  nop
    ctx->pc = 0x2e404cu;
    // NOP
label_2e4050:
    // 0x2e4050: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x2E4050u;
    SET_GPR_U32(ctx, 31, 0x2E4058u);
    ctx->pc = 0x2E4054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4050u;
            // 0x2e4054: 0x26c4000c  addiu       $a0, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4058u; }
        if (ctx->pc != 0x2E4058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4058u; }
        if (ctx->pc != 0x2E4058u) { return; }
    }
    ctx->pc = 0x2E4058u;
label_2e4058:
    // 0x2e4058: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2E4058u;
    {
        const bool branch_taken_0x2e4058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E405Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4058u;
            // 0x2e405c: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4058) {
            ctx->pc = 0x2E40D0u;
            goto label_2e40d0;
        }
    }
    ctx->pc = 0x2E4060u;
label_2e4060:
    // 0x2e4060: 0x26c4000c  addiu       $a0, $s6, 0xC
    ctx->pc = 0x2e4060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x2e4064: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x2E4064u;
    SET_GPR_U32(ctx, 31, 0x2E406Cu);
    ctx->pc = 0x2E4068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4064u;
            // 0x2e4068: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E406Cu; }
        if (ctx->pc != 0x2E406Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E406Cu; }
        if (ctx->pc != 0x2E406Cu) { return; }
    }
    ctx->pc = 0x2E406Cu;
label_2e406c:
    // 0x2e406c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E406Cu;
    {
        const bool branch_taken_0x2e406c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E406Cu;
            // 0x2e4070: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e406c) {
            ctx->pc = 0x2E40D0u;
            goto label_2e40d0;
        }
    }
    ctx->pc = 0x2E4074u;
    // 0x2e4074: 0x0  nop
    ctx->pc = 0x2e4074u;
    // NOP
label_2e4078:
    // 0x2e4078: 0x26c4000c  addiu       $a0, $s6, 0xC
    ctx->pc = 0x2e4078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x2e407c: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x2E407Cu;
    SET_GPR_U32(ctx, 31, 0x2E4084u);
    ctx->pc = 0x2E4080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E407Cu;
            // 0x2e4080: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4084u; }
        if (ctx->pc != 0x2E4084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4084u; }
        if (ctx->pc != 0x2E4084u) { return; }
    }
    ctx->pc = 0x2E4084u;
label_2e4084:
    // 0x2e4084: 0x93a400f0  lbu         $a0, 0xF0($sp)
    ctx->pc = 0x2e4084u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e4088: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E4088u;
    {
        const bool branch_taken_0x2e4088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E408Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4088u;
            // 0x2e408c: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4088) {
            ctx->pc = 0x2E40D0u;
            goto label_2e40d0;
        }
    }
    ctx->pc = 0x2E4090u;
    // 0x2e4090: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x2e4090u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e4094: 0x1c80000e  bgtz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E4094u;
    {
        const bool branch_taken_0x2e4094 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2e4094) {
            ctx->pc = 0x2E40D0u;
            goto label_2e40d0;
        }
    }
    ctx->pc = 0x2E409Cu;
    // 0x2e409c: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x2e409cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e40a0: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x2e40a0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e40a4: 0x2404ffe0  addiu       $a0, $zero, -0x20
    ctx->pc = 0x2e40a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2e40a8: 0x64050011  daddiu      $a1, $zero, 0x11
    ctx->pc = 0x2e40a8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)17);
    // 0x2e40ac: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x2e40acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2e40b0: 0xa3a300ef  sb          $v1, 0xEF($sp)
    ctx->pc = 0x2e40b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 239), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e40b4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x2e40b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2e40b8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2e40b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e40bc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2e40bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2e40c0: 0xa3a000f0  sb          $zero, 0xF0($sp)
    ctx->pc = 0x2e40c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e40c4: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x2e40c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e40c8: 0xa2670001  sb          $a3, 0x1($s3)
    ctx->pc = 0x2e40c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x2e40cc: 0x0  nop
    ctx->pc = 0x2e40ccu;
    // NOP
label_2e40d0:
    // 0x2e40d0: 0x1060ffb7  beqz        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2E40D0u;
    {
        const bool branch_taken_0x2e40d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e40d0) {
            ctx->pc = 0x2E3FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e3fb0;
        }
    }
    ctx->pc = 0x2E40D8u;
label_2e40d8:
    // 0x2e40d8: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2e40d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e40dc: 0x8fa70104  lw          $a3, 0x104($sp)
    ctx->pc = 0x2e40dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2e40e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e40e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e40e4: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x2e40e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2e40e8: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2e40e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e40ec: 0x0  nop
    ctx->pc = 0x2e40ecu;
    // NOP
label_2e40f0:
    // 0x2e40f0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2e40f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e40f4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2e40f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2e40f8: 0x10a3ffad  beq         $a1, $v1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x2E40F8u;
    {
        const bool branch_taken_0x2e40f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e40f8) {
            ctx->pc = 0x2E3FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e3fb0;
        }
    }
    ctx->pc = 0x2E4100u;
    // 0x2e4100: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4100u;
    {
        const bool branch_taken_0x2e4100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e4100) {
            ctx->pc = 0x2E4110u;
            goto label_2e4110;
        }
    }
    ctx->pc = 0x2E4108u;
    // 0x2e4108: 0x10a0ffa9  beqz        $a1, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2E4108u;
    {
        const bool branch_taken_0x2e4108 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4108) {
            ctx->pc = 0x2E3FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e3fb0;
        }
    }
    ctx->pc = 0x2E4110u;
label_2e4110:
    // 0x2e4110: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e4110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e4114: 0xd1182a  slt         $v1, $a2, $s1
    ctx->pc = 0x2e4114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2e4118: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2E4118u;
    {
        const bool branch_taken_0x2e4118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E411Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4118u;
            // 0x2e411c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4118) {
            ctx->pc = 0x2E40F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e40f0;
        }
    }
    ctx->pc = 0x2E4120u;
    // 0x2e4120: 0x16000027  bnez        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E4120u;
    {
        const bool branch_taken_0x2e4120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4120u;
            // 0x2e4124: 0xa2450000  sb          $a1, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4120) {
            ctx->pc = 0x2E41C0u;
            goto label_2e41c0;
        }
    }
    ctx->pc = 0x2E4128u;
label_2e4128:
    // 0x2e4128: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2e4128u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e412c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E412Cu;
    {
        const bool branch_taken_0x2e412c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e412c) {
            ctx->pc = 0x2E4160u;
            goto label_2e4160;
        }
    }
    ctx->pc = 0x2E4134u;
    // 0x2e4134: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x2E4134u;
    SET_GPR_U32(ctx, 31, 0x2E413Cu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E413Cu; }
        if (ctx->pc != 0x2E413Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E413Cu; }
        if (ctx->pc != 0x2E413Cu) { return; }
    }
    ctx->pc = 0x2E413Cu;
label_2e413c:
    // 0x2e413c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e413cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2e4140: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x2E4140u;
    SET_GPR_U32(ctx, 31, 0x2E4148u);
    ctx->pc = 0x2E4144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4140u;
            // 0x2e4144: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4148u; }
        if (ctx->pc != 0x2E4148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4148u; }
        if (ctx->pc != 0x2E4148u) { return; }
    }
    ctx->pc = 0x2E4148u;
label_2e4148:
    // 0x2e4148: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x2e4148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x2e414c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x2e414cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2e4150: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2e4150u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e4154: 0x1010  mfhi        $v0
    ctx->pc = 0x2e4154u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e4158: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4158u;
    {
        const bool branch_taken_0x2e4158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E415Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4158u;
            // 0x2e415c: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4158) {
            ctx->pc = 0x2E4168u;
            goto label_2e4168;
        }
    }
    ctx->pc = 0x2E4160u;
label_2e4160:
    // 0x2e4160: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x2e4160u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4164: 0x0  nop
    ctx->pc = 0x2e4164u;
    // NOP
label_2e4168:
    // 0x2e4168: 0x3a82000e  xori        $v0, $s4, 0xE
    ctx->pc = 0x2e4168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)14);
    // 0x2e416c: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x2e416cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e4170: 0x50c00004  beql        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4170u;
    {
        const bool branch_taken_0x2e4170 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4170) {
            ctx->pc = 0x2E4174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4170u;
            // 0x2e4174: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E4184u;
            goto label_2e4184;
        }
    }
    ctx->pc = 0x2E4178u;
    // 0x2e4178: 0x3a820009  xori        $v0, $s4, 0x9
    ctx->pc = 0x2e4178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)9);
    // 0x2e417c: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x2e417cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e4180: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e4180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4184:
    // 0x2e4184: 0xc0c90f4  jal         func_3243D0
    ctx->pc = 0x2E4184u;
    SET_GPR_U32(ctx, 31, 0x2E418Cu);
    ctx->pc = 0x2E4188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4184u;
            // 0x2e4188: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3243D0u;
    if (runtime->hasFunction(0x3243D0u)) {
        auto targetFn = runtime->lookupFunction(0x3243D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E418Cu; }
        if (ctx->pc != 0x2E418Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003243D0_0x3243d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E418Cu; }
        if (ctx->pc != 0x2E418Cu) { return; }
    }
    ctx->pc = 0x2E418Cu;
label_2e418c:
    // 0x2e418c: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x2e418cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2e4190: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2e4190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e4194: 0x1083ffe4  beq         $a0, $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2E4194u;
    {
        const bool branch_taken_0x2e4194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e4194) {
            ctx->pc = 0x2E4128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e4128;
        }
    }
    ctx->pc = 0x2E419Cu;
    // 0x2e419c: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x2e419cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2e41a0: 0x1083ffe1  beq         $a0, $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2E41A0u;
    {
        const bool branch_taken_0x2e41a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e41a0) {
            ctx->pc = 0x2E4128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e4128;
        }
    }
    ctx->pc = 0x2E41A8u;
    // 0x2e41a8: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x2e41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2e41ac: 0x1083ffde  beq         $a0, $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2E41ACu;
    {
        const bool branch_taken_0x2e41ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e41ac) {
            ctx->pc = 0x2E4128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e4128;
        }
    }
    ctx->pc = 0x2E41B4u;
    // 0x2e41b4: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x2e41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2e41b8: 0x1083ffdb  beq         $a0, $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2E41B8u;
    {
        const bool branch_taken_0x2e41b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e41b8) {
            ctx->pc = 0x2E4128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e4128;
        }
    }
    ctx->pc = 0x2E41C0u;
label_2e41c0:
    // 0x2e41c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e41c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e41c4: 0x235182a  slt         $v1, $s1, $s5
    ctx->pc = 0x2e41c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2e41c8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2e41c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2e41cc: 0x1460ff2b  bnez        $v1, . + 4 + (-0xD5 << 2)
    ctx->pc = 0x2E41CCu;
    {
        const bool branch_taken_0x2e41cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E41D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E41CCu;
            // 0x2e41d0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41cc) {
            ctx->pc = 0x2E3E7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e3e7c;
        }
    }
    ctx->pc = 0x2E41D4u;
    // 0x2e41d4: 0x0  nop
    ctx->pc = 0x2e41d4u;
    // NOP
label_2e41d8:
    // 0x2e41d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e41d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e41dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e41dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e41e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e41e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e41e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e41e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e41e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e41e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e41ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e41ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e41f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e41f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e41f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e41f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e41f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e41f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e41fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e41fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4200: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4200u;
            // 0x2e4204: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E4208u;
    // 0x2e4208: 0x0  nop
    ctx->pc = 0x2e4208u;
    // NOP
    // 0x2e420c: 0x0  nop
    ctx->pc = 0x2e420cu;
    // NOP
}
