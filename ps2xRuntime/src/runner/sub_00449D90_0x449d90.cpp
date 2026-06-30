#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00449D90
// Address: 0x449d90 - 0x449f60
void sub_00449D90_0x449d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449D90_0x449d90");
#endif

    switch (ctx->pc) {
        case 0x449db8u: goto label_449db8;
        case 0x449dd8u: goto label_449dd8;
        case 0x449e08u: goto label_449e08;
        case 0x449e28u: goto label_449e28;
        case 0x449e4cu: goto label_449e4c;
        case 0x449e68u: goto label_449e68;
        case 0x449e90u: goto label_449e90;
        case 0x449ef0u: goto label_449ef0;
        case 0x449efcu: goto label_449efc;
        case 0x449f08u: goto label_449f08;
        case 0x449f14u: goto label_449f14;
        case 0x449f20u: goto label_449f20;
        case 0x449f2cu: goto label_449f2c;
        case 0x449f44u: goto label_449f44;
        default: break;
    }

    ctx->pc = 0x449d90u;

    // 0x449d90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x449d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x449d94: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x449d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x449d98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x449d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x449d9c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x449d9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x449da0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x449da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x449da4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x449da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x449da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x449da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x449dac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x449dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449db0: 0xc112810  jal         func_44A040
    ctx->pc = 0x449DB0u;
    SET_GPR_U32(ctx, 31, 0x449DB8u);
    ctx->pc = 0x449DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449DB0u;
            // 0x449db4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44A040u;
    if (runtime->hasFunction(0x44A040u)) {
        auto targetFn = runtime->lookupFunction(0x44A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449DB8u; }
        if (ctx->pc != 0x449DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044A040_0x44a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449DB8u; }
        if (ctx->pc != 0x449DB8u) { return; }
    }
    ctx->pc = 0x449DB8u;
label_449db8:
    // 0x449db8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x449db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x449dbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x449dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x449dc0: 0x2463d820  addiu       $v1, $v1, -0x27E0
    ctx->pc = 0x449dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957088));
    // 0x449dc4: 0x2442d858  addiu       $v0, $v0, -0x27A8
    ctx->pc = 0x449dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957144));
    // 0x449dc8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x449dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x449dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x449dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449dd0: 0xc11280c  jal         func_44A030
    ctx->pc = 0x449DD0u;
    SET_GPR_U32(ctx, 31, 0x449DD8u);
    ctx->pc = 0x449DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449DD0u;
            // 0x449dd4: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44A030u;
    if (runtime->hasFunction(0x44A030u)) {
        auto targetFn = runtime->lookupFunction(0x44A030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449DD8u; }
        if (ctx->pc != 0x449DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044A030_0x44a030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449DD8u; }
        if (ctx->pc != 0x449DD8u) { return; }
    }
    ctx->pc = 0x449DD8u;
label_449dd8:
    // 0x449dd8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x449dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x449ddc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x449ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x449de0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x449de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x449de4: 0x2442d6d0  addiu       $v0, $v0, -0x2930
    ctx->pc = 0x449de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956752));
    // 0x449de8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x449de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x449dec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x449decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x449df0: 0x2442d708  addiu       $v0, $v0, -0x28F8
    ctx->pc = 0x449df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956808));
    // 0x449df4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x449df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x449df8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x449df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x449dfc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x449dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x449e00: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x449E00u;
    SET_GPR_U32(ctx, 31, 0x449E08u);
    ctx->pc = 0x449E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449E00u;
            // 0x449e04: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449E08u; }
        if (ctx->pc != 0x449E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449E08u; }
        if (ctx->pc != 0x449E08u) { return; }
    }
    ctx->pc = 0x449E08u;
label_449e08:
    // 0x449e08: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x449e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x449e0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x449e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e10: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x449E10u;
    {
        const bool branch_taken_0x449e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x449E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449E10u;
            // 0x449e14: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449e10) {
            ctx->pc = 0x449E2Cu;
            goto label_449e2c;
        }
    }
    ctx->pc = 0x449E18u;
    // 0x449e18: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x449e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x449e1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x449e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x449e20: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x449E20u;
    SET_GPR_U32(ctx, 31, 0x449E28u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449E28u; }
        if (ctx->pc != 0x449E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449E28u; }
        if (ctx->pc != 0x449E28u) { return; }
    }
    ctx->pc = 0x449E28u;
label_449e28:
    // 0x449e28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x449e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_449e2c:
    // 0x449e2c: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x449e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
    // 0x449e30: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x449e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x449e34: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x449e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x449e38: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x449e38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x449e3c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x449e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x449e40: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x449e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x449e44: 0xc040140  jal         func_100500
    ctx->pc = 0x449E44u;
    SET_GPR_U32(ctx, 31, 0x449E4Cu);
    ctx->pc = 0x449E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449E44u;
            // 0x449e48: 0x26320084  addiu       $s2, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449E4Cu; }
        if (ctx->pc != 0x449E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449E4Cu; }
        if (ctx->pc != 0x449E4Cu) { return; }
    }
    ctx->pc = 0x449E4Cu;
label_449e4c:
    // 0x449e4c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x449E4Cu;
    {
        const bool branch_taken_0x449e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449e4c) {
            ctx->pc = 0x449E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x449E4Cu;
            // 0x449e50: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x449E6Cu;
            goto label_449e6c;
        }
    }
    ctx->pc = 0x449E54u;
    // 0x449e54: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x449e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x449e58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x449e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x449e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e60: 0xc0b4554  jal         func_2D1550
    ctx->pc = 0x449E60u;
    SET_GPR_U32(ctx, 31, 0x449E68u);
    ctx->pc = 0x449E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449E60u;
            // 0x449e64: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449E68u; }
        if (ctx->pc != 0x449E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449E68u; }
        if (ctx->pc != 0x449E68u) { return; }
    }
    ctx->pc = 0x449E68u;
label_449e68:
    // 0x449e68: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x449e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_449e6c:
    // 0x449e6c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x449e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x449e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x449e74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x449e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x449e78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x449e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x449e7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x449e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x449e80: 0x3e00008  jr          $ra
    ctx->pc = 0x449E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449E80u;
            // 0x449e84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x449E88u;
    // 0x449e88: 0x0  nop
    ctx->pc = 0x449e88u;
    // NOP
    // 0x449e8c: 0x0  nop
    ctx->pc = 0x449e8cu;
    // NOP
label_449e90:
    // 0x449e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x449e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x449e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x449e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x449e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x449e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x449e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x449e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x449ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x449ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449ea4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x449EA4u;
    {
        const bool branch_taken_0x449ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x449EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449EA4u;
            // 0x449ea8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ea4) {
            ctx->pc = 0x449F44u;
            goto label_449f44;
        }
    }
    ctx->pc = 0x449EACu;
    // 0x449eac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x449eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x449eb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x449eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x449eb4: 0x2463d820  addiu       $v1, $v1, -0x27E0
    ctx->pc = 0x449eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957088));
    // 0x449eb8: 0x2442d858  addiu       $v0, $v0, -0x27A8
    ctx->pc = 0x449eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957144));
    // 0x449ebc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x449ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x449ec0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x449EC0u;
    {
        const bool branch_taken_0x449ec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x449EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449EC0u;
            // 0x449ec4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ec0) {
            ctx->pc = 0x449F2Cu;
            goto label_449f2c;
        }
    }
    ctx->pc = 0x449EC8u;
    // 0x449ec8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x449ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x449ecc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x449eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x449ed0: 0x2463d7d0  addiu       $v1, $v1, -0x2830
    ctx->pc = 0x449ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957008));
    // 0x449ed4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x449ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x449ed8: 0x2442d808  addiu       $v0, $v0, -0x27F8
    ctx->pc = 0x449ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957064));
    // 0x449edc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x449edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x449ee0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x449ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x449ee4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x449ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x449ee8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x449EE8u;
    SET_GPR_U32(ctx, 31, 0x449EF0u);
    ctx->pc = 0x449EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449EE8u;
            // 0x449eec: 0x24a59660  addiu       $a1, $a1, -0x69A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449EF0u; }
        if (ctx->pc != 0x449EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449EF0u; }
        if (ctx->pc != 0x449EF0u) { return; }
    }
    ctx->pc = 0x449EF0u;
label_449ef0:
    // 0x449ef0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x449ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x449ef4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x449EF4u;
    SET_GPR_U32(ctx, 31, 0x449EFCu);
    ctx->pc = 0x449EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449EF4u;
            // 0x449ef8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449EFCu; }
        if (ctx->pc != 0x449EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449EFCu; }
        if (ctx->pc != 0x449EFCu) { return; }
    }
    ctx->pc = 0x449EFCu;
label_449efc:
    // 0x449efc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x449efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x449f00: 0xc1127f0  jal         func_449FC0
    ctx->pc = 0x449F00u;
    SET_GPR_U32(ctx, 31, 0x449F08u);
    ctx->pc = 0x449F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449F00u;
            // 0x449f04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x449FC0u;
    if (runtime->hasFunction(0x449FC0u)) {
        auto targetFn = runtime->lookupFunction(0x449FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449F08u; }
        if (ctx->pc != 0x449F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00449FC0_0x449fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449F08u; }
        if (ctx->pc != 0x449F08u) { return; }
    }
    ctx->pc = 0x449F08u;
label_449f08:
    // 0x449f08: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x449f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x449f0c: 0xc1127f0  jal         func_449FC0
    ctx->pc = 0x449F0Cu;
    SET_GPR_U32(ctx, 31, 0x449F14u);
    ctx->pc = 0x449F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449F0Cu;
            // 0x449f10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x449FC0u;
    if (runtime->hasFunction(0x449FC0u)) {
        auto targetFn = runtime->lookupFunction(0x449FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449F14u; }
        if (ctx->pc != 0x449F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00449FC0_0x449fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449F14u; }
        if (ctx->pc != 0x449F14u) { return; }
    }
    ctx->pc = 0x449F14u;
label_449f14:
    // 0x449f14: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x449f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x449f18: 0xc1127d8  jal         func_449F60
    ctx->pc = 0x449F18u;
    SET_GPR_U32(ctx, 31, 0x449F20u);
    ctx->pc = 0x449F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449F18u;
            // 0x449f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x449F60u;
    if (runtime->hasFunction(0x449F60u)) {
        auto targetFn = runtime->lookupFunction(0x449F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449F20u; }
        if (ctx->pc != 0x449F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00449F60_0x449f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449F20u; }
        if (ctx->pc != 0x449F20u) { return; }
    }
    ctx->pc = 0x449F20u;
label_449f20:
    // 0x449f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x449f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449f24: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x449F24u;
    SET_GPR_U32(ctx, 31, 0x449F2Cu);
    ctx->pc = 0x449F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449F24u;
            // 0x449f28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449F2Cu; }
        if (ctx->pc != 0x449F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449F2Cu; }
        if (ctx->pc != 0x449F2Cu) { return; }
    }
    ctx->pc = 0x449F2Cu;
label_449f2c:
    // 0x449f2c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x449f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x449f30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x449f30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x449f34: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x449F34u;
    {
        const bool branch_taken_0x449f34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x449f34) {
            ctx->pc = 0x449F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x449F34u;
            // 0x449f38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x449F48u;
            goto label_449f48;
        }
    }
    ctx->pc = 0x449F3Cu;
    // 0x449f3c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x449F3Cu;
    SET_GPR_U32(ctx, 31, 0x449F44u);
    ctx->pc = 0x449F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449F3Cu;
            // 0x449f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449F44u; }
        if (ctx->pc != 0x449F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449F44u; }
        if (ctx->pc != 0x449F44u) { return; }
    }
    ctx->pc = 0x449F44u;
label_449f44:
    // 0x449f44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x449f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_449f48:
    // 0x449f48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x449f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x449f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x449f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x449f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x449f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x449f54: 0x3e00008  jr          $ra
    ctx->pc = 0x449F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449F54u;
            // 0x449f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x449F5Cu;
    // 0x449f5c: 0x0  nop
    ctx->pc = 0x449f5cu;
    // NOP
}
