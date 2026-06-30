#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F9230
// Address: 0x3f9230 - 0x3f93a0
void sub_003F9230_0x3f9230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9230_0x3f9230");
#endif

    switch (ctx->pc) {
        case 0x3f9230u: goto label_3f9230;
        case 0x3f9234u: goto label_3f9234;
        case 0x3f9238u: goto label_3f9238;
        case 0x3f923cu: goto label_3f923c;
        case 0x3f9240u: goto label_3f9240;
        case 0x3f9244u: goto label_3f9244;
        case 0x3f9248u: goto label_3f9248;
        case 0x3f924cu: goto label_3f924c;
        case 0x3f9250u: goto label_3f9250;
        case 0x3f9254u: goto label_3f9254;
        case 0x3f9258u: goto label_3f9258;
        case 0x3f925cu: goto label_3f925c;
        case 0x3f9260u: goto label_3f9260;
        case 0x3f9264u: goto label_3f9264;
        case 0x3f9268u: goto label_3f9268;
        case 0x3f926cu: goto label_3f926c;
        case 0x3f9270u: goto label_3f9270;
        case 0x3f9274u: goto label_3f9274;
        case 0x3f9278u: goto label_3f9278;
        case 0x3f927cu: goto label_3f927c;
        case 0x3f9280u: goto label_3f9280;
        case 0x3f9284u: goto label_3f9284;
        case 0x3f9288u: goto label_3f9288;
        case 0x3f928cu: goto label_3f928c;
        case 0x3f9290u: goto label_3f9290;
        case 0x3f9294u: goto label_3f9294;
        case 0x3f9298u: goto label_3f9298;
        case 0x3f929cu: goto label_3f929c;
        case 0x3f92a0u: goto label_3f92a0;
        case 0x3f92a4u: goto label_3f92a4;
        case 0x3f92a8u: goto label_3f92a8;
        case 0x3f92acu: goto label_3f92ac;
        case 0x3f92b0u: goto label_3f92b0;
        case 0x3f92b4u: goto label_3f92b4;
        case 0x3f92b8u: goto label_3f92b8;
        case 0x3f92bcu: goto label_3f92bc;
        case 0x3f92c0u: goto label_3f92c0;
        case 0x3f92c4u: goto label_3f92c4;
        case 0x3f92c8u: goto label_3f92c8;
        case 0x3f92ccu: goto label_3f92cc;
        case 0x3f92d0u: goto label_3f92d0;
        case 0x3f92d4u: goto label_3f92d4;
        case 0x3f92d8u: goto label_3f92d8;
        case 0x3f92dcu: goto label_3f92dc;
        case 0x3f92e0u: goto label_3f92e0;
        case 0x3f92e4u: goto label_3f92e4;
        case 0x3f92e8u: goto label_3f92e8;
        case 0x3f92ecu: goto label_3f92ec;
        case 0x3f92f0u: goto label_3f92f0;
        case 0x3f92f4u: goto label_3f92f4;
        case 0x3f92f8u: goto label_3f92f8;
        case 0x3f92fcu: goto label_3f92fc;
        case 0x3f9300u: goto label_3f9300;
        case 0x3f9304u: goto label_3f9304;
        case 0x3f9308u: goto label_3f9308;
        case 0x3f930cu: goto label_3f930c;
        case 0x3f9310u: goto label_3f9310;
        case 0x3f9314u: goto label_3f9314;
        case 0x3f9318u: goto label_3f9318;
        case 0x3f931cu: goto label_3f931c;
        case 0x3f9320u: goto label_3f9320;
        case 0x3f9324u: goto label_3f9324;
        case 0x3f9328u: goto label_3f9328;
        case 0x3f932cu: goto label_3f932c;
        case 0x3f9330u: goto label_3f9330;
        case 0x3f9334u: goto label_3f9334;
        case 0x3f9338u: goto label_3f9338;
        case 0x3f933cu: goto label_3f933c;
        case 0x3f9340u: goto label_3f9340;
        case 0x3f9344u: goto label_3f9344;
        case 0x3f9348u: goto label_3f9348;
        case 0x3f934cu: goto label_3f934c;
        case 0x3f9350u: goto label_3f9350;
        case 0x3f9354u: goto label_3f9354;
        case 0x3f9358u: goto label_3f9358;
        case 0x3f935cu: goto label_3f935c;
        case 0x3f9360u: goto label_3f9360;
        case 0x3f9364u: goto label_3f9364;
        case 0x3f9368u: goto label_3f9368;
        case 0x3f936cu: goto label_3f936c;
        case 0x3f9370u: goto label_3f9370;
        case 0x3f9374u: goto label_3f9374;
        case 0x3f9378u: goto label_3f9378;
        case 0x3f937cu: goto label_3f937c;
        case 0x3f9380u: goto label_3f9380;
        case 0x3f9384u: goto label_3f9384;
        case 0x3f9388u: goto label_3f9388;
        case 0x3f938cu: goto label_3f938c;
        case 0x3f9390u: goto label_3f9390;
        case 0x3f9394u: goto label_3f9394;
        case 0x3f9398u: goto label_3f9398;
        case 0x3f939cu: goto label_3f939c;
        default: break;
    }

    ctx->pc = 0x3f9230u;

label_3f9230:
    // 0x3f9230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f9230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f9234:
    // 0x3f9234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f9234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f9238:
    // 0x3f9238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f9238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f923c:
    // 0x3f923c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f9240:
    // 0x3f9240: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f9240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f9244:
    // 0x3f9244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f9244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f9248:
    // 0x3f9248: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x3f9248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3f924c:
    // 0x3f924c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3f924cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3f9250:
    // 0x3f9250: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3f9250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3f9254:
    // 0x3f9254: 0x320f809  jalr        $t9
label_3f9258:
    if (ctx->pc == 0x3F9258u) {
        ctx->pc = 0x3F9258u;
            // 0x3f9258: 0xafa4003c  sw          $a0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
        ctx->pc = 0x3F925Cu;
        goto label_3f925c;
    }
    ctx->pc = 0x3F9254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F925Cu);
        ctx->pc = 0x3F9258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9254u;
            // 0x3f9258: 0xafa4003c  sw          $a0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F925Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F925Cu; }
            if (ctx->pc != 0x3F925Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3F925Cu;
label_3f925c:
    // 0x3f925c: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x3f925cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_3f9260:
    // 0x3f9260: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x3f9260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_3f9264:
    // 0x3f9264: 0x8e24fff8  lw          $a0, -0x8($s1)
    ctx->pc = 0x3f9264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
label_3f9268:
    // 0x3f9268: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3f9268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3f926c:
    // 0x3f926c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x3f926cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3f9270:
    // 0x3f9270: 0xa43821  addu        $a3, $a1, $a0
    ctx->pc = 0x3f9270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3f9274:
    // 0x3f9274: 0xe23023  subu        $a2, $a3, $v0
    ctx->pc = 0x3f9274u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3f9278:
    // 0x3f9278: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3f9278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3f927c:
    // 0x3f927c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3f927cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_3f9280:
    // 0x3f9280: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3f9280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3f9284:
    // 0x3f9284: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3f9284u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3f9288:
    // 0x3f9288: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3f9288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_3f928c:
    // 0x3f928c: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x3f928cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f9290:
    // 0x3f9290: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3f9290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f9294:
    // 0x3f9294: 0x11250038  beq         $t1, $a1, . + 4 + (0x38 << 2)
label_3f9298:
    if (ctx->pc == 0x3F9298u) {
        ctx->pc = 0x3F929Cu;
        goto label_3f929c;
    }
    ctx->pc = 0x3F9294u;
    {
        const bool branch_taken_0x3f9294 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        if (branch_taken_0x3f9294) {
            ctx->pc = 0x3F9378u;
            goto label_3f9378;
        }
    }
    ctx->pc = 0x3F929Cu;
label_3f929c:
    // 0x3f929c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x3f929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_3f92a0:
    // 0x3f92a0: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x3f92a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_3f92a4:
    // 0x3f92a4: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x3f92a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3f92a8:
    // 0x3f92a8: 0x1420002f  bnez        $at, . + 4 + (0x2F << 2)
label_3f92ac:
    if (ctx->pc == 0x3F92ACu) {
        ctx->pc = 0x3F92ACu;
            // 0x3f92ac: 0x8d280004  lw          $t0, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->pc = 0x3F92B0u;
        goto label_3f92b0;
    }
    ctx->pc = 0x3F92A8u;
    {
        const bool branch_taken_0x3f92a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F92ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F92A8u;
            // 0x3f92ac: 0x8d280004  lw          $t0, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f92a8) {
            ctx->pc = 0x3F9368u;
            goto label_3f9368;
        }
    }
    ctx->pc = 0x3F92B0u;
label_3f92b0:
    // 0x3f92b0: 0x107082b  sltu        $at, $t0, $a3
    ctx->pc = 0x3f92b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3f92b4:
    // 0x3f92b4: 0x5420002d  bnel        $at, $zero, . + 4 + (0x2D << 2)
label_3f92b8:
    if (ctx->pc == 0x3F92B8u) {
        ctx->pc = 0x3F92B8u;
            // 0x3f92b8: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F92BCu;
        goto label_3f92bc;
    }
    ctx->pc = 0x3F92B4u;
    {
        const bool branch_taken_0x3f92b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f92b4) {
            ctx->pc = 0x3F92B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F92B4u;
            // 0x3f92b8: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F936Cu;
            goto label_3f936c;
        }
    }
    ctx->pc = 0x3F92BCu;
label_3f92bc:
    // 0x3f92bc: 0x5507000f  bnel        $t0, $a3, . + 4 + (0xF << 2)
label_3f92c0:
    if (ctx->pc == 0x3F92C0u) {
        ctx->pc = 0x3F92C0u;
            // 0x3f92c0: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->pc = 0x3F92C4u;
        goto label_3f92c4;
    }
    ctx->pc = 0x3F92BCu;
    {
        const bool branch_taken_0x3f92bc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x3f92bc) {
            ctx->pc = 0x3F92C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F92BCu;
            // 0x3f92c0: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F92FCu;
            goto label_3f92fc;
        }
    }
    ctx->pc = 0x3F92C4u;
label_3f92c4:
    // 0x3f92c4: 0x1105000c  beq         $t0, $a1, . + 4 + (0xC << 2)
label_3f92c8:
    if (ctx->pc == 0x3F92C8u) {
        ctx->pc = 0x3F92CCu;
        goto label_3f92cc;
    }
    ctx->pc = 0x3F92C4u;
    {
        const bool branch_taken_0x3f92c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x3f92c4) {
            ctx->pc = 0x3F92F8u;
            goto label_3f92f8;
        }
    }
    ctx->pc = 0x3F92CCu;
label_3f92cc:
    // 0x3f92cc: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3f92ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3f92d0:
    // 0x3f92d0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x3f92d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_3f92d4:
    // 0x3f92d4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3f92d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3f92d8:
    // 0x3f92d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3f92d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3f92dc:
    // 0x3f92dc: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x3f92dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3f92e0:
    // 0x3f92e0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3f92e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3f92e4:
    // 0x3f92e4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x3f92e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_3f92e8:
    // 0x3f92e8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3f92e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3f92ec:
    // 0x3f92ec: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3f92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3f92f0:
    // 0x3f92f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f92f4:
    if (ctx->pc == 0x3F92F4u) {
        ctx->pc = 0x3F92F4u;
            // 0x3f92f4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3F92F8u;
        goto label_3f92f8;
    }
    ctx->pc = 0x3F92F0u;
    {
        const bool branch_taken_0x3f92f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F92F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F92F0u;
            // 0x3f92f4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f92f0) {
            ctx->pc = 0x3F9310u;
            goto label_3f9310;
        }
    }
    ctx->pc = 0x3F92F8u;
label_3f92f8:
    // 0x3f92f8: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x3f92f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
label_3f92fc:
    // 0x3f92fc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3f92fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3f9300:
    // 0x3f9300: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3f9300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3f9304:
    // 0x3f9304: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x3f9304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_3f9308:
    // 0x3f9308: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3f9308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3f930c:
    // 0x3f930c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3f930cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_3f9310:
    // 0x3f9310: 0x5482000e  bnel        $a0, $v0, . + 4 + (0xE << 2)
label_3f9314:
    if (ctx->pc == 0x3F9314u) {
        ctx->pc = 0x3F9314u;
            // 0x3f9314: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x3F9318u;
        goto label_3f9318;
    }
    ctx->pc = 0x3F9310u;
    {
        const bool branch_taken_0x3f9310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f9310) {
            ctx->pc = 0x3F9314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9310u;
            // 0x3f9314: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F934Cu;
            goto label_3f934c;
        }
    }
    ctx->pc = 0x3F9318u;
label_3f9318:
    // 0x3f9318: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3f9318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f931c:
    // 0x3f931c: 0x1123000a  beq         $t1, $v1, . + 4 + (0xA << 2)
label_3f9320:
    if (ctx->pc == 0x3F9320u) {
        ctx->pc = 0x3F9324u;
        goto label_3f9324;
    }
    ctx->pc = 0x3F931Cu;
    {
        const bool branch_taken_0x3f931c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f931c) {
            ctx->pc = 0x3F9348u;
            goto label_3f9348;
        }
    }
    ctx->pc = 0x3F9324u;
label_3f9324:
    // 0x3f9324: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3f9324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f9328:
    // 0x3f9328: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x3f9328u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
label_3f932c:
    // 0x3f932c: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x3f932cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_3f9330:
    // 0x3f9330: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3f9330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f9334:
    // 0x3f9334: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3f9334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3f9338:
    // 0x3f9338: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x3f9338u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
label_3f933c:
    // 0x3f933c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3f933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f9340:
    // 0x3f9340: 0x10000002  b           . + 4 + (0x2 << 2)
label_3f9344:
    if (ctx->pc == 0x3F9344u) {
        ctx->pc = 0x3F9344u;
            // 0x3f9344: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->pc = 0x3F9348u;
        goto label_3f9348;
    }
    ctx->pc = 0x3F9340u;
    {
        const bool branch_taken_0x3f9340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9340u;
            // 0x3f9344: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9340) {
            ctx->pc = 0x3F934Cu;
            goto label_3f934c;
        }
    }
    ctx->pc = 0x3F9348u;
label_3f9348:
    // 0x3f9348: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x3f9348u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
label_3f934c:
    // 0x3f934c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x3f934cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3f9350:
    // 0x3f9350: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f9350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f9354:
    // 0x3f9354: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f9354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f9358:
    // 0x3f9358: 0x320f809  jalr        $t9
label_3f935c:
    if (ctx->pc == 0x3F935Cu) {
        ctx->pc = 0x3F9360u;
        goto label_3f9360;
    }
    ctx->pc = 0x3F9358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F9360u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F9360u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F9360u; }
            if (ctx->pc != 0x3F9360u) { return; }
        }
        }
    }
    ctx->pc = 0x3F9360u;
label_3f9360:
    // 0x3f9360: 0x1000000b  b           . + 4 + (0xB << 2)
label_3f9364:
    if (ctx->pc == 0x3F9364u) {
        ctx->pc = 0x3F9364u;
            // 0x3f9364: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3F9368u;
        goto label_3f9368;
    }
    ctx->pc = 0x3F9360u;
    {
        const bool branch_taken_0x3f9360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9360u;
            // 0x3f9364: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9360) {
            ctx->pc = 0x3F9390u;
            goto label_3f9390;
        }
    }
    ctx->pc = 0x3F9368u;
label_3f9368:
    // 0x3f9368: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3f9368u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3f936c:
    // 0x3f936c: 0x5505ffcc  bnel        $t0, $a1, . + 4 + (-0x34 << 2)
label_3f9370:
    if (ctx->pc == 0x3F9370u) {
        ctx->pc = 0x3F9370u;
            // 0x3f9370: 0x8d230008  lw          $v1, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->pc = 0x3F9374u;
        goto label_3f9374;
    }
    ctx->pc = 0x3F936Cu;
    {
        const bool branch_taken_0x3f936c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x3f936c) {
            ctx->pc = 0x3F9370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F936Cu;
            // 0x3f9370: 0x8d230008  lw          $v1, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F92A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f92a0;
        }
    }
    ctx->pc = 0x3F9374u;
label_3f9374:
    // 0x3f9374: 0x0  nop
    ctx->pc = 0x3f9374u;
    // NOP
label_3f9378:
    // 0x3f9378: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x3f9378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3f937c:
    // 0x3f937c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f937cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f9380:
    // 0x3f9380: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f9380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f9384:
    // 0x3f9384: 0x320f809  jalr        $t9
label_3f9388:
    if (ctx->pc == 0x3F9388u) {
        ctx->pc = 0x3F938Cu;
        goto label_3f938c;
    }
    ctx->pc = 0x3F9384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F938Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F938Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F938Cu; }
            if (ctx->pc != 0x3F938Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3F938Cu;
label_3f938c:
    // 0x3f938c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f938cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f9390:
    // 0x3f9390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f9390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f9394:
    // 0x3f9394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f9394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f9398:
    // 0x3f9398: 0x3e00008  jr          $ra
label_3f939c:
    if (ctx->pc == 0x3F939Cu) {
        ctx->pc = 0x3F939Cu;
            // 0x3f939c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3F93A0u;
        goto label_fallthrough_0x3f9398;
    }
    ctx->pc = 0x3F9398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F939Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9398u;
            // 0x3f939c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3f9398:
    ctx->pc = 0x3F93A0u;
}
