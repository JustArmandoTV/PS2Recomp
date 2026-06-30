#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0FE0
// Address: 0x1a0fe0 - 0x1a10c0
void sub_001A0FE0_0x1a0fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0FE0_0x1a0fe0");
#endif

    switch (ctx->pc) {
        case 0x1a0fe0u: goto label_1a0fe0;
        case 0x1a0fe4u: goto label_1a0fe4;
        case 0x1a0fe8u: goto label_1a0fe8;
        case 0x1a0fecu: goto label_1a0fec;
        case 0x1a0ff0u: goto label_1a0ff0;
        case 0x1a0ff4u: goto label_1a0ff4;
        case 0x1a0ff8u: goto label_1a0ff8;
        case 0x1a0ffcu: goto label_1a0ffc;
        case 0x1a1000u: goto label_1a1000;
        case 0x1a1004u: goto label_1a1004;
        case 0x1a1008u: goto label_1a1008;
        case 0x1a100cu: goto label_1a100c;
        case 0x1a1010u: goto label_1a1010;
        case 0x1a1014u: goto label_1a1014;
        case 0x1a1018u: goto label_1a1018;
        case 0x1a101cu: goto label_1a101c;
        case 0x1a1020u: goto label_1a1020;
        case 0x1a1024u: goto label_1a1024;
        case 0x1a1028u: goto label_1a1028;
        case 0x1a102cu: goto label_1a102c;
        case 0x1a1030u: goto label_1a1030;
        case 0x1a1034u: goto label_1a1034;
        case 0x1a1038u: goto label_1a1038;
        case 0x1a103cu: goto label_1a103c;
        case 0x1a1040u: goto label_1a1040;
        case 0x1a1044u: goto label_1a1044;
        case 0x1a1048u: goto label_1a1048;
        case 0x1a104cu: goto label_1a104c;
        case 0x1a1050u: goto label_1a1050;
        case 0x1a1054u: goto label_1a1054;
        case 0x1a1058u: goto label_1a1058;
        case 0x1a105cu: goto label_1a105c;
        case 0x1a1060u: goto label_1a1060;
        case 0x1a1064u: goto label_1a1064;
        case 0x1a1068u: goto label_1a1068;
        case 0x1a106cu: goto label_1a106c;
        case 0x1a1070u: goto label_1a1070;
        case 0x1a1074u: goto label_1a1074;
        case 0x1a1078u: goto label_1a1078;
        case 0x1a107cu: goto label_1a107c;
        case 0x1a1080u: goto label_1a1080;
        case 0x1a1084u: goto label_1a1084;
        case 0x1a1088u: goto label_1a1088;
        case 0x1a108cu: goto label_1a108c;
        case 0x1a1090u: goto label_1a1090;
        case 0x1a1094u: goto label_1a1094;
        case 0x1a1098u: goto label_1a1098;
        case 0x1a109cu: goto label_1a109c;
        case 0x1a10a0u: goto label_1a10a0;
        case 0x1a10a4u: goto label_1a10a4;
        case 0x1a10a8u: goto label_1a10a8;
        case 0x1a10acu: goto label_1a10ac;
        case 0x1a10b0u: goto label_1a10b0;
        case 0x1a10b4u: goto label_1a10b4;
        case 0x1a10b8u: goto label_1a10b8;
        case 0x1a10bcu: goto label_1a10bc;
        default: break;
    }

    ctx->pc = 0x1a0fe0u;

label_1a0fe0:
    // 0x1a0fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a0fe4:
    // 0x1a0fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a0fe8:
    // 0x1a0fe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a0fec:
    // 0x1a0fec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a0ff0:
    // 0x1a0ff0: 0xc0685c2  jal         func_1A1708
label_1a0ff4:
    if (ctx->pc == 0x1A0FF4u) {
        ctx->pc = 0x1A0FF4u;
            // 0x1a0ff4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A0FF8u;
        goto label_1a0ff8;
    }
    ctx->pc = 0x1A0FF0u;
    SET_GPR_U32(ctx, 31, 0x1A0FF8u);
    ctx->pc = 0x1A0FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FF0u;
            // 0x1a0ff4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1708u;
    if (runtime->hasFunction(0x1A1708u)) {
        auto targetFn = runtime->lookupFunction(0x1A1708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FF8u; }
        if (ctx->pc != 0x1A0FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1708_0x1a1708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FF8u; }
        if (ctx->pc != 0x1A0FF8u) { return; }
    }
    ctx->pc = 0x1A0FF8u;
label_1a0ff8:
    // 0x1a0ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0ffc:
    // 0x1a0ffc: 0xc0685c8  jal         func_1A1720
label_1a1000:
    if (ctx->pc == 0x1A1000u) {
        ctx->pc = 0x1A1000u;
            // 0x1a1000: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1004u;
        goto label_1a1004;
    }
    ctx->pc = 0x1A0FFCu;
    SET_GPR_U32(ctx, 31, 0x1A1004u);
    ctx->pc = 0x1A1000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FFCu;
            // 0x1a1000: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1720u;
    if (runtime->hasFunction(0x1A1720u)) {
        auto targetFn = runtime->lookupFunction(0x1A1720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1004u; }
        if (ctx->pc != 0x1A1004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1720_0x1a1720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1004u; }
        if (ctx->pc != 0x1A1004u) { return; }
    }
    ctx->pc = 0x1A1004u;
label_1a1004:
    // 0x1a1004: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a1004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1008:
    // 0x1a1008: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_1a100c:
    if (ctx->pc == 0x1A100Cu) {
        ctx->pc = 0x1A100Cu;
            // 0x1a100c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1010u;
        goto label_1a1010;
    }
    ctx->pc = 0x1A1008u;
    {
        const bool branch_taken_0x1a1008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1008) {
            ctx->pc = 0x1A100Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1008u;
            // 0x1a100c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1040u;
            goto label_1a1040;
        }
    }
    ctx->pc = 0x1A1010u;
label_1a1010:
    // 0x1a1010: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a1010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a1014:
    // 0x1a1014: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1a1018:
    if (ctx->pc == 0x1A1018u) {
        ctx->pc = 0x1A1018u;
            // 0x1a1018: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1A101Cu;
        goto label_1a101c;
    }
    ctx->pc = 0x1A1014u;
    {
        const bool branch_taken_0x1a1014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1014) {
            ctx->pc = 0x1A1018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1014u;
            // 0x1a1018: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1038u;
            goto label_1a1038;
        }
    }
    ctx->pc = 0x1A101Cu;
label_1a101c:
    // 0x1a101c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a101cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a1020:
    // 0x1a1020: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1a1024:
    if (ctx->pc == 0x1A1024u) {
        ctx->pc = 0x1A1024u;
            // 0x1a1024: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1A1028u;
        goto label_1a1028;
    }
    ctx->pc = 0x1A1020u;
    {
        const bool branch_taken_0x1a1020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1020) {
            ctx->pc = 0x1A1024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1020u;
            // 0x1a1024: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1038u;
            goto label_1a1038;
        }
    }
    ctx->pc = 0x1A1028u;
label_1a1028:
    // 0x1a1028: 0x60f809  jalr        $v1
label_1a102c:
    if (ctx->pc == 0x1A102Cu) {
        ctx->pc = 0x1A1030u;
        goto label_1a1030;
    }
    ctx->pc = 0x1A1028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A1030u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1030u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1030u; }
            if (ctx->pc != 0x1A1030u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1030u;
label_1a1030:
    // 0x1a1030: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a1030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a1034:
    // 0x1a1034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a1038:
    // 0x1a1038: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a1038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1a103c:
    // 0x1a103c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a103cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1040:
    // 0x1a1040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1044:
    // 0x1a1044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1048:
    // 0x1a1048: 0x3e00008  jr          $ra
label_1a104c:
    if (ctx->pc == 0x1A104Cu) {
        ctx->pc = 0x1A104Cu;
            // 0x1a104c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A1050u;
        goto label_1a1050;
    }
    ctx->pc = 0x1A1048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A104Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1048u;
            // 0x1a104c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1050u;
label_1a1050:
    // 0x1a1050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a1054:
    // 0x1a1054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1058:
    // 0x1a1058: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a105c:
    // 0x1a105c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a105cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a1060:
    // 0x1a1060: 0xc0685c2  jal         func_1A1708
label_1a1064:
    if (ctx->pc == 0x1A1064u) {
        ctx->pc = 0x1A1064u;
            // 0x1a1064: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1068u;
        goto label_1a1068;
    }
    ctx->pc = 0x1A1060u;
    SET_GPR_U32(ctx, 31, 0x1A1068u);
    ctx->pc = 0x1A1064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1060u;
            // 0x1a1064: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1708u;
    if (runtime->hasFunction(0x1A1708u)) {
        auto targetFn = runtime->lookupFunction(0x1A1708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1068u; }
        if (ctx->pc != 0x1A1068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1708_0x1a1708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1068u; }
        if (ctx->pc != 0x1A1068u) { return; }
    }
    ctx->pc = 0x1A1068u;
label_1a1068:
    // 0x1a1068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a106c:
    // 0x1a106c: 0xc0685c8  jal         func_1A1720
label_1a1070:
    if (ctx->pc == 0x1A1070u) {
        ctx->pc = 0x1A1070u;
            // 0x1a1070: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1074u;
        goto label_1a1074;
    }
    ctx->pc = 0x1A106Cu;
    SET_GPR_U32(ctx, 31, 0x1A1074u);
    ctx->pc = 0x1A1070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A106Cu;
            // 0x1a1070: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1720u;
    if (runtime->hasFunction(0x1A1720u)) {
        auto targetFn = runtime->lookupFunction(0x1A1720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1074u; }
        if (ctx->pc != 0x1A1074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1720_0x1a1720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1074u; }
        if (ctx->pc != 0x1A1074u) { return; }
    }
    ctx->pc = 0x1A1074u;
label_1a1074:
    // 0x1a1074: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1078:
    // 0x1a1078: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_1a107c:
    if (ctx->pc == 0x1A107Cu) {
        ctx->pc = 0x1A107Cu;
            // 0x1a107c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1080u;
        goto label_1a1080;
    }
    ctx->pc = 0x1A1078u;
    {
        const bool branch_taken_0x1a1078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1078) {
            ctx->pc = 0x1A107Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1078u;
            // 0x1a107c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A10ACu;
            goto label_1a10ac;
        }
    }
    ctx->pc = 0x1A1080u;
label_1a1080:
    // 0x1a1080: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a1080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a1084:
    // 0x1a1084: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a1088:
    if (ctx->pc == 0x1A1088u) {
        ctx->pc = 0x1A1088u;
            // 0x1a1088: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x1A108Cu;
        goto label_1a108c;
    }
    ctx->pc = 0x1A1084u;
    {
        const bool branch_taken_0x1a1084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1084u;
            // 0x1a1088: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1084) {
            ctx->pc = 0x1A10A8u;
            goto label_1a10a8;
        }
    }
    ctx->pc = 0x1A108Cu;
label_1a108c:
    // 0x1a108c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1a1090:
    if (ctx->pc == 0x1A1090u) {
        ctx->pc = 0x1A1090u;
            // 0x1a1090: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1A1094u;
        goto label_1a1094;
    }
    ctx->pc = 0x1A108Cu;
    {
        const bool branch_taken_0x1a108c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A108Cu;
            // 0x1a1090: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a108c) {
            ctx->pc = 0x1A10A8u;
            goto label_1a10a8;
        }
    }
    ctx->pc = 0x1A1094u;
label_1a1094:
    // 0x1a1094: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a1094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a1098:
    // 0x1a1098: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a109c:
    if (ctx->pc == 0x1A109Cu) {
        ctx->pc = 0x1A109Cu;
            // 0x1a109c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A10A0u;
        goto label_1a10a0;
    }
    ctx->pc = 0x1A1098u;
    {
        const bool branch_taken_0x1a1098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1098) {
            ctx->pc = 0x1A109Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1098u;
            // 0x1a109c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A10ACu;
            goto label_1a10ac;
        }
    }
    ctx->pc = 0x1A10A0u;
label_1a10a0:
    // 0x1a10a0: 0x40f809  jalr        $v0
label_1a10a4:
    if (ctx->pc == 0x1A10A4u) {
        ctx->pc = 0x1A10A8u;
        goto label_1a10a8;
    }
    ctx->pc = 0x1A10A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A10A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A10A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A10A8u; }
            if (ctx->pc != 0x1A10A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A10A8u;
label_1a10a8:
    // 0x1a10a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a10a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a10ac:
    // 0x1a10ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a10acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a10b0:
    // 0x1a10b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a10b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a10b4:
    // 0x1a10b4: 0x3e00008  jr          $ra
label_1a10b8:
    if (ctx->pc == 0x1A10B8u) {
        ctx->pc = 0x1A10B8u;
            // 0x1a10b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A10BCu;
        goto label_1a10bc;
    }
    ctx->pc = 0x1A10B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A10B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A10B4u;
            // 0x1a10b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A10BCu;
label_1a10bc:
    // 0x1a10bc: 0x0  nop
    ctx->pc = 0x1a10bcu;
    // NOP
}
