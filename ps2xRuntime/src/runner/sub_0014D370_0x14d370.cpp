#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014D370
// Address: 0x14d370 - 0x14d410
void sub_0014D370_0x14d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D370_0x14d370");
#endif

    switch (ctx->pc) {
        case 0x14d370u: goto label_14d370;
        case 0x14d374u: goto label_14d374;
        case 0x14d378u: goto label_14d378;
        case 0x14d37cu: goto label_14d37c;
        case 0x14d380u: goto label_14d380;
        case 0x14d384u: goto label_14d384;
        case 0x14d388u: goto label_14d388;
        case 0x14d38cu: goto label_14d38c;
        case 0x14d390u: goto label_14d390;
        case 0x14d394u: goto label_14d394;
        case 0x14d398u: goto label_14d398;
        case 0x14d39cu: goto label_14d39c;
        case 0x14d3a0u: goto label_14d3a0;
        case 0x14d3a4u: goto label_14d3a4;
        case 0x14d3a8u: goto label_14d3a8;
        case 0x14d3acu: goto label_14d3ac;
        case 0x14d3b0u: goto label_14d3b0;
        case 0x14d3b4u: goto label_14d3b4;
        case 0x14d3b8u: goto label_14d3b8;
        case 0x14d3bcu: goto label_14d3bc;
        case 0x14d3c0u: goto label_14d3c0;
        case 0x14d3c4u: goto label_14d3c4;
        case 0x14d3c8u: goto label_14d3c8;
        case 0x14d3ccu: goto label_14d3cc;
        case 0x14d3d0u: goto label_14d3d0;
        case 0x14d3d4u: goto label_14d3d4;
        case 0x14d3d8u: goto label_14d3d8;
        case 0x14d3dcu: goto label_14d3dc;
        case 0x14d3e0u: goto label_14d3e0;
        case 0x14d3e4u: goto label_14d3e4;
        case 0x14d3e8u: goto label_14d3e8;
        case 0x14d3ecu: goto label_14d3ec;
        case 0x14d3f0u: goto label_14d3f0;
        case 0x14d3f4u: goto label_14d3f4;
        case 0x14d3f8u: goto label_14d3f8;
        case 0x14d3fcu: goto label_14d3fc;
        case 0x14d400u: goto label_14d400;
        case 0x14d404u: goto label_14d404;
        case 0x14d408u: goto label_14d408;
        case 0x14d40cu: goto label_14d40c;
        default: break;
    }

    ctx->pc = 0x14d370u;

label_14d370:
    // 0x14d370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_14d374:
    // 0x14d374: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14d374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14d378:
    // 0x14d378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14d37c:
    // 0x14d37c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x14d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_14d380:
    // 0x14d380: 0x8f828038  lw          $v0, -0x7FC8($gp)
    ctx->pc = 0x14d380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934584)));
label_14d384:
    // 0x14d384: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x14d384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
label_14d388:
    // 0x14d388: 0x2484cc70  addiu       $a0, $a0, -0x3390
    ctx->pc = 0x14d388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954096));
label_14d38c:
    // 0x14d38c: 0x40f809  jalr        $v0
label_14d390:
    if (ctx->pc == 0x14D390u) {
        ctx->pc = 0x14D390u;
            // 0x14d390: 0x24a5ccf0  addiu       $a1, $a1, -0x3310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954224));
        ctx->pc = 0x14D394u;
        goto label_14d394;
    }
    ctx->pc = 0x14D38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14D394u);
        ctx->pc = 0x14D390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D38Cu;
            // 0x14d390: 0x24a5ccf0  addiu       $a1, $a1, -0x3310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14D394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14D394u; }
            if (ctx->pc != 0x14D394u) { return; }
        }
        }
    }
    ctx->pc = 0x14D394u;
label_14d394:
    // 0x14d394: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x14d394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_14d398:
    // 0x14d398: 0xc056ce0  jal         func_15B380
label_14d39c:
    if (ctx->pc == 0x14D39Cu) {
        ctx->pc = 0x14D39Cu;
            // 0x14d39c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14D3A0u;
        goto label_14d3a0;
    }
    ctx->pc = 0x14D398u;
    SET_GPR_U32(ctx, 31, 0x14D3A0u);
    ctx->pc = 0x14D39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D398u;
            // 0x14d39c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B380u;
    if (runtime->hasFunction(0x15B380u)) {
        auto targetFn = runtime->lookupFunction(0x15B380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D3A0u; }
        if (ctx->pc != 0x14D3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B380_0x15b380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D3A0u; }
        if (ctx->pc != 0x14D3A0u) { return; }
    }
    ctx->pc = 0x14D3A0u;
label_14d3a0:
    // 0x14d3a0: 0x8f868418  lw          $a2, -0x7BE8($gp)
    ctx->pc = 0x14d3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_14d3a4:
    // 0x14d3a4: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x14d3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14d3a8:
    // 0x14d3a8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x14d3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_14d3ac:
    // 0x14d3ac: 0x3c08006d  lui         $t0, 0x6D
    ctx->pc = 0x14d3acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)109 << 16));
label_14d3b0:
    // 0x14d3b0: 0x34640404  ori         $a0, $v1, 0x404
    ctx->pc = 0x14d3b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_14d3b4:
    // 0x14d3b4: 0x2508cc70  addiu       $t0, $t0, -0x3390
    ctx->pc = 0x14d3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954096));
label_14d3b8:
    // 0x14d3b8: 0xacc70014  sw          $a3, 0x14($a2)
    ctx->pc = 0x14d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 7));
label_14d3bc:
    // 0x14d3bc: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x14d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
label_14d3c0:
    // 0x14d3c0: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x14d3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
label_14d3c4:
    // 0x14d3c4: 0x346303f8  ori         $v1, $v1, 0x3F8
    ctx->pc = 0x14d3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1016);
label_14d3c8:
    // 0x14d3c8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x14d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_14d3cc:
    // 0x14d3cc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x14d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_14d3d0:
    // 0x14d3d0: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x14d3d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_14d3d4:
    // 0x14d3d4: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x14d3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
label_14d3d8:
    // 0x14d3d8: 0x79030010  lq          $v1, 0x10($t0)
    ctx->pc = 0x14d3d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_14d3dc:
    // 0x14d3dc: 0x7c430020  sq          $v1, 0x20($v0)
    ctx->pc = 0x14d3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
label_14d3e0:
    // 0x14d3e0: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x14d3e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 32)));
label_14d3e4:
    // 0x14d3e4: 0x7c430030  sq          $v1, 0x30($v0)
    ctx->pc = 0x14d3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 3));
label_14d3e8:
    // 0x14d3e8: 0x79030030  lq          $v1, 0x30($t0)
    ctx->pc = 0x14d3e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 48)));
label_14d3ec:
    // 0x14d3ec: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x14d3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_14d3f0:
    // 0x14d3f0: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x14d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_14d3f4:
    // 0x14d3f4: 0xc056d60  jal         func_15B580
label_14d3f8:
    if (ctx->pc == 0x14D3F8u) {
        ctx->pc = 0x14D3F8u;
            // 0x14d3f8: 0x24e50040  addiu       $a1, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->pc = 0x14D3FCu;
        goto label_14d3fc;
    }
    ctx->pc = 0x14D3F4u;
    SET_GPR_U32(ctx, 31, 0x14D3FCu);
    ctx->pc = 0x14D3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D3F4u;
            // 0x14d3f8: 0x24e50040  addiu       $a1, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B580u;
    if (runtime->hasFunction(0x15B580u)) {
        auto targetFn = runtime->lookupFunction(0x15B580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D3FCu; }
        if (ctx->pc != 0x14D3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B580_0x15b580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D3FCu; }
        if (ctx->pc != 0x14D3FCu) { return; }
    }
    ctx->pc = 0x14D3FCu;
label_14d3fc:
    // 0x14d3fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14d400:
    // 0x14d400: 0xac6054d8  sw          $zero, 0x54D8($v1)
    ctx->pc = 0x14d400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21720), GPR_U32(ctx, 0));
label_14d404:
    // 0x14d404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d408:
    // 0x14d408: 0x3e00008  jr          $ra
label_14d40c:
    if (ctx->pc == 0x14D40Cu) {
        ctx->pc = 0x14D40Cu;
            // 0x14d40c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x14D410u;
        goto label_fallthrough_0x14d408;
    }
    ctx->pc = 0x14D408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D408u;
            // 0x14d40c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x14d408:
    ctx->pc = 0x14D410u;
}
