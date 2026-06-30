#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8EC8
// Address: 0x1a8ec8 - 0x1a91c0
void sub_001A8EC8_0x1a8ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8EC8_0x1a8ec8");
#endif

    switch (ctx->pc) {
        case 0x1a8ec8u: goto label_1a8ec8;
        case 0x1a8eccu: goto label_1a8ecc;
        case 0x1a8ed0u: goto label_1a8ed0;
        case 0x1a8ed4u: goto label_1a8ed4;
        case 0x1a8ed8u: goto label_1a8ed8;
        case 0x1a8edcu: goto label_1a8edc;
        case 0x1a8ee0u: goto label_1a8ee0;
        case 0x1a8ee4u: goto label_1a8ee4;
        case 0x1a8ee8u: goto label_1a8ee8;
        case 0x1a8eecu: goto label_1a8eec;
        case 0x1a8ef0u: goto label_1a8ef0;
        case 0x1a8ef4u: goto label_1a8ef4;
        case 0x1a8ef8u: goto label_1a8ef8;
        case 0x1a8efcu: goto label_1a8efc;
        case 0x1a8f00u: goto label_1a8f00;
        case 0x1a8f04u: goto label_1a8f04;
        case 0x1a8f08u: goto label_1a8f08;
        case 0x1a8f0cu: goto label_1a8f0c;
        case 0x1a8f10u: goto label_1a8f10;
        case 0x1a8f14u: goto label_1a8f14;
        case 0x1a8f18u: goto label_1a8f18;
        case 0x1a8f1cu: goto label_1a8f1c;
        case 0x1a8f20u: goto label_1a8f20;
        case 0x1a8f24u: goto label_1a8f24;
        case 0x1a8f28u: goto label_1a8f28;
        case 0x1a8f2cu: goto label_1a8f2c;
        case 0x1a8f30u: goto label_1a8f30;
        case 0x1a8f34u: goto label_1a8f34;
        case 0x1a8f38u: goto label_1a8f38;
        case 0x1a8f3cu: goto label_1a8f3c;
        case 0x1a8f40u: goto label_1a8f40;
        case 0x1a8f44u: goto label_1a8f44;
        case 0x1a8f48u: goto label_1a8f48;
        case 0x1a8f4cu: goto label_1a8f4c;
        case 0x1a8f50u: goto label_1a8f50;
        case 0x1a8f54u: goto label_1a8f54;
        case 0x1a8f58u: goto label_1a8f58;
        case 0x1a8f5cu: goto label_1a8f5c;
        case 0x1a8f60u: goto label_1a8f60;
        case 0x1a8f64u: goto label_1a8f64;
        case 0x1a8f68u: goto label_1a8f68;
        case 0x1a8f6cu: goto label_1a8f6c;
        case 0x1a8f70u: goto label_1a8f70;
        case 0x1a8f74u: goto label_1a8f74;
        case 0x1a8f78u: goto label_1a8f78;
        case 0x1a8f7cu: goto label_1a8f7c;
        case 0x1a8f80u: goto label_1a8f80;
        case 0x1a8f84u: goto label_1a8f84;
        case 0x1a8f88u: goto label_1a8f88;
        case 0x1a8f8cu: goto label_1a8f8c;
        case 0x1a8f90u: goto label_1a8f90;
        case 0x1a8f94u: goto label_1a8f94;
        case 0x1a8f98u: goto label_1a8f98;
        case 0x1a8f9cu: goto label_1a8f9c;
        case 0x1a8fa0u: goto label_1a8fa0;
        case 0x1a8fa4u: goto label_1a8fa4;
        case 0x1a8fa8u: goto label_1a8fa8;
        case 0x1a8facu: goto label_1a8fac;
        case 0x1a8fb0u: goto label_1a8fb0;
        case 0x1a8fb4u: goto label_1a8fb4;
        case 0x1a8fb8u: goto label_1a8fb8;
        case 0x1a8fbcu: goto label_1a8fbc;
        case 0x1a8fc0u: goto label_1a8fc0;
        case 0x1a8fc4u: goto label_1a8fc4;
        case 0x1a8fc8u: goto label_1a8fc8;
        case 0x1a8fccu: goto label_1a8fcc;
        case 0x1a8fd0u: goto label_1a8fd0;
        case 0x1a8fd4u: goto label_1a8fd4;
        case 0x1a8fd8u: goto label_1a8fd8;
        case 0x1a8fdcu: goto label_1a8fdc;
        case 0x1a8fe0u: goto label_1a8fe0;
        case 0x1a8fe4u: goto label_1a8fe4;
        case 0x1a8fe8u: goto label_1a8fe8;
        case 0x1a8fecu: goto label_1a8fec;
        case 0x1a8ff0u: goto label_1a8ff0;
        case 0x1a8ff4u: goto label_1a8ff4;
        case 0x1a8ff8u: goto label_1a8ff8;
        case 0x1a8ffcu: goto label_1a8ffc;
        case 0x1a9000u: goto label_1a9000;
        case 0x1a9004u: goto label_1a9004;
        case 0x1a9008u: goto label_1a9008;
        case 0x1a900cu: goto label_1a900c;
        case 0x1a9010u: goto label_1a9010;
        case 0x1a9014u: goto label_1a9014;
        case 0x1a9018u: goto label_1a9018;
        case 0x1a901cu: goto label_1a901c;
        case 0x1a9020u: goto label_1a9020;
        case 0x1a9024u: goto label_1a9024;
        case 0x1a9028u: goto label_1a9028;
        case 0x1a902cu: goto label_1a902c;
        case 0x1a9030u: goto label_1a9030;
        case 0x1a9034u: goto label_1a9034;
        case 0x1a9038u: goto label_1a9038;
        case 0x1a903cu: goto label_1a903c;
        case 0x1a9040u: goto label_1a9040;
        case 0x1a9044u: goto label_1a9044;
        case 0x1a9048u: goto label_1a9048;
        case 0x1a904cu: goto label_1a904c;
        case 0x1a9050u: goto label_1a9050;
        case 0x1a9054u: goto label_1a9054;
        case 0x1a9058u: goto label_1a9058;
        case 0x1a905cu: goto label_1a905c;
        case 0x1a9060u: goto label_1a9060;
        case 0x1a9064u: goto label_1a9064;
        case 0x1a9068u: goto label_1a9068;
        case 0x1a906cu: goto label_1a906c;
        case 0x1a9070u: goto label_1a9070;
        case 0x1a9074u: goto label_1a9074;
        case 0x1a9078u: goto label_1a9078;
        case 0x1a907cu: goto label_1a907c;
        case 0x1a9080u: goto label_1a9080;
        case 0x1a9084u: goto label_1a9084;
        case 0x1a9088u: goto label_1a9088;
        case 0x1a908cu: goto label_1a908c;
        case 0x1a9090u: goto label_1a9090;
        case 0x1a9094u: goto label_1a9094;
        case 0x1a9098u: goto label_1a9098;
        case 0x1a909cu: goto label_1a909c;
        case 0x1a90a0u: goto label_1a90a0;
        case 0x1a90a4u: goto label_1a90a4;
        case 0x1a90a8u: goto label_1a90a8;
        case 0x1a90acu: goto label_1a90ac;
        case 0x1a90b0u: goto label_1a90b0;
        case 0x1a90b4u: goto label_1a90b4;
        case 0x1a90b8u: goto label_1a90b8;
        case 0x1a90bcu: goto label_1a90bc;
        case 0x1a90c0u: goto label_1a90c0;
        case 0x1a90c4u: goto label_1a90c4;
        case 0x1a90c8u: goto label_1a90c8;
        case 0x1a90ccu: goto label_1a90cc;
        case 0x1a90d0u: goto label_1a90d0;
        case 0x1a90d4u: goto label_1a90d4;
        case 0x1a90d8u: goto label_1a90d8;
        case 0x1a90dcu: goto label_1a90dc;
        case 0x1a90e0u: goto label_1a90e0;
        case 0x1a90e4u: goto label_1a90e4;
        case 0x1a90e8u: goto label_1a90e8;
        case 0x1a90ecu: goto label_1a90ec;
        case 0x1a90f0u: goto label_1a90f0;
        case 0x1a90f4u: goto label_1a90f4;
        case 0x1a90f8u: goto label_1a90f8;
        case 0x1a90fcu: goto label_1a90fc;
        case 0x1a9100u: goto label_1a9100;
        case 0x1a9104u: goto label_1a9104;
        case 0x1a9108u: goto label_1a9108;
        case 0x1a910cu: goto label_1a910c;
        case 0x1a9110u: goto label_1a9110;
        case 0x1a9114u: goto label_1a9114;
        case 0x1a9118u: goto label_1a9118;
        case 0x1a911cu: goto label_1a911c;
        case 0x1a9120u: goto label_1a9120;
        case 0x1a9124u: goto label_1a9124;
        case 0x1a9128u: goto label_1a9128;
        case 0x1a912cu: goto label_1a912c;
        case 0x1a9130u: goto label_1a9130;
        case 0x1a9134u: goto label_1a9134;
        case 0x1a9138u: goto label_1a9138;
        case 0x1a913cu: goto label_1a913c;
        case 0x1a9140u: goto label_1a9140;
        case 0x1a9144u: goto label_1a9144;
        case 0x1a9148u: goto label_1a9148;
        case 0x1a914cu: goto label_1a914c;
        case 0x1a9150u: goto label_1a9150;
        case 0x1a9154u: goto label_1a9154;
        case 0x1a9158u: goto label_1a9158;
        case 0x1a915cu: goto label_1a915c;
        case 0x1a9160u: goto label_1a9160;
        case 0x1a9164u: goto label_1a9164;
        case 0x1a9168u: goto label_1a9168;
        case 0x1a916cu: goto label_1a916c;
        case 0x1a9170u: goto label_1a9170;
        case 0x1a9174u: goto label_1a9174;
        case 0x1a9178u: goto label_1a9178;
        case 0x1a917cu: goto label_1a917c;
        case 0x1a9180u: goto label_1a9180;
        case 0x1a9184u: goto label_1a9184;
        case 0x1a9188u: goto label_1a9188;
        case 0x1a918cu: goto label_1a918c;
        case 0x1a9190u: goto label_1a9190;
        case 0x1a9194u: goto label_1a9194;
        case 0x1a9198u: goto label_1a9198;
        case 0x1a919cu: goto label_1a919c;
        case 0x1a91a0u: goto label_1a91a0;
        case 0x1a91a4u: goto label_1a91a4;
        case 0x1a91a8u: goto label_1a91a8;
        case 0x1a91acu: goto label_1a91ac;
        case 0x1a91b0u: goto label_1a91b0;
        case 0x1a91b4u: goto label_1a91b4;
        case 0x1a91b8u: goto label_1a91b8;
        case 0x1a91bcu: goto label_1a91bc;
        default: break;
    }

    ctx->pc = 0x1a8ec8u;

label_1a8ec8:
    // 0x1a8ec8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a8ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a8ecc:
    // 0x1a8ecc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a8eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1a8ed0:
    // 0x1a8ed0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1a8ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ed4:
    // 0x1a8ed4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1a8ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1a8ed8:
    // 0x1a8ed8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a8ed8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a8edc:
    // 0x1a8edc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a8edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1a8ee0:
    // 0x1a8ee0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a8ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ee4:
    // 0x1a8ee4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1a8ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1a8ee8:
    // 0x1a8ee8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1a8ee8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a8eec:
    // 0x1a8eec: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1a8eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1a8ef0:
    // 0x1a8ef0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1a8ef0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ef4:
    // 0x1a8ef4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a8ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a8ef8:
    // 0x1a8ef8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1a8ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a8efc:
    // 0x1a8efc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a8efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1a8f00:
    // 0x1a8f00: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a8f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a8f04:
    // 0x1a8f04: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1a8f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1a8f08:
    // 0x1a8f08: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1a8f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1a8f0c:
    // 0x1a8f0c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1a8f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_1a8f10:
    // 0x1a8f10: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1a8f10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1a8f14:
    // 0x1a8f14: 0x8e341fec  lw          $s4, 0x1FEC($s1)
    ctx->pc = 0x1a8f14u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8172)));
label_1a8f18:
    // 0x1a8f18: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a8f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1a8f1c:
    // 0x1a8f1c: 0xc06a79e  jal         func_1A9E78
label_1a8f20:
    if (ctx->pc == 0x1A8F20u) {
        ctx->pc = 0x1A8F20u;
            // 0x1a8f20: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x1A8F24u;
        goto label_1a8f24;
    }
    ctx->pc = 0x1A8F1Cu;
    SET_GPR_U32(ctx, 31, 0x1A8F24u);
    ctx->pc = 0x1A8F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F1Cu;
            // 0x1a8f20: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9E78u;
    if (runtime->hasFunction(0x1A9E78u)) {
        auto targetFn = runtime->lookupFunction(0x1A9E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F24u; }
        if (ctx->pc != 0x1A8F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9E78_0x1a9e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F24u; }
        if (ctx->pc != 0x1A8F24u) { return; }
    }
    ctx->pc = 0x1A8F24u;
label_1a8f24:
    // 0x1a8f24: 0x5040008b  beql        $v0, $zero, . + 4 + (0x8B << 2)
label_1a8f28:
    if (ctx->pc == 0x1A8F28u) {
        ctx->pc = 0x1A8F28u;
            // 0x1a8f28: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1A8F2Cu;
        goto label_1a8f2c;
    }
    ctx->pc = 0x1A8F24u;
    {
        const bool branch_taken_0x1a8f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f24) {
            ctx->pc = 0x1A8F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F24u;
            // 0x1a8f28: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9154u;
            goto label_1a9154;
        }
    }
    ctx->pc = 0x1A8F2Cu;
label_1a8f2c:
    // 0x1a8f2c: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x1a8f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
label_1a8f30:
    // 0x1a8f30: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1a8f34:
    if (ctx->pc == 0x1A8F34u) {
        ctx->pc = 0x1A8F34u;
            // 0x1a8f34: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F38u;
        goto label_1a8f38;
    }
    ctx->pc = 0x1A8F30u;
    {
        const bool branch_taken_0x1a8f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f30) {
            ctx->pc = 0x1A8F34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F30u;
            // 0x1a8f34: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A8F44u;
            goto label_1a8f44;
        }
    }
    ctx->pc = 0x1A8F38u;
label_1a8f38:
    // 0x1a8f38: 0xc064928  jal         func_1924A0
label_1a8f3c:
    if (ctx->pc == 0x1A8F3Cu) {
        ctx->pc = 0x1A8F3Cu;
            // 0x1a8f3c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F40u;
        goto label_1a8f40;
    }
    ctx->pc = 0x1A8F38u;
    SET_GPR_U32(ctx, 31, 0x1A8F40u);
    ctx->pc = 0x1A8F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F38u;
            // 0x1a8f3c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1924A0u;
    if (runtime->hasFunction(0x1924A0u)) {
        auto targetFn = runtime->lookupFunction(0x1924A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F40u; }
        if (ctx->pc != 0x1A8F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001924A0_0x1924a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F40u; }
        if (ctx->pc != 0x1A8F40u) { return; }
    }
    ctx->pc = 0x1A8F40u;
label_1a8f40:
    // 0x1a8f40: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1a8f40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f44:
    // 0x1a8f44: 0x8e250d3c  lw          $a1, 0xD3C($s1)
    ctx->pc = 0x1a8f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
label_1a8f48:
    // 0x1a8f48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a8f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f4c:
    // 0x1a8f4c: 0xc0641fc  jal         func_1907F0
label_1a8f50:
    if (ctx->pc == 0x1A8F50u) {
        ctx->pc = 0x1A8F50u;
            // 0x1a8f50: 0x8e260d40  lw          $a2, 0xD40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
        ctx->pc = 0x1A8F54u;
        goto label_1a8f54;
    }
    ctx->pc = 0x1A8F4Cu;
    SET_GPR_U32(ctx, 31, 0x1A8F54u);
    ctx->pc = 0x1A8F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F4Cu;
            // 0x1a8f50: 0x8e260d40  lw          $a2, 0xD40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1907F0u;
    if (runtime->hasFunction(0x1907F0u)) {
        auto targetFn = runtime->lookupFunction(0x1907F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F54u; }
        if (ctx->pc != 0x1A8F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001907F0_0x1907f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F54u; }
        if (ctx->pc != 0x1A8F54u) { return; }
    }
    ctx->pc = 0x1A8F54u;
label_1a8f54:
    // 0x1a8f54: 0x8e220d4c  lw          $v0, 0xD4C($s1)
    ctx->pc = 0x1a8f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3404)));
label_1a8f58:
    // 0x1a8f58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a8f5c:
    if (ctx->pc == 0x1A8F5Cu) {
        ctx->pc = 0x1A8F5Cu;
            // 0x1a8f5c: 0x3c05001b  lui         $a1, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
        ctx->pc = 0x1A8F60u;
        goto label_1a8f60;
    }
    ctx->pc = 0x1A8F58u;
    {
        const bool branch_taken_0x1a8f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F58u;
            // 0x1a8f5c: 0x3c05001b  lui         $a1, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f58) {
            ctx->pc = 0x1A8F78u;
            goto label_1a8f78;
        }
    }
    ctx->pc = 0x1A8F60u;
label_1a8f60:
    // 0x1a8f60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a8f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f64:
    // 0x1a8f64: 0x24a59180  addiu       $a1, $a1, -0x6E80
    ctx->pc = 0x1a8f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939008));
label_1a8f68:
    // 0x1a8f68: 0xc064210  jal         func_190840
label_1a8f6c:
    if (ctx->pc == 0x1A8F6Cu) {
        ctx->pc = 0x1A8F6Cu;
            // 0x1a8f6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F70u;
        goto label_1a8f70;
    }
    ctx->pc = 0x1A8F68u;
    SET_GPR_U32(ctx, 31, 0x1A8F70u);
    ctx->pc = 0x1A8F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F68u;
            // 0x1a8f6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190840u;
    if (runtime->hasFunction(0x190840u)) {
        auto targetFn = runtime->lookupFunction(0x190840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F70u; }
        if (ctx->pc != 0x1A8F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190840_0x190840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F70u; }
        if (ctx->pc != 0x1A8F70u) { return; }
    }
    ctx->pc = 0x1A8F70u;
label_1a8f70:
    // 0x1a8f70: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a8f74:
    if (ctx->pc == 0x1A8F74u) {
        ctx->pc = 0x1A8F74u;
            // 0x1a8f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F78u;
        goto label_1a8f78;
    }
    ctx->pc = 0x1A8F70u;
    {
        const bool branch_taken_0x1a8f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F70u;
            // 0x1a8f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f70) {
            ctx->pc = 0x1A8F8Cu;
            goto label_1a8f8c;
        }
    }
    ctx->pc = 0x1A8F78u;
label_1a8f78:
    // 0x1a8f78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a8f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f7c:
    // 0x1a8f7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f80:
    // 0x1a8f80: 0xc064210  jal         func_190840
label_1a8f84:
    if (ctx->pc == 0x1A8F84u) {
        ctx->pc = 0x1A8F84u;
            // 0x1a8f84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F88u;
        goto label_1a8f88;
    }
    ctx->pc = 0x1A8F80u;
    SET_GPR_U32(ctx, 31, 0x1A8F88u);
    ctx->pc = 0x1A8F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F80u;
            // 0x1a8f84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190840u;
    if (runtime->hasFunction(0x190840u)) {
        auto targetFn = runtime->lookupFunction(0x190840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F88u; }
        if (ctx->pc != 0x1A8F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190840_0x190840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F88u; }
        if (ctx->pc != 0x1A8F88u) { return; }
    }
    ctx->pc = 0x1A8F88u;
label_1a8f88:
    // 0x1a8f88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a8f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f8c:
    // 0x1a8f8c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a8f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f90:
    // 0x1a8f90: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1a8f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f94:
    // 0x1a8f94: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1a8f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f98:
    // 0x1a8f98: 0xc064224  jal         func_190890
label_1a8f9c:
    if (ctx->pc == 0x1A8F9Cu) {
        ctx->pc = 0x1A8F9Cu;
            // 0x1a8f9c: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x1A8FA0u;
        goto label_1a8fa0;
    }
    ctx->pc = 0x1A8F98u;
    SET_GPR_U32(ctx, 31, 0x1A8FA0u);
    ctx->pc = 0x1A8F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F98u;
            // 0x1a8f9c: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FA0u; }
        if (ctx->pc != 0x1A8FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190890_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FA0u; }
        if (ctx->pc != 0x1A8FA0u) { return; }
    }
    ctx->pc = 0x1A8FA0u;
label_1a8fa0:
    // 0x1a8fa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a8fa4:
    if (ctx->pc == 0x1A8FA4u) {
        ctx->pc = 0x1A8FA4u;
            // 0x1a8fa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FA8u;
        goto label_1a8fa8;
    }
    ctx->pc = 0x1A8FA0u;
    {
        const bool branch_taken_0x1a8fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FA0u;
            // 0x1a8fa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8fa0) {
            ctx->pc = 0x1A8FB8u;
            goto label_1a8fb8;
        }
    }
    ctx->pc = 0x1A8FA8u;
label_1a8fa8:
    // 0x1a8fa8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a8fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1a8fac:
    // 0x1a8fac: 0xc06a1ac  jal         func_1A86B0
label_1a8fb0:
    if (ctx->pc == 0x1A8FB0u) {
        ctx->pc = 0x1A8FB0u;
            // 0x1a8fb0: 0x34a50d03  ori         $a1, $a1, 0xD03 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3331);
        ctx->pc = 0x1A8FB4u;
        goto label_1a8fb4;
    }
    ctx->pc = 0x1A8FACu;
    SET_GPR_U32(ctx, 31, 0x1A8FB4u);
    ctx->pc = 0x1A8FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FACu;
            // 0x1a8fb0: 0x34a50d03  ori         $a1, $a1, 0xD03 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3331);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FB4u; }
        if (ctx->pc != 0x1A8FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FB4u; }
        if (ctx->pc != 0x1A8FB4u) { return; }
    }
    ctx->pc = 0x1A8FB4u;
label_1a8fb4:
    // 0x1a8fb4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a8fb8:
    // 0x1a8fb8: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1a8fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a8fbc:
    // 0x1a8fbc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1a8fc0:
    // 0x1a8fc0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1a8fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_1a8fc4:
    // 0x1a8fc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a8fc8:
    if (ctx->pc == 0x1A8FC8u) {
        ctx->pc = 0x1A8FC8u;
            // 0x1a8fc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FCCu;
        goto label_1a8fcc;
    }
    ctx->pc = 0x1A8FC4u;
    {
        const bool branch_taken_0x1a8fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FC4u;
            // 0x1a8fc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8fc4) {
            ctx->pc = 0x1A8FE0u;
            goto label_1a8fe0;
        }
    }
    ctx->pc = 0x1A8FCCu;
label_1a8fcc:
    // 0x1a8fcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8fd0:
    // 0x1a8fd0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1a8fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a8fd4:
    // 0x1a8fd4: 0xc06a978  jal         func_1AA5E0
label_1a8fd8:
    if (ctx->pc == 0x1A8FD8u) {
        ctx->pc = 0x1A8FD8u;
            // 0x1a8fd8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FDCu;
        goto label_1a8fdc;
    }
    ctx->pc = 0x1A8FD4u;
    SET_GPR_U32(ctx, 31, 0x1A8FDCu);
    ctx->pc = 0x1A8FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FD4u;
            // 0x1a8fd8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA5E0u;
    if (runtime->hasFunction(0x1AA5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FDCu; }
        if (ctx->pc != 0x1A8FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA5E0_0x1aa5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FDCu; }
        if (ctx->pc != 0x1A8FDCu) { return; }
    }
    ctx->pc = 0x1A8FDCu;
label_1a8fdc:
    // 0x1a8fdc: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1a8fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a8fe0:
    // 0x1a8fe0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1a8fe4:
    // 0x1a8fe4: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
label_1a8fe8:
    if (ctx->pc == 0x1A8FE8u) {
        ctx->pc = 0x1A8FECu;
        goto label_1a8fec;
    }
    ctx->pc = 0x1A8FE4u;
    {
        const bool branch_taken_0x1a8fe4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8fe4) {
            ctx->pc = 0x1A9030u;
            goto label_1a9030;
        }
    }
    ctx->pc = 0x1A8FECu;
label_1a8fec:
    // 0x1a8fec: 0xc069a18  jal         func_1A6860
label_1a8ff0:
    if (ctx->pc == 0x1A8FF0u) {
        ctx->pc = 0x1A8FF0u;
            // 0x1a8ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FF4u;
        goto label_1a8ff4;
    }
    ctx->pc = 0x1A8FECu;
    SET_GPR_U32(ctx, 31, 0x1A8FF4u);
    ctx->pc = 0x1A8FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FECu;
            // 0x1a8ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6860u;
    if (runtime->hasFunction(0x1A6860u)) {
        auto targetFn = runtime->lookupFunction(0x1A6860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FF4u; }
        if (ctx->pc != 0x1A8FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6860_0x1a6860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FF4u; }
        if (ctx->pc != 0x1A8FF4u) { return; }
    }
    ctx->pc = 0x1A8FF4u;
label_1a8ff4:
    // 0x1a8ff4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1a8ff8:
    if (ctx->pc == 0x1A8FF8u) {
        ctx->pc = 0x1A8FF8u;
            // 0x1a8ff8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1A8FFCu;
        goto label_1a8ffc;
    }
    ctx->pc = 0x1A8FF4u;
    {
        const bool branch_taken_0x1a8ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ff4) {
            ctx->pc = 0x1A8FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FF4u;
            // 0x1a8ff8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9010u;
            goto label_1a9010;
        }
    }
    ctx->pc = 0x1A8FFCu;
label_1a8ffc:
    // 0x1a8ffc: 0xc06a798  jal         func_1A9E60
label_1a9000:
    if (ctx->pc == 0x1A9000u) {
        ctx->pc = 0x1A9000u;
            // 0x1a9000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9004u;
        goto label_1a9004;
    }
    ctx->pc = 0x1A8FFCu;
    SET_GPR_U32(ctx, 31, 0x1A9004u);
    ctx->pc = 0x1A9000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FFCu;
            // 0x1a9000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9E60u;
    if (runtime->hasFunction(0x1A9E60u)) {
        auto targetFn = runtime->lookupFunction(0x1A9E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9004u; }
        if (ctx->pc != 0x1A9004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9E60_0x1a9e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9004u; }
        if (ctx->pc != 0x1A9004u) { return; }
    }
    ctx->pc = 0x1A9004u;
label_1a9004:
    // 0x1a9004: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1a9004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1a9008:
    // 0x1a9008: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1a900c:
    if (ctx->pc == 0x1A900Cu) {
        ctx->pc = 0x1A900Cu;
            // 0x1a900c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1A9010u;
        goto label_1a9010;
    }
    ctx->pc = 0x1A9008u;
    {
        const bool branch_taken_0x1a9008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A900Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9008u;
            // 0x1a900c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9008) {
            ctx->pc = 0x1A9148u;
            goto label_1a9148;
        }
    }
    ctx->pc = 0x1A9010u;
label_1a9010:
    // 0x1a9010: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_1a9014:
    if (ctx->pc == 0x1A9014u) {
        ctx->pc = 0x1A9018u;
        goto label_1a9018;
    }
    ctx->pc = 0x1A9010u;
    {
        const bool branch_taken_0x1a9010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1a9010) {
            ctx->pc = 0x1A9030u;
            goto label_1a9030;
        }
    }
    ctx->pc = 0x1A9018u;
label_1a9018:
    // 0x1a9018: 0xc069a20  jal         func_1A6880
label_1a901c:
    if (ctx->pc == 0x1A901Cu) {
        ctx->pc = 0x1A901Cu;
            // 0x1a901c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9020u;
        goto label_1a9020;
    }
    ctx->pc = 0x1A9018u;
    SET_GPR_U32(ctx, 31, 0x1A9020u);
    ctx->pc = 0x1A901Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9018u;
            // 0x1a901c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6880u;
    if (runtime->hasFunction(0x1A6880u)) {
        auto targetFn = runtime->lookupFunction(0x1A6880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9020u; }
        if (ctx->pc != 0x1A9020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6880_0x1a6880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9020u; }
        if (ctx->pc != 0x1A9020u) { return; }
    }
    ctx->pc = 0x1A9020u;
label_1a9020:
    // 0x1a9020: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a9024:
    if (ctx->pc == 0x1A9024u) {
        ctx->pc = 0x1A9024u;
            // 0x1a9024: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x1A9028u;
        goto label_1a9028;
    }
    ctx->pc = 0x1A9020u;
    {
        const bool branch_taken_0x1a9020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9020u;
            // 0x1a9024: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9020) {
            ctx->pc = 0x1A9030u;
            goto label_1a9030;
        }
    }
    ctx->pc = 0x1A9028u;
label_1a9028:
    // 0x1a9028: 0x10000047  b           . + 4 + (0x47 << 2)
label_1a902c:
    if (ctx->pc == 0x1A902Cu) {
        ctx->pc = 0x1A902Cu;
            // 0x1a902c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1A9030u;
        goto label_1a9030;
    }
    ctx->pc = 0x1A9028u;
    {
        const bool branch_taken_0x1a9028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A902Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9028u;
            // 0x1a902c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9028) {
            ctx->pc = 0x1A9148u;
            goto label_1a9148;
        }
    }
    ctx->pc = 0x1A9030u;
label_1a9030:
    // 0x1a9030: 0x17c00021  bnez        $fp, . + 4 + (0x21 << 2)
label_1a9034:
    if (ctx->pc == 0x1A9034u) {
        ctx->pc = 0x1A9034u;
            // 0x1a9034: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1A9038u;
        goto label_1a9038;
    }
    ctx->pc = 0x1A9030u;
    {
        const bool branch_taken_0x1a9030 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9030u;
            // 0x1a9034: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9030) {
            ctx->pc = 0x1A90B8u;
            goto label_1a90b8;
        }
    }
    ctx->pc = 0x1A9038u;
label_1a9038:
    // 0x1a9038: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a9038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a903c:
    // 0x1a903c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1a903cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a9040:
    // 0x1a9040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9044:
    // 0x1a9044: 0xc06a470  jal         func_1A91C0
label_1a9048:
    if (ctx->pc == 0x1A9048u) {
        ctx->pc = 0x1A9048u;
            // 0x1a9048: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A904Cu;
        goto label_1a904c;
    }
    ctx->pc = 0x1A9044u;
    SET_GPR_U32(ctx, 31, 0x1A904Cu);
    ctx->pc = 0x1A9048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9044u;
            // 0x1a9048: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A91C0u;
    if (runtime->hasFunction(0x1A91C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A91C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A904Cu; }
        if (ctx->pc != 0x1A904Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A91C0_0x1a91c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A904Cu; }
        if (ctx->pc != 0x1A904Cu) { return; }
    }
    ctx->pc = 0x1A904Cu;
label_1a904c:
    // 0x1a904c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a9050:
    // 0x1a9050: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1a9050u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1a9054:
    // 0x1a9054: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1a9054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a9058:
    // 0x1a9058: 0x18a0003d  blez        $a1, . + 4 + (0x3D << 2)
label_1a905c:
    if (ctx->pc == 0x1A905Cu) {
        ctx->pc = 0x1A905Cu;
            // 0x1a905c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1A9060u;
        goto label_1a9060;
    }
    ctx->pc = 0x1A9058u;
    {
        const bool branch_taken_0x1a9058 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A905Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9058u;
            // 0x1a905c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9058) {
            ctx->pc = 0x1A9150u;
            goto label_1a9150;
        }
    }
    ctx->pc = 0x1A9060u;
label_1a9060:
    // 0x1a9060: 0x8e830158  lw          $v1, 0x158($s4)
    ctx->pc = 0x1a9060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
label_1a9064:
    // 0x1a9064: 0x460003b  bltz        $v1, . + 4 + (0x3B << 2)
label_1a9068:
    if (ctx->pc == 0x1A9068u) {
        ctx->pc = 0x1A9068u;
            // 0x1a9068: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1A906Cu;
        goto label_1a906c;
    }
    ctx->pc = 0x1A9064u;
    {
        const bool branch_taken_0x1a9064 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1A9068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9064u;
            // 0x1a9068: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9064) {
            ctx->pc = 0x1A9154u;
            goto label_1a9154;
        }
    }
    ctx->pc = 0x1A906Cu;
label_1a906c:
    // 0x1a906c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1a906cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1a9070:
    // 0x1a9070: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1a9070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a9074:
    // 0x1a9074: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a9078:
    if (ctx->pc == 0x1A9078u) {
        ctx->pc = 0x1A9078u;
            // 0x1a9078: 0x653021  addu        $a2, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x1A907Cu;
        goto label_1a907c;
    }
    ctx->pc = 0x1A9074u;
    {
        const bool branch_taken_0x1a9074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9074u;
            // 0x1a9078: 0x653021  addu        $a2, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9074) {
            ctx->pc = 0x1A9088u;
            goto label_1a9088;
        }
    }
    ctx->pc = 0x1A907Cu;
label_1a907c:
    // 0x1a907c: 0x10000032  b           . + 4 + (0x32 << 2)
label_1a9080:
    if (ctx->pc == 0x1A9080u) {
        ctx->pc = 0x1A9080u;
            // 0x1a9080: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x1A9084u;
        goto label_1a9084;
    }
    ctx->pc = 0x1A907Cu;
    {
        const bool branch_taken_0x1a907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A907Cu;
            // 0x1a9080: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a907c) {
            ctx->pc = 0x1A9148u;
            goto label_1a9148;
        }
    }
    ctx->pc = 0x1A9084u;
label_1a9084:
    // 0x1a9084: 0x0  nop
    ctx->pc = 0x1a9084u;
    // NOP
label_1a9088:
    // 0x1a9088: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1a9088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1a908c:
    // 0x1a908c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1a9090:
    if (ctx->pc == 0x1A9090u) {
        ctx->pc = 0x1A9090u;
            // 0x1a9090: 0xae860158  sw          $a2, 0x158($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 6));
        ctx->pc = 0x1A9094u;
        goto label_1a9094;
    }
    ctx->pc = 0x1A908Cu;
    {
        const bool branch_taken_0x1a908c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a908c) {
            ctx->pc = 0x1A9090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A908Cu;
            // 0x1a9090: 0xae860158  sw          $a2, 0x158($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A90B0u;
            goto label_1a90b0;
        }
    }
    ctx->pc = 0x1A9094u;
label_1a9094:
    // 0x1a9094: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1a9094u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a9098:
    // 0x1a9098: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1a9098u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1a909c:
    // 0x1a909c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1a909cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1a90a0:
    // 0x1a90a0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1a90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1a90a4:
    // 0x1a90a4: 0x10000028  b           . + 4 + (0x28 << 2)
label_1a90a8:
    if (ctx->pc == 0x1A90A8u) {
        ctx->pc = 0x1A90A8u;
            // 0x1a90a8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1A90ACu;
        goto label_1a90ac;
    }
    ctx->pc = 0x1A90A4u;
    {
        const bool branch_taken_0x1a90a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90A4u;
            // 0x1a90a8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90a4) {
            ctx->pc = 0x1A9148u;
            goto label_1a9148;
        }
    }
    ctx->pc = 0x1A90ACu;
label_1a90ac:
    // 0x1a90ac: 0x0  nop
    ctx->pc = 0x1a90acu;
    // NOP
label_1a90b0:
    // 0x1a90b0: 0x10000026  b           . + 4 + (0x26 << 2)
label_1a90b4:
    if (ctx->pc == 0x1A90B4u) {
        ctx->pc = 0x1A90B4u;
            // 0x1a90b4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1A90B8u;
        goto label_1a90b8;
    }
    ctx->pc = 0x1A90B0u;
    {
        const bool branch_taken_0x1a90b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90B0u;
            // 0x1a90b4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90b0) {
            ctx->pc = 0x1A914Cu;
            goto label_1a914c;
        }
    }
    ctx->pc = 0x1A90B8u;
label_1a90b8:
    // 0x1a90b8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1a90b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_1a90bc:
    // 0x1a90bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a90bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1a90c0:
    // 0x1a90c0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1a90c4:
    if (ctx->pc == 0x1A90C4u) {
        ctx->pc = 0x1A90C4u;
            // 0x1a90c4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A90C8u;
        goto label_1a90c8;
    }
    ctx->pc = 0x1A90C0u;
    {
        const bool branch_taken_0x1a90c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a90c0) {
            ctx->pc = 0x1A90C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90C0u;
            // 0x1a90c4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9108u;
            goto label_1a9108;
        }
    }
    ctx->pc = 0x1A90C8u;
label_1a90c8:
    // 0x1a90c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a90c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a90cc:
    // 0x1a90cc: 0xc06a804  jal         func_1AA010
label_1a90d0:
    if (ctx->pc == 0x1A90D0u) {
        ctx->pc = 0x1A90D0u;
            // 0x1a90d0: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x1A90D4u;
        goto label_1a90d4;
    }
    ctx->pc = 0x1A90CCu;
    SET_GPR_U32(ctx, 31, 0x1A90D4u);
    ctx->pc = 0x1A90D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90CCu;
            // 0x1a90d0: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA010u;
    if (runtime->hasFunction(0x1AA010u)) {
        auto targetFn = runtime->lookupFunction(0x1AA010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90D4u; }
        if (ctx->pc != 0x1A90D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA010_0x1aa010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90D4u; }
        if (ctx->pc != 0x1A90D4u) { return; }
    }
    ctx->pc = 0x1A90D4u;
label_1a90d4:
    // 0x1a90d4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1a90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a90d8:
    // 0x1a90d8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1a90dc:
    if (ctx->pc == 0x1A90DCu) {
        ctx->pc = 0x1A90DCu;
            // 0x1a90dc: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1A90E0u;
        goto label_1a90e0;
    }
    ctx->pc = 0x1A90D8u;
    {
        const bool branch_taken_0x1a90d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A90DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90D8u;
            // 0x1a90dc: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90d8) {
            ctx->pc = 0x1A9150u;
            goto label_1a9150;
        }
    }
    ctx->pc = 0x1A90E0u;
label_1a90e0:
    // 0x1a90e0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1a90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1a90e4:
    // 0x1a90e4: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x1a90e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1a90e8:
    // 0x1a90e8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1a90ec:
    if (ctx->pc == 0x1A90ECu) {
        ctx->pc = 0x1A90ECu;
            // 0x1a90ec: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1A90F0u;
        goto label_1a90f0;
    }
    ctx->pc = 0x1A90E8u;
    {
        const bool branch_taken_0x1a90e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90E8u;
            // 0x1a90ec: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90e8) {
            ctx->pc = 0x1A9150u;
            goto label_1a9150;
        }
    }
    ctx->pc = 0x1A90F0u;
label_1a90f0:
    // 0x1a90f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a90f4:
    // 0x1a90f4: 0x58400001  blezl       $v0, . + 4 + (0x1 << 2)
label_1a90f8:
    if (ctx->pc == 0x1A90F8u) {
        ctx->pc = 0x1A90F8u;
            // 0x1a90f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A90FCu;
        goto label_1a90fc;
    }
    ctx->pc = 0x1A90F4u;
    {
        const bool branch_taken_0x1a90f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a90f4) {
            ctx->pc = 0x1A90F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90F4u;
            // 0x1a90f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A90FCu;
            goto label_1a90fc;
        }
    }
    ctx->pc = 0x1A90FCu;
label_1a90fc:
    // 0x1a90fc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1a90fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1a9100:
    // 0x1a9100: 0x10000012  b           . + 4 + (0x12 << 2)
label_1a9104:
    if (ctx->pc == 0x1A9104u) {
        ctx->pc = 0x1A9104u;
            // 0x1a9104: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1A9108u;
        goto label_1a9108;
    }
    ctx->pc = 0x1A9100u;
    {
        const bool branch_taken_0x1a9100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9100u;
            // 0x1a9104: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9100) {
            ctx->pc = 0x1A914Cu;
            goto label_1a914c;
        }
    }
    ctx->pc = 0x1A9108u;
label_1a9108:
    // 0x1a9108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a910c:
    // 0x1a910c: 0x27a7000c  addiu       $a3, $sp, 0xC
    ctx->pc = 0x1a910cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1a9110:
    // 0x1a9110: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1a9110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a9114:
    // 0x1a9114: 0x2c53023  subu        $a2, $s6, $a1
    ctx->pc = 0x1a9114u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_1a9118:
    // 0x1a9118: 0xc06a4da  jal         func_1A9368
label_1a911c:
    if (ctx->pc == 0x1A911Cu) {
        ctx->pc = 0x1A911Cu;
            // 0x1a911c: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
        ctx->pc = 0x1A9120u;
        goto label_1a9120;
    }
    ctx->pc = 0x1A9118u;
    SET_GPR_U32(ctx, 31, 0x1A9120u);
    ctx->pc = 0x1A911Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9118u;
            // 0x1a911c: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9368u;
    if (runtime->hasFunction(0x1A9368u)) {
        auto targetFn = runtime->lookupFunction(0x1A9368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9120u; }
        if (ctx->pc != 0x1A9120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9368_0x1a9368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9120u; }
        if (ctx->pc != 0x1A9120u) { return; }
    }
    ctx->pc = 0x1A9120u;
label_1a9120:
    // 0x1a9120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9124:
    // 0x1a9124: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a9124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a9128:
    // 0x1a9128: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a9128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a912c:
    // 0x1a912c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_1a9130:
    if (ctx->pc == 0x1A9130u) {
        ctx->pc = 0x1A9130u;
            // 0x1a9130: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A9134u;
        goto label_1a9134;
    }
    ctx->pc = 0x1A912Cu;
    {
        const bool branch_taken_0x1a912c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A9130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A912Cu;
            // 0x1a9130: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a912c) {
            ctx->pc = 0x1A9148u;
            goto label_1a9148;
        }
    }
    ctx->pc = 0x1A9134u;
label_1a9134:
    // 0x1a9134: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a9134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9138:
    // 0x1a9138: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1a9138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1a913c:
    // 0x1a913c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9140:
    // 0x1a9140: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1a9140u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1a9144:
    // 0x1a9144: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a9144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a9148:
    // 0x1a9148: 0xae820158  sw          $v0, 0x158($s4)
    ctx->pc = 0x1a9148u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 2));
label_1a914c:
    // 0x1a914c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1a914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1a9150:
    // 0x1a9150: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a9150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9154:
    // 0x1a9154: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a9154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9158:
    // 0x1a9158: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a9158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a915c:
    // 0x1a915c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1a915cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a9160:
    // 0x1a9160: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a9160u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9164:
    // 0x1a9164: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1a9164u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1a9168:
    // 0x1a9168: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1a9168u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a916c:
    // 0x1a916c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1a916cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1a9170:
    // 0x1a9170: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1a9170u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a9174:
    // 0x1a9174: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1a9174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1a9178:
    // 0x1a9178: 0x3e00008  jr          $ra
label_1a917c:
    if (ctx->pc == 0x1A917Cu) {
        ctx->pc = 0x1A917Cu;
            // 0x1a917c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1A9180u;
        goto label_1a9180;
    }
    ctx->pc = 0x1A9178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A917Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9178u;
            // 0x1a917c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9180u;
label_1a9180:
    // 0x1a9180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a9184:
    // 0x1a9184: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x1a9184u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1a9188:
    // 0x1a9188: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a9188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a918c:
    // 0x1a918c: 0x8c830d4c  lw          $v1, 0xD4C($a0)
    ctx->pc = 0x1a918cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3404)));
label_1a9190:
    // 0x1a9190: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1a9194:
    if (ctx->pc == 0x1A9194u) {
        ctx->pc = 0x1A9194u;
            // 0x1a9194: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9198u;
        goto label_1a9198;
    }
    ctx->pc = 0x1A9190u;
    {
        const bool branch_taken_0x1a9190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9190u;
            // 0x1a9194: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9190) {
            ctx->pc = 0x1A91B0u;
            goto label_1a91b0;
        }
    }
    ctx->pc = 0x1A9198u;
label_1a9198:
    // 0x1a9198: 0xdc820990  ld          $v0, 0x990($a0)
    ctx->pc = 0x1a9198u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 2448)));
label_1a919c:
    // 0x1a919c: 0xa3a70000  sb          $a3, 0x0($sp)
    ctx->pc = 0x1a919cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 7));
label_1a91a0:
    // 0x1a91a0: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x1a91a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
label_1a91a4:
    // 0x1a91a4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1a91a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1a91a8:
    // 0x1a91a8: 0x60f809  jalr        $v1
label_1a91ac:
    if (ctx->pc == 0x1A91ACu) {
        ctx->pc = 0x1A91ACu;
            // 0x1a91ac: 0x8c840d50  lw          $a0, 0xD50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3408)));
        ctx->pc = 0x1A91B0u;
        goto label_1a91b0;
    }
    ctx->pc = 0x1A91A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A91B0u);
        ctx->pc = 0x1A91ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A91A8u;
            // 0x1a91ac: 0x8c840d50  lw          $a0, 0xD50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3408)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A91B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A91B0u; }
            if (ctx->pc != 0x1A91B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A91B0u;
label_1a91b0:
    // 0x1a91b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a91b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a91b4:
    // 0x1a91b4: 0x3e00008  jr          $ra
label_1a91b8:
    if (ctx->pc == 0x1A91B8u) {
        ctx->pc = 0x1A91B8u;
            // 0x1a91b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A91BCu;
        goto label_1a91bc;
    }
    ctx->pc = 0x1A91B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A91B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A91B4u;
            // 0x1a91b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A91BCu;
label_1a91bc:
    // 0x1a91bc: 0x0  nop
    ctx->pc = 0x1a91bcu;
    // NOP
}
