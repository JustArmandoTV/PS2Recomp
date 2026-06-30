#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E9220
// Address: 0x2e9220 - 0x2e9400
void sub_002E9220_0x2e9220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9220_0x2e9220");
#endif

    switch (ctx->pc) {
        case 0x2e9220u: goto label_2e9220;
        case 0x2e9224u: goto label_2e9224;
        case 0x2e9228u: goto label_2e9228;
        case 0x2e922cu: goto label_2e922c;
        case 0x2e9230u: goto label_2e9230;
        case 0x2e9234u: goto label_2e9234;
        case 0x2e9238u: goto label_2e9238;
        case 0x2e923cu: goto label_2e923c;
        case 0x2e9240u: goto label_2e9240;
        case 0x2e9244u: goto label_2e9244;
        case 0x2e9248u: goto label_2e9248;
        case 0x2e924cu: goto label_2e924c;
        case 0x2e9250u: goto label_2e9250;
        case 0x2e9254u: goto label_2e9254;
        case 0x2e9258u: goto label_2e9258;
        case 0x2e925cu: goto label_2e925c;
        case 0x2e9260u: goto label_2e9260;
        case 0x2e9264u: goto label_2e9264;
        case 0x2e9268u: goto label_2e9268;
        case 0x2e926cu: goto label_2e926c;
        case 0x2e9270u: goto label_2e9270;
        case 0x2e9274u: goto label_2e9274;
        case 0x2e9278u: goto label_2e9278;
        case 0x2e927cu: goto label_2e927c;
        case 0x2e9280u: goto label_2e9280;
        case 0x2e9284u: goto label_2e9284;
        case 0x2e9288u: goto label_2e9288;
        case 0x2e928cu: goto label_2e928c;
        case 0x2e9290u: goto label_2e9290;
        case 0x2e9294u: goto label_2e9294;
        case 0x2e9298u: goto label_2e9298;
        case 0x2e929cu: goto label_2e929c;
        case 0x2e92a0u: goto label_2e92a0;
        case 0x2e92a4u: goto label_2e92a4;
        case 0x2e92a8u: goto label_2e92a8;
        case 0x2e92acu: goto label_2e92ac;
        case 0x2e92b0u: goto label_2e92b0;
        case 0x2e92b4u: goto label_2e92b4;
        case 0x2e92b8u: goto label_2e92b8;
        case 0x2e92bcu: goto label_2e92bc;
        case 0x2e92c0u: goto label_2e92c0;
        case 0x2e92c4u: goto label_2e92c4;
        case 0x2e92c8u: goto label_2e92c8;
        case 0x2e92ccu: goto label_2e92cc;
        case 0x2e92d0u: goto label_2e92d0;
        case 0x2e92d4u: goto label_2e92d4;
        case 0x2e92d8u: goto label_2e92d8;
        case 0x2e92dcu: goto label_2e92dc;
        case 0x2e92e0u: goto label_2e92e0;
        case 0x2e92e4u: goto label_2e92e4;
        case 0x2e92e8u: goto label_2e92e8;
        case 0x2e92ecu: goto label_2e92ec;
        case 0x2e92f0u: goto label_2e92f0;
        case 0x2e92f4u: goto label_2e92f4;
        case 0x2e92f8u: goto label_2e92f8;
        case 0x2e92fcu: goto label_2e92fc;
        case 0x2e9300u: goto label_2e9300;
        case 0x2e9304u: goto label_2e9304;
        case 0x2e9308u: goto label_2e9308;
        case 0x2e930cu: goto label_2e930c;
        case 0x2e9310u: goto label_2e9310;
        case 0x2e9314u: goto label_2e9314;
        case 0x2e9318u: goto label_2e9318;
        case 0x2e931cu: goto label_2e931c;
        case 0x2e9320u: goto label_2e9320;
        case 0x2e9324u: goto label_2e9324;
        case 0x2e9328u: goto label_2e9328;
        case 0x2e932cu: goto label_2e932c;
        case 0x2e9330u: goto label_2e9330;
        case 0x2e9334u: goto label_2e9334;
        case 0x2e9338u: goto label_2e9338;
        case 0x2e933cu: goto label_2e933c;
        case 0x2e9340u: goto label_2e9340;
        case 0x2e9344u: goto label_2e9344;
        case 0x2e9348u: goto label_2e9348;
        case 0x2e934cu: goto label_2e934c;
        case 0x2e9350u: goto label_2e9350;
        case 0x2e9354u: goto label_2e9354;
        case 0x2e9358u: goto label_2e9358;
        case 0x2e935cu: goto label_2e935c;
        case 0x2e9360u: goto label_2e9360;
        case 0x2e9364u: goto label_2e9364;
        case 0x2e9368u: goto label_2e9368;
        case 0x2e936cu: goto label_2e936c;
        case 0x2e9370u: goto label_2e9370;
        case 0x2e9374u: goto label_2e9374;
        case 0x2e9378u: goto label_2e9378;
        case 0x2e937cu: goto label_2e937c;
        case 0x2e9380u: goto label_2e9380;
        case 0x2e9384u: goto label_2e9384;
        case 0x2e9388u: goto label_2e9388;
        case 0x2e938cu: goto label_2e938c;
        case 0x2e9390u: goto label_2e9390;
        case 0x2e9394u: goto label_2e9394;
        case 0x2e9398u: goto label_2e9398;
        case 0x2e939cu: goto label_2e939c;
        case 0x2e93a0u: goto label_2e93a0;
        case 0x2e93a4u: goto label_2e93a4;
        case 0x2e93a8u: goto label_2e93a8;
        case 0x2e93acu: goto label_2e93ac;
        case 0x2e93b0u: goto label_2e93b0;
        case 0x2e93b4u: goto label_2e93b4;
        case 0x2e93b8u: goto label_2e93b8;
        case 0x2e93bcu: goto label_2e93bc;
        case 0x2e93c0u: goto label_2e93c0;
        case 0x2e93c4u: goto label_2e93c4;
        case 0x2e93c8u: goto label_2e93c8;
        case 0x2e93ccu: goto label_2e93cc;
        case 0x2e93d0u: goto label_2e93d0;
        case 0x2e93d4u: goto label_2e93d4;
        case 0x2e93d8u: goto label_2e93d8;
        case 0x2e93dcu: goto label_2e93dc;
        case 0x2e93e0u: goto label_2e93e0;
        case 0x2e93e4u: goto label_2e93e4;
        case 0x2e93e8u: goto label_2e93e8;
        case 0x2e93ecu: goto label_2e93ec;
        case 0x2e93f0u: goto label_2e93f0;
        case 0x2e93f4u: goto label_2e93f4;
        case 0x2e93f8u: goto label_2e93f8;
        case 0x2e93fcu: goto label_2e93fc;
        default: break;
    }

    ctx->pc = 0x2e9220u;

label_2e9220:
    // 0x2e9220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e9224:
    // 0x2e9224: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e9224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2e9228:
    // 0x2e9228: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e9228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e922c:
    // 0x2e922c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e9230:
    // 0x2e9230: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e9230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e9234:
    // 0x2e9234: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e9238:
    // 0x2e9238: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e923c:
    // 0x2e923c: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x2e923cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_2e9240:
    // 0x2e9240: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x2e9240u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2e9244:
    // 0x2e9244: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_2e9248:
    if (ctx->pc == 0x2E9248u) {
        ctx->pc = 0x2E9248u;
            // 0x2e9248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E924Cu;
        goto label_2e924c;
    }
    ctx->pc = 0x2E9244u;
    {
        const bool branch_taken_0x2e9244 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2E9248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9244u;
            // 0x2e9248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9244) {
            ctx->pc = 0x2E925Cu;
            goto label_2e925c;
        }
    }
    ctx->pc = 0x2E924Cu;
label_2e924c:
    // 0x2e924c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2e924cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2e9250:
    // 0x2e9250: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2e9254:
    if (ctx->pc == 0x2E9254u) {
        ctx->pc = 0x2E9258u;
        goto label_2e9258;
    }
    ctx->pc = 0x2E9250u;
    {
        const bool branch_taken_0x2e9250 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9250) {
            ctx->pc = 0x2E925Cu;
            goto label_2e925c;
        }
    }
    ctx->pc = 0x2E9258u;
label_2e9258:
    // 0x2e9258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e925c:
    // 0x2e925c: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
label_2e9260:
    if (ctx->pc == 0x2E9260u) {
        ctx->pc = 0x2E9260u;
            // 0x2e9260: 0x8e230e34  lw          $v1, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->pc = 0x2E9264u;
        goto label_2e9264;
    }
    ctx->pc = 0x2E925Cu;
    {
        const bool branch_taken_0x2e925c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e925c) {
            ctx->pc = 0x2E9260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E925Cu;
            // 0x2e9260: 0x8e230e34  lw          $v1, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E927Cu;
            goto label_2e927c;
        }
    }
    ctx->pc = 0x2E9264u;
label_2e9264:
    // 0x2e9264: 0xc075eb4  jal         func_1D7AD0
label_2e9268:
    if (ctx->pc == 0x2E9268u) {
        ctx->pc = 0x2E9268u;
            // 0x2e9268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E926Cu;
        goto label_2e926c;
    }
    ctx->pc = 0x2E9264u;
    SET_GPR_U32(ctx, 31, 0x2E926Cu);
    ctx->pc = 0x2E9268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9264u;
            // 0x2e9268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E926Cu; }
        if (ctx->pc != 0x2E926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E926Cu; }
        if (ctx->pc != 0x2E926Cu) { return; }
    }
    ctx->pc = 0x2E926Cu;
label_2e926c:
    // 0x2e926c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2e9270:
    if (ctx->pc == 0x2E9270u) {
        ctx->pc = 0x2E9274u;
        goto label_2e9274;
    }
    ctx->pc = 0x2E926Cu;
    {
        const bool branch_taken_0x2e926c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e926c) {
            ctx->pc = 0x2E9278u;
            goto label_2e9278;
        }
    }
    ctx->pc = 0x2E9274u;
label_2e9274:
    // 0x2e9274: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e9274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9278:
    // 0x2e9278: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x2e9278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_2e927c:
    // 0x2e927c: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x2e927cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_2e9280:
    // 0x2e9280: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2e9280u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e9284:
    // 0x2e9284: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x2e9284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
label_2e9288:
    // 0x2e9288: 0x108a0048  beq         $a0, $t2, . + 4 + (0x48 << 2)
label_2e928c:
    if (ctx->pc == 0x2E928Cu) {
        ctx->pc = 0x2E928Cu;
            // 0x2e928c: 0x2c680001  sltiu       $t0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x2E9290u;
        goto label_2e9290;
    }
    ctx->pc = 0x2E9288u;
    {
        const bool branch_taken_0x2e9288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x2E928Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9288u;
            // 0x2e928c: 0x2c680001  sltiu       $t0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9288) {
            ctx->pc = 0x2E93ACu;
            goto label_2e93ac;
        }
    }
    ctx->pc = 0x2E9290u;
label_2e9290:
    // 0x2e9290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9294:
    // 0x2e9294: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_2e9298:
    if (ctx->pc == 0x2E9298u) {
        ctx->pc = 0x2E929Cu;
        goto label_2e929c;
    }
    ctx->pc = 0x2E9294u;
    {
        const bool branch_taken_0x2e9294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e9294) {
            ctx->pc = 0x2E92ACu;
            goto label_2e92ac;
        }
    }
    ctx->pc = 0x2E929Cu;
label_2e929c:
    // 0x2e929c: 0x50800053  beql        $a0, $zero, . + 4 + (0x53 << 2)
label_2e92a0:
    if (ctx->pc == 0x2E92A0u) {
        ctx->pc = 0x2E92A0u;
            // 0x2e92a0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2E92A4u;
        goto label_2e92a4;
    }
    ctx->pc = 0x2E929Cu;
    {
        const bool branch_taken_0x2e929c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e929c) {
            ctx->pc = 0x2E92A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E929Cu;
            // 0x2e92a0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E93ECu;
            goto label_2e93ec;
        }
    }
    ctx->pc = 0x2E92A4u;
label_2e92a4:
    // 0x2e92a4: 0x10000050  b           . + 4 + (0x50 << 2)
label_2e92a8:
    if (ctx->pc == 0x2E92A8u) {
        ctx->pc = 0x2E92ACu;
        goto label_2e92ac;
    }
    ctx->pc = 0x2E92A4u;
    {
        const bool branch_taken_0x2e92a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e92a4) {
            ctx->pc = 0x2E93E8u;
            goto label_2e93e8;
        }
    }
    ctx->pc = 0x2E92ACu;
label_2e92ac:
    // 0x2e92ac: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
label_2e92b0:
    if (ctx->pc == 0x2E92B0u) {
        ctx->pc = 0x2E92B4u;
        goto label_2e92b4;
    }
    ctx->pc = 0x2E92ACu;
    {
        const bool branch_taken_0x2e92ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e92ac) {
            ctx->pc = 0x2E93E8u;
            goto label_2e93e8;
        }
    }
    ctx->pc = 0x2E92B4u;
label_2e92b4:
    // 0x2e92b4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x2e92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_2e92b8:
    // 0x2e92b8: 0x8e260d98  lw          $a2, 0xD98($s1)
    ctx->pc = 0x2e92b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_2e92bc:
    // 0x2e92bc: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x2e92bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_2e92c0:
    // 0x2e92c0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2e92c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2e92c4:
    // 0x2e92c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e92c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2e92c8:
    // 0x2e92c8: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x2e92c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2e92cc:
    // 0x2e92cc: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x2e92ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_2e92d0:
    // 0x2e92d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2e92d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2e92d4:
    // 0x2e92d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2e92d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e92d8:
    // 0x2e92d8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2e92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2e92dc:
    // 0x2e92dc: 0x8c840968  lw          $a0, 0x968($a0)
    ctx->pc = 0x2e92dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_2e92e0:
    // 0x2e92e0: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
label_2e92e4:
    if (ctx->pc == 0x2E92E4u) {
        ctx->pc = 0x2E92E4u;
            // 0x2e92e4: 0x24a70200  addiu       $a3, $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
        ctx->pc = 0x2E92E8u;
        goto label_2e92e8;
    }
    ctx->pc = 0x2E92E0u;
    {
        const bool branch_taken_0x2e92e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E92E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E92E0u;
            // 0x2e92e4: 0x24a70200  addiu       $a3, $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92e0) {
            ctx->pc = 0x2E9358u;
            goto label_2e9358;
        }
    }
    ctx->pc = 0x2E92E8u;
label_2e92e8:
    // 0x2e92e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e92ec:
    // 0x2e92ec: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2e92f0:
    if (ctx->pc == 0x2E92F0u) {
        ctx->pc = 0x2E92F4u;
        goto label_2e92f4;
    }
    ctx->pc = 0x2E92ECu;
    {
        const bool branch_taken_0x2e92ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e92ec) {
            ctx->pc = 0x2E92FCu;
            goto label_2e92fc;
        }
    }
    ctx->pc = 0x2E92F4u;
label_2e92f4:
    // 0x2e92f4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2e92f8:
    if (ctx->pc == 0x2E92F8u) {
        ctx->pc = 0x2E92FCu;
        goto label_2e92fc;
    }
    ctx->pc = 0x2E92F4u;
    {
        const bool branch_taken_0x2e92f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e92f4) {
            ctx->pc = 0x2E93E8u;
            goto label_2e93e8;
        }
    }
    ctx->pc = 0x2E92FCu;
label_2e92fc:
    // 0x2e92fc: 0x1500003a  bnez        $t0, . + 4 + (0x3A << 2)
label_2e9300:
    if (ctx->pc == 0x2E9300u) {
        ctx->pc = 0x2E9304u;
        goto label_2e9304;
    }
    ctx->pc = 0x2E92FCu;
    {
        const bool branch_taken_0x2e92fc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e92fc) {
            ctx->pc = 0x2E93E8u;
            goto label_2e93e8;
        }
    }
    ctx->pc = 0x2E9304u;
label_2e9304:
    // 0x2e9304: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2e9308:
    // 0x2e9308: 0x922411aa  lbu         $a0, 0x11AA($s1)
    ctx->pc = 0x2e9308u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_2e930c:
    // 0x2e930c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e930cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_2e9310:
    // 0x2e9310: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2e9310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_2e9314:
    // 0x2e9314: 0x26260890  addiu       $a2, $s1, 0x890
    ctx->pc = 0x2e9314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_2e9318:
    // 0x2e9318: 0xc0bb404  jal         func_2ED010
label_2e931c:
    if (ctx->pc == 0x2E931Cu) {
        ctx->pc = 0x2E931Cu;
            // 0x2e931c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E9320u;
        goto label_2e9320;
    }
    ctx->pc = 0x2E9318u;
    SET_GPR_U32(ctx, 31, 0x2E9320u);
    ctx->pc = 0x2E931Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9318u;
            // 0x2e931c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9320u; }
        if (ctx->pc != 0x2E9320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9320u; }
        if (ctx->pc != 0x2E9320u) { return; }
    }
    ctx->pc = 0x2E9320u;
label_2e9320:
    // 0x2e9320: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2e9324:
    // 0x2e9324: 0x8e250d98  lw          $a1, 0xD98($s1)
    ctx->pc = 0x2e9324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_2e9328:
    // 0x2e9328: 0x8c430ea4  lw          $v1, 0xEA4($v0)
    ctx->pc = 0x2e9328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_2e932c:
    // 0x2e932c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2e932cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e9330:
    // 0x2e9330: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e9330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9334:
    // 0x2e9334: 0x8c640144  lw          $a0, 0x144($v1)
    ctx->pc = 0x2e9334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_2e9338:
    // 0x2e9338: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2e9338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_2e933c:
    // 0x2e933c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e933cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e9340:
    // 0x2e9340: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e9340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e9344:
    // 0x2e9344: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2e9344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2e9348:
    // 0x2e9348: 0x320f809  jalr        $t9
label_2e934c:
    if (ctx->pc == 0x2E934Cu) {
        ctx->pc = 0x2E934Cu;
            // 0x2e934c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E9350u;
        goto label_2e9350;
    }
    ctx->pc = 0x2E9348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E9350u);
        ctx->pc = 0x2E934Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9348u;
            // 0x2e934c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E9350u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E9350u; }
            if (ctx->pc != 0x2E9350u) { return; }
        }
        }
    }
    ctx->pc = 0x2E9350u;
label_2e9350:
    // 0x2e9350: 0x10000025  b           . + 4 + (0x25 << 2)
label_2e9354:
    if (ctx->pc == 0x2E9354u) {
        ctx->pc = 0x2E9358u;
        goto label_2e9358;
    }
    ctx->pc = 0x2E9350u;
    {
        const bool branch_taken_0x2e9350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9350) {
            ctx->pc = 0x2E93E8u;
            goto label_2e93e8;
        }
    }
    ctx->pc = 0x2E9358u;
label_2e9358:
    // 0x2e9358: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2e935c:
    // 0x2e935c: 0x922411aa  lbu         $a0, 0x11AA($s1)
    ctx->pc = 0x2e935cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_2e9360:
    // 0x2e9360: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e9360u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_2e9364:
    // 0x2e9364: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2e9364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2e9368:
    // 0x2e9368: 0x26260890  addiu       $a2, $s1, 0x890
    ctx->pc = 0x2e9368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_2e936c:
    // 0x2e936c: 0xc0bb404  jal         func_2ED010
label_2e9370:
    if (ctx->pc == 0x2E9370u) {
        ctx->pc = 0x2E9370u;
            // 0x2e9370: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E9374u;
        goto label_2e9374;
    }
    ctx->pc = 0x2E936Cu;
    SET_GPR_U32(ctx, 31, 0x2E9374u);
    ctx->pc = 0x2E9370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E936Cu;
            // 0x2e9370: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9374u; }
        if (ctx->pc != 0x2E9374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9374u; }
        if (ctx->pc != 0x2E9374u) { return; }
    }
    ctx->pc = 0x2E9374u;
label_2e9374:
    // 0x2e9374: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e9374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2e9378:
    // 0x2e9378: 0x8e250d98  lw          $a1, 0xD98($s1)
    ctx->pc = 0x2e9378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_2e937c:
    // 0x2e937c: 0x8c430ea4  lw          $v1, 0xEA4($v0)
    ctx->pc = 0x2e937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_2e9380:
    // 0x2e9380: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2e9380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e9384:
    // 0x2e9384: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e9384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9388:
    // 0x2e9388: 0x8c640144  lw          $a0, 0x144($v1)
    ctx->pc = 0x2e9388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_2e938c:
    // 0x2e938c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2e938cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_2e9390:
    // 0x2e9390: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e9390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e9394:
    // 0x2e9394: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e9394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e9398:
    // 0x2e9398: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2e9398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2e939c:
    // 0x2e939c: 0x320f809  jalr        $t9
label_2e93a0:
    if (ctx->pc == 0x2E93A0u) {
        ctx->pc = 0x2E93A0u;
            // 0x2e93a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E93A4u;
        goto label_2e93a4;
    }
    ctx->pc = 0x2E939Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E93A4u);
        ctx->pc = 0x2E93A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E939Cu;
            // 0x2e93a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E93A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E93A4u; }
            if (ctx->pc != 0x2E93A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2E93A4u;
label_2e93a4:
    // 0x2e93a4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2e93a8:
    if (ctx->pc == 0x2E93A8u) {
        ctx->pc = 0x2E93ACu;
        goto label_2e93ac;
    }
    ctx->pc = 0x2E93A4u;
    {
        const bool branch_taken_0x2e93a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e93a4) {
            ctx->pc = 0x2E93E8u;
            goto label_2e93e8;
        }
    }
    ctx->pc = 0x2E93ACu;
label_2e93ac:
    // 0x2e93ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e93acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e93b0:
    // 0x2e93b0: 0xc076310  jal         func_1D8C40
label_2e93b4:
    if (ctx->pc == 0x2E93B4u) {
        ctx->pc = 0x2E93B4u;
            // 0x2e93b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E93B8u;
        goto label_2e93b8;
    }
    ctx->pc = 0x2E93B0u;
    SET_GPR_U32(ctx, 31, 0x2E93B8u);
    ctx->pc = 0x2E93B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E93B0u;
            // 0x2e93b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C40u;
    if (runtime->hasFunction(0x1D8C40u)) {
        auto targetFn = runtime->lookupFunction(0x1D8C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E93B8u; }
        if (ctx->pc != 0x2E93B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8C40_0x1d8c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E93B8u; }
        if (ctx->pc != 0x2E93B8u) { return; }
    }
    ctx->pc = 0x2E93B8u;
label_2e93b8:
    // 0x2e93b8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_2e93bc:
    if (ctx->pc == 0x2E93BCu) {
        ctx->pc = 0x2E93C0u;
        goto label_2e93c0;
    }
    ctx->pc = 0x2E93B8u;
    {
        const bool branch_taken_0x2e93b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e93b8) {
            ctx->pc = 0x2E93E8u;
            goto label_2e93e8;
        }
    }
    ctx->pc = 0x2E93C0u;
label_2e93c0:
    // 0x2e93c0: 0x8e260d98  lw          $a2, 0xD98($s1)
    ctx->pc = 0x2e93c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_2e93c4:
    // 0x2e93c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e93c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e93c8:
    // 0x2e93c8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2e93c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_2e93cc:
    // 0x2e93cc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e93ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2e93d0:
    // 0x2e93d0: 0x90846080  lbu         $a0, 0x6080($a0)
    ctx->pc = 0x2e93d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24704)));
label_2e93d4:
    // 0x2e93d4: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x2e93d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_2e93d8:
    // 0x2e93d8: 0xa02827  not         $a1, $a1
    ctx->pc = 0x2e93d8u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_2e93dc:
    // 0x2e93dc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2e93dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2e93e0:
    // 0x2e93e0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x2e93e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_2e93e4:
    // 0x2e93e4: 0xa0646080  sb          $a0, 0x6080($v1)
    ctx->pc = 0x2e93e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24704), (uint8_t)GPR_U32(ctx, 4));
label_2e93e8:
    // 0x2e93e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e93e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e93ec:
    // 0x2e93ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e93ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e93f0:
    // 0x2e93f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e93f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e93f4:
    // 0x2e93f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e93f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e93f8:
    // 0x2e93f8: 0x3e00008  jr          $ra
label_2e93fc:
    if (ctx->pc == 0x2E93FCu) {
        ctx->pc = 0x2E93FCu;
            // 0x2e93fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2E9400u;
        goto label_fallthrough_0x2e93f8;
    }
    ctx->pc = 0x2E93F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E93FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E93F8u;
            // 0x2e93fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e93f8:
    ctx->pc = 0x2E9400u;
}
