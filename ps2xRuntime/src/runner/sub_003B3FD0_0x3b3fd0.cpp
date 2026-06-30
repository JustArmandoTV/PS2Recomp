#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B3FD0
// Address: 0x3b3fd0 - 0x3b41d0
void sub_003B3FD0_0x3b3fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3FD0_0x3b3fd0");
#endif

    switch (ctx->pc) {
        case 0x3b3fd0u: goto label_3b3fd0;
        case 0x3b3fd4u: goto label_3b3fd4;
        case 0x3b3fd8u: goto label_3b3fd8;
        case 0x3b3fdcu: goto label_3b3fdc;
        case 0x3b3fe0u: goto label_3b3fe0;
        case 0x3b3fe4u: goto label_3b3fe4;
        case 0x3b3fe8u: goto label_3b3fe8;
        case 0x3b3fecu: goto label_3b3fec;
        case 0x3b3ff0u: goto label_3b3ff0;
        case 0x3b3ff4u: goto label_3b3ff4;
        case 0x3b3ff8u: goto label_3b3ff8;
        case 0x3b3ffcu: goto label_3b3ffc;
        case 0x3b4000u: goto label_3b4000;
        case 0x3b4004u: goto label_3b4004;
        case 0x3b4008u: goto label_3b4008;
        case 0x3b400cu: goto label_3b400c;
        case 0x3b4010u: goto label_3b4010;
        case 0x3b4014u: goto label_3b4014;
        case 0x3b4018u: goto label_3b4018;
        case 0x3b401cu: goto label_3b401c;
        case 0x3b4020u: goto label_3b4020;
        case 0x3b4024u: goto label_3b4024;
        case 0x3b4028u: goto label_3b4028;
        case 0x3b402cu: goto label_3b402c;
        case 0x3b4030u: goto label_3b4030;
        case 0x3b4034u: goto label_3b4034;
        case 0x3b4038u: goto label_3b4038;
        case 0x3b403cu: goto label_3b403c;
        case 0x3b4040u: goto label_3b4040;
        case 0x3b4044u: goto label_3b4044;
        case 0x3b4048u: goto label_3b4048;
        case 0x3b404cu: goto label_3b404c;
        case 0x3b4050u: goto label_3b4050;
        case 0x3b4054u: goto label_3b4054;
        case 0x3b4058u: goto label_3b4058;
        case 0x3b405cu: goto label_3b405c;
        case 0x3b4060u: goto label_3b4060;
        case 0x3b4064u: goto label_3b4064;
        case 0x3b4068u: goto label_3b4068;
        case 0x3b406cu: goto label_3b406c;
        case 0x3b4070u: goto label_3b4070;
        case 0x3b4074u: goto label_3b4074;
        case 0x3b4078u: goto label_3b4078;
        case 0x3b407cu: goto label_3b407c;
        case 0x3b4080u: goto label_3b4080;
        case 0x3b4084u: goto label_3b4084;
        case 0x3b4088u: goto label_3b4088;
        case 0x3b408cu: goto label_3b408c;
        case 0x3b4090u: goto label_3b4090;
        case 0x3b4094u: goto label_3b4094;
        case 0x3b4098u: goto label_3b4098;
        case 0x3b409cu: goto label_3b409c;
        case 0x3b40a0u: goto label_3b40a0;
        case 0x3b40a4u: goto label_3b40a4;
        case 0x3b40a8u: goto label_3b40a8;
        case 0x3b40acu: goto label_3b40ac;
        case 0x3b40b0u: goto label_3b40b0;
        case 0x3b40b4u: goto label_3b40b4;
        case 0x3b40b8u: goto label_3b40b8;
        case 0x3b40bcu: goto label_3b40bc;
        case 0x3b40c0u: goto label_3b40c0;
        case 0x3b40c4u: goto label_3b40c4;
        case 0x3b40c8u: goto label_3b40c8;
        case 0x3b40ccu: goto label_3b40cc;
        case 0x3b40d0u: goto label_3b40d0;
        case 0x3b40d4u: goto label_3b40d4;
        case 0x3b40d8u: goto label_3b40d8;
        case 0x3b40dcu: goto label_3b40dc;
        case 0x3b40e0u: goto label_3b40e0;
        case 0x3b40e4u: goto label_3b40e4;
        case 0x3b40e8u: goto label_3b40e8;
        case 0x3b40ecu: goto label_3b40ec;
        case 0x3b40f0u: goto label_3b40f0;
        case 0x3b40f4u: goto label_3b40f4;
        case 0x3b40f8u: goto label_3b40f8;
        case 0x3b40fcu: goto label_3b40fc;
        case 0x3b4100u: goto label_3b4100;
        case 0x3b4104u: goto label_3b4104;
        case 0x3b4108u: goto label_3b4108;
        case 0x3b410cu: goto label_3b410c;
        case 0x3b4110u: goto label_3b4110;
        case 0x3b4114u: goto label_3b4114;
        case 0x3b4118u: goto label_3b4118;
        case 0x3b411cu: goto label_3b411c;
        case 0x3b4120u: goto label_3b4120;
        case 0x3b4124u: goto label_3b4124;
        case 0x3b4128u: goto label_3b4128;
        case 0x3b412cu: goto label_3b412c;
        case 0x3b4130u: goto label_3b4130;
        case 0x3b4134u: goto label_3b4134;
        case 0x3b4138u: goto label_3b4138;
        case 0x3b413cu: goto label_3b413c;
        case 0x3b4140u: goto label_3b4140;
        case 0x3b4144u: goto label_3b4144;
        case 0x3b4148u: goto label_3b4148;
        case 0x3b414cu: goto label_3b414c;
        case 0x3b4150u: goto label_3b4150;
        case 0x3b4154u: goto label_3b4154;
        case 0x3b4158u: goto label_3b4158;
        case 0x3b415cu: goto label_3b415c;
        case 0x3b4160u: goto label_3b4160;
        case 0x3b4164u: goto label_3b4164;
        case 0x3b4168u: goto label_3b4168;
        case 0x3b416cu: goto label_3b416c;
        case 0x3b4170u: goto label_3b4170;
        case 0x3b4174u: goto label_3b4174;
        case 0x3b4178u: goto label_3b4178;
        case 0x3b417cu: goto label_3b417c;
        case 0x3b4180u: goto label_3b4180;
        case 0x3b4184u: goto label_3b4184;
        case 0x3b4188u: goto label_3b4188;
        case 0x3b418cu: goto label_3b418c;
        case 0x3b4190u: goto label_3b4190;
        case 0x3b4194u: goto label_3b4194;
        case 0x3b4198u: goto label_3b4198;
        case 0x3b419cu: goto label_3b419c;
        case 0x3b41a0u: goto label_3b41a0;
        case 0x3b41a4u: goto label_3b41a4;
        case 0x3b41a8u: goto label_3b41a8;
        case 0x3b41acu: goto label_3b41ac;
        case 0x3b41b0u: goto label_3b41b0;
        case 0x3b41b4u: goto label_3b41b4;
        case 0x3b41b8u: goto label_3b41b8;
        case 0x3b41bcu: goto label_3b41bc;
        case 0x3b41c0u: goto label_3b41c0;
        case 0x3b41c4u: goto label_3b41c4;
        case 0x3b41c8u: goto label_3b41c8;
        case 0x3b41ccu: goto label_3b41cc;
        default: break;
    }

    ctx->pc = 0x3b3fd0u;

label_3b3fd0:
    // 0x3b3fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b3fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b3fd4:
    // 0x3b3fd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b3fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3b3fd8:
    // 0x3b3fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b3fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b3fdc:
    // 0x3b3fdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b3fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b3fe0:
    // 0x3b3fe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b3fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b3fe4:
    // 0x3b3fe4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_3b3fe8:
    if (ctx->pc == 0x3B3FE8u) {
        ctx->pc = 0x3B3FE8u;
            // 0x3b3fe8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B3FECu;
        goto label_3b3fec;
    }
    ctx->pc = 0x3B3FE4u;
    {
        const bool branch_taken_0x3b3fe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3FE4u;
            // 0x3b3fe8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3fe4) {
            ctx->pc = 0x3B4028u;
            goto label_3b4028;
        }
    }
    ctx->pc = 0x3B3FECu;
label_3b3fec:
    // 0x3b3fec: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_3b3ff0:
    if (ctx->pc == 0x3B3FF0u) {
        ctx->pc = 0x3B3FF0u;
            // 0x3b3ff0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3B3FF4u;
        goto label_3b3ff4;
    }
    ctx->pc = 0x3B3FECu;
    {
        const bool branch_taken_0x3b3fec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3fec) {
            ctx->pc = 0x3B3FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3FECu;
            // 0x3b3ff0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4014u;
            goto label_3b4014;
        }
    }
    ctx->pc = 0x3B3FF4u;
label_3b3ff4:
    // 0x3b3ff4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3b3ff8:
    if (ctx->pc == 0x3B3FF8u) {
        ctx->pc = 0x3B3FFCu;
        goto label_3b3ffc;
    }
    ctx->pc = 0x3B3FF4u;
    {
        const bool branch_taken_0x3b3ff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3ff4) {
            ctx->pc = 0x3B4010u;
            goto label_3b4010;
        }
    }
    ctx->pc = 0x3B3FFCu;
label_3b3ffc:
    // 0x3b3ffc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3b3ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b4000:
    // 0x3b4000: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3b4004:
    if (ctx->pc == 0x3B4004u) {
        ctx->pc = 0x3B4008u;
        goto label_3b4008;
    }
    ctx->pc = 0x3B4000u;
    {
        const bool branch_taken_0x3b4000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4000) {
            ctx->pc = 0x3B4010u;
            goto label_3b4010;
        }
    }
    ctx->pc = 0x3B4008u;
label_3b4008:
    // 0x3b4008: 0xc0400a8  jal         func_1002A0
label_3b400c:
    if (ctx->pc == 0x3B400Cu) {
        ctx->pc = 0x3B4010u;
        goto label_3b4010;
    }
    ctx->pc = 0x3B4008u;
    SET_GPR_U32(ctx, 31, 0x3B4010u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4010u; }
        if (ctx->pc != 0x3B4010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4010u; }
        if (ctx->pc != 0x3B4010u) { return; }
    }
    ctx->pc = 0x3B4010u;
label_3b4010:
    // 0x3b4010: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3b4010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3b4014:
    // 0x3b4014: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b4014u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3b4018:
    // 0x3b4018: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3b401c:
    if (ctx->pc == 0x3B401Cu) {
        ctx->pc = 0x3B401Cu;
            // 0x3b401c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4020u;
        goto label_3b4020;
    }
    ctx->pc = 0x3B4018u;
    {
        const bool branch_taken_0x3b4018 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b4018) {
            ctx->pc = 0x3B401Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4018u;
            // 0x3b401c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B402Cu;
            goto label_3b402c;
        }
    }
    ctx->pc = 0x3B4020u;
label_3b4020:
    // 0x3b4020: 0xc0400a8  jal         func_1002A0
label_3b4024:
    if (ctx->pc == 0x3B4024u) {
        ctx->pc = 0x3B4024u;
            // 0x3b4024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4028u;
        goto label_3b4028;
    }
    ctx->pc = 0x3B4020u;
    SET_GPR_U32(ctx, 31, 0x3B4028u);
    ctx->pc = 0x3B4024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4020u;
            // 0x3b4024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4028u; }
        if (ctx->pc != 0x3B4028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4028u; }
        if (ctx->pc != 0x3B4028u) { return; }
    }
    ctx->pc = 0x3B4028u;
label_3b4028:
    // 0x3b4028: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b4028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b402c:
    // 0x3b402c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b402cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4030:
    // 0x3b4030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b4030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b4034:
    // 0x3b4034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b4034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4038:
    // 0x3b4038: 0x3e00008  jr          $ra
label_3b403c:
    if (ctx->pc == 0x3B403Cu) {
        ctx->pc = 0x3B403Cu;
            // 0x3b403c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3B4040u;
        goto label_3b4040;
    }
    ctx->pc = 0x3B4038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B403Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4038u;
            // 0x3b403c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B4040u;
label_3b4040:
    // 0x3b4040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b4040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b4044:
    // 0x3b4044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b4044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3b4048:
    // 0x3b4048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b4048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b404c:
    // 0x3b404c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b404cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b4050:
    // 0x3b4050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b4050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4054:
    // 0x3b4054: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
label_3b4058:
    if (ctx->pc == 0x3B4058u) {
        ctx->pc = 0x3B4058u;
            // 0x3b4058: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B405Cu;
        goto label_3b405c;
    }
    ctx->pc = 0x3B4054u;
    {
        const bool branch_taken_0x3b4054 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4054u;
            // 0x3b4058: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4054) {
            ctx->pc = 0x3B417Cu;
            goto label_3b417c;
        }
    }
    ctx->pc = 0x3B405Cu;
label_3b405c:
    // 0x3b405c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b405cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3b4060:
    // 0x3b4060: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b4060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3b4064:
    // 0x3b4064: 0x24638a30  addiu       $v1, $v1, -0x75D0
    ctx->pc = 0x3b4064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937136));
label_3b4068:
    // 0x3b4068: 0x24428a70  addiu       $v0, $v0, -0x7590
    ctx->pc = 0x3b4068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937200));
label_3b406c:
    // 0x3b406c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b406cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b4070:
    // 0x3b4070: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3b4070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3b4074:
    // 0x3b4074: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b4074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b4078:
    // 0x3b4078: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3b4078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3b407c:
    // 0x3b407c: 0x320f809  jalr        $t9
label_3b4080:
    if (ctx->pc == 0x3B4080u) {
        ctx->pc = 0x3B4084u;
        goto label_3b4084;
    }
    ctx->pc = 0x3B407Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B4084u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B4084u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B4084u; }
            if (ctx->pc != 0x3B4084u) { return; }
        }
        }
    }
    ctx->pc = 0x3B4084u;
label_3b4084:
    // 0x3b4084: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x3b4084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_3b4088:
    // 0x3b4088: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_3b408c:
    if (ctx->pc == 0x3B408Cu) {
        ctx->pc = 0x3B4090u;
        goto label_3b4090;
    }
    ctx->pc = 0x3B4088u;
    {
        const bool branch_taken_0x3b4088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4088) {
            ctx->pc = 0x3B40E4u;
            goto label_3b40e4;
        }
    }
    ctx->pc = 0x3B4090u;
label_3b4090:
    // 0x3b4090: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b4090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3b4094:
    // 0x3b4094: 0x24428ad0  addiu       $v0, $v0, -0x7530
    ctx->pc = 0x3b4094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937296));
label_3b4098:
    // 0x3b4098: 0xc0d37dc  jal         func_34DF70
label_3b409c:
    if (ctx->pc == 0x3B409Cu) {
        ctx->pc = 0x3B409Cu;
            // 0x3b409c: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x3B40A0u;
        goto label_3b40a0;
    }
    ctx->pc = 0x3B4098u;
    SET_GPR_U32(ctx, 31, 0x3B40A0u);
    ctx->pc = 0x3B409Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4098u;
            // 0x3b409c: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B40A0u; }
        if (ctx->pc != 0x3B40A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B40A0u; }
        if (ctx->pc != 0x3B40A0u) { return; }
    }
    ctx->pc = 0x3B40A0u;
label_3b40a0:
    // 0x3b40a0: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x3b40a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_3b40a4:
    // 0x3b40a4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_3b40a8:
    if (ctx->pc == 0x3B40A8u) {
        ctx->pc = 0x3B40ACu;
        goto label_3b40ac;
    }
    ctx->pc = 0x3B40A4u;
    {
        const bool branch_taken_0x3b40a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b40a4) {
            ctx->pc = 0x3B40E4u;
            goto label_3b40e4;
        }
    }
    ctx->pc = 0x3B40ACu;
label_3b40ac:
    // 0x3b40ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b40acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3b40b0:
    // 0x3b40b0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x3b40b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_3b40b4:
    // 0x3b40b4: 0xc0d37dc  jal         func_34DF70
label_3b40b8:
    if (ctx->pc == 0x3B40B8u) {
        ctx->pc = 0x3B40B8u;
            // 0x3b40b8: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x3B40BCu;
        goto label_3b40bc;
    }
    ctx->pc = 0x3B40B4u;
    SET_GPR_U32(ctx, 31, 0x3B40BCu);
    ctx->pc = 0x3B40B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B40B4u;
            // 0x3b40b8: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B40BCu; }
        if (ctx->pc != 0x3B40BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B40BCu; }
        if (ctx->pc != 0x3B40BCu) { return; }
    }
    ctx->pc = 0x3B40BCu;
label_3b40bc:
    // 0x3b40bc: 0x262300d0  addiu       $v1, $s1, 0xD0
    ctx->pc = 0x3b40bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_3b40c0:
    // 0x3b40c0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3b40c4:
    if (ctx->pc == 0x3B40C4u) {
        ctx->pc = 0x3B40C8u;
        goto label_3b40c8;
    }
    ctx->pc = 0x3B40C0u;
    {
        const bool branch_taken_0x3b40c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b40c0) {
            ctx->pc = 0x3B40E4u;
            goto label_3b40e4;
        }
    }
    ctx->pc = 0x3B40C8u;
label_3b40c8:
    // 0x3b40c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b40c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3b40cc:
    // 0x3b40cc: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x3b40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_3b40d0:
    // 0x3b40d0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3b40d4:
    if (ctx->pc == 0x3B40D4u) {
        ctx->pc = 0x3B40D4u;
            // 0x3b40d4: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x3B40D8u;
        goto label_3b40d8;
    }
    ctx->pc = 0x3B40D0u;
    {
        const bool branch_taken_0x3b40d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B40D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B40D0u;
            // 0x3b40d4: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b40d0) {
            ctx->pc = 0x3B40E4u;
            goto label_3b40e4;
        }
    }
    ctx->pc = 0x3B40D8u;
label_3b40d8:
    // 0x3b40d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3b40dc:
    // 0x3b40dc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3b40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3b40e0:
    // 0x3b40e0: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x3b40e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
label_3b40e4:
    // 0x3b40e4: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_3b40e8:
    if (ctx->pc == 0x3B40E8u) {
        ctx->pc = 0x3B40E8u;
            // 0x3b40e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3B40ECu;
        goto label_3b40ec;
    }
    ctx->pc = 0x3B40E4u;
    {
        const bool branch_taken_0x3b40e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b40e4) {
            ctx->pc = 0x3B40E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B40E4u;
            // 0x3b40e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4168u;
            goto label_3b4168;
        }
    }
    ctx->pc = 0x3B40ECu;
label_3b40ec:
    // 0x3b40ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3b40ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3b40f0:
    // 0x3b40f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3b40f4:
    // 0x3b40f4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x3b40f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_3b40f8:
    // 0x3b40f8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x3b40f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_3b40fc:
    // 0x3b40fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b40fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b4100:
    // 0x3b4100: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3b4100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3b4104:
    // 0x3b4104: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x3b4104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_3b4108:
    // 0x3b4108: 0xc0aecc4  jal         func_2BB310
label_3b410c:
    if (ctx->pc == 0x3B410Cu) {
        ctx->pc = 0x3B410Cu;
            // 0x3b410c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B4110u;
        goto label_3b4110;
    }
    ctx->pc = 0x3B4108u;
    SET_GPR_U32(ctx, 31, 0x3B4110u);
    ctx->pc = 0x3B410Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4108u;
            // 0x3b410c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4110u; }
        if (ctx->pc != 0x3B4110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4110u; }
        if (ctx->pc != 0x3B4110u) { return; }
    }
    ctx->pc = 0x3B4110u;
label_3b4110:
    // 0x3b4110: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x3b4110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_3b4114:
    // 0x3b4114: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x3b4114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_3b4118:
    // 0x3b4118: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b411c:
    if (ctx->pc == 0x3B411Cu) {
        ctx->pc = 0x3B411Cu;
            // 0x3b411c: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3B4120u;
        goto label_3b4120;
    }
    ctx->pc = 0x3B4118u;
    {
        const bool branch_taken_0x3b4118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4118) {
            ctx->pc = 0x3B411Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4118u;
            // 0x3b411c: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4134u;
            goto label_3b4134;
        }
    }
    ctx->pc = 0x3B4120u;
label_3b4120:
    // 0x3b4120: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3b4120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3b4124:
    // 0x3b4124: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3b4124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3b4128:
    // 0x3b4128: 0x320f809  jalr        $t9
label_3b412c:
    if (ctx->pc == 0x3B412Cu) {
        ctx->pc = 0x3B412Cu;
            // 0x3b412c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B4130u;
        goto label_3b4130;
    }
    ctx->pc = 0x3B4128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B4130u);
        ctx->pc = 0x3B412Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4128u;
            // 0x3b412c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B4130u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B4130u; }
            if (ctx->pc != 0x3B4130u) { return; }
        }
        }
    }
    ctx->pc = 0x3B4130u;
label_3b4130:
    // 0x3b4130: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x3b4130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3b4134:
    // 0x3b4134: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3b4134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b4138:
    // 0x3b4138: 0xc0aec9c  jal         func_2BB270
label_3b413c:
    if (ctx->pc == 0x3B413Cu) {
        ctx->pc = 0x3B413Cu;
            // 0x3b413c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3B4140u;
        goto label_3b4140;
    }
    ctx->pc = 0x3B4138u;
    SET_GPR_U32(ctx, 31, 0x3B4140u);
    ctx->pc = 0x3B413Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4138u;
            // 0x3b413c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4140u; }
        if (ctx->pc != 0x3B4140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4140u; }
        if (ctx->pc != 0x3B4140u) { return; }
    }
    ctx->pc = 0x3B4140u;
label_3b4140:
    // 0x3b4140: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x3b4140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_3b4144:
    // 0x3b4144: 0xc0aec88  jal         func_2BB220
label_3b4148:
    if (ctx->pc == 0x3B4148u) {
        ctx->pc = 0x3B4148u;
            // 0x3b4148: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3B414Cu;
        goto label_3b414c;
    }
    ctx->pc = 0x3B4144u;
    SET_GPR_U32(ctx, 31, 0x3B414Cu);
    ctx->pc = 0x3B4148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4144u;
            // 0x3b4148: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B414Cu; }
        if (ctx->pc != 0x3B414Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B414Cu; }
        if (ctx->pc != 0x3B414Cu) { return; }
    }
    ctx->pc = 0x3B414Cu;
label_3b414c:
    // 0x3b414c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x3b414cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_3b4150:
    // 0x3b4150: 0xc0aec0c  jal         func_2BB030
label_3b4154:
    if (ctx->pc == 0x3B4154u) {
        ctx->pc = 0x3B4154u;
            // 0x3b4154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4158u;
        goto label_3b4158;
    }
    ctx->pc = 0x3B4150u;
    SET_GPR_U32(ctx, 31, 0x3B4158u);
    ctx->pc = 0x3B4154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4150u;
            // 0x3b4154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4158u; }
        if (ctx->pc != 0x3B4158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4158u; }
        if (ctx->pc != 0x3B4158u) { return; }
    }
    ctx->pc = 0x3B4158u;
label_3b4158:
    // 0x3b4158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b415c:
    // 0x3b415c: 0xc0aeaa8  jal         func_2BAAA0
label_3b4160:
    if (ctx->pc == 0x3B4160u) {
        ctx->pc = 0x3B4160u;
            // 0x3b4160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4164u;
        goto label_3b4164;
    }
    ctx->pc = 0x3B415Cu;
    SET_GPR_U32(ctx, 31, 0x3B4164u);
    ctx->pc = 0x3B4160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B415Cu;
            // 0x3b4160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4164u; }
        if (ctx->pc != 0x3B4164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4164u; }
        if (ctx->pc != 0x3B4164u) { return; }
    }
    ctx->pc = 0x3B4164u;
label_3b4164:
    // 0x3b4164: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3b4164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3b4168:
    // 0x3b4168: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b4168u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3b416c:
    // 0x3b416c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3b4170:
    if (ctx->pc == 0x3B4170u) {
        ctx->pc = 0x3B4170u;
            // 0x3b4170: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4174u;
        goto label_3b4174;
    }
    ctx->pc = 0x3B416Cu;
    {
        const bool branch_taken_0x3b416c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b416c) {
            ctx->pc = 0x3B4170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B416Cu;
            // 0x3b4170: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4180u;
            goto label_3b4180;
        }
    }
    ctx->pc = 0x3B4174u;
label_3b4174:
    // 0x3b4174: 0xc0400a8  jal         func_1002A0
label_3b4178:
    if (ctx->pc == 0x3B4178u) {
        ctx->pc = 0x3B4178u;
            // 0x3b4178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B417Cu;
        goto label_3b417c;
    }
    ctx->pc = 0x3B4174u;
    SET_GPR_U32(ctx, 31, 0x3B417Cu);
    ctx->pc = 0x3B4178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4174u;
            // 0x3b4178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B417Cu; }
        if (ctx->pc != 0x3B417Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B417Cu; }
        if (ctx->pc != 0x3B417Cu) { return; }
    }
    ctx->pc = 0x3B417Cu;
label_3b417c:
    // 0x3b417c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b417cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4180:
    // 0x3b4180: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b4180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4184:
    // 0x3b4184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b4184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b4188:
    // 0x3b4188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b4188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b418c:
    // 0x3b418c: 0x3e00008  jr          $ra
label_3b4190:
    if (ctx->pc == 0x3B4190u) {
        ctx->pc = 0x3B4190u;
            // 0x3b4190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3B4194u;
        goto label_3b4194;
    }
    ctx->pc = 0x3B418Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B418Cu;
            // 0x3b4190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B4194u;
label_3b4194:
    // 0x3b4194: 0x0  nop
    ctx->pc = 0x3b4194u;
    // NOP
label_3b4198:
    // 0x3b4198: 0x0  nop
    ctx->pc = 0x3b4198u;
    // NOP
label_3b419c:
    // 0x3b419c: 0x0  nop
    ctx->pc = 0x3b419cu;
    // NOP
label_3b41a0:
    // 0x3b41a0: 0x3e00008  jr          $ra
label_3b41a4:
    if (ctx->pc == 0x3B41A4u) {
        ctx->pc = 0x3B41A8u;
        goto label_3b41a8;
    }
    ctx->pc = 0x3B41A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B41A8u;
label_3b41a8:
    // 0x3b41a8: 0x0  nop
    ctx->pc = 0x3b41a8u;
    // NOP
label_3b41ac:
    // 0x3b41ac: 0x0  nop
    ctx->pc = 0x3b41acu;
    // NOP
label_3b41b0:
    // 0x3b41b0: 0x3e00008  jr          $ra
label_3b41b4:
    if (ctx->pc == 0x3B41B4u) {
        ctx->pc = 0x3B41B8u;
        goto label_3b41b8;
    }
    ctx->pc = 0x3B41B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B41B8u;
label_3b41b8:
    // 0x3b41b8: 0x0  nop
    ctx->pc = 0x3b41b8u;
    // NOP
label_3b41bc:
    // 0x3b41bc: 0x0  nop
    ctx->pc = 0x3b41bcu;
    // NOP
label_3b41c0:
    // 0x3b41c0: 0x24030848  addiu       $v1, $zero, 0x848
    ctx->pc = 0x3b41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2120));
label_3b41c4:
    // 0x3b41c4: 0x3e00008  jr          $ra
label_3b41c8:
    if (ctx->pc == 0x3B41C8u) {
        ctx->pc = 0x3B41C8u;
            // 0x3b41c8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x3B41CCu;
        goto label_3b41cc;
    }
    ctx->pc = 0x3B41C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B41C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B41C4u;
            // 0x3b41c8: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B41CCu;
label_3b41cc:
    // 0x3b41cc: 0x0  nop
    ctx->pc = 0x3b41ccu;
    // NOP
}
