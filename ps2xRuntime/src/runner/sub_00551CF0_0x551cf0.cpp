#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00551CF0
// Address: 0x551cf0 - 0x551fd0
void sub_00551CF0_0x551cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00551CF0_0x551cf0");
#endif

    switch (ctx->pc) {
        case 0x551cf0u: goto label_551cf0;
        case 0x551cf4u: goto label_551cf4;
        case 0x551cf8u: goto label_551cf8;
        case 0x551cfcu: goto label_551cfc;
        case 0x551d00u: goto label_551d00;
        case 0x551d04u: goto label_551d04;
        case 0x551d08u: goto label_551d08;
        case 0x551d0cu: goto label_551d0c;
        case 0x551d10u: goto label_551d10;
        case 0x551d14u: goto label_551d14;
        case 0x551d18u: goto label_551d18;
        case 0x551d1cu: goto label_551d1c;
        case 0x551d20u: goto label_551d20;
        case 0x551d24u: goto label_551d24;
        case 0x551d28u: goto label_551d28;
        case 0x551d2cu: goto label_551d2c;
        case 0x551d30u: goto label_551d30;
        case 0x551d34u: goto label_551d34;
        case 0x551d38u: goto label_551d38;
        case 0x551d3cu: goto label_551d3c;
        case 0x551d40u: goto label_551d40;
        case 0x551d44u: goto label_551d44;
        case 0x551d48u: goto label_551d48;
        case 0x551d4cu: goto label_551d4c;
        case 0x551d50u: goto label_551d50;
        case 0x551d54u: goto label_551d54;
        case 0x551d58u: goto label_551d58;
        case 0x551d5cu: goto label_551d5c;
        case 0x551d60u: goto label_551d60;
        case 0x551d64u: goto label_551d64;
        case 0x551d68u: goto label_551d68;
        case 0x551d6cu: goto label_551d6c;
        case 0x551d70u: goto label_551d70;
        case 0x551d74u: goto label_551d74;
        case 0x551d78u: goto label_551d78;
        case 0x551d7cu: goto label_551d7c;
        case 0x551d80u: goto label_551d80;
        case 0x551d84u: goto label_551d84;
        case 0x551d88u: goto label_551d88;
        case 0x551d8cu: goto label_551d8c;
        case 0x551d90u: goto label_551d90;
        case 0x551d94u: goto label_551d94;
        case 0x551d98u: goto label_551d98;
        case 0x551d9cu: goto label_551d9c;
        case 0x551da0u: goto label_551da0;
        case 0x551da4u: goto label_551da4;
        case 0x551da8u: goto label_551da8;
        case 0x551dacu: goto label_551dac;
        case 0x551db0u: goto label_551db0;
        case 0x551db4u: goto label_551db4;
        case 0x551db8u: goto label_551db8;
        case 0x551dbcu: goto label_551dbc;
        case 0x551dc0u: goto label_551dc0;
        case 0x551dc4u: goto label_551dc4;
        case 0x551dc8u: goto label_551dc8;
        case 0x551dccu: goto label_551dcc;
        case 0x551dd0u: goto label_551dd0;
        case 0x551dd4u: goto label_551dd4;
        case 0x551dd8u: goto label_551dd8;
        case 0x551ddcu: goto label_551ddc;
        case 0x551de0u: goto label_551de0;
        case 0x551de4u: goto label_551de4;
        case 0x551de8u: goto label_551de8;
        case 0x551decu: goto label_551dec;
        case 0x551df0u: goto label_551df0;
        case 0x551df4u: goto label_551df4;
        case 0x551df8u: goto label_551df8;
        case 0x551dfcu: goto label_551dfc;
        case 0x551e00u: goto label_551e00;
        case 0x551e04u: goto label_551e04;
        case 0x551e08u: goto label_551e08;
        case 0x551e0cu: goto label_551e0c;
        case 0x551e10u: goto label_551e10;
        case 0x551e14u: goto label_551e14;
        case 0x551e18u: goto label_551e18;
        case 0x551e1cu: goto label_551e1c;
        case 0x551e20u: goto label_551e20;
        case 0x551e24u: goto label_551e24;
        case 0x551e28u: goto label_551e28;
        case 0x551e2cu: goto label_551e2c;
        case 0x551e30u: goto label_551e30;
        case 0x551e34u: goto label_551e34;
        case 0x551e38u: goto label_551e38;
        case 0x551e3cu: goto label_551e3c;
        case 0x551e40u: goto label_551e40;
        case 0x551e44u: goto label_551e44;
        case 0x551e48u: goto label_551e48;
        case 0x551e4cu: goto label_551e4c;
        case 0x551e50u: goto label_551e50;
        case 0x551e54u: goto label_551e54;
        case 0x551e58u: goto label_551e58;
        case 0x551e5cu: goto label_551e5c;
        case 0x551e60u: goto label_551e60;
        case 0x551e64u: goto label_551e64;
        case 0x551e68u: goto label_551e68;
        case 0x551e6cu: goto label_551e6c;
        case 0x551e70u: goto label_551e70;
        case 0x551e74u: goto label_551e74;
        case 0x551e78u: goto label_551e78;
        case 0x551e7cu: goto label_551e7c;
        case 0x551e80u: goto label_551e80;
        case 0x551e84u: goto label_551e84;
        case 0x551e88u: goto label_551e88;
        case 0x551e8cu: goto label_551e8c;
        case 0x551e90u: goto label_551e90;
        case 0x551e94u: goto label_551e94;
        case 0x551e98u: goto label_551e98;
        case 0x551e9cu: goto label_551e9c;
        case 0x551ea0u: goto label_551ea0;
        case 0x551ea4u: goto label_551ea4;
        case 0x551ea8u: goto label_551ea8;
        case 0x551eacu: goto label_551eac;
        case 0x551eb0u: goto label_551eb0;
        case 0x551eb4u: goto label_551eb4;
        case 0x551eb8u: goto label_551eb8;
        case 0x551ebcu: goto label_551ebc;
        case 0x551ec0u: goto label_551ec0;
        case 0x551ec4u: goto label_551ec4;
        case 0x551ec8u: goto label_551ec8;
        case 0x551eccu: goto label_551ecc;
        case 0x551ed0u: goto label_551ed0;
        case 0x551ed4u: goto label_551ed4;
        case 0x551ed8u: goto label_551ed8;
        case 0x551edcu: goto label_551edc;
        case 0x551ee0u: goto label_551ee0;
        case 0x551ee4u: goto label_551ee4;
        case 0x551ee8u: goto label_551ee8;
        case 0x551eecu: goto label_551eec;
        case 0x551ef0u: goto label_551ef0;
        case 0x551ef4u: goto label_551ef4;
        case 0x551ef8u: goto label_551ef8;
        case 0x551efcu: goto label_551efc;
        case 0x551f00u: goto label_551f00;
        case 0x551f04u: goto label_551f04;
        case 0x551f08u: goto label_551f08;
        case 0x551f0cu: goto label_551f0c;
        case 0x551f10u: goto label_551f10;
        case 0x551f14u: goto label_551f14;
        case 0x551f18u: goto label_551f18;
        case 0x551f1cu: goto label_551f1c;
        case 0x551f20u: goto label_551f20;
        case 0x551f24u: goto label_551f24;
        case 0x551f28u: goto label_551f28;
        case 0x551f2cu: goto label_551f2c;
        case 0x551f30u: goto label_551f30;
        case 0x551f34u: goto label_551f34;
        case 0x551f38u: goto label_551f38;
        case 0x551f3cu: goto label_551f3c;
        case 0x551f40u: goto label_551f40;
        case 0x551f44u: goto label_551f44;
        case 0x551f48u: goto label_551f48;
        case 0x551f4cu: goto label_551f4c;
        case 0x551f50u: goto label_551f50;
        case 0x551f54u: goto label_551f54;
        case 0x551f58u: goto label_551f58;
        case 0x551f5cu: goto label_551f5c;
        case 0x551f60u: goto label_551f60;
        case 0x551f64u: goto label_551f64;
        case 0x551f68u: goto label_551f68;
        case 0x551f6cu: goto label_551f6c;
        case 0x551f70u: goto label_551f70;
        case 0x551f74u: goto label_551f74;
        case 0x551f78u: goto label_551f78;
        case 0x551f7cu: goto label_551f7c;
        case 0x551f80u: goto label_551f80;
        case 0x551f84u: goto label_551f84;
        case 0x551f88u: goto label_551f88;
        case 0x551f8cu: goto label_551f8c;
        case 0x551f90u: goto label_551f90;
        case 0x551f94u: goto label_551f94;
        case 0x551f98u: goto label_551f98;
        case 0x551f9cu: goto label_551f9c;
        case 0x551fa0u: goto label_551fa0;
        case 0x551fa4u: goto label_551fa4;
        case 0x551fa8u: goto label_551fa8;
        case 0x551facu: goto label_551fac;
        case 0x551fb0u: goto label_551fb0;
        case 0x551fb4u: goto label_551fb4;
        case 0x551fb8u: goto label_551fb8;
        case 0x551fbcu: goto label_551fbc;
        case 0x551fc0u: goto label_551fc0;
        case 0x551fc4u: goto label_551fc4;
        case 0x551fc8u: goto label_551fc8;
        case 0x551fccu: goto label_551fcc;
        default: break;
    }

    ctx->pc = 0x551cf0u;

label_551cf0:
    // 0x551cf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x551cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_551cf4:
    // 0x551cf4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x551cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_551cf8:
    // 0x551cf8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x551cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_551cfc:
    // 0x551cfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x551cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_551d00:
    // 0x551d00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x551d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_551d04:
    // 0x551d04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x551d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_551d08:
    // 0x551d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x551d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_551d0c:
    // 0x551d0c: 0x90830080  lbu         $v1, 0x80($a0)
    ctx->pc = 0x551d0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
label_551d10:
    // 0x551d10: 0x106000a5  beqz        $v1, . + 4 + (0xA5 << 2)
label_551d14:
    if (ctx->pc == 0x551D14u) {
        ctx->pc = 0x551D14u;
            // 0x551d14: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551D18u;
        goto label_551d18;
    }
    ctx->pc = 0x551D10u;
    {
        const bool branch_taken_0x551d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x551D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551D10u;
            // 0x551d14: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551d10) {
            ctx->pc = 0x551FA8u;
            goto label_551fa8;
        }
    }
    ctx->pc = 0x551D18u;
label_551d18:
    // 0x551d18: 0x8e860078  lw          $a2, 0x78($s4)
    ctx->pc = 0x551d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
label_551d1c:
    // 0x551d1c: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x551d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
label_551d20:
    // 0x551d20: 0x34458e39  ori         $a1, $v0, 0x8E39
    ctx->pc = 0x551d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_551d24:
    // 0x551d24: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x551d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_551d28:
    // 0x551d28: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x551d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_551d2c:
    // 0x551d2c: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x551d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_551d30:
    // 0x551d30: 0xa60019  multu       $a1, $a2
    ctx->pc = 0x551d30u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_551d34:
    // 0x551d34: 0x9450dc5a  lhu         $s0, -0x23A6($v0)
    ctx->pc = 0x551d34u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958170)));
label_551d38:
    // 0x551d38: 0x9471dc58  lhu         $s1, -0x23A8($v1)
    ctx->pc = 0x551d38u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294958168)));
label_551d3c:
    // 0x551d3c: 0x2652f430  addiu       $s2, $s2, -0xBD0
    ctx->pc = 0x551d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964272));
label_551d40:
    // 0x551d40: 0x1010  mfhi        $v0
    ctx->pc = 0x551d40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_551d44:
    // 0x551d44: 0xc15522c  jal         func_5548B0
label_551d48:
    if (ctx->pc == 0x551D48u) {
        ctx->pc = 0x551D48u;
            // 0x551d48: 0x29882  srl         $s3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x551D4Cu;
        goto label_551d4c;
    }
    ctx->pc = 0x551D44u;
    SET_GPR_U32(ctx, 31, 0x551D4Cu);
    ctx->pc = 0x551D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551D44u;
            // 0x551d48: 0x29882  srl         $s3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5548B0u;
    if (runtime->hasFunction(0x5548B0u)) {
        auto targetFn = runtime->lookupFunction(0x5548B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551D4Cu; }
        if (ctx->pc != 0x551D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005548B0_0x5548b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551D4Cu; }
        if (ctx->pc != 0x551D4Cu) { return; }
    }
    ctx->pc = 0x551D4Cu;
label_551d4c:
    // 0x551d4c: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x551d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_551d50:
    // 0x551d50: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x551d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_551d54:
    // 0x551d54: 0xc0506ac  jal         func_141AB0
label_551d58:
    if (ctx->pc == 0x551D58u) {
        ctx->pc = 0x551D58u;
            // 0x551d58: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x551D5Cu;
        goto label_551d5c;
    }
    ctx->pc = 0x551D54u;
    SET_GPR_U32(ctx, 31, 0x551D5Cu);
    ctx->pc = 0x551D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551D54u;
            // 0x551d58: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551D5Cu; }
        if (ctx->pc != 0x551D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551D5Cu; }
        if (ctx->pc != 0x551D5Cu) { return; }
    }
    ctx->pc = 0x551D5Cu;
label_551d5c:
    // 0x551d5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x551d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_551d60:
    // 0x551d60: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x551d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_551d64:
    // 0x551d64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x551d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_551d68:
    // 0x551d68: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x551d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_551d6c:
    // 0x551d6c: 0x320f809  jalr        $t9
label_551d70:
    if (ctx->pc == 0x551D70u) {
        ctx->pc = 0x551D70u;
            // 0x551d70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x551D74u;
        goto label_551d74;
    }
    ctx->pc = 0x551D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x551D74u);
        ctx->pc = 0x551D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551D6Cu;
            // 0x551d70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x551D74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x551D74u; }
            if (ctx->pc != 0x551D74u) { return; }
        }
        }
    }
    ctx->pc = 0x551D74u;
label_551d74:
    // 0x551d74: 0x2662000e  addiu       $v0, $s3, 0xE
    ctx->pc = 0x551d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
label_551d78:
    // 0x551d78: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x551d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_551d7c:
    // 0x551d7c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x551d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_551d80:
    // 0x551d80: 0x2413012a  addiu       $s3, $zero, 0x12A
    ctx->pc = 0x551d80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
label_551d84:
    // 0x551d84: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x551d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_551d88:
    // 0x551d88: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x551d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_551d8c:
    // 0x551d8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x551d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_551d90:
    // 0x551d90: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x551d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_551d94:
    // 0x551d94: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x551d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_551d98:
    // 0x551d98: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x551d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_551d9c:
    // 0x551d9c: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x551d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_551da0:
    // 0x551da0: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x551da0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_551da4:
    // 0x551da4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_551da8:
    if (ctx->pc == 0x551DA8u) {
        ctx->pc = 0x551DA8u;
            // 0x551da8: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x551DACu;
        goto label_551dac;
    }
    ctx->pc = 0x551DA4u;
    {
        const bool branch_taken_0x551da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x551DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551DA4u;
            // 0x551da8: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x551da4) {
            ctx->pc = 0x551DB0u;
            goto label_551db0;
        }
    }
    ctx->pc = 0x551DACu;
label_551dac:
    // 0x551dac: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x551dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_551db0:
    // 0x551db0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x551db0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551db4:
    // 0x551db4: 0x0  nop
    ctx->pc = 0x551db4u;
    // NOP
label_551db8:
    // 0x551db8: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x551db8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_551dbc:
    // 0x551dbc: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_551dc0:
    if (ctx->pc == 0x551DC0u) {
        ctx->pc = 0x551DC0u;
            // 0x551dc0: 0x46026bc0  add.s       $f15, $f13, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
        ctx->pc = 0x551DC4u;
        goto label_551dc4;
    }
    ctx->pc = 0x551DBCu;
    {
        const bool branch_taken_0x551dbc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x551DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551DBCu;
            // 0x551dc0: 0x46026bc0  add.s       $f15, $f13, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x551dbc) {
            ctx->pc = 0x551DD0u;
            goto label_551dd0;
        }
    }
    ctx->pc = 0x551DC4u;
label_551dc4:
    // 0x551dc4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x551dc4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551dc8:
    // 0x551dc8: 0x10000008  b           . + 4 + (0x8 << 2)
label_551dcc:
    if (ctx->pc == 0x551DCCu) {
        ctx->pc = 0x551DCCu;
            // 0x551dcc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x551DD0u;
        goto label_551dd0;
    }
    ctx->pc = 0x551DC8u;
    {
        const bool branch_taken_0x551dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551DC8u;
            // 0x551dcc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x551dc8) {
            ctx->pc = 0x551DECu;
            goto label_551dec;
        }
    }
    ctx->pc = 0x551DD0u;
label_551dd0:
    // 0x551dd0: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x551dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_551dd4:
    // 0x551dd4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x551dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_551dd8:
    // 0x551dd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x551dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_551ddc:
    // 0x551ddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x551ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551de0:
    // 0x551de0: 0x0  nop
    ctx->pc = 0x551de0u;
    // NOP
label_551de4:
    // 0x551de4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x551de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_551de8:
    // 0x551de8: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x551de8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_551dec:
    // 0x551dec: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_551df0:
    if (ctx->pc == 0x551DF0u) {
        ctx->pc = 0x551DF0u;
            // 0x551df0: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x551DF4u;
        goto label_551df4;
    }
    ctx->pc = 0x551DECu;
    {
        const bool branch_taken_0x551dec = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x551dec) {
            ctx->pc = 0x551DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551DECu;
            // 0x551df0: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551E00u;
            goto label_551e00;
        }
    }
    ctx->pc = 0x551DF4u;
label_551df4:
    // 0x551df4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x551df4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551df8:
    // 0x551df8: 0x10000007  b           . + 4 + (0x7 << 2)
label_551dfc:
    if (ctx->pc == 0x551DFCu) {
        ctx->pc = 0x551DFCu;
            // 0x551dfc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x551E00u;
        goto label_551e00;
    }
    ctx->pc = 0x551DF8u;
    {
        const bool branch_taken_0x551df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551DF8u;
            // 0x551dfc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x551df8) {
            ctx->pc = 0x551E18u;
            goto label_551e18;
        }
    }
    ctx->pc = 0x551E00u;
label_551e00:
    // 0x551e00: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x551e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_551e04:
    // 0x551e04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x551e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_551e08:
    // 0x551e08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x551e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551e0c:
    // 0x551e0c: 0x0  nop
    ctx->pc = 0x551e0cu;
    // NOP
label_551e10:
    // 0x551e10: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x551e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_551e14:
    // 0x551e14: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x551e14u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_551e18:
    // 0x551e18: 0x3c034390  lui         $v1, 0x4390
    ctx->pc = 0x551e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17296 << 16));
label_551e1c:
    // 0x551e1c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x551e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_551e20:
    // 0x551e20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x551e20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551e24:
    // 0x551e24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x551e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_551e28:
    // 0x551e28: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x551e28u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_551e2c:
    // 0x551e2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x551e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_551e30:
    // 0x551e30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x551e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_551e34:
    // 0x551e34: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x551e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_551e38:
    // 0x551e38: 0xc0bc284  jal         func_2F0A10
label_551e3c:
    if (ctx->pc == 0x551E3Cu) {
        ctx->pc = 0x551E3Cu;
            // 0x551e3c: 0x46010380  add.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x551E40u;
        goto label_551e40;
    }
    ctx->pc = 0x551E38u;
    SET_GPR_U32(ctx, 31, 0x551E40u);
    ctx->pc = 0x551E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551E38u;
            // 0x551e3c: 0x46010380  add.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551E40u; }
        if (ctx->pc != 0x551E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551E40u; }
        if (ctx->pc != 0x551E40u) { return; }
    }
    ctx->pc = 0x551E40u;
label_551e40:
    // 0x551e40: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x551e40u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551e44:
    // 0x551e44: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x551e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_551e48:
    // 0x551e48: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x551e48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_551e4c:
    // 0x551e4c: 0x26450120  addiu       $a1, $s2, 0x120
    ctx->pc = 0x551e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
label_551e50:
    // 0x551e50: 0xc640012c  lwc1        $f0, 0x12C($s2)
    ctx->pc = 0x551e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_551e54:
    // 0x551e54: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x551e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_551e58:
    // 0x551e58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x551e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_551e5c:
    // 0x551e5c: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x551e5cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_551e60:
    // 0x551e60: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_551e64:
    if (ctx->pc == 0x551E64u) {
        ctx->pc = 0x551E64u;
            // 0x551e64: 0x46011042  mul.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x551E68u;
        goto label_551e68;
    }
    ctx->pc = 0x551E60u;
    {
        const bool branch_taken_0x551e60 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x551E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551E60u;
            // 0x551e64: 0x46011042  mul.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x551e60) {
            ctx->pc = 0x551E74u;
            goto label_551e74;
        }
    }
    ctx->pc = 0x551E68u;
label_551e68:
    // 0x551e68: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x551e68u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551e6c:
    // 0x551e6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_551e70:
    if (ctx->pc == 0x551E70u) {
        ctx->pc = 0x551E70u;
            // 0x551e70: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x551E74u;
        goto label_551e74;
    }
    ctx->pc = 0x551E6Cu;
    {
        const bool branch_taken_0x551e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551E6Cu;
            // 0x551e70: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x551e6c) {
            ctx->pc = 0x551E90u;
            goto label_551e90;
        }
    }
    ctx->pc = 0x551E74u;
label_551e74:
    // 0x551e74: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x551e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_551e78:
    // 0x551e78: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x551e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_551e7c:
    // 0x551e7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x551e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_551e80:
    // 0x551e80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x551e80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551e84:
    // 0x551e84: 0x0  nop
    ctx->pc = 0x551e84u;
    // NOP
label_551e88:
    // 0x551e88: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x551e88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_551e8c:
    // 0x551e8c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x551e8cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_551e90:
    // 0x551e90: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_551e94:
    if (ctx->pc == 0x551E94u) {
        ctx->pc = 0x551E94u;
            // 0x551e94: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x551E98u;
        goto label_551e98;
    }
    ctx->pc = 0x551E90u;
    {
        const bool branch_taken_0x551e90 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x551e90) {
            ctx->pc = 0x551E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551E90u;
            // 0x551e94: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551EA4u;
            goto label_551ea4;
        }
    }
    ctx->pc = 0x551E98u;
label_551e98:
    // 0x551e98: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x551e98u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551e9c:
    // 0x551e9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_551ea0:
    if (ctx->pc == 0x551EA0u) {
        ctx->pc = 0x551EA0u;
            // 0x551ea0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x551EA4u;
        goto label_551ea4;
    }
    ctx->pc = 0x551E9Cu;
    {
        const bool branch_taken_0x551e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551E9Cu;
            // 0x551ea0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x551e9c) {
            ctx->pc = 0x551EBCu;
            goto label_551ebc;
        }
    }
    ctx->pc = 0x551EA4u;
label_551ea4:
    // 0x551ea4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x551ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_551ea8:
    // 0x551ea8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x551ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_551eac:
    // 0x551eac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x551eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551eb0:
    // 0x551eb0: 0x0  nop
    ctx->pc = 0x551eb0u;
    // NOP
label_551eb4:
    // 0x551eb4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x551eb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_551eb8:
    // 0x551eb8: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x551eb8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_551ebc:
    // 0x551ebc: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x551ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
label_551ec0:
    // 0x551ec0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x551ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_551ec4:
    // 0x551ec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x551ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551ec8:
    // 0x551ec8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x551ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_551ecc:
    // 0x551ecc: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x551eccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_551ed0:
    // 0x551ed0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x551ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_551ed4:
    // 0x551ed4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x551ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_551ed8:
    // 0x551ed8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x551ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_551edc:
    // 0x551edc: 0xc0bc284  jal         func_2F0A10
label_551ee0:
    if (ctx->pc == 0x551EE0u) {
        ctx->pc = 0x551EE0u;
            // 0x551ee0: 0x46010380  add.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x551EE4u;
        goto label_551ee4;
    }
    ctx->pc = 0x551EDCu;
    SET_GPR_U32(ctx, 31, 0x551EE4u);
    ctx->pc = 0x551EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551EDCu;
            // 0x551ee0: 0x46010380  add.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551EE4u; }
        if (ctx->pc != 0x551EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551EE4u; }
        if (ctx->pc != 0x551EE4u) { return; }
    }
    ctx->pc = 0x551EE4u;
label_551ee4:
    // 0x551ee4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x551ee4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551ee8:
    // 0x551ee8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x551ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_551eec:
    // 0x551eec: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x551eecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_551ef0:
    // 0x551ef0: 0x26450110  addiu       $a1, $s2, 0x110
    ctx->pc = 0x551ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_551ef4:
    // 0x551ef4: 0xc640011c  lwc1        $f0, 0x11C($s2)
    ctx->pc = 0x551ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_551ef8:
    // 0x551ef8: 0xc6410118  lwc1        $f1, 0x118($s2)
    ctx->pc = 0x551ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_551efc:
    // 0x551efc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x551efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_551f00:
    // 0x551f00: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x551f00u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_551f04:
    // 0x551f04: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_551f08:
    if (ctx->pc == 0x551F08u) {
        ctx->pc = 0x551F08u;
            // 0x551f08: 0x46011042  mul.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x551F0Cu;
        goto label_551f0c;
    }
    ctx->pc = 0x551F04u;
    {
        const bool branch_taken_0x551f04 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x551F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551F04u;
            // 0x551f08: 0x46011042  mul.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x551f04) {
            ctx->pc = 0x551F18u;
            goto label_551f18;
        }
    }
    ctx->pc = 0x551F0Cu;
label_551f0c:
    // 0x551f0c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x551f0cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551f10:
    // 0x551f10: 0x10000008  b           . + 4 + (0x8 << 2)
label_551f14:
    if (ctx->pc == 0x551F14u) {
        ctx->pc = 0x551F14u;
            // 0x551f14: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x551F18u;
        goto label_551f18;
    }
    ctx->pc = 0x551F10u;
    {
        const bool branch_taken_0x551f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551F10u;
            // 0x551f14: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x551f10) {
            ctx->pc = 0x551F34u;
            goto label_551f34;
        }
    }
    ctx->pc = 0x551F18u;
label_551f18:
    // 0x551f18: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x551f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_551f1c:
    // 0x551f1c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x551f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_551f20:
    // 0x551f20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x551f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_551f24:
    // 0x551f24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x551f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551f28:
    // 0x551f28: 0x0  nop
    ctx->pc = 0x551f28u;
    // NOP
label_551f2c:
    // 0x551f2c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x551f2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_551f30:
    // 0x551f30: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x551f30u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_551f34:
    // 0x551f34: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_551f38:
    if (ctx->pc == 0x551F38u) {
        ctx->pc = 0x551F38u;
            // 0x551f38: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x551F3Cu;
        goto label_551f3c;
    }
    ctx->pc = 0x551F34u;
    {
        const bool branch_taken_0x551f34 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x551f34) {
            ctx->pc = 0x551F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x551F34u;
            // 0x551f38: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x551F48u;
            goto label_551f48;
        }
    }
    ctx->pc = 0x551F3Cu;
label_551f3c:
    // 0x551f3c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x551f3cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551f40:
    // 0x551f40: 0x10000007  b           . + 4 + (0x7 << 2)
label_551f44:
    if (ctx->pc == 0x551F44u) {
        ctx->pc = 0x551F44u;
            // 0x551f44: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x551F48u;
        goto label_551f48;
    }
    ctx->pc = 0x551F40u;
    {
        const bool branch_taken_0x551f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x551F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551F40u;
            // 0x551f44: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x551f40) {
            ctx->pc = 0x551F60u;
            goto label_551f60;
        }
    }
    ctx->pc = 0x551F48u;
label_551f48:
    // 0x551f48: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x551f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_551f4c:
    // 0x551f4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x551f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_551f50:
    // 0x551f50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x551f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551f54:
    // 0x551f54: 0x0  nop
    ctx->pc = 0x551f54u;
    // NOP
label_551f58:
    // 0x551f58: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x551f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_551f5c:
    // 0x551f5c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x551f5cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_551f60:
    // 0x551f60: 0x3c0343b0  lui         $v1, 0x43B0
    ctx->pc = 0x551f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17328 << 16));
label_551f64:
    // 0x551f64: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x551f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_551f68:
    // 0x551f68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x551f68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_551f6c:
    // 0x551f6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x551f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_551f70:
    // 0x551f70: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x551f70u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_551f74:
    // 0x551f74: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x551f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_551f78:
    // 0x551f78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x551f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_551f7c:
    // 0x551f7c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x551f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_551f80:
    // 0x551f80: 0xc0bc284  jal         func_2F0A10
label_551f84:
    if (ctx->pc == 0x551F84u) {
        ctx->pc = 0x551F84u;
            // 0x551f84: 0x46010380  add.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x551F88u;
        goto label_551f88;
    }
    ctx->pc = 0x551F80u;
    SET_GPR_U32(ctx, 31, 0x551F88u);
    ctx->pc = 0x551F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551F80u;
            // 0x551f84: 0x46010380  add.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551F88u; }
        if (ctx->pc != 0x551F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551F88u; }
        if (ctx->pc != 0x551F88u) { return; }
    }
    ctx->pc = 0x551F88u;
label_551f88:
    // 0x551f88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x551f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_551f8c:
    // 0x551f8c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x551f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_551f90:
    // 0x551f90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x551f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_551f94:
    // 0x551f94: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x551f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_551f98:
    // 0x551f98: 0x320f809  jalr        $t9
label_551f9c:
    if (ctx->pc == 0x551F9Cu) {
        ctx->pc = 0x551FA0u;
        goto label_551fa0;
    }
    ctx->pc = 0x551F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x551FA0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x551FA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x551FA0u; }
            if (ctx->pc != 0x551FA0u) { return; }
        }
        }
    }
    ctx->pc = 0x551FA0u;
label_551fa0:
    // 0x551fa0: 0xc1547f4  jal         func_551FD0
label_551fa4:
    if (ctx->pc == 0x551FA4u) {
        ctx->pc = 0x551FA4u;
            // 0x551fa4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x551FA8u;
        goto label_551fa8;
    }
    ctx->pc = 0x551FA0u;
    SET_GPR_U32(ctx, 31, 0x551FA8u);
    ctx->pc = 0x551FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x551FA0u;
            // 0x551fa4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x551FD0u;
    if (runtime->hasFunction(0x551FD0u)) {
        auto targetFn = runtime->lookupFunction(0x551FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551FA8u; }
        if (ctx->pc != 0x551FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00551FD0_0x551fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x551FA8u; }
        if (ctx->pc != 0x551FA8u) { return; }
    }
    ctx->pc = 0x551FA8u;
label_551fa8:
    // 0x551fa8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x551fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_551fac:
    // 0x551fac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x551facu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_551fb0:
    // 0x551fb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x551fb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_551fb4:
    // 0x551fb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x551fb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_551fb8:
    // 0x551fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x551fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_551fbc:
    // 0x551fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x551fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_551fc0:
    // 0x551fc0: 0x3e00008  jr          $ra
label_551fc4:
    if (ctx->pc == 0x551FC4u) {
        ctx->pc = 0x551FC4u;
            // 0x551fc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x551FC8u;
        goto label_551fc8;
    }
    ctx->pc = 0x551FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x551FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551FC0u;
            // 0x551fc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x551FC8u;
label_551fc8:
    // 0x551fc8: 0x0  nop
    ctx->pc = 0x551fc8u;
    // NOP
label_551fcc:
    // 0x551fcc: 0x0  nop
    ctx->pc = 0x551fccu;
    // NOP
}
