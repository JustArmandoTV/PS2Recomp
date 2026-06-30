#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AC260
// Address: 0x2ac260 - 0x2ac350
void sub_002AC260_0x2ac260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC260_0x2ac260");
#endif

    switch (ctx->pc) {
        case 0x2ac260u: goto label_2ac260;
        case 0x2ac264u: goto label_2ac264;
        case 0x2ac268u: goto label_2ac268;
        case 0x2ac26cu: goto label_2ac26c;
        case 0x2ac270u: goto label_2ac270;
        case 0x2ac274u: goto label_2ac274;
        case 0x2ac278u: goto label_2ac278;
        case 0x2ac27cu: goto label_2ac27c;
        case 0x2ac280u: goto label_2ac280;
        case 0x2ac284u: goto label_2ac284;
        case 0x2ac288u: goto label_2ac288;
        case 0x2ac28cu: goto label_2ac28c;
        case 0x2ac290u: goto label_2ac290;
        case 0x2ac294u: goto label_2ac294;
        case 0x2ac298u: goto label_2ac298;
        case 0x2ac29cu: goto label_2ac29c;
        case 0x2ac2a0u: goto label_2ac2a0;
        case 0x2ac2a4u: goto label_2ac2a4;
        case 0x2ac2a8u: goto label_2ac2a8;
        case 0x2ac2acu: goto label_2ac2ac;
        case 0x2ac2b0u: goto label_2ac2b0;
        case 0x2ac2b4u: goto label_2ac2b4;
        case 0x2ac2b8u: goto label_2ac2b8;
        case 0x2ac2bcu: goto label_2ac2bc;
        case 0x2ac2c0u: goto label_2ac2c0;
        case 0x2ac2c4u: goto label_2ac2c4;
        case 0x2ac2c8u: goto label_2ac2c8;
        case 0x2ac2ccu: goto label_2ac2cc;
        case 0x2ac2d0u: goto label_2ac2d0;
        case 0x2ac2d4u: goto label_2ac2d4;
        case 0x2ac2d8u: goto label_2ac2d8;
        case 0x2ac2dcu: goto label_2ac2dc;
        case 0x2ac2e0u: goto label_2ac2e0;
        case 0x2ac2e4u: goto label_2ac2e4;
        case 0x2ac2e8u: goto label_2ac2e8;
        case 0x2ac2ecu: goto label_2ac2ec;
        case 0x2ac2f0u: goto label_2ac2f0;
        case 0x2ac2f4u: goto label_2ac2f4;
        case 0x2ac2f8u: goto label_2ac2f8;
        case 0x2ac2fcu: goto label_2ac2fc;
        case 0x2ac300u: goto label_2ac300;
        case 0x2ac304u: goto label_2ac304;
        case 0x2ac308u: goto label_2ac308;
        case 0x2ac30cu: goto label_2ac30c;
        case 0x2ac310u: goto label_2ac310;
        case 0x2ac314u: goto label_2ac314;
        case 0x2ac318u: goto label_2ac318;
        case 0x2ac31cu: goto label_2ac31c;
        case 0x2ac320u: goto label_2ac320;
        case 0x2ac324u: goto label_2ac324;
        case 0x2ac328u: goto label_2ac328;
        case 0x2ac32cu: goto label_2ac32c;
        case 0x2ac330u: goto label_2ac330;
        case 0x2ac334u: goto label_2ac334;
        case 0x2ac338u: goto label_2ac338;
        case 0x2ac33cu: goto label_2ac33c;
        case 0x2ac340u: goto label_2ac340;
        case 0x2ac344u: goto label_2ac344;
        case 0x2ac348u: goto label_2ac348;
        case 0x2ac34cu: goto label_2ac34c;
        default: break;
    }

    ctx->pc = 0x2ac260u;

label_2ac260:
    // 0x2ac260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ac264:
    // 0x2ac264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac268:
    // 0x2ac268: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ac268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ac26c:
    // 0x2ac26c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ac26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ac270:
    // 0x2ac270: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2ac270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2ac274:
    // 0x2ac274: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2ac278:
    if (ctx->pc == 0x2AC278u) {
        ctx->pc = 0x2AC278u;
            // 0x2ac278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AC27Cu;
        goto label_2ac27c;
    }
    ctx->pc = 0x2AC274u;
    {
        const bool branch_taken_0x2ac274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AC278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC274u;
            // 0x2ac278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac274) {
            ctx->pc = 0x2AC28Cu;
            goto label_2ac28c;
        }
    }
    ctx->pc = 0x2AC27Cu;
label_2ac27c:
    // 0x2ac27c: 0xc0ab06c  jal         func_2AC1B0
label_2ac280:
    if (ctx->pc == 0x2AC280u) {
        ctx->pc = 0x2AC284u;
        goto label_2ac284;
    }
    ctx->pc = 0x2AC27Cu;
    SET_GPR_U32(ctx, 31, 0x2AC284u);
    ctx->pc = 0x2AC1B0u;
    if (runtime->hasFunction(0x2AC1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2AC1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC284u; }
        if (ctx->pc != 0x2AC284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC1B0_0x2ac1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC284u; }
        if (ctx->pc != 0x2AC284u) { return; }
    }
    ctx->pc = 0x2AC284u;
label_2ac284:
    // 0x2ac284: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2ac288:
    if (ctx->pc == 0x2AC288u) {
        ctx->pc = 0x2AC28Cu;
        goto label_2ac28c;
    }
    ctx->pc = 0x2AC284u;
    {
        const bool branch_taken_0x2ac284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac284) {
            ctx->pc = 0x2AC340u;
            goto label_2ac340;
        }
    }
    ctx->pc = 0x2AC28Cu;
label_2ac28c:
    // 0x2ac28c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2ac28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ac290:
    // 0x2ac290: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ac290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ac294:
    // 0x2ac294: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ac294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac298:
    // 0x2ac298: 0x330c2  srl         $a2, $v1, 3
    ctx->pc = 0x2ac298u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_2ac29c:
    // 0x2ac29c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x2ac29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2ac2a0:
    // 0x2ac2a0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2ac2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_2ac2a4:
    // 0x2ac2a4: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x2ac2a4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_2ac2a8:
    // 0x2ac2a8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2ac2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ac2ac:
    // 0x2ac2ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ac2acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ac2b0:
    // 0x2ac2b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ac2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ac2b4:
    // 0x2ac2b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ac2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ac2b8:
    // 0x2ac2b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ac2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ac2bc:
    // 0x2ac2bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ac2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ac2c0:
    // 0x2ac2c0: 0x1010  mfhi        $v0
    ctx->pc = 0x2ac2c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2ac2c4:
    // 0x2ac2c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ac2c8:
    // 0x2ac2c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ac2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ac2cc:
    // 0x2ac2cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ac2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ac2d0:
    // 0x2ac2d0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2ac2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ac2d4:
    // 0x2ac2d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ac2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ac2d8:
    // 0x2ac2d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2ac2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2ac2dc:
    // 0x2ac2dc: 0x320f809  jalr        $t9
label_2ac2e0:
    if (ctx->pc == 0x2AC2E0u) {
        ctx->pc = 0x2AC2E0u;
            // 0x2ac2e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AC2E4u;
        goto label_2ac2e4;
    }
    ctx->pc = 0x2AC2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AC2E4u);
        ctx->pc = 0x2AC2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC2DCu;
            // 0x2ac2e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AC2E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AC2E4u; }
            if (ctx->pc != 0x2AC2E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2AC2E4u;
label_2ac2e4:
    // 0x2ac2e4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2ac2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2ac2e8:
    // 0x2ac2e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ac2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2ac2ec:
    // 0x2ac2ec: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2ac2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2ac2f0:
    // 0x2ac2f0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2ac2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ac2f4:
    // 0x2ac2f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ac2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ac2f8:
    // 0x2ac2f8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2ac2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_2ac2fc:
    // 0x2ac2fc: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x2ac2fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2ac300:
    // 0x2ac300: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_2ac304:
    if (ctx->pc == 0x2AC304u) {
        ctx->pc = 0x2AC308u;
        goto label_2ac308;
    }
    ctx->pc = 0x2AC300u;
    {
        const bool branch_taken_0x2ac300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac300) {
            ctx->pc = 0x2AC340u;
            goto label_2ac340;
        }
    }
    ctx->pc = 0x2AC308u;
label_2ac308:
    // 0x2ac308: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ac308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ac30c:
    // 0x2ac30c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ac30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ac310:
    // 0x2ac310: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ac310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ac314:
    // 0x2ac314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ac314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ac318:
    // 0x2ac318: 0xc0400a8  jal         func_1002A0
label_2ac31c:
    if (ctx->pc == 0x2AC31Cu) {
        ctx->pc = 0x2AC31Cu;
            // 0x2ac31c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2AC320u;
        goto label_2ac320;
    }
    ctx->pc = 0x2AC318u;
    SET_GPR_U32(ctx, 31, 0x2AC320u);
    ctx->pc = 0x2AC31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC318u;
            // 0x2ac31c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC320u; }
        if (ctx->pc != 0x2AC320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC320u; }
        if (ctx->pc != 0x2AC320u) { return; }
    }
    ctx->pc = 0x2AC320u;
label_2ac320:
    // 0x2ac320: 0xc0ab314  jal         func_2ACC50
label_2ac324:
    if (ctx->pc == 0x2AC324u) {
        ctx->pc = 0x2AC324u;
            // 0x2ac324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AC328u;
        goto label_2ac328;
    }
    ctx->pc = 0x2AC320u;
    SET_GPR_U32(ctx, 31, 0x2AC328u);
    ctx->pc = 0x2AC324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC320u;
            // 0x2ac324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACC50u;
    if (runtime->hasFunction(0x2ACC50u)) {
        auto targetFn = runtime->lookupFunction(0x2ACC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC328u; }
        if (ctx->pc != 0x2AC328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACC50_0x2acc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC328u; }
        if (ctx->pc != 0x2AC328u) { return; }
    }
    ctx->pc = 0x2AC328u;
label_2ac328:
    // 0x2ac328: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2ac328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ac32c:
    // 0x2ac32c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2ac32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_2ac330:
    // 0x2ac330: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x2ac330u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2ac334:
    // 0x2ac334: 0x1020fff4  beqz        $at, . + 4 + (-0xC << 2)
label_2ac338:
    if (ctx->pc == 0x2AC338u) {
        ctx->pc = 0x2AC338u;
            // 0x2ac338: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x2AC33Cu;
        goto label_2ac33c;
    }
    ctx->pc = 0x2AC334u;
    {
        const bool branch_taken_0x2ac334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC334u;
            // 0x2ac338: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac334) {
            ctx->pc = 0x2AC308u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac308;
        }
    }
    ctx->pc = 0x2AC33Cu;
label_2ac33c:
    // 0x2ac33c: 0x0  nop
    ctx->pc = 0x2ac33cu;
    // NOP
label_2ac340:
    // 0x2ac340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ac340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ac344:
    // 0x2ac344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ac344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ac348:
    // 0x2ac348: 0x3e00008  jr          $ra
label_2ac34c:
    if (ctx->pc == 0x2AC34Cu) {
        ctx->pc = 0x2AC34Cu;
            // 0x2ac34c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2AC350u;
        goto label_fallthrough_0x2ac348;
    }
    ctx->pc = 0x2AC348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC348u;
            // 0x2ac34c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ac348:
    ctx->pc = 0x2AC350u;
}
