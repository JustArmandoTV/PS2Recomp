#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00118788
// Address: 0x118788 - 0x118830
void sub_00118788_0x118788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118788_0x118788");
#endif

    switch (ctx->pc) {
        case 0x118788u: goto label_118788;
        case 0x11878cu: goto label_11878c;
        case 0x118790u: goto label_118790;
        case 0x118794u: goto label_118794;
        case 0x118798u: goto label_118798;
        case 0x11879cu: goto label_11879c;
        case 0x1187a0u: goto label_1187a0;
        case 0x1187a4u: goto label_1187a4;
        case 0x1187a8u: goto label_1187a8;
        case 0x1187acu: goto label_1187ac;
        case 0x1187b0u: goto label_1187b0;
        case 0x1187b4u: goto label_1187b4;
        case 0x1187b8u: goto label_1187b8;
        case 0x1187bcu: goto label_1187bc;
        case 0x1187c0u: goto label_1187c0;
        case 0x1187c4u: goto label_1187c4;
        case 0x1187c8u: goto label_1187c8;
        case 0x1187ccu: goto label_1187cc;
        case 0x1187d0u: goto label_1187d0;
        case 0x1187d4u: goto label_1187d4;
        case 0x1187d8u: goto label_1187d8;
        case 0x1187dcu: goto label_1187dc;
        case 0x1187e0u: goto label_1187e0;
        case 0x1187e4u: goto label_1187e4;
        case 0x1187e8u: goto label_1187e8;
        case 0x1187ecu: goto label_1187ec;
        case 0x1187f0u: goto label_1187f0;
        case 0x1187f4u: goto label_1187f4;
        case 0x1187f8u: goto label_1187f8;
        case 0x1187fcu: goto label_1187fc;
        case 0x118800u: goto label_118800;
        case 0x118804u: goto label_118804;
        case 0x118808u: goto label_118808;
        case 0x11880cu: goto label_11880c;
        case 0x118810u: goto label_118810;
        case 0x118814u: goto label_118814;
        case 0x118818u: goto label_118818;
        case 0x11881cu: goto label_11881c;
        case 0x118820u: goto label_118820;
        case 0x118824u: goto label_118824;
        case 0x118828u: goto label_118828;
        case 0x11882cu: goto label_11882c;
        default: break;
    }

    ctx->pc = 0x118788u;

label_118788:
    // 0x118788: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x118788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11878c:
    // 0x11878c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11878cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_118790:
    // 0x118790: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x118790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_118794:
    // 0x118794: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x118794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_118798:
    // 0x118798: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11879c:
    // 0x11879c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11879cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1187a0:
    // 0x1187a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1187a4:
    if (ctx->pc == 0x1187A4u) {
        ctx->pc = 0x1187A4u;
            // 0x1187a4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x1187A8u;
        goto label_1187a8;
    }
    ctx->pc = 0x1187A0u;
    {
        const bool branch_taken_0x1187a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1187A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1187A0u;
            // 0x1187a4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187a0) {
            ctx->pc = 0x1187B8u;
            goto label_1187b8;
        }
    }
    ctx->pc = 0x1187A8u;
label_1187a8:
    // 0x1187a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1187a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1187ac:
    // 0x1187ac: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1187acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1187b0:
    // 0x1187b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1187b4:
    if (ctx->pc == 0x1187B4u) {
        ctx->pc = 0x1187B4u;
            // 0x1187b4: 0x24420708  addiu       $v0, $v0, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1800));
        ctx->pc = 0x1187B8u;
        goto label_1187b8;
    }
    ctx->pc = 0x1187B0u;
    {
        const bool branch_taken_0x1187b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1187B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1187B0u;
            // 0x1187b4: 0x24420708  addiu       $v0, $v0, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187b0) {
            ctx->pc = 0x1187C8u;
            goto label_1187c8;
        }
    }
    ctx->pc = 0x1187B8u;
label_1187b8:
    // 0x1187b8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1187b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1187bc:
    // 0x1187bc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1187bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1187c0:
    // 0x1187c0: 0x8c42fa70  lw          $v0, -0x590($v0)
    ctx->pc = 0x1187c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965872)));
label_1187c4:
    // 0x1187c4: 0x8c63fa74  lw          $v1, -0x58C($v1)
    ctx->pc = 0x1187c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965876)));
label_1187c8:
    // 0x1187c8: 0x380902d  daddu       $s2, $gp, $zero
    ctx->pc = 0x1187c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1187cc:
    // 0x1187cc: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_1187d0:
    if (ctx->pc == 0x1187D0u) {
        ctx->pc = 0x1187D0u;
            // 0x1187d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1187D4u;
        goto label_1187d4;
    }
    ctx->pc = 0x1187CCu;
    {
        const bool branch_taken_0x1187cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1187D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1187CCu;
            // 0x1187d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187cc) {
            ctx->pc = 0x11880Cu;
            goto label_11880c;
        }
    }
    ctx->pc = 0x1187D4u;
label_1187d4:
    // 0x1187d4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1187d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1187d8:
    // 0x1187d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1187d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1187dc:
    // 0x1187dc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1187e0:
    if (ctx->pc == 0x1187E0u) {
        ctx->pc = 0x1187E0u;
            // 0x1187e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x1187E4u;
        goto label_1187e4;
    }
    ctx->pc = 0x1187DCu;
    {
        const bool branch_taken_0x1187dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1187dc) {
            ctx->pc = 0x1187E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1187DCu;
            // 0x1187e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118804u;
            goto label_118804;
        }
    }
    ctx->pc = 0x1187E4u;
label_1187e4:
    // 0x1187e4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1187e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1187e8:
    // 0x1187e8: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x1187e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1187ec:
    // 0x1187ec: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x1187ecu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1187f0:
    // 0x1187f0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1187f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1187f4:
    // 0x1187f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1187f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1187f8:
    // 0x1187f8: 0xc0f809  jalr        $a2
label_1187fc:
    if (ctx->pc == 0x1187FCu) {
        ctx->pc = 0x1187FCu;
            // 0x1187fc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x118800u;
        goto label_118800;
    }
    ctx->pc = 0x1187F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x118800u);
        ctx->pc = 0x1187FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1187F8u;
            // 0x1187fc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x118800u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x118800u; }
            if (ctx->pc != 0x118800u) { return; }
        }
        }
    }
    ctx->pc = 0x118800u;
label_118800:
    // 0x118800: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x118800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_118804:
    // 0x118804: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_118808:
    if (ctx->pc == 0x118808u) {
        ctx->pc = 0x118808u;
            // 0x118808: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x11880Cu;
        goto label_11880c;
    }
    ctx->pc = 0x118804u;
    {
        const bool branch_taken_0x118804 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x118808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118804u;
            // 0x118808: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118804) {
            ctx->pc = 0x1187D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1187d8;
        }
    }
    ctx->pc = 0x11880Cu;
label_11880c:
    // 0x11880c: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x11880cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_118810:
    // 0x118810: 0x240e02d  daddu       $gp, $s2, $zero
    ctx->pc = 0x118810u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_118814:
    // 0x118814: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x118814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_118818:
    // 0x118818: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x118818u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11881c:
    // 0x11881c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11881cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_118820:
    // 0x118820: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_118824:
    // 0x118824: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_118828:
    // 0x118828: 0x3e00008  jr          $ra
label_11882c:
    if (ctx->pc == 0x11882Cu) {
        ctx->pc = 0x11882Cu;
            // 0x11882c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x118830u;
        goto label_fallthrough_0x118828;
    }
    ctx->pc = 0x118828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11882Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118828u;
            // 0x11882c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x118828:
    ctx->pc = 0x118830u;
}
