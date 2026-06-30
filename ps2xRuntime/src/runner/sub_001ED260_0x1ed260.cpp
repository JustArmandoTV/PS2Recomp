#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED260
// Address: 0x1ed260 - 0x1ed310
void sub_001ED260_0x1ed260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED260_0x1ed260");
#endif

    switch (ctx->pc) {
        case 0x1ed260u: goto label_1ed260;
        case 0x1ed264u: goto label_1ed264;
        case 0x1ed268u: goto label_1ed268;
        case 0x1ed26cu: goto label_1ed26c;
        case 0x1ed270u: goto label_1ed270;
        case 0x1ed274u: goto label_1ed274;
        case 0x1ed278u: goto label_1ed278;
        case 0x1ed27cu: goto label_1ed27c;
        case 0x1ed280u: goto label_1ed280;
        case 0x1ed284u: goto label_1ed284;
        case 0x1ed288u: goto label_1ed288;
        case 0x1ed28cu: goto label_1ed28c;
        case 0x1ed290u: goto label_1ed290;
        case 0x1ed294u: goto label_1ed294;
        case 0x1ed298u: goto label_1ed298;
        case 0x1ed29cu: goto label_1ed29c;
        case 0x1ed2a0u: goto label_1ed2a0;
        case 0x1ed2a4u: goto label_1ed2a4;
        case 0x1ed2a8u: goto label_1ed2a8;
        case 0x1ed2acu: goto label_1ed2ac;
        case 0x1ed2b0u: goto label_1ed2b0;
        case 0x1ed2b4u: goto label_1ed2b4;
        case 0x1ed2b8u: goto label_1ed2b8;
        case 0x1ed2bcu: goto label_1ed2bc;
        case 0x1ed2c0u: goto label_1ed2c0;
        case 0x1ed2c4u: goto label_1ed2c4;
        case 0x1ed2c8u: goto label_1ed2c8;
        case 0x1ed2ccu: goto label_1ed2cc;
        case 0x1ed2d0u: goto label_1ed2d0;
        case 0x1ed2d4u: goto label_1ed2d4;
        case 0x1ed2d8u: goto label_1ed2d8;
        case 0x1ed2dcu: goto label_1ed2dc;
        case 0x1ed2e0u: goto label_1ed2e0;
        case 0x1ed2e4u: goto label_1ed2e4;
        case 0x1ed2e8u: goto label_1ed2e8;
        case 0x1ed2ecu: goto label_1ed2ec;
        case 0x1ed2f0u: goto label_1ed2f0;
        case 0x1ed2f4u: goto label_1ed2f4;
        case 0x1ed2f8u: goto label_1ed2f8;
        case 0x1ed2fcu: goto label_1ed2fc;
        case 0x1ed300u: goto label_1ed300;
        case 0x1ed304u: goto label_1ed304;
        case 0x1ed308u: goto label_1ed308;
        case 0x1ed30cu: goto label_1ed30c;
        default: break;
    }

    ctx->pc = 0x1ed260u;

label_1ed260:
    // 0x1ed260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ed264:
    // 0x1ed264: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ed264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ed268:
    // 0x1ed268: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ed268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ed26c:
    // 0x1ed26c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ed270:
    // 0x1ed270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ed274:
    // 0x1ed274: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x1ed274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1ed278:
    // 0x1ed278: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1ed278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ed27c:
    // 0x1ed27c: 0xc091680  jal         func_245A00
label_1ed280:
    if (ctx->pc == 0x1ED280u) {
        ctx->pc = 0x1ED280u;
            // 0x1ed280: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x1ED284u;
        goto label_1ed284;
    }
    ctx->pc = 0x1ED27Cu;
    SET_GPR_U32(ctx, 31, 0x1ED284u);
    ctx->pc = 0x1ED280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED27Cu;
            // 0x1ed280: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245A00u;
    if (runtime->hasFunction(0x245A00u)) {
        auto targetFn = runtime->lookupFunction(0x245A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED284u; }
        if (ctx->pc != 0x1ED284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245A00_0x245a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED284u; }
        if (ctx->pc != 0x1ED284u) { return; }
    }
    ctx->pc = 0x1ED284u;
label_1ed284:
    // 0x1ed284: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ed284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1ed288:
    // 0x1ed288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed28c:
    // 0x1ed28c: 0xa2030084  sb          $v1, 0x84($s0)
    ctx->pc = 0x1ed28cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 3));
label_1ed290:
    // 0x1ed290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed294:
    // 0x1ed294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed298:
    // 0x1ed298: 0x3e00008  jr          $ra
label_1ed29c:
    if (ctx->pc == 0x1ED29Cu) {
        ctx->pc = 0x1ED29Cu;
            // 0x1ed29c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1ED2A0u;
        goto label_1ed2a0;
    }
    ctx->pc = 0x1ED298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED298u;
            // 0x1ed29c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED2A0u;
label_1ed2a0:
    // 0x1ed2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ed2a4:
    // 0x1ed2a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ed2a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ed2a8:
    // 0x1ed2a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ed2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ed2ac:
    // 0x1ed2ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ed2b0:
    // 0x1ed2b0: 0x80820084  lb          $v0, 0x84($a0)
    ctx->pc = 0x1ed2b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
label_1ed2b4:
    // 0x1ed2b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1ed2b8:
    if (ctx->pc == 0x1ED2B8u) {
        ctx->pc = 0x1ED2B8u;
            // 0x1ed2b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2BCu;
        goto label_1ed2bc;
    }
    ctx->pc = 0x1ED2B4u;
    {
        const bool branch_taken_0x1ed2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2B4u;
            // 0x1ed2b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2b4) {
            ctx->pc = 0x1ED2D4u;
            goto label_1ed2d4;
        }
    }
    ctx->pc = 0x1ED2BCu;
label_1ed2bc:
    // 0x1ed2bc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1ed2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ed2c0:
    // 0x1ed2c0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1ed2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ed2c4:
    // 0x1ed2c4: 0xc098768  jal         func_261DA0
label_1ed2c8:
    if (ctx->pc == 0x1ED2C8u) {
        ctx->pc = 0x1ED2C8u;
            // 0x1ed2c8: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x1ED2CCu;
        goto label_1ed2cc;
    }
    ctx->pc = 0x1ED2C4u;
    SET_GPR_U32(ctx, 31, 0x1ED2CCu);
    ctx->pc = 0x1ED2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2C4u;
            // 0x1ed2c8: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261DA0u;
    if (runtime->hasFunction(0x261DA0u)) {
        auto targetFn = runtime->lookupFunction(0x261DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2CCu; }
        if (ctx->pc != 0x1ED2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261DA0_0x261da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2CCu; }
        if (ctx->pc != 0x1ED2CCu) { return; }
    }
    ctx->pc = 0x1ED2CCu;
label_1ed2cc:
    // 0x1ed2cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ed2d0:
    if (ctx->pc == 0x1ED2D0u) {
        ctx->pc = 0x1ED2D4u;
        goto label_1ed2d4;
    }
    ctx->pc = 0x1ED2CCu;
    {
        const bool branch_taken_0x1ed2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2cc) {
            ctx->pc = 0x1ED2E4u;
            goto label_1ed2e4;
        }
    }
    ctx->pc = 0x1ED2D4u;
label_1ed2d4:
    // 0x1ed2d4: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x1ed2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1ed2d8:
    // 0x1ed2d8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1ed2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ed2dc:
    // 0x1ed2dc: 0xc091680  jal         func_245A00
label_1ed2e0:
    if (ctx->pc == 0x1ED2E0u) {
        ctx->pc = 0x1ED2E0u;
            // 0x1ed2e0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x1ED2E4u;
        goto label_1ed2e4;
    }
    ctx->pc = 0x1ED2DCu;
    SET_GPR_U32(ctx, 31, 0x1ED2E4u);
    ctx->pc = 0x1ED2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2DCu;
            // 0x1ed2e0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245A00u;
    if (runtime->hasFunction(0x245A00u)) {
        auto targetFn = runtime->lookupFunction(0x245A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2E4u; }
        if (ctx->pc != 0x1ED2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245A00_0x245a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2E4u; }
        if (ctx->pc != 0x1ED2E4u) { return; }
    }
    ctx->pc = 0x1ED2E4u;
label_1ed2e4:
    // 0x1ed2e4: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_1ed2e8:
    if (ctx->pc == 0x1ED2E8u) {
        ctx->pc = 0x1ED2E8u;
            // 0x1ed2e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1ED2ECu;
        goto label_1ed2ec;
    }
    ctx->pc = 0x1ED2E4u;
    {
        const bool branch_taken_0x1ed2e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2e4) {
            ctx->pc = 0x1ED2E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2E4u;
            // 0x1ed2e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ED304u;
            goto label_1ed304;
        }
    }
    ctx->pc = 0x1ED2ECu;
label_1ed2ec:
    // 0x1ed2ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1ed2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed2f0:
    // 0x1ed2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ed2f4:
    // 0x1ed2f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ed2f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ed2f8:
    // 0x1ed2f8: 0x320f809  jalr        $t9
label_1ed2fc:
    if (ctx->pc == 0x1ED2FCu) {
        ctx->pc = 0x1ED2FCu;
            // 0x1ed2fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1ED300u;
        goto label_1ed300;
    }
    ctx->pc = 0x1ED2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ED300u);
        ctx->pc = 0x1ED2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED2F8u;
            // 0x1ed2fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED300u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED300u; }
            if (ctx->pc != 0x1ED300u) { return; }
        }
        }
    }
    ctx->pc = 0x1ED300u;
label_1ed300:
    // 0x1ed300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed304:
    // 0x1ed304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed308:
    // 0x1ed308: 0x3e00008  jr          $ra
label_1ed30c:
    if (ctx->pc == 0x1ED30Cu) {
        ctx->pc = 0x1ED30Cu;
            // 0x1ed30c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1ED310u;
        goto label_fallthrough_0x1ed308;
    }
    ctx->pc = 0x1ED308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED308u;
            // 0x1ed30c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1ed308:
    ctx->pc = 0x1ED310u;
}
