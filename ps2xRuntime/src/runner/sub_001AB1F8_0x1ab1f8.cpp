#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB1F8
// Address: 0x1ab1f8 - 0x1ab338
void sub_001AB1F8_0x1ab1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB1F8_0x1ab1f8");
#endif

    switch (ctx->pc) {
        case 0x1ab238u: goto label_1ab238;
        case 0x1ab240u: goto label_1ab240;
        case 0x1ab248u: goto label_1ab248;
        case 0x1ab274u: goto label_1ab274;
        case 0x1ab2c4u: goto label_1ab2c4;
        case 0x1ab2f4u: goto label_1ab2f4;
        case 0x1ab308u: goto label_1ab308;
        case 0x1ab31cu: goto label_1ab31c;
        default: break;
    }

    ctx->pc = 0x1ab1f8u;

    // 0x1ab1f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab1fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab200: 0xac860d74  sw          $a2, 0xD74($a0)
    ctx->pc = 0x1ab200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3444), GPR_U32(ctx, 6));
    // 0x1ab204: 0x8c822030  lw          $v0, 0x2030($a0)
    ctx->pc = 0x1ab204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1ab208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab20c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ab20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ab210: 0xac850d7c  sw          $a1, 0xD7C($a0)
    ctx->pc = 0x1ab210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3452), GPR_U32(ctx, 5));
    // 0x1ab214: 0xac870d78  sw          $a3, 0xD78($a0)
    ctx->pc = 0x1ab214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3448), GPR_U32(ctx, 7));
    // 0x1ab218: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1ab218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab21c: 0x8065990  j           func_196640
    ctx->pc = 0x1AB21Cu;
    ctx->pc = 0x1AB220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB21Cu;
            // 0x1ab220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196640u;
    {
        auto targetFn = runtime->lookupFunction(0x196640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1AB224u;
    // 0x1ab224: 0x0  nop
    ctx->pc = 0x1ab224u;
    // NOP
    // 0x1ab228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab22c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab230: 0xc06c534  jal         func_1B14D0
    ctx->pc = 0x1AB230u;
    SET_GPR_U32(ctx, 31, 0x1AB238u);
    ctx->pc = 0x1B14D0u;
    if (runtime->hasFunction(0x1B14D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB238u; }
        if (ctx->pc != 0x1AB238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14D0_0x1b14d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB238u; }
        if (ctx->pc != 0x1AB238u) { return; }
    }
    ctx->pc = 0x1AB238u;
label_1ab238:
    // 0x1ab238: 0xc06acce  jal         func_1AB338
    ctx->pc = 0x1AB238u;
    SET_GPR_U32(ctx, 31, 0x1AB240u);
    ctx->pc = 0x1AB338u;
    if (runtime->hasFunction(0x1AB338u)) {
        auto targetFn = runtime->lookupFunction(0x1AB338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB240u; }
        if (ctx->pc != 0x1AB240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB338_0x1ab338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB240u; }
        if (ctx->pc != 0x1AB240u) { return; }
    }
    ctx->pc = 0x1AB240u;
label_1ab240:
    // 0x1ab240: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB240u;
    {
        const bool branch_taken_0x1ab240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB240u;
            // 0x1ab244: 0x3c05006e  lui         $a1, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)110 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab240) {
            ctx->pc = 0x1AB268u;
            goto label_1ab268;
        }
    }
    ctx->pc = 0x1AB248u;
label_1ab248:
    // 0x1ab248: 0x0  nop
    ctx->pc = 0x1ab248u;
    // NOP
    // 0x1ab24c: 0x0  nop
    ctx->pc = 0x1ab24cu;
    // NOP
    // 0x1ab250: 0x0  nop
    ctx->pc = 0x1ab250u;
    // NOP
    // 0x1ab254: 0x0  nop
    ctx->pc = 0x1ab254u;
    // NOP
    // 0x1ab258: 0x0  nop
    ctx->pc = 0x1ab258u;
    // NOP
    // 0x1ab25c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AB25Cu;
    {
        const bool branch_taken_0x1ab25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab25c) {
            ctx->pc = 0x1AB248u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ab248;
        }
    }
    ctx->pc = 0x1AB264u;
    // 0x1ab264: 0x0  nop
    ctx->pc = 0x1ab264u;
    // NOP
label_1ab268:
    // 0x1ab268: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1ab268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ab26c: 0xc065798  jal         func_195E60
    ctx->pc = 0x1AB26Cu;
    SET_GPR_U32(ctx, 31, 0x1AB274u);
    ctx->pc = 0x1AB270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB26Cu;
            // 0x1ab270: 0x24a5da70  addiu       $a1, $a1, -0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195E60u;
    if (runtime->hasFunction(0x195E60u)) {
        auto targetFn = runtime->lookupFunction(0x195E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB274u; }
        if (ctx->pc != 0x1AB274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195E60_0x195e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB274u; }
        if (ctx->pc != 0x1AB274u) { return; }
    }
    ctx->pc = 0x1AB274u;
label_1ab274:
    // 0x1ab274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab278: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AB278u;
    {
        const bool branch_taken_0x1ab278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB278u;
            // 0x1ab27c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab278) {
            ctx->pc = 0x1AB2B0u;
            goto label_1ab2b0;
        }
    }
    ctx->pc = 0x1AB280u;
    // 0x1ab280: 0x3c02ff03  lui         $v0, 0xFF03
    ctx->pc = 0x1ab280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65283 << 16));
    // 0x1ab284: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1ab284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1ab288: 0x3442ff05  ori         $v0, $v0, 0xFF05
    ctx->pc = 0x1ab288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65285);
    // 0x1ab28c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ab28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ab290: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x1ab290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x1ab294: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ab294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab298: 0x34630f01  ori         $v1, $v1, 0xF01
    ctx->pc = 0x1ab298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3841);
    // 0x1ab29c: 0x34a50f13  ori         $a1, $a1, 0xF13
    ctx->pc = 0x1ab29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3859);
    // 0x1ab2a0: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1ab2a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1ab2a4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AB2A4u;
    ctx->pc = 0x1AB2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB2A4u;
            // 0x1ab2a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AB2ACu;
    // 0x1ab2ac: 0x0  nop
    ctx->pc = 0x1ab2acu;
    // NOP
label_1ab2b0:
    // 0x1ab2b0: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1ab2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1ab2b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ab2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab2b8: 0x24a5f7f8  addiu       $a1, $a1, -0x808
    ctx->pc = 0x1ab2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965240));
    // 0x1ab2bc: 0xc064ed6  jal         func_193B58
    ctx->pc = 0x1AB2BCu;
    SET_GPR_U32(ctx, 31, 0x1AB2C4u);
    ctx->pc = 0x1AB2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB2BCu;
            // 0x1ab2c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193B58u;
    if (runtime->hasFunction(0x193B58u)) {
        auto targetFn = runtime->lookupFunction(0x193B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2C4u; }
        if (ctx->pc != 0x1AB2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193B58_0x193b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2C4u; }
        if (ctx->pc != 0x1AB2C4u) { return; }
    }
    ctx->pc = 0x1AB2C4u;
label_1ab2c4:
    // 0x1ab2c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB2C4u;
    {
        const bool branch_taken_0x1ab2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB2C4u;
            // 0x1ab2c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab2c4) {
            ctx->pc = 0x1AB2E0u;
            goto label_1ab2e0;
        }
    }
    ctx->pc = 0x1AB2CCu;
    // 0x1ab2cc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ab2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ab2d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ab2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab2d4: 0x34a50f0b  ori         $a1, $a1, 0xF0B
    ctx->pc = 0x1ab2d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3851);
    // 0x1ab2d8: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AB2D8u;
    ctx->pc = 0x1AB2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB2D8u;
            // 0x1ab2dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AB2E0u;
label_1ab2e0:
    // 0x1ab2e0: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1ab2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1ab2e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab2e8: 0x24841db0  addiu       $a0, $a0, 0x1DB0
    ctx->pc = 0x1ab2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7600));
    // 0x1ab2ec: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1AB2ECu;
    SET_GPR_U32(ctx, 31, 0x1AB2F4u);
    ctx->pc = 0x1AB2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB2ECu;
            // 0x1ab2f0: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2F4u; }
        if (ctx->pc != 0x1AB2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2F4u; }
        if (ctx->pc != 0x1AB2F4u) { return; }
    }
    ctx->pc = 0x1AB2F4u;
label_1ab2f4:
    // 0x1ab2f4: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1ab2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1ab2f8: 0x24841dd8  addiu       $a0, $a0, 0x1DD8
    ctx->pc = 0x1ab2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7640));
    // 0x1ab2fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab300: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1AB300u;
    SET_GPR_U32(ctx, 31, 0x1AB308u);
    ctx->pc = 0x1AB304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB300u;
            // 0x1ab304: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB308u; }
        if (ctx->pc != 0x1AB308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB308u; }
        if (ctx->pc != 0x1AB308u) { return; }
    }
    ctx->pc = 0x1AB308u;
label_1ab308:
    // 0x1ab308: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1ab308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1ab30c: 0x24841de0  addiu       $a0, $a0, 0x1DE0
    ctx->pc = 0x1ab30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7648));
    // 0x1ab310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab314: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1AB314u;
    SET_GPR_U32(ctx, 31, 0x1AB31Cu);
    ctx->pc = 0x1AB318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB314u;
            // 0x1ab318: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB31Cu; }
        if (ctx->pc != 0x1AB31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB31Cu; }
        if (ctx->pc != 0x1AB31Cu) { return; }
    }
    ctx->pc = 0x1AB31Cu;
label_1ab31c:
    // 0x1ab31c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ab31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ab320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab328: 0xac609bb8  sw          $zero, -0x6448($v1)
    ctx->pc = 0x1ab328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941624), GPR_U32(ctx, 0));
    // 0x1ab32c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB32Cu;
            // 0x1ab330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB334u;
    // 0x1ab334: 0x0  nop
    ctx->pc = 0x1ab334u;
    // NOP
}
