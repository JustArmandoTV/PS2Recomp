#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050B1D0
// Address: 0x50b1d0 - 0x50b2d0
void sub_0050B1D0_0x50b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050B1D0_0x50b1d0");
#endif

    switch (ctx->pc) {
        case 0x50b1d0u: goto label_50b1d0;
        case 0x50b1d4u: goto label_50b1d4;
        case 0x50b1d8u: goto label_50b1d8;
        case 0x50b1dcu: goto label_50b1dc;
        case 0x50b1e0u: goto label_50b1e0;
        case 0x50b1e4u: goto label_50b1e4;
        case 0x50b1e8u: goto label_50b1e8;
        case 0x50b1ecu: goto label_50b1ec;
        case 0x50b1f0u: goto label_50b1f0;
        case 0x50b1f4u: goto label_50b1f4;
        case 0x50b1f8u: goto label_50b1f8;
        case 0x50b1fcu: goto label_50b1fc;
        case 0x50b200u: goto label_50b200;
        case 0x50b204u: goto label_50b204;
        case 0x50b208u: goto label_50b208;
        case 0x50b20cu: goto label_50b20c;
        case 0x50b210u: goto label_50b210;
        case 0x50b214u: goto label_50b214;
        case 0x50b218u: goto label_50b218;
        case 0x50b21cu: goto label_50b21c;
        case 0x50b220u: goto label_50b220;
        case 0x50b224u: goto label_50b224;
        case 0x50b228u: goto label_50b228;
        case 0x50b22cu: goto label_50b22c;
        case 0x50b230u: goto label_50b230;
        case 0x50b234u: goto label_50b234;
        case 0x50b238u: goto label_50b238;
        case 0x50b23cu: goto label_50b23c;
        case 0x50b240u: goto label_50b240;
        case 0x50b244u: goto label_50b244;
        case 0x50b248u: goto label_50b248;
        case 0x50b24cu: goto label_50b24c;
        case 0x50b250u: goto label_50b250;
        case 0x50b254u: goto label_50b254;
        case 0x50b258u: goto label_50b258;
        case 0x50b25cu: goto label_50b25c;
        case 0x50b260u: goto label_50b260;
        case 0x50b264u: goto label_50b264;
        case 0x50b268u: goto label_50b268;
        case 0x50b26cu: goto label_50b26c;
        case 0x50b270u: goto label_50b270;
        case 0x50b274u: goto label_50b274;
        case 0x50b278u: goto label_50b278;
        case 0x50b27cu: goto label_50b27c;
        case 0x50b280u: goto label_50b280;
        case 0x50b284u: goto label_50b284;
        case 0x50b288u: goto label_50b288;
        case 0x50b28cu: goto label_50b28c;
        case 0x50b290u: goto label_50b290;
        case 0x50b294u: goto label_50b294;
        case 0x50b298u: goto label_50b298;
        case 0x50b29cu: goto label_50b29c;
        case 0x50b2a0u: goto label_50b2a0;
        case 0x50b2a4u: goto label_50b2a4;
        case 0x50b2a8u: goto label_50b2a8;
        case 0x50b2acu: goto label_50b2ac;
        case 0x50b2b0u: goto label_50b2b0;
        case 0x50b2b4u: goto label_50b2b4;
        case 0x50b2b8u: goto label_50b2b8;
        case 0x50b2bcu: goto label_50b2bc;
        case 0x50b2c0u: goto label_50b2c0;
        case 0x50b2c4u: goto label_50b2c4;
        case 0x50b2c8u: goto label_50b2c8;
        case 0x50b2ccu: goto label_50b2cc;
        default: break;
    }

    ctx->pc = 0x50b1d0u;

label_50b1d0:
    // 0x50b1d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x50b1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_50b1d4:
    // 0x50b1d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x50b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_50b1d8:
    // 0x50b1d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50b1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50b1dc:
    // 0x50b1dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50b1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50b1e0:
    // 0x50b1e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x50b1e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50b1e4:
    // 0x50b1e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50b1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50b1e8:
    // 0x50b1e8: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x50b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_50b1ec:
    // 0x50b1ec: 0x8c900054  lw          $s0, 0x54($a0)
    ctx->pc = 0x50b1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_50b1f0:
    // 0x50b1f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50b1f4:
    // 0x50b1f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x50b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_50b1f8:
    // 0x50b1f8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x50b1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_50b1fc:
    // 0x50b1fc: 0xc0c0e5c  jal         func_303970
label_50b200:
    if (ctx->pc == 0x50B200u) {
        ctx->pc = 0x50B200u;
            // 0x50b200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50B204u;
        goto label_50b204;
    }
    ctx->pc = 0x50B1FCu;
    SET_GPR_U32(ctx, 31, 0x50B204u);
    ctx->pc = 0x50B200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B1FCu;
            // 0x50b200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303970u;
    if (runtime->hasFunction(0x303970u)) {
        auto targetFn = runtime->lookupFunction(0x303970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B204u; }
        if (ctx->pc != 0x50B204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303970_0x303970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B204u; }
        if (ctx->pc != 0x50B204u) { return; }
    }
    ctx->pc = 0x50B204u;
label_50b204:
    // 0x50b204: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x50b204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50b208:
    // 0x50b208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50b208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50b20c:
    // 0x50b20c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x50b20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_50b210:
    // 0x50b210: 0x320f809  jalr        $t9
label_50b214:
    if (ctx->pc == 0x50B214u) {
        ctx->pc = 0x50B214u;
            // 0x50b214: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x50B218u;
        goto label_50b218;
    }
    ctx->pc = 0x50B210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50B218u);
        ctx->pc = 0x50B214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B210u;
            // 0x50b214: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50B218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50B218u; }
            if (ctx->pc != 0x50B218u) { return; }
        }
        }
    }
    ctx->pc = 0x50B218u;
label_50b218:
    // 0x50b218: 0x924500a0  lbu         $a1, 0xA0($s2)
    ctx->pc = 0x50b218u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 160)));
label_50b21c:
    // 0x50b21c: 0x8e460094  lw          $a2, 0x94($s2)
    ctx->pc = 0x50b21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_50b220:
    // 0x50b220: 0xc0765fc  jal         func_1D97F0
label_50b224:
    if (ctx->pc == 0x50B224u) {
        ctx->pc = 0x50B224u;
            // 0x50b224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50B228u;
        goto label_50b228;
    }
    ctx->pc = 0x50B220u;
    SET_GPR_U32(ctx, 31, 0x50B228u);
    ctx->pc = 0x50B224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B220u;
            // 0x50b224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D97F0u;
    if (runtime->hasFunction(0x1D97F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D97F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B228u; }
        if (ctx->pc != 0x50B228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D97F0_0x1d97f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B228u; }
        if (ctx->pc != 0x50B228u) { return; }
    }
    ctx->pc = 0x50B228u;
label_50b228:
    // 0x50b228: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x50b228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_50b22c:
    // 0x50b22c: 0xc0754b4  jal         func_1D52D0
label_50b230:
    if (ctx->pc == 0x50B230u) {
        ctx->pc = 0x50B230u;
            // 0x50b230: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->pc = 0x50B234u;
        goto label_50b234;
    }
    ctx->pc = 0x50B22Cu;
    SET_GPR_U32(ctx, 31, 0x50B234u);
    ctx->pc = 0x50B230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B22Cu;
            // 0x50b230: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B234u; }
        if (ctx->pc != 0x50B234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B234u; }
        if (ctx->pc != 0x50B234u) { return; }
    }
    ctx->pc = 0x50B234u;
label_50b234:
    // 0x50b234: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x50b234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_50b238:
    // 0x50b238: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x50b238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_50b23c:
    // 0x50b23c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x50b23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_50b240:
    // 0x50b240: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_50b244:
    if (ctx->pc == 0x50B244u) {
        ctx->pc = 0x50B244u;
            // 0x50b244: 0x8e030d6c  lw          $v1, 0xD6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
        ctx->pc = 0x50B248u;
        goto label_50b248;
    }
    ctx->pc = 0x50B240u;
    {
        const bool branch_taken_0x50b240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b240) {
            ctx->pc = 0x50B244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B240u;
            // 0x50b244: 0x8e030d6c  lw          $v1, 0xD6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B258u;
            goto label_50b258;
        }
    }
    ctx->pc = 0x50B248u;
label_50b248:
    // 0x50b248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50b248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50b24c:
    // 0x50b24c: 0xc1424a8  jal         func_5092A0
label_50b250:
    if (ctx->pc == 0x50B250u) {
        ctx->pc = 0x50B250u;
            // 0x50b250: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x50B254u;
        goto label_50b254;
    }
    ctx->pc = 0x50B24Cu;
    SET_GPR_U32(ctx, 31, 0x50B254u);
    ctx->pc = 0x50B250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B24Cu;
            // 0x50b250: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5092A0u;
    if (runtime->hasFunction(0x5092A0u)) {
        auto targetFn = runtime->lookupFunction(0x5092A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B254u; }
        if (ctx->pc != 0x50B254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005092A0_0x5092a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B254u; }
        if (ctx->pc != 0x50B254u) { return; }
    }
    ctx->pc = 0x50B254u;
label_50b254:
    // 0x50b254: 0x8e030d6c  lw          $v1, 0xD6C($s0)
    ctx->pc = 0x50b254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_50b258:
    // 0x50b258: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x50b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_50b25c:
    // 0x50b25c: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x50b25cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_50b260:
    // 0x50b260: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x50b260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_50b264:
    // 0x50b264: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x50b264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_50b268:
    // 0x50b268: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x50b268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
label_50b26c:
    // 0x50b26c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x50b26cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_50b270:
    // 0x50b270: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50b270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_50b274:
    // 0x50b274: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_50b278:
    if (ctx->pc == 0x50B278u) {
        ctx->pc = 0x50B278u;
            // 0x50b278: 0x260407e0  addiu       $a0, $s0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
        ctx->pc = 0x50B27Cu;
        goto label_50b27c;
    }
    ctx->pc = 0x50B274u;
    {
        const bool branch_taken_0x50b274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b274) {
            ctx->pc = 0x50B278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B274u;
            // 0x50b278: 0x260407e0  addiu       $a0, $s0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B2ACu;
            goto label_50b2ac;
        }
    }
    ctx->pc = 0x50B27Cu;
label_50b27c:
    // 0x50b27c: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x50b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_50b280:
    // 0x50b280: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x50b280u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_50b284:
    // 0x50b284: 0xc0bd780  jal         func_2F5E00
label_50b288:
    if (ctx->pc == 0x50B288u) {
        ctx->pc = 0x50B288u;
            // 0x50b288: 0x2631f7d0  addiu       $s1, $s1, -0x830 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965200));
        ctx->pc = 0x50B28Cu;
        goto label_50b28c;
    }
    ctx->pc = 0x50B284u;
    SET_GPR_U32(ctx, 31, 0x50B28Cu);
    ctx->pc = 0x50B288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B284u;
            // 0x50b288: 0x2631f7d0  addiu       $s1, $s1, -0x830 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B28Cu; }
        if (ctx->pc != 0x50B28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B28Cu; }
        if (ctx->pc != 0x50B28Cu) { return; }
    }
    ctx->pc = 0x50B28Cu;
label_50b28c:
    // 0x50b28c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x50b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50b290:
    // 0x50b290: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x50b290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_50b294:
    // 0x50b294: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50b294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50b298:
    // 0x50b298: 0x2442fb10  addiu       $v0, $v0, -0x4F0
    ctx->pc = 0x50b298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966032));
label_50b29c:
    // 0x50b29c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_50b2a0:
    // 0x50b2a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x50b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_50b2a4:
    // 0x50b2a4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x50b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_50b2a8:
    // 0x50b2a8: 0x260407e0  addiu       $a0, $s0, 0x7E0
    ctx->pc = 0x50b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
label_50b2ac:
    // 0x50b2ac: 0xc0b9210  jal         func_2E4840
label_50b2b0:
    if (ctx->pc == 0x50B2B0u) {
        ctx->pc = 0x50B2B4u;
        goto label_50b2b4;
    }
    ctx->pc = 0x50B2ACu;
    SET_GPR_U32(ctx, 31, 0x50B2B4u);
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B2B4u; }
        if (ctx->pc != 0x50B2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B2B4u; }
        if (ctx->pc != 0x50B2B4u) { return; }
    }
    ctx->pc = 0x50B2B4u;
label_50b2b4:
    // 0x50b2b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x50b2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_50b2b8:
    // 0x50b2b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50b2b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50b2bc:
    // 0x50b2bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50b2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50b2c0:
    // 0x50b2c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50b2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50b2c4:
    // 0x50b2c4: 0x3e00008  jr          $ra
label_50b2c8:
    if (ctx->pc == 0x50B2C8u) {
        ctx->pc = 0x50B2C8u;
            // 0x50b2c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x50B2CCu;
        goto label_50b2cc;
    }
    ctx->pc = 0x50B2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B2C4u;
            // 0x50b2c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B2CCu;
label_50b2cc:
    // 0x50b2cc: 0x0  nop
    ctx->pc = 0x50b2ccu;
    // NOP
}
