#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C200
// Address: 0x19c200 - 0x19c2f8
void sub_0019C200_0x19c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C200_0x19c200");
#endif

    switch (ctx->pc) {
        case 0x19c228u: goto label_19c228;
        case 0x19c238u: goto label_19c238;
        case 0x19c248u: goto label_19c248;
        case 0x19c254u: goto label_19c254;
        case 0x19c260u: goto label_19c260;
        case 0x19c268u: goto label_19c268;
        case 0x19c280u: goto label_19c280;
        case 0x19c294u: goto label_19c294;
        default: break;
    }

    ctx->pc = 0x19c200u;

    // 0x19c200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c20c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19c20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19c210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c214: 0x8e110048  lw          $s1, 0x48($s0)
    ctx->pc = 0x19c214u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x19c218: 0x52200033  beql        $s1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x19C218u;
    {
        const bool branch_taken_0x19c218 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c218) {
            ctx->pc = 0x19C21Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C218u;
            // 0x19c21c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C2E8u;
            goto label_19c2e8;
        }
    }
    ctx->pc = 0x19C220u;
    // 0x19c220: 0xc068a48  jal         func_1A2920
    ctx->pc = 0x19C220u;
    SET_GPR_U32(ctx, 31, 0x19C228u);
    ctx->pc = 0x1A2920u;
    if (runtime->hasFunction(0x1A2920u)) {
        auto targetFn = runtime->lookupFunction(0x1A2920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C228u; }
        if (ctx->pc != 0x19C228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2920_0x1a2920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C228u; }
        if (ctx->pc != 0x19C228u) { return; }
    }
    ctx->pc = 0x19C228u;
label_19c228:
    // 0x19c228: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19c228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x19c22c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x19c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x19c230: 0xc06cf3c  jal         func_1B3CF0
    ctx->pc = 0x19C230u;
    SET_GPR_U32(ctx, 31, 0x19C238u);
    ctx->pc = 0x19C234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C230u;
            // 0x19c234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CF0u;
    if (runtime->hasFunction(0x1B3CF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C238u; }
        if (ctx->pc != 0x19C238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3CF0_0x1b3cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C238u; }
        if (ctx->pc != 0x19C238u) { return; }
    }
    ctx->pc = 0x19C238u;
label_19c238:
    // 0x19c238: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C238u;
    {
        const bool branch_taken_0x19c238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c238) {
            ctx->pc = 0x19C23Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C238u;
            // 0x19c23c: 0xae110048  sw          $s1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C258u;
            goto label_19c258;
        }
    }
    ctx->pc = 0x19C240u;
    // 0x19c240: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x19C240u;
    SET_GPR_U32(ctx, 31, 0x19C248u);
    ctx->pc = 0x19C244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C240u;
            // 0x19c244: 0x2404fecc  addiu       $a0, $zero, -0x134 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966988));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C248u; }
        if (ctx->pc != 0x19C248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C248u; }
        if (ctx->pc != 0x19C248u) { return; }
    }
    ctx->pc = 0x19C248u;
label_19c248:
    // 0x19c248: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19c248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19c24c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19C24Cu;
    SET_GPR_U32(ctx, 31, 0x19C254u);
    ctx->pc = 0x19C250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C24Cu;
            // 0x19c250: 0x24849528  addiu       $a0, $a0, -0x6AD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C254u; }
        if (ctx->pc != 0x19C254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C254u; }
        if (ctx->pc != 0x19C254u) { return; }
    }
    ctx->pc = 0x19C254u;
label_19c254:
    // 0x19c254: 0xae110048  sw          $s1, 0x48($s0)
    ctx->pc = 0x19c254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
label_19c258:
    // 0x19c258: 0xc068488  jal         func_1A1220
    ctx->pc = 0x19C258u;
    SET_GPR_U32(ctx, 31, 0x19C260u);
    ctx->pc = 0x19C25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C258u;
            // 0x19c25c: 0x260404f8  addiu       $a0, $s0, 0x4F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1220u;
    if (runtime->hasFunction(0x1A1220u)) {
        auto targetFn = runtime->lookupFunction(0x1A1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C260u; }
        if (ctx->pc != 0x19C260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1220_0x1a1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C260u; }
        if (ctx->pc != 0x19C260u) { return; }
    }
    ctx->pc = 0x19C260u;
label_19c260:
    // 0x19c260: 0xc068488  jal         func_1A1220
    ctx->pc = 0x19C260u;
    SET_GPR_U32(ctx, 31, 0x19C268u);
    ctx->pc = 0x19C264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C260u;
            // 0x19c264: 0x2604051c  addiu       $a0, $s0, 0x51C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1220u;
    if (runtime->hasFunction(0x1A1220u)) {
        auto targetFn = runtime->lookupFunction(0x1A1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C268u; }
        if (ctx->pc != 0x19C268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1220_0x1a1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C268u; }
        if (ctx->pc != 0x19C268u) { return; }
    }
    ctx->pc = 0x19C268u;
label_19c268:
    // 0x19c268: 0xae000548  sw          $zero, 0x548($s0)
    ctx->pc = 0x19c268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1352), GPR_U32(ctx, 0));
    // 0x19c26c: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x19c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x19c270: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C270u;
    {
        const bool branch_taken_0x19c270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c270) {
            ctx->pc = 0x19C274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C270u;
            // 0x19c274: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C284u;
            goto label_19c284;
        }
    }
    ctx->pc = 0x19C278u;
    // 0x19c278: 0xc068b84  jal         func_1A2E10
    ctx->pc = 0x19C278u;
    SET_GPR_U32(ctx, 31, 0x19C280u);
    ctx->pc = 0x1A2E10u;
    if (runtime->hasFunction(0x1A2E10u)) {
        auto targetFn = runtime->lookupFunction(0x1A2E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C280u; }
        if (ctx->pc != 0x19C280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2E10_0x1a2e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C280u; }
        if (ctx->pc != 0x19C280u) { return; }
    }
    ctx->pc = 0x19C280u;
label_19c280:
    // 0x19c280: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x19c280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_19c284:
    // 0x19c284: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C284u;
    {
        const bool branch_taken_0x19c284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c284) {
            ctx->pc = 0x19C288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C284u;
            // 0x19c288: 0x8e02055c  lw          $v0, 0x55C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C298u;
            goto label_19c298;
        }
    }
    ctx->pc = 0x19C28Cu;
    // 0x19c28c: 0xc06011a  jal         func_180468
    ctx->pc = 0x19C28Cu;
    SET_GPR_U32(ctx, 31, 0x19C294u);
    ctx->pc = 0x180468u;
    if (runtime->hasFunction(0x180468u)) {
        auto targetFn = runtime->lookupFunction(0x180468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C294u; }
        if (ctx->pc != 0x19C294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180468_0x180468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C294u; }
        if (ctx->pc != 0x19C294u) { return; }
    }
    ctx->pc = 0x19C294u;
label_19c294:
    // 0x19c294: 0x8e02055c  lw          $v0, 0x55C($s0)
    ctx->pc = 0x19c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1372)));
label_19c298:
    // 0x19c298: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C298u;
    {
        const bool branch_taken_0x19c298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C298u;
            // 0x19c29c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c298) {
            ctx->pc = 0x19C2C0u;
            goto label_19c2c0;
        }
    }
    ctx->pc = 0x19C2A0u;
    // 0x19c2a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c2a4: 0xae000564  sw          $zero, 0x564($s0)
    ctx->pc = 0x19c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 0));
    // 0x19c2a8: 0xae020578  sw          $v0, 0x578($s0)
    ctx->pc = 0x19c2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1400), GPR_U32(ctx, 2));
    // 0x19c2ac: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x19c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x19c2b0: 0xae000558  sw          $zero, 0x558($s0)
    ctx->pc = 0x19c2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 0));
    // 0x19c2b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19C2B4u;
    {
        const bool branch_taken_0x19c2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C2B4u;
            // 0x19c2b8: 0xae00057c  sw          $zero, 0x57C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c2b4) {
            ctx->pc = 0x19C2C4u;
            goto label_19c2c4;
        }
    }
    ctx->pc = 0x19C2BCu;
    // 0x19c2bc: 0x0  nop
    ctx->pc = 0x19c2bcu;
    // NOP
label_19c2c0:
    // 0x19c2c0: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x19c2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
label_19c2c4:
    // 0x19c2c4: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x19c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
    // 0x19c2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c2ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c2d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c2d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c2dc: 0x8068236  j           func_1A08D8
    ctx->pc = 0x19C2DCu;
    ctx->pc = 0x19C2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C2DCu;
            // 0x19c2e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A08D8u;
    if (runtime->hasFunction(0x1A08D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A08D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A08D8_0x1a08d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C2E4u;
    // 0x19c2e4: 0x0  nop
    ctx->pc = 0x19c2e4u;
    // NOP
label_19c2e8:
    // 0x19c2e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c2e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c2ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C2F0u;
            // 0x19c2f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C2F8u;
}
