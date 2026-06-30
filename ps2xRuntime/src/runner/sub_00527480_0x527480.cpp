#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00527480
// Address: 0x527480 - 0x5275a0
void sub_00527480_0x527480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00527480_0x527480");
#endif

    switch (ctx->pc) {
        case 0x527480u: goto label_527480;
        case 0x527484u: goto label_527484;
        case 0x527488u: goto label_527488;
        case 0x52748cu: goto label_52748c;
        case 0x527490u: goto label_527490;
        case 0x527494u: goto label_527494;
        case 0x527498u: goto label_527498;
        case 0x52749cu: goto label_52749c;
        case 0x5274a0u: goto label_5274a0;
        case 0x5274a4u: goto label_5274a4;
        case 0x5274a8u: goto label_5274a8;
        case 0x5274acu: goto label_5274ac;
        case 0x5274b0u: goto label_5274b0;
        case 0x5274b4u: goto label_5274b4;
        case 0x5274b8u: goto label_5274b8;
        case 0x5274bcu: goto label_5274bc;
        case 0x5274c0u: goto label_5274c0;
        case 0x5274c4u: goto label_5274c4;
        case 0x5274c8u: goto label_5274c8;
        case 0x5274ccu: goto label_5274cc;
        case 0x5274d0u: goto label_5274d0;
        case 0x5274d4u: goto label_5274d4;
        case 0x5274d8u: goto label_5274d8;
        case 0x5274dcu: goto label_5274dc;
        case 0x5274e0u: goto label_5274e0;
        case 0x5274e4u: goto label_5274e4;
        case 0x5274e8u: goto label_5274e8;
        case 0x5274ecu: goto label_5274ec;
        case 0x5274f0u: goto label_5274f0;
        case 0x5274f4u: goto label_5274f4;
        case 0x5274f8u: goto label_5274f8;
        case 0x5274fcu: goto label_5274fc;
        case 0x527500u: goto label_527500;
        case 0x527504u: goto label_527504;
        case 0x527508u: goto label_527508;
        case 0x52750cu: goto label_52750c;
        case 0x527510u: goto label_527510;
        case 0x527514u: goto label_527514;
        case 0x527518u: goto label_527518;
        case 0x52751cu: goto label_52751c;
        case 0x527520u: goto label_527520;
        case 0x527524u: goto label_527524;
        case 0x527528u: goto label_527528;
        case 0x52752cu: goto label_52752c;
        case 0x527530u: goto label_527530;
        case 0x527534u: goto label_527534;
        case 0x527538u: goto label_527538;
        case 0x52753cu: goto label_52753c;
        case 0x527540u: goto label_527540;
        case 0x527544u: goto label_527544;
        case 0x527548u: goto label_527548;
        case 0x52754cu: goto label_52754c;
        case 0x527550u: goto label_527550;
        case 0x527554u: goto label_527554;
        case 0x527558u: goto label_527558;
        case 0x52755cu: goto label_52755c;
        case 0x527560u: goto label_527560;
        case 0x527564u: goto label_527564;
        case 0x527568u: goto label_527568;
        case 0x52756cu: goto label_52756c;
        case 0x527570u: goto label_527570;
        case 0x527574u: goto label_527574;
        case 0x527578u: goto label_527578;
        case 0x52757cu: goto label_52757c;
        case 0x527580u: goto label_527580;
        case 0x527584u: goto label_527584;
        case 0x527588u: goto label_527588;
        case 0x52758cu: goto label_52758c;
        case 0x527590u: goto label_527590;
        case 0x527594u: goto label_527594;
        case 0x527598u: goto label_527598;
        case 0x52759cu: goto label_52759c;
        default: break;
    }

    ctx->pc = 0x527480u;

label_527480:
    // 0x527480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x527480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_527484:
    // 0x527484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x527484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_527488:
    // 0x527488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x527488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52748c:
    // 0x52748c: 0xc0ec518  jal         func_3B1460
label_527490:
    if (ctx->pc == 0x527490u) {
        ctx->pc = 0x527490u;
            // 0x527490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527494u;
        goto label_527494;
    }
    ctx->pc = 0x52748Cu;
    SET_GPR_U32(ctx, 31, 0x527494u);
    ctx->pc = 0x527490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52748Cu;
            // 0x527490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B1460u;
    if (runtime->hasFunction(0x3B1460u)) {
        auto targetFn = runtime->lookupFunction(0x3B1460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527494u; }
        if (ctx->pc != 0x527494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B1460_0x3b1460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527494u; }
        if (ctx->pc != 0x527494u) { return; }
    }
    ctx->pc = 0x527494u;
label_527494:
    // 0x527494: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x527494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_527498:
    // 0x527498: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x527498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52749c:
    // 0x52749c: 0x24636470  addiu       $v1, $v1, 0x6470
    ctx->pc = 0x52749cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25712));
label_5274a0:
    // 0x5274a0: 0xae030374  sw          $v1, 0x374($s0)
    ctx->pc = 0x5274a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 884), GPR_U32(ctx, 3));
label_5274a4:
    // 0x5274a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5274a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5274a8:
    // 0x5274a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5274a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5274ac:
    // 0x5274ac: 0x3e00008  jr          $ra
label_5274b0:
    if (ctx->pc == 0x5274B0u) {
        ctx->pc = 0x5274B0u;
            // 0x5274b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5274B4u;
        goto label_5274b4;
    }
    ctx->pc = 0x5274ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5274B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5274ACu;
            // 0x5274b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5274B4u;
label_5274b4:
    // 0x5274b4: 0x0  nop
    ctx->pc = 0x5274b4u;
    // NOP
label_5274b8:
    // 0x5274b8: 0x0  nop
    ctx->pc = 0x5274b8u;
    // NOP
label_5274bc:
    // 0x5274bc: 0x0  nop
    ctx->pc = 0x5274bcu;
    // NOP
label_5274c0:
    // 0x5274c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5274c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_5274c4:
    // 0x5274c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5274c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5274c8:
    // 0x5274c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5274c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_5274cc:
    // 0x5274cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5274ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5274d0:
    // 0x5274d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5274d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5274d4:
    // 0x5274d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5274d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5274d8:
    // 0x5274d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x5274d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5274dc:
    // 0x5274dc: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x5274dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_5274e0:
    // 0x5274e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5274e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5274e4:
    // 0x5274e4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x5274e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5274e8:
    // 0x5274e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5274e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5274ec:
    // 0x5274ec: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5274ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5274f0:
    // 0x5274f0: 0x320f809  jalr        $t9
label_5274f4:
    if (ctx->pc == 0x5274F4u) {
        ctx->pc = 0x5274F4u;
            // 0x5274f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5274F8u;
        goto label_5274f8;
    }
    ctx->pc = 0x5274F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5274F8u);
        ctx->pc = 0x5274F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5274F0u;
            // 0x5274f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5274F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5274F8u; }
            if (ctx->pc != 0x5274F8u) { return; }
        }
        }
    }
    ctx->pc = 0x5274F8u;
label_5274f8:
    // 0x5274f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5274f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5274fc:
    // 0x5274fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5274fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_527500:
    // 0x527500: 0xc0ec53c  jal         func_3B14F0
label_527504:
    if (ctx->pc == 0x527504u) {
        ctx->pc = 0x527504u;
            // 0x527504: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527508u;
        goto label_527508;
    }
    ctx->pc = 0x527500u;
    SET_GPR_U32(ctx, 31, 0x527508u);
    ctx->pc = 0x527504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527500u;
            // 0x527504: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B14F0u;
    if (runtime->hasFunction(0x3B14F0u)) {
        auto targetFn = runtime->lookupFunction(0x3B14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527508u; }
        if (ctx->pc != 0x527508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B14F0_0x3b14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527508u; }
        if (ctx->pc != 0x527508u) { return; }
    }
    ctx->pc = 0x527508u;
label_527508:
    // 0x527508: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x527508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_52750c:
    // 0x52750c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x52750cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_527510:
    // 0x527510: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x527510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_527514:
    // 0x527514: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x527514u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_527518:
    // 0x527518: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
label_52751c:
    if (ctx->pc == 0x52751Cu) {
        ctx->pc = 0x52751Cu;
            // 0x52751c: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x527520u;
        goto label_527520;
    }
    ctx->pc = 0x527518u;
    {
        const bool branch_taken_0x527518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x527518) {
            ctx->pc = 0x52751Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527518u;
            // 0x52751c: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5274E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5274e8;
        }
    }
    ctx->pc = 0x527520u;
label_527520:
    // 0x527520: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x527520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_527524:
    // 0x527524: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x527524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_527528:
    // 0x527528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x527528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52752c:
    // 0x52752c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52752cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_527530:
    // 0x527530: 0x3e00008  jr          $ra
label_527534:
    if (ctx->pc == 0x527534u) {
        ctx->pc = 0x527534u;
            // 0x527534: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x527538u;
        goto label_527538;
    }
    ctx->pc = 0x527530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527530u;
            // 0x527534: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x527538u;
label_527538:
    // 0x527538: 0x0  nop
    ctx->pc = 0x527538u;
    // NOP
label_52753c:
    // 0x52753c: 0x0  nop
    ctx->pc = 0x52753cu;
    // NOP
label_527540:
    // 0x527540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x527540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_527544:
    // 0x527544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x527544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_527548:
    // 0x527548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x527548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52754c:
    // 0x52754c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52754cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_527550:
    // 0x527550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x527550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_527554:
    // 0x527554: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_527558:
    if (ctx->pc == 0x527558u) {
        ctx->pc = 0x527558u;
            // 0x527558: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52755Cu;
        goto label_52755c;
    }
    ctx->pc = 0x527554u;
    {
        const bool branch_taken_0x527554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x527558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527554u;
            // 0x527558: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527554) {
            ctx->pc = 0x527588u;
            goto label_527588;
        }
    }
    ctx->pc = 0x52755Cu;
label_52755c:
    // 0x52755c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52755cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_527560:
    // 0x527560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x527560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_527564:
    // 0x527564: 0x244264c0  addiu       $v0, $v0, 0x64C0
    ctx->pc = 0x527564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25792));
label_527568:
    // 0x527568: 0xc0ecab0  jal         func_3B2AC0
label_52756c:
    if (ctx->pc == 0x52756Cu) {
        ctx->pc = 0x52756Cu;
            // 0x52756c: 0xae22017c  sw          $v0, 0x17C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 2));
        ctx->pc = 0x527570u;
        goto label_527570;
    }
    ctx->pc = 0x527568u;
    SET_GPR_U32(ctx, 31, 0x527570u);
    ctx->pc = 0x52756Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527568u;
            // 0x52756c: 0xae22017c  sw          $v0, 0x17C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B2AC0u;
    if (runtime->hasFunction(0x3B2AC0u)) {
        auto targetFn = runtime->lookupFunction(0x3B2AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527570u; }
        if (ctx->pc != 0x527570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B2AC0_0x3b2ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527570u; }
        if (ctx->pc != 0x527570u) { return; }
    }
    ctx->pc = 0x527570u;
label_527570:
    // 0x527570: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x527570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_527574:
    // 0x527574: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x527574u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_527578:
    // 0x527578: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52757c:
    if (ctx->pc == 0x52757Cu) {
        ctx->pc = 0x52757Cu;
            // 0x52757c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527580u;
        goto label_527580;
    }
    ctx->pc = 0x527578u;
    {
        const bool branch_taken_0x527578 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x527578) {
            ctx->pc = 0x52757Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527578u;
            // 0x52757c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52758Cu;
            goto label_52758c;
        }
    }
    ctx->pc = 0x527580u;
label_527580:
    // 0x527580: 0xc0400a8  jal         func_1002A0
label_527584:
    if (ctx->pc == 0x527584u) {
        ctx->pc = 0x527584u;
            // 0x527584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527588u;
        goto label_527588;
    }
    ctx->pc = 0x527580u;
    SET_GPR_U32(ctx, 31, 0x527588u);
    ctx->pc = 0x527584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527580u;
            // 0x527584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527588u; }
        if (ctx->pc != 0x527588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527588u; }
        if (ctx->pc != 0x527588u) { return; }
    }
    ctx->pc = 0x527588u;
label_527588:
    // 0x527588: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x527588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52758c:
    // 0x52758c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52758cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_527590:
    // 0x527590: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x527590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_527594:
    // 0x527594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x527594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_527598:
    // 0x527598: 0x3e00008  jr          $ra
label_52759c:
    if (ctx->pc == 0x52759Cu) {
        ctx->pc = 0x52759Cu;
            // 0x52759c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5275A0u;
        goto label_fallthrough_0x527598;
    }
    ctx->pc = 0x527598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52759Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527598u;
            // 0x52759c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x527598:
    ctx->pc = 0x5275A0u;
}
