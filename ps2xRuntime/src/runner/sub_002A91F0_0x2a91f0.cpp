#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A91F0
// Address: 0x2a91f0 - 0x2a93b0
void sub_002A91F0_0x2a91f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A91F0_0x2a91f0");
#endif

    switch (ctx->pc) {
        case 0x2a920cu: goto label_2a920c;
        case 0x2a921cu: goto label_2a921c;
        case 0x2a922cu: goto label_2a922c;
        case 0x2a9240u: goto label_2a9240;
        case 0x2a924cu: goto label_2a924c;
        case 0x2a9308u: goto label_2a9308;
        case 0x2a9314u: goto label_2a9314;
        case 0x2a9320u: goto label_2a9320;
        case 0x2a932cu: goto label_2a932c;
        case 0x2a9340u: goto label_2a9340;
        case 0x2a9380u: goto label_2a9380;
        default: break;
    }

    ctx->pc = 0x2a91f0u;

    // 0x2a91f0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2a91f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2a91f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a91f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a91f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a91f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a91fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a91fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a9200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a9200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9204: 0xc0ab06c  jal         func_2AC1B0
    ctx->pc = 0x2A9204u;
    SET_GPR_U32(ctx, 31, 0x2A920Cu);
    ctx->pc = 0x2A9208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9204u;
            // 0x2a9208: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC1B0u;
    if (runtime->hasFunction(0x2AC1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2AC1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A920Cu; }
        if (ctx->pc != 0x2A920Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC1B0_0x2ac1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A920Cu; }
        if (ctx->pc != 0x2A920Cu) { return; }
    }
    ctx->pc = 0x2A920Cu;
label_2a920c:
    // 0x2a920c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2a920cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a9210: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2a9210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a9214: 0xc0ab288  jal         func_2ACA20
    ctx->pc = 0x2A9214u;
    SET_GPR_U32(ctx, 31, 0x2A921Cu);
    ctx->pc = 0x2A9218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9214u;
            // 0x2a9218: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A921Cu; }
        if (ctx->pc != 0x2A921Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A921Cu; }
        if (ctx->pc != 0x2A921Cu) { return; }
    }
    ctx->pc = 0x2A921Cu;
label_2a921c:
    // 0x2a921c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2a921cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a9220: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a9220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a9224: 0xc0ab288  jal         func_2ACA20
    ctx->pc = 0x2A9224u;
    SET_GPR_U32(ctx, 31, 0x2A922Cu);
    ctx->pc = 0x2A9228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9224u;
            // 0x2a9228: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A922Cu; }
        if (ctx->pc != 0x2A922Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A922Cu; }
        if (ctx->pc != 0x2A922Cu) { return; }
    }
    ctx->pc = 0x2A922Cu;
label_2a922c:
    // 0x2a922c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x2a922cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a9230: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2a9230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a9234: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x2A9234u;
    {
        const bool branch_taken_0x2a9234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a9234) {
            ctx->pc = 0x2A9390u;
            goto label_2a9390;
        }
    }
    ctx->pc = 0x2A923Cu;
    // 0x2a923c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2a923cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a9240:
    // 0x2a9240: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2a9240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a9244: 0xc0ab288  jal         func_2ACA20
    ctx->pc = 0x2A9244u;
    SET_GPR_U32(ctx, 31, 0x2A924Cu);
    ctx->pc = 0x2A9248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9244u;
            // 0x2a9248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A924Cu; }
        if (ctx->pc != 0x2A924Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A924Cu; }
        if (ctx->pc != 0x2A924Cu) { return; }
    }
    ctx->pc = 0x2A924Cu;
label_2a924c:
    // 0x2a924c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x2a924cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a9250: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2a9250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a9254: 0x1482001e  bne         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A9254u;
    {
        const bool branch_taken_0x2a9254 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a9254) {
            ctx->pc = 0x2A92D0u;
            goto label_2a92d0;
        }
    }
    ctx->pc = 0x2A925Cu;
    // 0x2a925c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a925cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2a9260: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x2a9260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2a9264: 0x8c42e190  lw          $v0, -0x1E70($v0)
    ctx->pc = 0x2a9264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959504)));
    // 0x2a9268: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a9268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a926c: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x2a926cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x2a9270: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2a9270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a9274: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x2a9274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2a9278: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9278u;
    {
        const bool branch_taken_0x2a9278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9278) {
            ctx->pc = 0x2A9288u;
            goto label_2a9288;
        }
    }
    ctx->pc = 0x2A9280u;
    // 0x2a9280: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2a9280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a9284: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a9284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2a9288:
    // 0x2a9288: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x2a9288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a928c: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2a928cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2a9290: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x2a9290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x2a9294: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2A9294u;
    {
        const bool branch_taken_0x2a9294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9294u;
            // 0x2a9298: 0xafa30120  sw          $v1, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9294) {
            ctx->pc = 0x2A9370u;
            goto label_2a9370;
        }
    }
    ctx->pc = 0x2A929Cu;
    // 0x2a929c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2a929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a92a0: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x2a92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2a92a4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2a92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a92a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A92A8u;
    {
        const bool branch_taken_0x2a92a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A92ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A92A8u;
            // 0x2a92ac: 0xafa30110  sw          $v1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92a8) {
            ctx->pc = 0x2A92B8u;
            goto label_2a92b8;
        }
    }
    ctx->pc = 0x2A92B0u;
    // 0x2a92b0: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x2a92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x2a92b4: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x2a92b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_2a92b8:
    // 0x2a92b8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2a92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a92bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a92bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a92c0: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2a92c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x2a92c4: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x2a92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x2a92c8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2A92C8u;
    {
        const bool branch_taken_0x2a92c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A92CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A92C8u;
            // 0x2a92cc: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92c8) {
            ctx->pc = 0x2A9370u;
            goto label_2a9370;
        }
    }
    ctx->pc = 0x2A92D0u;
label_2a92d0:
    // 0x2a92d0: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x2a92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x2a92d4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2a92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2a92d8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2a92d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a92dc: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x2a92dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a92e0: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x2a92e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x2a92e4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2a92e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2a92e8: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x2a92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2a92ec: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2a92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2a92f0: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x2a92f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x2a92f4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a92f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a92f8: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x2a92f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x2a92fc: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x2a92fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x2a9300: 0xc0aa504  jal         func_2A9410
    ctx->pc = 0x2A9300u;
    SET_GPR_U32(ctx, 31, 0x2A9308u);
    ctx->pc = 0x2A9304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9300u;
            // 0x2a9304: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9410u;
    if (runtime->hasFunction(0x2A9410u)) {
        auto targetFn = runtime->lookupFunction(0x2A9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9308u; }
        if (ctx->pc != 0x2A9308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9410_0x2a9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9308u; }
        if (ctx->pc != 0x2A9308u) { return; }
    }
    ctx->pc = 0x2A9308u;
label_2a9308:
    // 0x2a9308: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a9308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a930c: 0xc0aa504  jal         func_2A9410
    ctx->pc = 0x2A930Cu;
    SET_GPR_U32(ctx, 31, 0x2A9314u);
    ctx->pc = 0x2A9310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A930Cu;
            // 0x2a9310: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9410u;
    if (runtime->hasFunction(0x2A9410u)) {
        auto targetFn = runtime->lookupFunction(0x2A9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9314u; }
        if (ctx->pc != 0x2A9314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9410_0x2a9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9314u; }
        if (ctx->pc != 0x2A9314u) { return; }
    }
    ctx->pc = 0x2A9314u;
label_2a9314:
    // 0x2a9314: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a9314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9318: 0xc0aa4ec  jal         func_2A93B0
    ctx->pc = 0x2A9318u;
    SET_GPR_U32(ctx, 31, 0x2A9320u);
    ctx->pc = 0x2A931Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9318u;
            // 0x2a931c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A93B0u;
    if (runtime->hasFunction(0x2A93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9320u; }
        if (ctx->pc != 0x2A9320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A93B0_0x2a93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9320u; }
        if (ctx->pc != 0x2A9320u) { return; }
    }
    ctx->pc = 0x2A9320u;
label_2a9320:
    // 0x2a9320: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a9320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a9324: 0xc0aa504  jal         func_2A9410
    ctx->pc = 0x2A9324u;
    SET_GPR_U32(ctx, 31, 0x2A932Cu);
    ctx->pc = 0x2A9328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9324u;
            // 0x2a9328: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9410u;
    if (runtime->hasFunction(0x2A9410u)) {
        auto targetFn = runtime->lookupFunction(0x2A9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A932Cu; }
        if (ctx->pc != 0x2A932Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9410_0x2a9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A932Cu; }
        if (ctx->pc != 0x2A932Cu) { return; }
    }
    ctx->pc = 0x2A932Cu;
label_2a932c:
    // 0x2a932c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a932cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9330: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a9330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9334: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2a9334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a9338: 0xc0aade8  jal         func_2AB7A0
    ctx->pc = 0x2A9338u;
    SET_GPR_U32(ctx, 31, 0x2A9340u);
    ctx->pc = 0x2A933Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9338u;
            // 0x2a933c: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB7A0u;
    if (runtime->hasFunction(0x2AB7A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9340u; }
        if (ctx->pc != 0x2A9340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB7A0_0x2ab7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9340u; }
        if (ctx->pc != 0x2A9340u) { return; }
    }
    ctx->pc = 0x2A9340u;
label_2a9340:
    // 0x2a9340: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a9340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a9344: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x2a9344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2a9348: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2a9348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2a934c: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x2a934cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x2a9350: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x2a9350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
    // 0x2a9354: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x2a9354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x2a9358: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2a9358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2a935c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2a935cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a9360: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x2a9360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2a9364: 0xafa4011c  sw          $a0, 0x11C($sp)
    ctx->pc = 0x2a9364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 4));
    // 0x2a9368: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x2a9368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x2a936c: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x2a936cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_2a9370:
    // 0x2a9370: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2a9370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a9374: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a9374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a9378: 0xc0ab288  jal         func_2ACA20
    ctx->pc = 0x2A9378u;
    SET_GPR_U32(ctx, 31, 0x2A9380u);
    ctx->pc = 0x2A937Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9378u;
            // 0x2a937c: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9380u; }
        if (ctx->pc != 0x2A9380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9380u; }
        if (ctx->pc != 0x2A9380u) { return; }
    }
    ctx->pc = 0x2A9380u;
label_2a9380:
    // 0x2a9380: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x2a9380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a9384: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2a9384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a9388: 0x5483ffad  bnel        $a0, $v1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x2A9388u;
    {
        const bool branch_taken_0x2a9388 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a9388) {
            ctx->pc = 0x2A938Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9388u;
            // 0x2a938c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9240;
        }
    }
    ctx->pc = 0x2A9390u;
label_2a9390:
    // 0x2a9390: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a9390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a939c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A939Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A93A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A939Cu;
            // 0x2a93a0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A93A4u;
    // 0x2a93a4: 0x0  nop
    ctx->pc = 0x2a93a4u;
    // NOP
    // 0x2a93a8: 0x0  nop
    ctx->pc = 0x2a93a8u;
    // NOP
    // 0x2a93ac: 0x0  nop
    ctx->pc = 0x2a93acu;
    // NOP
}
