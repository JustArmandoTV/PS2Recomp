#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5EE0
// Address: 0x2f5ee0 - 0x2f6090
void sub_002F5EE0_0x2f5ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5EE0_0x2f5ee0");
#endif

    switch (ctx->pc) {
        case 0x2f5ee0u: goto label_2f5ee0;
        case 0x2f5ee4u: goto label_2f5ee4;
        case 0x2f5ee8u: goto label_2f5ee8;
        case 0x2f5eecu: goto label_2f5eec;
        case 0x2f5ef0u: goto label_2f5ef0;
        case 0x2f5ef4u: goto label_2f5ef4;
        case 0x2f5ef8u: goto label_2f5ef8;
        case 0x2f5efcu: goto label_2f5efc;
        case 0x2f5f00u: goto label_2f5f00;
        case 0x2f5f04u: goto label_2f5f04;
        case 0x2f5f08u: goto label_2f5f08;
        case 0x2f5f0cu: goto label_2f5f0c;
        case 0x2f5f10u: goto label_2f5f10;
        case 0x2f5f14u: goto label_2f5f14;
        case 0x2f5f18u: goto label_2f5f18;
        case 0x2f5f1cu: goto label_2f5f1c;
        case 0x2f5f20u: goto label_2f5f20;
        case 0x2f5f24u: goto label_2f5f24;
        case 0x2f5f28u: goto label_2f5f28;
        case 0x2f5f2cu: goto label_2f5f2c;
        case 0x2f5f30u: goto label_2f5f30;
        case 0x2f5f34u: goto label_2f5f34;
        case 0x2f5f38u: goto label_2f5f38;
        case 0x2f5f3cu: goto label_2f5f3c;
        case 0x2f5f40u: goto label_2f5f40;
        case 0x2f5f44u: goto label_2f5f44;
        case 0x2f5f48u: goto label_2f5f48;
        case 0x2f5f4cu: goto label_2f5f4c;
        case 0x2f5f50u: goto label_2f5f50;
        case 0x2f5f54u: goto label_2f5f54;
        case 0x2f5f58u: goto label_2f5f58;
        case 0x2f5f5cu: goto label_2f5f5c;
        case 0x2f5f60u: goto label_2f5f60;
        case 0x2f5f64u: goto label_2f5f64;
        case 0x2f5f68u: goto label_2f5f68;
        case 0x2f5f6cu: goto label_2f5f6c;
        case 0x2f5f70u: goto label_2f5f70;
        case 0x2f5f74u: goto label_2f5f74;
        case 0x2f5f78u: goto label_2f5f78;
        case 0x2f5f7cu: goto label_2f5f7c;
        case 0x2f5f80u: goto label_2f5f80;
        case 0x2f5f84u: goto label_2f5f84;
        case 0x2f5f88u: goto label_2f5f88;
        case 0x2f5f8cu: goto label_2f5f8c;
        case 0x2f5f90u: goto label_2f5f90;
        case 0x2f5f94u: goto label_2f5f94;
        case 0x2f5f98u: goto label_2f5f98;
        case 0x2f5f9cu: goto label_2f5f9c;
        case 0x2f5fa0u: goto label_2f5fa0;
        case 0x2f5fa4u: goto label_2f5fa4;
        case 0x2f5fa8u: goto label_2f5fa8;
        case 0x2f5facu: goto label_2f5fac;
        case 0x2f5fb0u: goto label_2f5fb0;
        case 0x2f5fb4u: goto label_2f5fb4;
        case 0x2f5fb8u: goto label_2f5fb8;
        case 0x2f5fbcu: goto label_2f5fbc;
        case 0x2f5fc0u: goto label_2f5fc0;
        case 0x2f5fc4u: goto label_2f5fc4;
        case 0x2f5fc8u: goto label_2f5fc8;
        case 0x2f5fccu: goto label_2f5fcc;
        case 0x2f5fd0u: goto label_2f5fd0;
        case 0x2f5fd4u: goto label_2f5fd4;
        case 0x2f5fd8u: goto label_2f5fd8;
        case 0x2f5fdcu: goto label_2f5fdc;
        case 0x2f5fe0u: goto label_2f5fe0;
        case 0x2f5fe4u: goto label_2f5fe4;
        case 0x2f5fe8u: goto label_2f5fe8;
        case 0x2f5fecu: goto label_2f5fec;
        case 0x2f5ff0u: goto label_2f5ff0;
        case 0x2f5ff4u: goto label_2f5ff4;
        case 0x2f5ff8u: goto label_2f5ff8;
        case 0x2f5ffcu: goto label_2f5ffc;
        case 0x2f6000u: goto label_2f6000;
        case 0x2f6004u: goto label_2f6004;
        case 0x2f6008u: goto label_2f6008;
        case 0x2f600cu: goto label_2f600c;
        case 0x2f6010u: goto label_2f6010;
        case 0x2f6014u: goto label_2f6014;
        case 0x2f6018u: goto label_2f6018;
        case 0x2f601cu: goto label_2f601c;
        case 0x2f6020u: goto label_2f6020;
        case 0x2f6024u: goto label_2f6024;
        case 0x2f6028u: goto label_2f6028;
        case 0x2f602cu: goto label_2f602c;
        case 0x2f6030u: goto label_2f6030;
        case 0x2f6034u: goto label_2f6034;
        case 0x2f6038u: goto label_2f6038;
        case 0x2f603cu: goto label_2f603c;
        case 0x2f6040u: goto label_2f6040;
        case 0x2f6044u: goto label_2f6044;
        case 0x2f6048u: goto label_2f6048;
        case 0x2f604cu: goto label_2f604c;
        case 0x2f6050u: goto label_2f6050;
        case 0x2f6054u: goto label_2f6054;
        case 0x2f6058u: goto label_2f6058;
        case 0x2f605cu: goto label_2f605c;
        case 0x2f6060u: goto label_2f6060;
        case 0x2f6064u: goto label_2f6064;
        case 0x2f6068u: goto label_2f6068;
        case 0x2f606cu: goto label_2f606c;
        case 0x2f6070u: goto label_2f6070;
        case 0x2f6074u: goto label_2f6074;
        case 0x2f6078u: goto label_2f6078;
        case 0x2f607cu: goto label_2f607c;
        case 0x2f6080u: goto label_2f6080;
        case 0x2f6084u: goto label_2f6084;
        case 0x2f6088u: goto label_2f6088;
        case 0x2f608cu: goto label_2f608c;
        default: break;
    }

    ctx->pc = 0x2f5ee0u;

label_2f5ee0:
    // 0x2f5ee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f5ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2f5ee4:
    // 0x2f5ee4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f5ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2f5ee8:
    // 0x2f5ee8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f5ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f5eec:
    // 0x2f5eec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f5eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f5ef0:
    // 0x2f5ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f5ef4:
    // 0x2f5ef4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f5ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ef8:
    // 0x2f5ef8: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2f5ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f5efc:
    // 0x2f5efc: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2f5efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2f5f00:
    // 0x2f5f00: 0x10a3005b  beq         $a1, $v1, . + 4 + (0x5B << 2)
label_2f5f04:
    if (ctx->pc == 0x2F5F04u) {
        ctx->pc = 0x2F5F04u;
            // 0x2f5f04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F08u;
        goto label_2f5f08;
    }
    ctx->pc = 0x2F5F00u;
    {
        const bool branch_taken_0x2f5f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F5F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5F00u;
            // 0x2f5f04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f00) {
            ctx->pc = 0x2F6070u;
            goto label_2f6070;
        }
    }
    ctx->pc = 0x2F5F08u;
label_2f5f08:
    // 0x2f5f08: 0x8e2400c8  lw          $a0, 0xC8($s1)
    ctx->pc = 0x2f5f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_2f5f0c:
    // 0x2f5f0c: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x2f5f0cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2f5f10:
    // 0x2f5f10: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x2f5f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_2f5f14:
    // 0x2f5f14: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_2f5f18:
    if (ctx->pc == 0x2F5F18u) {
        ctx->pc = 0x2F5F18u;
            // 0x2f5f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F1Cu;
        goto label_2f5f1c;
    }
    ctx->pc = 0x2F5F14u;
    {
        const bool branch_taken_0x2f5f14 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2F5F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5F14u;
            // 0x2f5f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f14) {
            ctx->pc = 0x2F5F2Cu;
            goto label_2f5f2c;
        }
    }
    ctx->pc = 0x2F5F1Cu;
label_2f5f1c:
    // 0x2f5f1c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2f5f1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f5f20:
    // 0x2f5f20: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2f5f24:
    if (ctx->pc == 0x2F5F24u) {
        ctx->pc = 0x2F5F28u;
        goto label_2f5f28;
    }
    ctx->pc = 0x2F5F20u;
    {
        const bool branch_taken_0x2f5f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5f20) {
            ctx->pc = 0x2F5F2Cu;
            goto label_2f5f2c;
        }
    }
    ctx->pc = 0x2F5F28u;
label_2f5f28:
    // 0x2f5f28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f5f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5f2c:
    // 0x2f5f2c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_2f5f30:
    if (ctx->pc == 0x2F5F30u) {
        ctx->pc = 0x2F5F34u;
        goto label_2f5f34;
    }
    ctx->pc = 0x2F5F2Cu;
    {
        const bool branch_taken_0x2f5f2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5f2c) {
            ctx->pc = 0x2F5F48u;
            goto label_2f5f48;
        }
    }
    ctx->pc = 0x2F5F34u;
label_2f5f34:
    // 0x2f5f34: 0xc075eb4  jal         func_1D7AD0
label_2f5f38:
    if (ctx->pc == 0x2F5F38u) {
        ctx->pc = 0x2F5F3Cu;
        goto label_2f5f3c;
    }
    ctx->pc = 0x2F5F34u;
    SET_GPR_U32(ctx, 31, 0x2F5F3Cu);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5F3Cu; }
        if (ctx->pc != 0x2F5F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5F3Cu; }
        if (ctx->pc != 0x2F5F3Cu) { return; }
    }
    ctx->pc = 0x2F5F3Cu;
label_2f5f3c:
    // 0x2f5f3c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2f5f40:
    if (ctx->pc == 0x2F5F40u) {
        ctx->pc = 0x2F5F44u;
        goto label_2f5f44;
    }
    ctx->pc = 0x2F5F3Cu;
    {
        const bool branch_taken_0x2f5f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5f3c) {
            ctx->pc = 0x2F5F48u;
            goto label_2f5f48;
        }
    }
    ctx->pc = 0x2F5F44u;
label_2f5f44:
    // 0x2f5f44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f5f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5f48:
    // 0x2f5f48: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_2f5f4c:
    if (ctx->pc == 0x2F5F4Cu) {
        ctx->pc = 0x2F5F50u;
        goto label_2f5f50;
    }
    ctx->pc = 0x2F5F48u;
    {
        const bool branch_taken_0x2f5f48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5f48) {
            ctx->pc = 0x2F5F64u;
            goto label_2f5f64;
        }
    }
    ctx->pc = 0x2F5F50u;
label_2f5f50:
    // 0x2f5f50: 0x8e2400c8  lw          $a0, 0xC8($s1)
    ctx->pc = 0x2f5f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_2f5f54:
    // 0x2f5f54: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f5f58:
    // 0x2f5f58: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x2f5f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_2f5f5c:
    // 0x2f5f5c: 0x54830045  bnel        $a0, $v1, . + 4 + (0x45 << 2)
label_2f5f60:
    if (ctx->pc == 0x2F5F60u) {
        ctx->pc = 0x2F5F60u;
            // 0x2f5f60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2F5F64u;
        goto label_2f5f64;
    }
    ctx->pc = 0x2F5F5Cu;
    {
        const bool branch_taken_0x2f5f5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f5f5c) {
            ctx->pc = 0x2F5F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5F5Cu;
            // 0x2f5f60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6074u;
            goto label_2f6074;
        }
    }
    ctx->pc = 0x2F5F64u;
label_2f5f64:
    // 0x2f5f64: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_2f5f68:
    if (ctx->pc == 0x2F5F68u) {
        ctx->pc = 0x2F5F6Cu;
        goto label_2f5f6c;
    }
    ctx->pc = 0x2F5F64u;
    {
        const bool branch_taken_0x2f5f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5f64) {
            ctx->pc = 0x2F6000u;
            goto label_2f6000;
        }
    }
    ctx->pc = 0x2F5F6Cu;
label_2f5f6c:
    // 0x2f5f6c: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x2f5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_2f5f70:
    // 0x2f5f70: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x2f5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_2f5f74:
    // 0x2f5f74: 0x8c640d60  lw          $a0, 0xD60($v1)
    ctx->pc = 0x2f5f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3424)));
label_2f5f78:
    // 0x2f5f78: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x2f5f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f5f7c:
    // 0x2f5f7c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f5f7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f5f80:
    // 0x2f5f80: 0x320f809  jalr        $t9
label_2f5f84:
    if (ctx->pc == 0x2F5F84u) {
        ctx->pc = 0x2F5F84u;
            // 0x2f5f84: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x2F5F88u;
        goto label_2f5f88;
    }
    ctx->pc = 0x2F5F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F5F88u);
        ctx->pc = 0x2F5F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5F80u;
            // 0x2f5f84: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F5F88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F5F88u; }
            if (ctx->pc != 0x2F5F88u) { return; }
        }
        }
    }
    ctx->pc = 0x2F5F88u;
label_2f5f88:
    // 0x2f5f88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f5f8c:
    // 0x2f5f8c: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x2f5f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2f5f90:
    // 0x2f5f90: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2f5f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2f5f94:
    // 0x2f5f94: 0xc040180  jal         func_100600
label_2f5f98:
    if (ctx->pc == 0x2F5F98u) {
        ctx->pc = 0x2F5F98u;
            // 0x2f5f98: 0x24520378  addiu       $s2, $v0, 0x378 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 888));
        ctx->pc = 0x2F5F9Cu;
        goto label_2f5f9c;
    }
    ctx->pc = 0x2F5F94u;
    SET_GPR_U32(ctx, 31, 0x2F5F9Cu);
    ctx->pc = 0x2F5F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5F94u;
            // 0x2f5f98: 0x24520378  addiu       $s2, $v0, 0x378 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5F9Cu; }
        if (ctx->pc != 0x2F5F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5F9Cu; }
        if (ctx->pc != 0x2F5F9Cu) { return; }
    }
    ctx->pc = 0x2F5F9Cu;
label_2f5f9c:
    // 0x2f5f9c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_2f5fa0:
    if (ctx->pc == 0x2F5FA0u) {
        ctx->pc = 0x2F5FA0u;
            // 0x2f5fa0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FA4u;
        goto label_2f5fa4;
    }
    ctx->pc = 0x2F5F9Cu;
    {
        const bool branch_taken_0x2f5f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5F9Cu;
            // 0x2f5fa0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f9c) {
            ctx->pc = 0x2F6070u;
            goto label_2f6070;
        }
    }
    ctx->pc = 0x2F5FA4u;
label_2f5fa4:
    // 0x2f5fa4: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x2f5fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_2f5fa8:
    // 0x2f5fa8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2f5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_2f5fac:
    // 0x2f5fac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f5facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5fb0:
    // 0x2f5fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5fb4:
    // 0x2f5fb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f5fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f5fb8:
    // 0x2f5fb8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2f5fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f5fbc:
    // 0x2f5fbc: 0x806911aa  lb          $t1, 0x11AA($v1)
    ctx->pc = 0x2f5fbcu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4522)));
label_2f5fc0:
    // 0x2f5fc0: 0x3445ab10  ori         $a1, $v0, 0xAB10
    ctx->pc = 0x2f5fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43792);
label_2f5fc4:
    // 0x2f5fc4: 0x8c6a0d98  lw          $t2, 0xD98($v1)
    ctx->pc = 0x2f5fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
label_2f5fc8:
    // 0x2f5fc8: 0x24081081  addiu       $t0, $zero, 0x1081
    ctx->pc = 0x2f5fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4225));
label_2f5fcc:
    // 0x2f5fcc: 0xc0b9404  jal         func_2E5010
label_2f5fd0:
    if (ctx->pc == 0x2F5FD0u) {
        ctx->pc = 0x2F5FD0u;
            // 0x2f5fd0: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F5FD4u;
        goto label_2f5fd4;
    }
    ctx->pc = 0x2F5FCCu;
    SET_GPR_U32(ctx, 31, 0x2F5FD4u);
    ctx->pc = 0x2F5FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5FCCu;
            // 0x2f5fd0: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5FD4u; }
        if (ctx->pc != 0x2F5FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5FD4u; }
        if (ctx->pc != 0x2F5FD4u) { return; }
    }
    ctx->pc = 0x2F5FD4u;
label_2f5fd4:
    // 0x2f5fd4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2f5fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2f5fd8:
    // 0x2f5fd8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f5fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f5fdc:
    // 0x2f5fdc: 0x24634100  addiu       $v1, $v1, 0x4100
    ctx->pc = 0x2f5fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16640));
label_2f5fe0:
    // 0x2f5fe0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2f5fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2f5fe4:
    // 0x2f5fe4: 0xae0400e0  sw          $a0, 0xE0($s0)
    ctx->pc = 0x2f5fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 4));
label_2f5fe8:
    // 0x2f5fe8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2f5fec:
    // 0x2f5fec: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2f5fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_2f5ff0:
    // 0x2f5ff0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x2f5ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_2f5ff4:
    // 0x2f5ff4: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2f5ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_2f5ff8:
    // 0x2f5ff8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2f5ffc:
    if (ctx->pc == 0x2F5FFCu) {
        ctx->pc = 0x2F5FFCu;
            // 0x2f5ffc: 0xae0300dc  sw          $v1, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
        ctx->pc = 0x2F6000u;
        goto label_2f6000;
    }
    ctx->pc = 0x2F5FF8u;
    {
        const bool branch_taken_0x2f5ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5FF8u;
            // 0x2f5ffc: 0xae0300dc  sw          $v1, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ff8) {
            ctx->pc = 0x2F6070u;
            goto label_2f6070;
        }
    }
    ctx->pc = 0x2F6000u;
label_2f6000:
    // 0x2f6000: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f6000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f6004:
    // 0x2f6004: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x2f6004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2f6008:
    // 0x2f6008: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2f6008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2f600c:
    // 0x2f600c: 0xc040180  jal         func_100600
label_2f6010:
    if (ctx->pc == 0x2F6010u) {
        ctx->pc = 0x2F6010u;
            // 0x2f6010: 0x24520398  addiu       $s2, $v0, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 920));
        ctx->pc = 0x2F6014u;
        goto label_2f6014;
    }
    ctx->pc = 0x2F600Cu;
    SET_GPR_U32(ctx, 31, 0x2F6014u);
    ctx->pc = 0x2F6010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F600Cu;
            // 0x2f6010: 0x24520398  addiu       $s2, $v0, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6014u; }
        if (ctx->pc != 0x2F6014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6014u; }
        if (ctx->pc != 0x2F6014u) { return; }
    }
    ctx->pc = 0x2F6014u;
label_2f6014:
    // 0x2f6014: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2f6018:
    if (ctx->pc == 0x2F6018u) {
        ctx->pc = 0x2F6018u;
            // 0x2f6018: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F601Cu;
        goto label_2f601c;
    }
    ctx->pc = 0x2F6014u;
    {
        const bool branch_taken_0x2f6014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6014u;
            // 0x2f6018: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6014) {
            ctx->pc = 0x2F6070u;
            goto label_2f6070;
        }
    }
    ctx->pc = 0x2F601Cu;
label_2f601c:
    // 0x2f601c: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x2f601cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_2f6020:
    // 0x2f6020: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2f6020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_2f6024:
    // 0x2f6024: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f6024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f6028:
    // 0x2f6028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f602c:
    // 0x2f602c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f602cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f6030:
    // 0x2f6030: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2f6030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f6034:
    // 0x2f6034: 0x806911aa  lb          $t1, 0x11AA($v1)
    ctx->pc = 0x2f6034u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4522)));
label_2f6038:
    // 0x2f6038: 0x3445ab10  ori         $a1, $v0, 0xAB10
    ctx->pc = 0x2f6038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43792);
label_2f603c:
    // 0x2f603c: 0x8c6a0d98  lw          $t2, 0xD98($v1)
    ctx->pc = 0x2f603cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
label_2f6040:
    // 0x2f6040: 0x24081081  addiu       $t0, $zero, 0x1081
    ctx->pc = 0x2f6040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4225));
label_2f6044:
    // 0x2f6044: 0xc0b9404  jal         func_2E5010
label_2f6048:
    if (ctx->pc == 0x2F6048u) {
        ctx->pc = 0x2F6048u;
            // 0x2f6048: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F604Cu;
        goto label_2f604c;
    }
    ctx->pc = 0x2F6044u;
    SET_GPR_U32(ctx, 31, 0x2F604Cu);
    ctx->pc = 0x2F6048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6044u;
            // 0x2f6048: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F604Cu; }
        if (ctx->pc != 0x2F604Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F604Cu; }
        if (ctx->pc != 0x2F604Cu) { return; }
    }
    ctx->pc = 0x2F604Cu;
label_2f604c:
    // 0x2f604c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2f604cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_2f6050:
    // 0x2f6050: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f6050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2f6054:
    // 0x2f6054: 0x24844100  addiu       $a0, $a0, 0x4100
    ctx->pc = 0x2f6054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
label_2f6058:
    // 0x2f6058: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2f6058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2f605c:
    // 0x2f605c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x2f605cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_2f6060:
    // 0x2f6060: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2f6060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_2f6064:
    // 0x2f6064: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x2f6064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_2f6068:
    // 0x2f6068: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2f6068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_2f606c:
    // 0x2f606c: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x2f606cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_2f6070:
    // 0x2f6070: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f6070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f6074:
    // 0x2f6074: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f6074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f6078:
    // 0x2f6078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f6078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f607c:
    // 0x2f607c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f607cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f6080:
    // 0x2f6080: 0x3e00008  jr          $ra
label_2f6084:
    if (ctx->pc == 0x2F6084u) {
        ctx->pc = 0x2F6084u;
            // 0x2f6084: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2F6088u;
        goto label_2f6088;
    }
    ctx->pc = 0x2F6080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6080u;
            // 0x2f6084: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6088u;
label_2f6088:
    // 0x2f6088: 0x0  nop
    ctx->pc = 0x2f6088u;
    // NOP
label_2f608c:
    // 0x2f608c: 0x0  nop
    ctx->pc = 0x2f608cu;
    // NOP
}
