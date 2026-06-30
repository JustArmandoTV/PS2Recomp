#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053D740
// Address: 0x53d740 - 0x53d810
void sub_0053D740_0x53d740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053D740_0x53d740");
#endif

    switch (ctx->pc) {
        case 0x53d740u: goto label_53d740;
        case 0x53d744u: goto label_53d744;
        case 0x53d748u: goto label_53d748;
        case 0x53d74cu: goto label_53d74c;
        case 0x53d750u: goto label_53d750;
        case 0x53d754u: goto label_53d754;
        case 0x53d758u: goto label_53d758;
        case 0x53d75cu: goto label_53d75c;
        case 0x53d760u: goto label_53d760;
        case 0x53d764u: goto label_53d764;
        case 0x53d768u: goto label_53d768;
        case 0x53d76cu: goto label_53d76c;
        case 0x53d770u: goto label_53d770;
        case 0x53d774u: goto label_53d774;
        case 0x53d778u: goto label_53d778;
        case 0x53d77cu: goto label_53d77c;
        case 0x53d780u: goto label_53d780;
        case 0x53d784u: goto label_53d784;
        case 0x53d788u: goto label_53d788;
        case 0x53d78cu: goto label_53d78c;
        case 0x53d790u: goto label_53d790;
        case 0x53d794u: goto label_53d794;
        case 0x53d798u: goto label_53d798;
        case 0x53d79cu: goto label_53d79c;
        case 0x53d7a0u: goto label_53d7a0;
        case 0x53d7a4u: goto label_53d7a4;
        case 0x53d7a8u: goto label_53d7a8;
        case 0x53d7acu: goto label_53d7ac;
        case 0x53d7b0u: goto label_53d7b0;
        case 0x53d7b4u: goto label_53d7b4;
        case 0x53d7b8u: goto label_53d7b8;
        case 0x53d7bcu: goto label_53d7bc;
        case 0x53d7c0u: goto label_53d7c0;
        case 0x53d7c4u: goto label_53d7c4;
        case 0x53d7c8u: goto label_53d7c8;
        case 0x53d7ccu: goto label_53d7cc;
        case 0x53d7d0u: goto label_53d7d0;
        case 0x53d7d4u: goto label_53d7d4;
        case 0x53d7d8u: goto label_53d7d8;
        case 0x53d7dcu: goto label_53d7dc;
        case 0x53d7e0u: goto label_53d7e0;
        case 0x53d7e4u: goto label_53d7e4;
        case 0x53d7e8u: goto label_53d7e8;
        case 0x53d7ecu: goto label_53d7ec;
        case 0x53d7f0u: goto label_53d7f0;
        case 0x53d7f4u: goto label_53d7f4;
        case 0x53d7f8u: goto label_53d7f8;
        case 0x53d7fcu: goto label_53d7fc;
        case 0x53d800u: goto label_53d800;
        case 0x53d804u: goto label_53d804;
        case 0x53d808u: goto label_53d808;
        case 0x53d80cu: goto label_53d80c;
        default: break;
    }

    ctx->pc = 0x53d740u;

label_53d740:
    // 0x53d740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53d740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53d744:
    // 0x53d744: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x53d744u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_53d748:
    // 0x53d748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53d748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53d74c:
    // 0x53d74c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53d74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53d750:
    // 0x53d750: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x53d750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_53d754:
    // 0x53d754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53d754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53d758:
    // 0x53d758: 0xa0430080  sb          $v1, 0x80($v0)
    ctx->pc = 0x53d758u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 3));
label_53d75c:
    // 0x53d75c: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x53d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_53d760:
    // 0x53d760: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d764:
    // 0x53d764: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x53d764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_53d768:
    // 0x53d768: 0x320f809  jalr        $t9
label_53d76c:
    if (ctx->pc == 0x53D76Cu) {
        ctx->pc = 0x53D770u;
        goto label_53d770;
    }
    ctx->pc = 0x53D768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D770u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D770u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D770u; }
            if (ctx->pc != 0x53D770u) { return; }
        }
        }
    }
    ctx->pc = 0x53D770u;
label_53d770:
    // 0x53d770: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_53d774:
    if (ctx->pc == 0x53D774u) {
        ctx->pc = 0x53D774u;
            // 0x53d774: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x53D778u;
        goto label_53d778;
    }
    ctx->pc = 0x53D770u;
    {
        const bool branch_taken_0x53d770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53d770) {
            ctx->pc = 0x53D774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D770u;
            // 0x53d774: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D780u;
            goto label_53d780;
        }
    }
    ctx->pc = 0x53D778u;
label_53d778:
    // 0x53d778: 0x1000001e  b           . + 4 + (0x1E << 2)
label_53d77c:
    if (ctx->pc == 0x53D77Cu) {
        ctx->pc = 0x53D77Cu;
            // 0x53d77c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D780u;
        goto label_53d780;
    }
    ctx->pc = 0x53D778u;
    {
        const bool branch_taken_0x53d778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53D77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D778u;
            // 0x53d77c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d778) {
            ctx->pc = 0x53D7F4u;
            goto label_53d7f4;
        }
    }
    ctx->pc = 0x53D780u;
label_53d780:
    // 0x53d780: 0x8042007d  lb          $v0, 0x7D($v0)
    ctx->pc = 0x53d780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 125)));
label_53d784:
    // 0x53d784: 0xa20200a1  sb          $v0, 0xA1($s0)
    ctx->pc = 0x53d784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 161), (uint8_t)GPR_U32(ctx, 2));
label_53d788:
    // 0x53d788: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x53d788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_53d78c:
    // 0x53d78c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d78cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d790:
    // 0x53d790: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x53d790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_53d794:
    // 0x53d794: 0x320f809  jalr        $t9
label_53d798:
    if (ctx->pc == 0x53D798u) {
        ctx->pc = 0x53D79Cu;
        goto label_53d79c;
    }
    ctx->pc = 0x53D794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D79Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D79Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D79Cu; }
            if (ctx->pc != 0x53D79Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53D79Cu;
label_53d79c:
    // 0x53d79c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x53d79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_53d7a0:
    // 0x53d7a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53d7a4:
    // 0x53d7a4: 0x8c443e28  lw          $a0, 0x3E28($v0)
    ctx->pc = 0x53d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_53d7a8:
    // 0x53d7a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d7a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d7ac:
    // 0x53d7ac: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x53d7acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_53d7b0:
    // 0x53d7b0: 0x320f809  jalr        $t9
label_53d7b4:
    if (ctx->pc == 0x53D7B4u) {
        ctx->pc = 0x53D7B4u;
            // 0x53d7b4: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->pc = 0x53D7B8u;
        goto label_53d7b8;
    }
    ctx->pc = 0x53D7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D7B8u);
        ctx->pc = 0x53D7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D7B0u;
            // 0x53d7b4: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D7B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D7B8u; }
            if (ctx->pc != 0x53D7B8u) { return; }
        }
        }
    }
    ctx->pc = 0x53D7B8u;
label_53d7b8:
    // 0x53d7b8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_53d7bc:
    if (ctx->pc == 0x53D7BCu) {
        ctx->pc = 0x53D7BCu;
            // 0x53d7bc: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x53D7C0u;
        goto label_53d7c0;
    }
    ctx->pc = 0x53D7B8u;
    {
        const bool branch_taken_0x53d7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53d7b8) {
            ctx->pc = 0x53D7BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D7B8u;
            // 0x53d7bc: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D7C8u;
            goto label_53d7c8;
        }
    }
    ctx->pc = 0x53D7C0u;
label_53d7c0:
    // 0x53d7c0: 0x1000000c  b           . + 4 + (0xC << 2)
label_53d7c4:
    if (ctx->pc == 0x53D7C4u) {
        ctx->pc = 0x53D7C4u;
            // 0x53d7c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D7C8u;
        goto label_53d7c8;
    }
    ctx->pc = 0x53D7C0u;
    {
        const bool branch_taken_0x53d7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53D7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D7C0u;
            // 0x53d7c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d7c0) {
            ctx->pc = 0x53D7F4u;
            goto label_53d7f4;
        }
    }
    ctx->pc = 0x53D7C8u;
label_53d7c8:
    // 0x53d7c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x53d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_53d7cc:
    // 0x53d7cc: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x53d7ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53d7d0:
    // 0x53d7d0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_53d7d4:
    if (ctx->pc == 0x53D7D4u) {
        ctx->pc = 0x53D7D4u;
            // 0x53d7d4: 0x8e030080  lw          $v1, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x53D7D8u;
        goto label_53d7d8;
    }
    ctx->pc = 0x53D7D0u;
    {
        const bool branch_taken_0x53d7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x53d7d0) {
            ctx->pc = 0x53D7D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D7D0u;
            // 0x53d7d4: 0x8e030080  lw          $v1, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D7ECu;
            goto label_53d7ec;
        }
    }
    ctx->pc = 0x53D7D8u;
label_53d7d8:
    // 0x53d7d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d7d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d7dc:
    // 0x53d7dc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53d7dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53d7e0:
    // 0x53d7e0: 0x320f809  jalr        $t9
label_53d7e4:
    if (ctx->pc == 0x53D7E4u) {
        ctx->pc = 0x53D7E4u;
            // 0x53d7e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x53D7E8u;
        goto label_53d7e8;
    }
    ctx->pc = 0x53D7E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D7E8u);
        ctx->pc = 0x53D7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D7E0u;
            // 0x53d7e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D7E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D7E8u; }
            if (ctx->pc != 0x53D7E8u) { return; }
        }
        }
    }
    ctx->pc = 0x53D7E8u;
label_53d7e8:
    // 0x53d7e8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x53d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_53d7ec:
    // 0x53d7ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53d7f0:
    // 0x53d7f0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x53d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
label_53d7f4:
    // 0x53d7f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53d7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53d7f8:
    // 0x53d7f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53d7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53d7fc:
    // 0x53d7fc: 0x3e00008  jr          $ra
label_53d800:
    if (ctx->pc == 0x53D800u) {
        ctx->pc = 0x53D800u;
            // 0x53d800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53D804u;
        goto label_53d804;
    }
    ctx->pc = 0x53D7FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53D800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D7FCu;
            // 0x53d800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53D804u;
label_53d804:
    // 0x53d804: 0x0  nop
    ctx->pc = 0x53d804u;
    // NOP
label_53d808:
    // 0x53d808: 0x0  nop
    ctx->pc = 0x53d808u;
    // NOP
label_53d80c:
    // 0x53d80c: 0x0  nop
    ctx->pc = 0x53d80cu;
    // NOP
}
