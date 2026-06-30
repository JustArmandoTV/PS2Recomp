#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D93A0
// Address: 0x3d93a0 - 0x3d9460
void sub_003D93A0_0x3d93a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D93A0_0x3d93a0");
#endif

    switch (ctx->pc) {
        case 0x3d93a0u: goto label_3d93a0;
        case 0x3d93a4u: goto label_3d93a4;
        case 0x3d93a8u: goto label_3d93a8;
        case 0x3d93acu: goto label_3d93ac;
        case 0x3d93b0u: goto label_3d93b0;
        case 0x3d93b4u: goto label_3d93b4;
        case 0x3d93b8u: goto label_3d93b8;
        case 0x3d93bcu: goto label_3d93bc;
        case 0x3d93c0u: goto label_3d93c0;
        case 0x3d93c4u: goto label_3d93c4;
        case 0x3d93c8u: goto label_3d93c8;
        case 0x3d93ccu: goto label_3d93cc;
        case 0x3d93d0u: goto label_3d93d0;
        case 0x3d93d4u: goto label_3d93d4;
        case 0x3d93d8u: goto label_3d93d8;
        case 0x3d93dcu: goto label_3d93dc;
        case 0x3d93e0u: goto label_3d93e0;
        case 0x3d93e4u: goto label_3d93e4;
        case 0x3d93e8u: goto label_3d93e8;
        case 0x3d93ecu: goto label_3d93ec;
        case 0x3d93f0u: goto label_3d93f0;
        case 0x3d93f4u: goto label_3d93f4;
        case 0x3d93f8u: goto label_3d93f8;
        case 0x3d93fcu: goto label_3d93fc;
        case 0x3d9400u: goto label_3d9400;
        case 0x3d9404u: goto label_3d9404;
        case 0x3d9408u: goto label_3d9408;
        case 0x3d940cu: goto label_3d940c;
        case 0x3d9410u: goto label_3d9410;
        case 0x3d9414u: goto label_3d9414;
        case 0x3d9418u: goto label_3d9418;
        case 0x3d941cu: goto label_3d941c;
        case 0x3d9420u: goto label_3d9420;
        case 0x3d9424u: goto label_3d9424;
        case 0x3d9428u: goto label_3d9428;
        case 0x3d942cu: goto label_3d942c;
        case 0x3d9430u: goto label_3d9430;
        case 0x3d9434u: goto label_3d9434;
        case 0x3d9438u: goto label_3d9438;
        case 0x3d943cu: goto label_3d943c;
        case 0x3d9440u: goto label_3d9440;
        case 0x3d9444u: goto label_3d9444;
        case 0x3d9448u: goto label_3d9448;
        case 0x3d944cu: goto label_3d944c;
        case 0x3d9450u: goto label_3d9450;
        case 0x3d9454u: goto label_3d9454;
        case 0x3d9458u: goto label_3d9458;
        case 0x3d945cu: goto label_3d945c;
        default: break;
    }

    ctx->pc = 0x3d93a0u;

label_3d93a0:
    // 0x3d93a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d93a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d93a4:
    // 0x3d93a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d93a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d93a8:
    // 0x3d93a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d93a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d93ac:
    // 0x3d93ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d93acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d93b0:
    // 0x3d93b0: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x3d93b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_3d93b4:
    // 0x3d93b4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x3d93b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3d93b8:
    // 0x3d93b8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3d93bc:
    if (ctx->pc == 0x3D93BCu) {
        ctx->pc = 0x3D93C0u;
        goto label_3d93c0;
    }
    ctx->pc = 0x3D93B8u;
    {
        const bool branch_taken_0x3d93b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d93b8) {
            ctx->pc = 0x3D93F4u;
            goto label_3d93f4;
        }
    }
    ctx->pc = 0x3D93C0u;
label_3d93c0:
    // 0x3d93c0: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x3d93c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3d93c4:
    // 0x3d93c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d93c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d93c8:
    // 0x3d93c8: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3d93c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_3d93cc:
    // 0x3d93cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3d93ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3d93d0:
    // 0x3d93d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d93d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d93d4:
    // 0x3d93d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3d93d8:
    if (ctx->pc == 0x3D93D8u) {
        ctx->pc = 0x3D93DCu;
        goto label_3d93dc;
    }
    ctx->pc = 0x3D93D4u;
    {
        const bool branch_taken_0x3d93d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d93d4) {
            ctx->pc = 0x3D93F4u;
            goto label_3d93f4;
        }
    }
    ctx->pc = 0x3D93DCu;
label_3d93dc:
    // 0x3d93dc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3d93e0:
    if (ctx->pc == 0x3D93E0u) {
        ctx->pc = 0x3D93E4u;
        goto label_3d93e4;
    }
    ctx->pc = 0x3D93DCu;
    {
        const bool branch_taken_0x3d93dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d93dc) {
            ctx->pc = 0x3D93F4u;
            goto label_3d93f4;
        }
    }
    ctx->pc = 0x3D93E4u;
label_3d93e4:
    // 0x3d93e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d93e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d93e8:
    // 0x3d93e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d93e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d93ec:
    // 0x3d93ec: 0x320f809  jalr        $t9
label_3d93f0:
    if (ctx->pc == 0x3D93F0u) {
        ctx->pc = 0x3D93F0u;
            // 0x3d93f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D93F4u;
        goto label_3d93f4;
    }
    ctx->pc = 0x3D93ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D93F4u);
        ctx->pc = 0x3D93F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D93ECu;
            // 0x3d93f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D93F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D93F4u; }
            if (ctx->pc != 0x3D93F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3D93F4u;
label_3d93f4:
    // 0x3d93f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d93f8:
    // 0x3d93f8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d93fc:
    // 0x3d93fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d93fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d9400:
    // 0x3d9400: 0xc08c5bc  jal         func_2316F0
label_3d9404:
    if (ctx->pc == 0x3D9404u) {
        ctx->pc = 0x3D9404u;
            // 0x3d9404: 0x8e050038  lw          $a1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x3D9408u;
        goto label_3d9408;
    }
    ctx->pc = 0x3D9400u;
    SET_GPR_U32(ctx, 31, 0x3D9408u);
    ctx->pc = 0x3D9404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9400u;
            // 0x3d9404: 0x8e050038  lw          $a1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2316F0u;
    if (runtime->hasFunction(0x2316F0u)) {
        auto targetFn = runtime->lookupFunction(0x2316F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9408u; }
        if (ctx->pc != 0x3D9408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002316F0_0x2316f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9408u; }
        if (ctx->pc != 0x3D9408u) { return; }
    }
    ctx->pc = 0x3D9408u;
label_3d9408:
    // 0x3d9408: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x3d9408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_3d940c:
    // 0x3d940c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3d940cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3d9410:
    // 0x3d9410: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_3d9414:
    if (ctx->pc == 0x3D9414u) {
        ctx->pc = 0x3D9414u;
            // 0x3d9414: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3D9418u;
        goto label_3d9418;
    }
    ctx->pc = 0x3D9410u;
    {
        const bool branch_taken_0x3d9410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9410) {
            ctx->pc = 0x3D9414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9410u;
            // 0x3d9414: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9450u;
            goto label_3d9450;
        }
    }
    ctx->pc = 0x3D9418u;
label_3d9418:
    // 0x3d9418: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x3d9418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3d941c:
    // 0x3d941c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3d9420:
    // 0x3d9420: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x3d9420u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_3d9424:
    // 0x3d9424: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3d9424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_3d9428:
    // 0x3d9428: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3d9428u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3d942c:
    // 0x3d942c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3d9430:
    if (ctx->pc == 0x3D9430u) {
        ctx->pc = 0x3D9434u;
        goto label_3d9434;
    }
    ctx->pc = 0x3D942Cu;
    {
        const bool branch_taken_0x3d942c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d942c) {
            ctx->pc = 0x3D944Cu;
            goto label_3d944c;
        }
    }
    ctx->pc = 0x3D9434u;
label_3d9434:
    // 0x3d9434: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3d9438:
    if (ctx->pc == 0x3D9438u) {
        ctx->pc = 0x3D943Cu;
        goto label_3d943c;
    }
    ctx->pc = 0x3D9434u;
    {
        const bool branch_taken_0x3d9434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9434) {
            ctx->pc = 0x3D944Cu;
            goto label_3d944c;
        }
    }
    ctx->pc = 0x3D943Cu;
label_3d943c:
    // 0x3d943c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d943cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d9440:
    // 0x3d9440: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d9440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d9444:
    // 0x3d9444: 0x320f809  jalr        $t9
label_3d9448:
    if (ctx->pc == 0x3D9448u) {
        ctx->pc = 0x3D9448u;
            // 0x3d9448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D944Cu;
        goto label_3d944c;
    }
    ctx->pc = 0x3D9444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D944Cu);
        ctx->pc = 0x3D9448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9444u;
            // 0x3d9448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D944Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D944Cu; }
            if (ctx->pc != 0x3D944Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3D944Cu;
label_3d944c:
    // 0x3d944c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d944cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d9450:
    // 0x3d9450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9454:
    // 0x3d9454: 0x3e00008  jr          $ra
label_3d9458:
    if (ctx->pc == 0x3D9458u) {
        ctx->pc = 0x3D9458u;
            // 0x3d9458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D945Cu;
        goto label_3d945c;
    }
    ctx->pc = 0x3D9454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9454u;
            // 0x3d9458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D945Cu;
label_3d945c:
    // 0x3d945c: 0x0  nop
    ctx->pc = 0x3d945cu;
    // NOP
}
